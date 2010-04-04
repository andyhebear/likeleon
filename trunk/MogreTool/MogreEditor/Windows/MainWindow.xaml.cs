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
            App.Current.Exit += Current_Exit;

            InitializeComponent();
        }

        #region Private Fields
        private SceneNode ogreNode;
        private Entity ogreMesh;
        private SceneNode fountainNode;
        private Viewport viewport;
        private LogBuffer logBuffer = new LogBuffer();
        #endregion

        #region Private Methods

        private void Current_Exit(object sender, ExitEventArgs e)
        {
            this.renderTargetControl.Source = null;

            this.ogreImage.Dispose();
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            this.logControl.LogBuffer = this.logBuffer;
            Mogre.LogManager.Singleton.DefaultLog.MessageLogged +=
                (message, lml, maskDebug, logName) =>
                {
                    Dispatcher.Invoke((Action)delegate() { this.logBuffer.Add(message); });
                };

            //this.ogreImage.InitOgreAsync();
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
            // Loading done.
            this.statusString.Text = "Ogre Initialized";
            this.statusProgress.Visibility = Visibility.Collapsed;

            // get the Ogre scene manager
            SceneManager sceneMgr = this.ogreImage.SceneManager;

            // ceate a light
            Light l = sceneMgr.CreateLight("MainLight");

            // Accept default settings: point light, white diffuse, just set position
            // NB I could attach the light to a SceneNode if I wanted it to move automatically with
            //  other objects.
            l.Position = new Vector3(20F, 80F, 50F);

            // load the "ogre head mesh" resource.
            this.ogreMesh = sceneMgr.CreateEntity("ogre", "ogrehead.mesh");

            // create a node for the "ogre head mesh"
            this.ogreNode = sceneMgr.RootSceneNode.CreateChildSceneNode("ogreNode");
            this.ogreNode.AttachObject(this.ogreMesh);

            // Create shared node for the particle effects
            this.fountainNode = sceneMgr.RootSceneNode.CreateChildSceneNode();

            // Set nonvisible timeout
            ParticleSystem.DefaultNonVisibleUpdateTimeout = 5;
        }

        private void ogreImage_PreRender(object sender, EventArgs e)
        {
        }

        private void ogreImage_ResourceLoadItemProgress(object sender, Mogitor.Controls.ResourceLoadEventArgs e)
        {
            this.statusString.Text = "Loading Resource: " + e.Name;
            this.statusProgress.Value = e.Progress * 100.0;
        }
        #endregion
    }
}
