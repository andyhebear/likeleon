using System;
using System.Windows;
using System.Collections.ObjectModel;
using Mogre;
using Mogitor.Data;

namespace Mogitor.Windows
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();

            MogitorsSystem.Instance.SetWindows(this.ogreControl);
        }

        #region Private Fields
        private LogBuffer logBuffer = new LogBuffer();
        #endregion

        #region Private Methods
        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            this.logControl.LogBuffer = this.logBuffer;
            Mogre.LogManager.Singleton.DefaultLog.MessageLogged +=
                (message, lml, maskDebug, logName) =>
                {
                    Dispatcher.Invoke((Action)delegate() { this.logBuffer.Add(message); });
                };
        }

        private void ogreControl_OgreInitialized(object sender, RoutedEventArgs e)
        {
            this.statusString.Text = "Ogre Initialized";
            this.statusProgress.Visibility = Visibility.Collapsed;

            this.ogreControl.OverlayText = "Please load a Scene File...";
        }

        private void ogreControl_ResourceLoadItemProgress(object sender, Mogitor.Controls.ResourceLoadEventArgs e)
        {
            this.statusString.Text = "Loading Resource: " + e.Name;
            this.statusProgress.Value = e.Progress * 100.0;
        }
        #endregion
    }
}
