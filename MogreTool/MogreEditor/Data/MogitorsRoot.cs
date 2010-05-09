using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;
using System.IO;
using System.Xml.Serialization;
using System.Xml;
using System.Collections;
using System.Windows.Media;
using System.Windows.Input;

namespace Mogitor.Data
{
    partial class MogitorsRoot
    {
        #region Fields
        /// <summary>
        /// The current instance of the MogitorsRoot
        /// </summary>
        private static MogitorsRoot instance;
        private readonly MogitorsSystem system;
        private Mogre.SceneManager sceneManager;
        private readonly IList<EditorType> objectDisplayOrder = new List<EditorType>();
        private bool isSceneModified;
        #endregion

        #region Public Properties
        public static MogitorsRoot Instance
        {
            get
            {
                if (instance == null)
                {
                    instance = new MogitorsRoot();
                }

                return instance;
            }
        }

        public Mogre.RenderWindow RenderWindow 
        { 
            get; 
            set;
        }

        public Mogre.RenderTarget RenderTarget
        {
            get;
            set;
        }

        public bool IsSceneLoaded
        {
            get;
            private set;
        }

        public bool IsSceneModified
        {
            get { return this.isSceneModified; }
            set
            {
                if (this.isSceneModified == value)
                    return;

                this.isSceneModified = value;
                
                if (IsSceneModifiedChanged != null)
                    IsSceneModifiedChanged(this, EventArgs.Empty);
            }
        }

        public ProjectOptions ProjectOptions
        {
            get;
            private set;
        }

        public bool IsClearScreenNeeded
        {
            get;
            set;
        }

        public IList<string> MaterialNames
        {
            get;
            set;
        }
        #endregion

        #region Constructors
        MogitorsRoot()
        {
            this.system = MogitorsSystem.Instance;
            this.namesByType = new NameObjectPairList[(int)EditorType.LastEditor];
            for (int i = 0; i < this.namesByType.Count(); ++i)
            {
                this.namesByType[i] = new NameObjectPairList();
            }
            this.namesByTypeID = new NameObjectPairList[MogitorSettings.Instance.MaxObjectType];
            for (int i = 0; i < this.namesByTypeID.Count(); ++i)
            {
                this.namesByTypeID[i] = new NameObjectPairList();
            }

            IsSceneLoaded = false;
            IsSceneModified = false;

            RegisterAllEditorObjects();
            BaseEditor nullParent = null;
            this.rootEditor = BaseEditor.Factory.CreateObject(ref nullParent, null);

            this.objectDisplayOrder.Clear();
            this.objectDisplayOrder.Add(EditorType.Viewport);
            this.objectDisplayOrder.Add(EditorType.SceneManager);
            this.objectDisplayOrder.Add(EditorType.CustomNamanger);
            this.objectDisplayOrder.Add(EditorType.Light);
            this.objectDisplayOrder.Add(EditorType.Camera);
            for (EditorType type = EditorType.Camera + 1; type < EditorType.LastEditor; ++type)
                this.objectDisplayOrder.Add(type);
            this.objectDisplayOrder.Add(EditorType.Node);

            IsClearScreenNeeded = false;

            ProjectOptions = new ProjectOptions();
        }
        #endregion

        #region Public Methods
        public bool TerminateScene()
        {
            if (!IsSceneLoaded)
                return true;

            if (IsSceneModified)
            {
                MessageBoxResult ret = MessageBox.Show("Do you want to save your current project?", "Mogitor", MessageBoxButton.YesNoCancel);
                switch (ret)
                {
                    case MessageBoxResult.Yes:
                        SaveScene(false);
                        break;
                    case MessageBoxResult.Cancel:
                        return false;
                    case MessageBoxResult.No:
                        break;
                }
            }

            ActiveViewport = null;
            IsSceneLoaded = false;

            if (SceneTerminated != null)
                SceneTerminated(this, EventArgs.Empty);

            this.system.ClearTreeItems();
            this.system.ClearPropertiesView();

            ClearEditors();

            RenderTarget.RemoveAllViewports();

            Mogre.ResourceGroupManager mngr = Mogre.ResourceGroupManager.Singleton;
            mngr.DestroyResourceGroup("ProjectResources");

            return true;
        }

