using System;
using System.Windows;
using Mogre;

namespace MogreEditor.Windows
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            App.Current.Exit += Current_Exit;

            InitializeComponent();
        }

        #region Private Methods

        private void Current_Exit(object sender, ExitEventArgs e)
        {
            this.renderTargetControl.Source = null;

            this.ogreImage.Dispose();
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            this.ogreImage.InitOgreAsync();
        }

        private void renderTargetControl_SizeChanged(object sender, SizeChangedEventArgs e)
        {
            if (this.ogreImage == null)
                return;

            this.ogreImage.ViewportSize = e.NewSize;
        }

        private void renderTargetControl_MouseDown(object sender, System.Windows.Input.MouseButtonEventArgs e)
        {
            MessageBox.Show("Clicked");
        }

        private void ogreImage_Initialized(object sender, RoutedEventArgs e)
        {
        }

        private void ogreImage_PreRender(object sender, EventArgs e)
        {
        }

        private void ogreImage_ResourceLoadItemProgress(object sender, MogreEditor.Controls.ResourceLoadEventArgs e)
        {

        }
        #endregion
    }
}
