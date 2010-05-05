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

            this.sceneView.ApplyTemplate();
            this.propertiesView.ApplyTemplate();
            this.entityView.ApplyTemplate();

            MogitorsSystem.Instance.SetWindows(this.ogreControl, this.sceneView.TreeControl);
            MogitorsSystem.Instance.InitTreeIcons();
        }

        #region Private Fields
        private LogBuffer logBuffer = new LogBuffer();
        private Mogre.Vector3 oldCamPos = new Vector3(-9999.0f, -9999.0f, -9999.0f);
        private int frameCounter;
        double totalFrameTime;
        float frameRate;
        #endregion

        #region Private Methods
        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            this.logControl.LogBuffer = this.logBuffer;
            Mogre.LogManager.Singleton.DefaultLog.MessageLogged +=
                (message, lml, maskDebug, logName) =>
                {
                    Dispatcher.Invoke((Action)delegate() { this.logBuffer.Add(new LogData(DateTime.Now, lml, message, logName)); });
                };

            MogitorsRoot.Instance.SceneLoaded += (s, args) =>
                {
                    this.Title = "Mogitor - " + MogitorsRoot.Instance.ProjectOptions.ProjectName + ".mogscene";

                    entityView.PrepareView();

                    this.ogreControl.OverlayText = "";
                };

            MogitorsRoot.Instance.SceneTerminated += (s, args) =>
                {
                    entityView.ClearView();

                    this.Title = "Mogitor";

                    this.ogreControl.OverlayText = "Please load a Scene File...";
                };


            Mogre.Root.Singleton.FrameStarted += (FrameEvent evt) =>
            {
                DisplayFPS(evt.timeSinceLastFrame);
                MogitorsRoot.Instance.ActiveViewport.UpdateAutoCameraPosition(evt.timeSinceLastFrame);

                MogitorsRoot.Instance.Update(evt.timeSinceLastFrame);

                Mogre.Vector3 camPos = MogitorsRoot.Instance.ActiveViewport.CameraEditor.Camera.DerivedPosition;
                if (this.oldCamPos != camPos)
                {
                    this.camPosLabel.Text = string.Format("X:{0:0.00}, Y:{1:0.00}, Z:{2:0.00}", camPos.x, camPos.y, camPos.z);
                    oldCamPos = camPos;
                }
                return true;
            };
            Mogre.Root.Singleton.FrameEnded += (FrameEvent evt) =>
            {
                return true;
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
                this.statusProgress.Visibility = Visibility.Hidden;
            }
        }

        private void ogreControl_ResourceReloaded(object sender, EventArgs e)
        {
            entityView.PrepareView();
        }

        private void DisplayFPS(float time)
        {
            this.frameCounter++;
            this.totalFrameTime += time;
            this.frameRate = (float)this.frameCounter / (float)this.totalFrameTime;
            if (this.totalFrameTime > 2.0f)
            {
                this.totalFrameTime = 0;
                frameCounter = 0;
                this.fpsLabel.Text = string.Format("{0:0.00}", this.frameRate);
            }
        }
        #endregion

        private void CommandBinding_Executed(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {

        }
    }
}
