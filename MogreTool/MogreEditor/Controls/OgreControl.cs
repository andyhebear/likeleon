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
            set { SetValue(OverlayTextProperty, value); }
        }
        #endregion

        #region Private Fields
        private Image renderTargetControl;
        private OgreImage ogreImage;
        private TextBlock overlayTextBlock;
        private bool initialized;
        #endregion

        #region Constructor
        public OgreControl()
        {
            // Postpone any other initilize routines to Loaded event
            // because our TemplateParts become valid *after* OnApplyTemplate called.
            initialized = false;
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

        public void ReloadUserResources()
        {
            Mogre.ResourceGroupManager mngr = Mogre.ResourceGroupManager.Singleton;
            mngr.ClearResourceGroup("ProjectResources");
            MogitorsRoot.Instance.FillResourceGroup(mngr, MogitorsRoot.Instance.ProjectOptions.ResourceDirectories, MogitorsRoot.Instance.ProjectOptions.ProjectDir, "ProjectResources");
            mngr.InitialiseResourceGroup("ProjectResources");

            MogitorsRoot.Instance.IsSceneModified = true;

            if (ResourceReloaded != null)
                ResourceReloaded(this, EventArgs.Empty);
        }
        #endregion

        #region Private Methods
        private void OgreControl_Loaded(object sender, RoutedEventArgs args)
        {
            // Loaded event occurs many times... why?
            // Anyway... protect from this strange behavior.
            if (this.initialized)
                return;

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

            #region OgreImage delegates
            this.ogreImage.Initialized += (s, e) =>
            {
                if (OgreInitialized != null)
                    OgreInitialized(s, e);
                this.initialized = true;
            };

            this.ogreImage.ResourceLoadItemProgress += (s, e) =>
            {
                if (ResourceLoadItemProgress != null)
                    ResourceLoadItemProgress(s, e);
            };
            #endregion

            this.PreviewDragEnter += new DragEventHandler(OgreControl_PreviewDragEnter);
            this.PreviewDragLeave += new DragEventHandler(OgreControl_PreviewDragLeave);
            this.PreviewDragOver += new DragEventHandler(OgreControl_PreviewDragOver);
            this.PreviewDrop += new DragEventHandler(OgreControl_PreviewDrop);

            this.ogreImage.InitOgreAsync();
        }
        #endregion

        #region Public Events
        public event RoutedEventHandler OgreInitialized;
        public event EventHandler<ResourceLoadEventArgs> ResourceLoadItemProgress;
        public event EventHandler ResourceReloaded;
        #endregion

        #region Drag&Drop helper
        private void OgreControl_PreviewDragEnter(object sender, DragEventArgs args)
        {
            if (!MogitorsRoot.Instance.OnDragEnter(args.Data))
            {
                args.Effects = DragDropEffects.None;
                args.Handled = true;
                return;
            }

            args.Effects = DragDropEffects.Copy;
        }

        private void OgreControl_PreviewDragLeave(object sender, DragEventArgs args)
        {
            MogitorsRoot.Instance.OnDragLeave(args.Data);
        }

        private void OgreControl_PreviewDragOver(object sender, DragEventArgs args)
        {
            if (!IsFocused)
                Focus();

            if (!MogitorsRoot.Instance.OnDragOver(args.Data, args.GetPosition(this)))
            {
                args.Effects = DragDropEffects.None;
                args.Handled = true;
                return;
            }

            args.Effects = DragDropEffects.Copy;
        }

        private void OgreControl_PreviewDrop(object sender, DragEventArgs args)
        {
            MogitorsRoot.Instance.OnDragDrop(args.Data, args.GetPosition(this));
        }
        #endregion
    }
}