        public void WriteProjectOptions(XmlTextWriter writer, bool newProject)
        {
            XmlSerializer serializer = new XmlSerializer(typeof(ProjectOptions));
            serializer.Serialize(writer, ProjectOptions);
        }

        public bool LoadProjectOptions(XmlTextReader reader)
        {
            XmlSerializer serializer = new XmlSerializer(typeof(ProjectOptions));
            try
            {
                ProjectOptions = (ProjectOptions)serializer.Deserialize(reader);
                return true;
            }
            catch (Exception)
            {
                return false;
            }
        }

        public bool SaveScene(bool saveAs)
        {
            MogitorsSceneSerializer defaultSerializer = new MogitorsSceneSerializer();
            return (defaultSerializer.Export(saveAs) == BaseSerializer.SceneFileResult.Ok);
        }

        public BaseSerializer.SceneFileResult LoadScene(string fileName)
        {
            if (fileName.Length > 0)
                fileName = system.GetFullPath(fileName);

            ClearProjectOptions();
            SceneUpdated = null;

            this.system.UpdateLoadProgress(-1, "Load in progress...");

            MogitorsSceneSerializer defaultSerializer = new MogitorsSceneSerializer();
            BaseSerializer.SceneFileResult ret = defaultSerializer.Import(fileName);

            if (ret != BaseSerializer.SceneFileResult.Ok)
            {
                this.system.UpdateLoadProgress(-1, "Please load a Scene File...");
            }
            return ret;
        }

        public void AdjustUserResourceDirectories(string oldPath)
        {
            throw new NotImplementedException("AdjustUserResourceDirectories");
        }

        public void PrepareProjectResources()
        {
            try
            {
                Mogre.ResourceGroupManager mngr = Mogre.ResourceGroupManager.Singleton;
                mngr.CreateResourceGroup("ProjectResources");

                FillResourceGroup(mngr, ProjectOptions.ResourceDirectories, ProjectOptions.ProjectDir, "ProjectResources");

                mngr.InitialiseResourceGroup("ProjectResources");

                List<string> materialNames = new List<string>();
                foreach (var it in  Mogre.MaterialManager.Singleton.GetResourceIterator())
                {
                    if (it.Group == "ProjectResources")
                        materialNames.Add(it.Name);
                }
                materialNames.Sort();
                MaterialNames = materialNames;
            }
            catch
            {
                Mogre.LogManager.Singleton.DefaultLog.LogMessage("MOGITOR EXCEPTION: Can not prepare project resources!!", Mogre.LogMessageLevel.LML_CRITICAL);
            }
        }

        public void AfterLoadScene()
        {
            ViewportEditor.ResetCommonValues();

            if (ActiveViewport == null)
            {
                Mogre.NameValuePairList parameters = new Mogre.NameValuePairList();
                parameters.Clear();
                parameters["Name"] = "Viewport1";
                parameters["Colour"] = "0 0 0";
                parameters["Index"] = "1";
                ActiveViewport = CreateEditorObject(null, "Viewport Object", parameters, false, false) as ViewportEditor;
            }

            system.UpdateLoadProgress(60, "Loading scene objects");

            this.rootEditor.Load();
            this.rootEditor.LoadAllChildren();

            if (SceneUpdated != null)
                SceneUpdated(this, new SceneUpdatedEventArgs(SceneManager, ActiveViewport.CameraEditor.Camera, RenderTarget));
            SceneUpdated = null;

            FillTreeView();

            system.UpdateLoadProgress(100, "Rendering...");

            IsSceneLoaded = true;
            IsSceneModified = false;

            if (SceneLoaded != null)
                SceneLoaded(this, EventArgs.Empty);
        }

