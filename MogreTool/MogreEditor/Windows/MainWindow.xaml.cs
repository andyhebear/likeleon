using System;
using System.Windows;
using System.Collections.ObjectModel;
using Mogre;
using Mogitor.Data;
using System.Windows.Controls;
using System.ComponentModel;
using System.Collections.Generic;
using System.Linq;

namespace Mogitor.Windows
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window, INotifyPropertyChanged, IFileHandler
    {
        public MainWindow()
        {
            Instance = this;

            InitializeComponent();

            this.recentFiles.Add("test1");
            this.recentFiles.Add("test2");
            OnPropertyChanged("RecentFiles");
        }

        #region Indexed Property
        public class IsPanelVisibleProperty
        {
            public bool this[string name]
            {
                get
                {
                    if (Panels == null || !Panels.Keys.Contains(name))
                        return false;
                    return GetPanelVisible(Panels[name]);
                }
                set
                {
                    if (Panels == null || !Panels.Keys.Contains(name))
                        return;
                    SetPanelVisible(Panels[name], value);
                }
            }

            public IDictionary<string, AvalonDock.DockableContent> Panels { get; set; }
            public AvalonDock.DockingManager DockManager { get; set; }

            private bool GetPanelVisible(AvalonDock.DockableContent adc)
            {
                return (adc.State != AvalonDock.DockableContentState.Hidden);
            }

            private void SetPanelVisible(AvalonDock.DockableContent adc, bool bVisible)
            {
                if (DockManager == null)
                    return;

                if (bVisible)
                    DockManager.Show(adc);
                else
                    DockManager.Hide(adc);
            }
        }

        public IsPanelVisibleProperty IsPanelVisible
        {
            get
            {
                return this.isPanelVisible;
            }
        }
        #endregion

        #region Properties
        public static MainWindow Instance
        {
            get;
            set;
        }

        public IEnumerable<RecentFile> RecentFiles
        {
            get
            {
                // Create a RecentFile for each recent file.
                return this.recentFiles
                    .Select((fileName, index) =>
                        new RecentFile(index, fileName, this));
            }
        }
        #endregion

        #region Private Fields
        private LogBuffer logBuffer = new LogBuffer();
        private Mogre.Vector3 oldCamPos = new Vector3(-9999.0f, -9999.0f, -9999.0f);
        private int frameCounter;
        double totalFrameTime;
        float frameRate;
        private readonly IsPanelVisibleProperty isPanelVisible = new IsPanelVisibleProperty();
        private IDictionary<string, AvalonDock.DockableContent> panelsByName = new Dictionary<string, AvalonDock.DockableContent>();
        private IList<string> recentFiles = new List<string>();
        #endregion

        #region Private Methods
        protected override void OnInitialized(EventArgs e)
        {
            base.OnInitialized(e);

            #region Avalon DockableContents visibility handling
            this.panelsByName["Scene"] = this.adcScene;
            this.panelsByName["Objects"] = this.adcObjects;
            this.panelsByName["Entity"] = this.adcEntity;
            this.panelsByName["Properties"] = this.adcProperties;
            this.panelsByName["Log"] = this.adcLog;
            this.panelsByName["Materials"] = this.adcMaterials;
            this.panelsByName["Templates"] = this.adcTemplates;
            this.panelsByName["Render"] = this.adcRender;

            IsPanelVisible.DockManager = this.dockManager;
            IsPanelVisible.Panels = panelsByName;
            
            foreach (var iter in this.panelsByName)
            {
                iter.Value.StateChanged += (s, args) =>
                    {
                        OnPropertyChanged("IsPanelVisible");
                    };
            }
            #endregion

            #region Explicit initializations
            this.sceneView.MainWindow = this;
            this.propertiesView.ApplyTemplate();
            this.entityView.ApplyTemplate();

            MogitorsSystem.Instance.SetWindows(this.ogreControl, this.sceneView.TreeControl, this.propertiesView);
            MogitorsSystem.Instance.InitTreeIcons();
            #endregion

            #region Log control event
            this.logControl.LogBuffer = this.logBuffer;
            Mogre.LogManager.Singleton.DefaultLog.MessageLogged +=
                (message, lml, maskDebug, logName) =>
                {
                    Dispatcher.Invoke((Action)(() =>
                    {
                        this.logBuffer.Add(new LogData(DateTime.Now, lml, message, logName));
                    }));
                };
            #endregion

            #region MogitorsRoot event
            MogitorsRoot.Instance.SceneLoaded += (s, args) =>
            {
                UpdateWindowTitle();

                this.entityView.PrepareView();
                this.materialView.PrepareView();
                this.templateView.PrepareView();

                ProjectOptions opt = MogitorsRoot.Instance.ProjectOptions;
                string recentFileEntry = MogitorsSystem.Instance.GetFullPath(opt.ProjectDir + "/" + opt.ProjectName + ".mogscene");
                AddToRecentFiles(recentFileEntry);

                this.statusString.Text = "Scene loaded";
            };

            MogitorsRoot.Instance.SceneTerminated += (s, args) =>
            {
                this.entityView.ClearView();
                this.materialView.DestroyScene();
                this.templateView.DestroyScene();

                UpdateWindowTitle();

                this.statusString.Text = "Scene terminated";
            };

            MogitorsRoot.Instance.IsSceneModifiedChanged += (s, args) =>
            {
                UpdateWindowTitle();
            };
            #endregion

            #region Mogre.Root event
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
            #endregion
        }

        private void Window_Loaded(object sender, RoutedEventArgs e)
        {
            OnPropertyChanged("IsPanelVisible");
        }

        private void ogreControl_OgreInitialized(object sender, RoutedEventArgs e)
        {
            this.statusString.Text = "Ready";
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

        private void UpdateWindowTitle()
        {
            string title = "Mogitor";
            if (MogitorsRoot.Instance.IsSceneLoaded)
            {
                title += " - " + MogitorsRoot.Instance.ProjectOptions.ProjectName;
                if (MogitorsRoot.Instance.IsSceneModified)
                    title += "*";
            }
            this.Title = title;
        }

        private void Window_Closing(object sender, System.ComponentModel.CancelEventArgs e)
        {
            if (MogitorsRoot.Instance.TerminateScene())
            {
                e.Cancel = false;
            }
            else
            {
                e.Cancel = true;
            }
        }

        private void AddToRecentFiles(string entry)
        {
            this.recentFiles.Add(entry);
            OnPropertyChanged("RecentFiles");
        }
        #endregion

        #region INotifyPropertyChanged
        public event PropertyChangedEventHandler PropertyChanged;

        protected virtual void OnPropertyChanged(string propertyName)
        {
            if (this.PropertyChanged != null)
            {
                this.PropertyChanged(this, new PropertyChangedEventArgs(propertyName));
            }
        }
        #endregion

        #region IFileHandler
        void IFileHandler.Open(string fileName)
        {
            OpenSceneFile(fileName);
        }
        #endregion
    }
}
