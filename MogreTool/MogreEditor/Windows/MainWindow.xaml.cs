﻿using System;
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

            MogitorsRoot.Instance.SceneLoaded += (s, args) =>
                {
                    this.Title = "Mogitor - " + MogitorsRoot.Instance.ProjectOptions.ProjectName + ".mogscene";
                };
        }

        private void ogreControl_OgreInitialized(object sender, RoutedEventArgs e)
        {
            this.statusString.Text = "Ready";
            this.ogreControl.OverlayText = "Please load a Scene File...";
        }

        private void ogreControl_ResourceLoadItemProgress(object sender, Mogitor.Controls.ResourceLoadEventArgs e)
        {
            if (this.statusProgress.Visibility != Visibility.Visible)
                this.statusProgress.Visibility = Visibility.Visible;

            if (e.Progress != 1.0)
            {
                this.statusString.Text = "Loading Resource: " + e.Name;
                this.statusProgress.Value = e.Progress * 100.0;
            }
            else
            {
                this.statusString.Text = "Resource Loaded";
                this.statusProgress.Visibility = Visibility.Collapsed;
            }
        }

        private void ogreControl_ResourceReloaded(object sender, EventArgs e)
        {
            MessageBox.Show("Call EntityViewControl.PrepareView");
        }
        #endregion
    }
}