        public void FillResourceGroup(Mogre.ResourceGroupManager mngr, IList<string> list, string path, string group)
        {
            foreach (string str in list)
            {
                string stype = "";

                if (str.Substring(0, 3) == "FS:")
                    stype = "FileSystem";
                else if (str.Substring(0, 3) == "ZP:")
                    stype = "Zip";

                string resPath = str.Remove(0, 3);
                if (system.IsRelativePath(resPath))
                {
                    resPath = resPath.Insert(0, path + "/");
                    resPath = system.GetFullPath(resPath);
                }

                mngr.AddResourceLocation(resPath, stype, group);
            }
        }

        public void RegisterForPostSceneUpdates(BaseEditor obj)
        {
            if (IsSceneLoaded)
                obj.PostSceneUpdate(this, new SceneUpdatedEventArgs(SceneManager, ActiveViewport.CameraEditor.Camera, RenderTarget));
            else
                SceneUpdated += obj.PostSceneUpdate;
        }

        public void RenderTargetResized(double viewportWidth, double viewportHeight)
        {
            NameObjectPairList viewports = GetObjectsByType(EditorType.Viewport);

            foreach (KeyValuePair<string, BaseEditor> iter in viewports)
            {
                (iter.Value as ViewportEditor).RenderTargetResized(viewportWidth, viewportHeight);
            }
            ClearScreenBackground(true);
        }

        public void Update(float timePassed)
        {
        }

        public void OnPreRenderTargetChanged()
        {
            foreach (KeyValuePair<string, BaseEditor> it in this.namesByType[(int)EditorType.Viewport])
                it.Value.UnLoad();
        }

        public void OnPostRenderTargetChanged()
        {
            foreach (KeyValuePair<string, BaseEditor> it in this.namesByType[(int)EditorType.Viewport])
                it.Value.Load();
        }

        public void OnMouseRightDown(Mogre.Vector2 point, MouseDevice mouseDevice)
        {
            Mogre.Vector4 rect = new Mogre.Vector4();

            ViewportEditor vp = null;
            int zOrder = -1000;

            foreach (KeyValuePair<string, BaseEditor> it in this.namesByType[(int)EditorType.Viewport])
            {
                int order = (it.Value as ViewportEditor).GetRect(ref rect);
                if ((rect.x <= point.x) && (rect.y <= point.y) && ((rect.x + rect.z) >= point.x) && ((rect.y + rect.w) >= point.y) && (order > zOrder))
                {
                    zOrder = order;
                    vp = it.Value as ViewportEditor;
                }
            }
            if (vp != null)
            {
                ActiveViewport = vp;
                ActiveViewport.GetRect(ref rect);
                ActiveViewport.OnMouseRightDown(point - new Mogre.Vector2(rect.x, rect.y), mouseDevice);
            }
        }

        public void OnMouseRightUp(Mogre.Vector2 point, MouseDevice mouseDevice)
        {
            if (ActiveViewport == null)
                return;

            Mogre.Vector4 rect = new Mogre.Vector4();
            ActiveViewport.GetRect(ref rect);
            if ((rect.x <= point.x) && (rect.y <= point.y) && ((rect.x + rect.z) >= point.x) && ((rect.y + rect.w) >= point.y))
            {
                ActiveViewport.OnMouseRightUp(point - new Mogre.Vector2(rect.x, rect.y), mouseDevice);
            }
        }

        public void OnMouseMiddleDown(Mogre.Vector2 point, MouseDevice mouseDevice)
        {
            Mogre.Vector4 rect = new Mogre.Vector4();

            ViewportEditor vp = null;
            int zOrder = -1000;

            foreach (KeyValuePair<string, BaseEditor> it in this.namesByType[(int)EditorType.Viewport])
            {
                int order = (it.Value as ViewportEditor).GetRect(ref rect);
                if ((rect.x <= point.x) && (rect.y <= point.y) && ((rect.x + rect.z) >= point.x) && ((rect.y + rect.w) >= point.y) && (order > zOrder))
                {
                    zOrder = order;
                    vp = it.Value as ViewportEditor;
                }
            }
            if (vp != null)
            {
                ActiveViewport = vp;
                ActiveViewport.GetRect(ref rect);
                ActiveViewport.OnMouseMiddleDown(point - new Mogre.Vector2(rect.x, rect.y), mouseDevice);
            }
        }

