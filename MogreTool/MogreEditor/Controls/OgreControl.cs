using System;
using System.ComponentModel;
using System.Windows;
using System.Windows.Controls;
using Mogitor.Data;

namespace Mogitor.Controls
{
    [TemplatePart(Name = "PART_OgreImage", Type = typeof(OgreImage))]
    [TemplatePart(Name = "PART_OverlayTextBlock", Type = typeof(TextBlock))]
    class OgreControl : Control
    {
        #region Dependency Properties
        public static readonly DependencyProperty OverlayTextProperty =
            DependencyProperty.Register("OverlayText", typeof(string), typeof(OgreControl), new UIPropertyMetadata(null));
        #endregion

        #region Public Properties
        public string OverlayText
        {
            get { return (string)GetValue(OverlayTextProperty); }
            set
            {
                SetValue(OverlayTextProperty, value);
                this.overlayTextBlock.Text = value;
            }
        }
        #endregion

        #region Private Fields
        private Image renderTargetControl;
        private OgreImage ogreImage;
        private TextBlock overlayTextBlock;
        #endregion

        #region Constructor
        public OgreControl()
        {
            this.Loaded += OgreControl_Loaded;
        }
        #endregion

        #region Public Methods
        public override void OnApplyTemplate()
        {
            base.OnApplyTemplate();

            this.renderTargetControl = this.Template.FindName("PART_RenderTargetControl", this) as Image;
            this.ogreImage = this.Template.FindName("PART_OgreImage", this) as OgreImage;
            this.overlayTextBlock = this.Template.FindName("PART_OverlayTextBlock", this) as TextBlock;
        }
        #endregion

        #region Private Methods
        private void OgreControl_Loaded(object sender, RoutedEventArgs args)
        {
            App.Current.Exit += (s, e) =>
            {
                this.renderTargetControl.Source = null;

                this.ogreImage.Dispose();
            };

            this.SizeChanged += (s, e) =>
            {
                if (this.ogreImage == null)
                    return;

                this.ogreImage.ViewportSize = e.NewSize;
            };

            this.ogreImage.Initialized += (s, e) =>
            {
                if (OgreInitialized != null)
                    OgreInitialized(s, e);
            };

            this.ogreImage.ResourceLoadItemProgress += (s, e) =>
            {
                if (ResourceLoadItemProgress != null)
                    ResourceLoadItemProgress(s, e);
            };

            this.ogreImage.InitOgreAsync();
        }
        #endregion

        #region Public Events
        public event RoutedEventHandler OgreInitialized;
        public event EventHandler<ResourceLoadEventArgs> ResourceLoadItemProgress;
        #endregion
    }
}
