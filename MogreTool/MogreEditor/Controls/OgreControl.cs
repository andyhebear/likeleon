using System;
using System.ComponentModel;
using System.Windows;
using System.Windows.Controls;
using Mogitor.Data;
using System.Windows.Input;

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
        private bool cursorHidden;
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

            // Events require ogreImage.
            this.SizeChanged += (s, e) =>
            {
                this.ogreImage.ViewportSize = e.NewSize;
            };

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

            this.ogreImage.InitOgreAsync();
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

        public void SetCursor(Cursor cursor)
        {
            Cursor = cursor;
        }

        public void ShowCursorEx(bool bShow)
        {
            if (this.cursorHidden == bShow)
            {
                if (!bShow)
                    Cursor = Cursors.None;
                else
                    Cursor = Cursors.Arrow;

                this.cursorHidden = !bShow;
            }
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

            this.PreviewDragEnter += new DragEventHandler(OgreControl_PreviewDragEnter);
            this.PreviewDragLeave += new DragEventHandler(OgreControl_PreviewDragLeave);
            this.PreviewDragOver += new DragEventHandler(OgreControl_PreviewDragOver);
            this.PreviewDrop += new DragEventHandler(OgreControl_PreviewDrop);
        }

        protected override void OnMouseDown(MouseButtonEventArgs e)
        {
            base.OnMouseDown(e);

            if (!IsFocused)
                Focus();

            Mogre.Vector2 pos = new Mogre.Vector2((float)e.GetPosition(this).X, (float)e.GetPosition(this).Y);

            if (e.ChangedButton == MouseButton.Right)
                MogitorsRoot.Instance.OnMouseRightDown(pos, e.MouseDevice);
            else if (e.ChangedButton == MouseButton.Middle)
                MogitorsRoot.Instance.OnMouseMiddleDown(pos, e.MouseDevice);
        }

        protected override void OnMouseUp(MouseButtonEventArgs e)
        {
            base.OnMouseUp(e);

            if (!IsFocused)
                Focus();

            Mogre.Vector2 pos = new Mogre.Vector2((float)e.GetPosition(this).X, (float)e.GetPosition(this).Y);

            if (e.ChangedButton == MouseButton.Right)
                MogitorsRoot.Instance.OnMouseRightUp(pos, e.MouseDevice);
            else if (e.ChangedButton == MouseButton.Middle)
                MogitorsRoot.Instance.OnMouseMiddleUp(pos, e.MouseDevice);
        }

        protected override void OnMouseMove(MouseEventArgs e)
        {
            base.OnMouseMove(e);

            if (!IsFocused)
                Focus();

            Mogre.Vector2 pos = new Mogre.Vector2((float)e.GetPosition(this).X, (float)e.GetPosition(this).Y);
            MogitorsRoot.Instance.OnMouseMove(pos, e.MouseDevice);
        }

        protected override void OnMouseWheel(MouseWheelEventArgs e)
        {
            base.OnMouseWheel(e);

            if (!IsFocused)
                Focus();

            Mogre.Vector2 pos = new Mogre.Vector2((float)e.GetPosition(this).X, (float)e.GetPosition(this).Y);
            MogitorsRoot.Instance.OnMouseWheel(pos, e.Delta, e.MouseDevice);
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