        public void OnMouseMiddleUp(Mogre.Vector2 point, MouseDevice mouseDevice)
        {
            if (ActiveViewport == null)
                return;

            Mogre.Vector4 rect = new Mogre.Vector4();
            ActiveViewport.GetRect(ref rect);
            if ((rect.x <= point.x) && (rect.y <= point.y) && ((rect.x + rect.z) >= point.x) && ((rect.y + rect.w) >= point.y))
            {
                ActiveViewport.OnMouseMiddleUp(point - new Mogre.Vector2(rect.x, rect.y), mouseDevice);
            }
        }

        public void OnMouseMove(Mogre.Vector2 point, MouseDevice mouseDevice)
        {
            if (ActiveViewport == null)
                return;

            Mogre.Vector4 rect = new Mogre.Vector4();
            ActiveViewport.GetRect(ref rect);

            if ((rect.x <= point.x) && (rect.y <= point.y) && ((rect.x + rect.z) >= point.x) && ((rect.y + rect.w) >= point.y))
            {
                ActiveViewport.OnMouseMove(point - new Mogre.Vector2(rect.x, rect.y), mouseDevice, false);
            }
            else
            {
                ActiveViewport.OnMouseLeave(point - new Mogre.Vector2(rect.x, rect.y), mouseDevice);
            }
        }

        public void OnMouseWheel(Mogre.Vector2 point, float delta, MouseDevice mouseDevice)
        {
            if (ActiveViewport == null)
                return;

            Mogre.Vector4 rect = new Mogre.Vector4();
            ActiveViewport.GetRect(ref rect);

            if (this.activeDragData != null)
            {
                foreach (KeyValuePair<object, IDragDropHandler> handler in this.dragDropHandlers)
                {
                    if (handler.Key == this.activeDragData.Source)
                    {
                        handler.Value.OnDragWheel(this.activeDragData, ActiveViewport.Handle as Mogre.Viewport, delta);
                        return;
                    }
                }
            }

            ActiveViewport.OnMouseWheel(point - new Mogre.Vector2(rect.x, rect.y), delta, mouseDevice);
        }
        #endregion

        #region Private Methods
        private void ClearProjectOptions()
        {
            ProjectOptions.IsNewProject = false;
            ProjectOptions.ProjectDir = "";
            ProjectOptions.ProjectName = "";
            ProjectOptions.SceneManagerName = "";
            ProjectOptions.TerrainDirectory = "";
            ProjectOptions.ResourceDirectories.Clear();
            ProjectOptions.Cameras.Clear();
            ProjectOptions.SelectionBBColourForSerializer = Color.FromRgb(255, 255, 255);
            ProjectOptions.HighlightBBColourForSerializer = Color.FromRgb(232, 48, 48);
        }

        private void FillTreeView()
        {
            this.system.ClearTreeItems();
            object rootItem = this.system.CreateTreeRoot(ProjectOptions.ProjectName + ".mogscene");
            this.rootEditor.TreeItemHandle = rootItem;
            RecurseFillTreeView(this.rootEditor, rootItem);
        }

        private void RecurseFillTreeView(BaseEditor editor, object parent)
        {
            foreach (EditorType editorType in this.objectDisplayOrder)
            {
                foreach (KeyValuePair<string, BaseEditor> child in editor.Children)
                {
                    if (child.Value.EditorType != editorType)
                        continue;

                    object item = this.system.InsertTreeItem(parent, child.Value.Name, child.Value.ObjectTypeID, Colors.Black);
                    child.Value.TreeItemHandle = item;
                    RecurseFillTreeView(child.Value, item);
                }
            }
        }

        private void ClearScreenBackground(bool clear)
        {
            IsClearScreenNeeded = clear;
        }
        #endregion

        #region Events
        public event EventHandler<SceneUpdatedEventArgs> SceneUpdated;
        public event EventHandler<EventArgs> SceneLoaded;
        public event EventHandler<EventArgs> SceneTerminated;
        public event EventHandler<EventArgs> IsSceneModifiedChanged;
        #endregion
    }
}
