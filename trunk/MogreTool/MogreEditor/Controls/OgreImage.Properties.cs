using System;
using System.Windows;

namespace MogreEditor.Controls
{
    partial class OgreImage
    {
        #region ViewportSize Property

        public static readonly DependencyProperty ViewportSizeProperty =
            DependencyProperty.Register("ViewportSize", typeof(Size), typeof(OgreImage),
                                        new PropertyMetadata(new Size(100, 100), OnViewportPropertyChanged));

        public static void OnViewportPropertyChanged(DependencyObject d, DependencyPropertyChangedEventArgs e)
        {
            var imageSource = (OgreImage)d;
            imageSource.reloadRenderTargetTime = Environment.TickCount;
        }

        public Size ViewportSize
        {
            get { return (Size)GetValue(ViewportSizeProperty); }
            set { SetValue(ViewportSizeProperty, value); }
        }
        #endregion

        #region AutoInitialize Property

        public static readonly DependencyProperty AutoInitializeProperty =
            DependencyProperty.Register("AutoInitialize", typeof(bool), typeof(OgreImage), new PropertyMetadata(false));

        public bool AutoInitialize
        {
            get { return (bool)GetValue(AutoInitializeProperty); }
            set { SetValue(AutoInitializeProperty, value); }
        }
        #endregion

        #region ResizeRenderTargetDelay Property

        public static readonly DependencyProperty ResizeRenderTargetDelayProperty =
            DependencyProperty.Register("ResizeRenderTargetDelay", typeof(Duration), typeof(OgreImage),
            new PropertyMetadata(new Duration(new TimeSpan(200))));

        public Duration ResizeRenderTargetDelay
        {
            get { return (Duration)GetValue(ResizeRenderTargetDelayProperty); }
            set { SetValue(ResizeRenderTargetDelayProperty, value); }
        }
        #endregion

        #region FrameRate Property
        public static readonly DependencyProperty FrameRateProperty =
            DependencyProperty.Register("FrameRate", typeof(int?), typeof(OgreImage),
            new PropertyMetadata(FrameRate_Changed));

        private static void FrameRate_Changed(DependencyObject d, DependencyPropertyChangedEventArgs e)
        {
            ((OgreImage)d).OnFrameRateChanged((int?)e.NewValue);
        }

        public int? FrameRate
        {
            get { return (int?)GetValue(FrameRateProperty); }
            set { SetValue(FrameRateProperty, value); }
        }
        #endregion
    }
}
