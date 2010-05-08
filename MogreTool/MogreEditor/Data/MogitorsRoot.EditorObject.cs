using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Mogitor.Data
{
    partial class MogitorsRoot
    {
        #region Fields
        private int objCounter;
        private readonly NameObjectPairList nameList = new NameObjectPairList();
        private readonly NameObjectPairList[] namesByType;
        private readonly NameObjectPairList[] namesByTypeID;
        private BaseEditor sceneManagerEditor;
        private BaseEditor rootEditor;
        private readonly EditorObjectFactoryMap editorObjectFactories = new EditorObjectFactoryMap();
        private uint editorObjectTypeIDCounter;
        private BaseEditor selectedEditor;
        #endregion

        #region Properties
        public BaseEditor SceneManagerEditor
        {
            get
            {
                if (this.sceneManagerEditor == null)
                    this.sceneManagerEditor = FindObject(GetFirstSceneManager().Name, (int)EditorType.SceneManager);
                return this.sceneManagerEditor;
            }
        }

        public Mogre.SceneManager SceneManager
        {
            get
            {
                if (this.sceneManager == null)
                    this.sceneManager = GetFirstSceneManager();
                return this.sceneManager;
            }
        }

        public BaseEditor RootEditor
        {
            get { return this.rootEditor; }
        }

        public ViewportEditor ActiveViewport
        {
            get;
            set;
        }

        public EditorObjectFactoryMap EditorObjectFactories
        {
            get { return this.editorObjectFactories; }
        }

        public BaseEditor Selected
        {
            get { return this.selectedEditor; }
            set { this.selectedEditor = value; }
        }
        #endregion

        #region Public Methods
        public string CreateUniqueID(string n1, string n2, int seed)
        {
            int temp = seed;

            if (seed < 0)
                seed = ++this.objCounter;

            string tail = "#" + Mogre.StringConverter.ToString(seed);
            if (n2 != "")
            {
                while (FindObject(n1 + tail, 0) != null || FindObject(n2 + tail, 0) != null)
                {
                    tail = "#" + Mogre.StringConverter.ToString(++seed);
                }
            }
            else
            {
                while (FindObject(n1 + tail, 0) != null)
                {
                    tail = "#" + Mogre.StringConverter.ToString(++seed);
                }
            }

            if (temp < 0)
                this.objCounter = seed;

            return tail;
        }

        public void UnRegisterObjectName(string name, BaseEditor obj)
        {
            if (this.nameList.ContainsKey(name))
                this.nameList.Remove(name);

            if (this.namesByType[(int)obj.EditorType].ContainsKey(name))
                this.namesByType[(int)obj.EditorType].Remove(name);

            if (this.namesByTypeID[(int)obj.ObjectTypeID].ContainsKey(name))
                this.namesByTypeID[(int)obj.ObjectTypeID].Remove(name);
        }

        public BaseEditor CreateEditorObject(BaseEditor parent, string objectTypeString, Mogre.NameValuePairList param, bool addToTreeList, bool display)
        {
            if (parent == null)
            {
                Mogre.NameValuePairList.Iterator ni;
                if ((ni = param.Find("ParentNode")) != param.End())
                {
                    parent = FindObject(ni.Value, 0);
                }

                if (parent == null)
                {
                    if (SceneManager == null)
                        parent = this.rootEditor;
                    else
                        parent = SceneManagerEditor;
                }
            }

            BaseEditorFactory factory = GetEditorObjectFactory(objectTypeString);
            if (factory == null)
                return null;

            BaseEditor obj = factory.CreateObject(ref parent, param);

            if (obj == null)
                return null;

            RegisterObjectName(obj.Name, obj);

            parent.AddChild(obj);

            if (addToTreeList)
            {
                object handle = this.system.InsertTreeItem(parent.TreeItemHandle, obj.Name, obj.ObjectTypeID, System.Windows.Media.Colors.Black);
                obj.TreeItemHandle = handle;
            }

            if (display)
            {
                obj.Load();
                obj.UpdateTreeView();
            }

            IsSceneModified = true;
            return obj;
        }

        public BaseEditor FindObject(string name, uint type)
        {
            if (type == 0)
            {
                if (this.nameList.ContainsKey(name))
                    return this.nameList[name] as BaseEditor;
            }
            else
            {
                if (this.namesByType[(int)type].ContainsKey(name))
                    return namesByType[(int)type][name] as BaseEditor;
            }
            return null;
        }

        public void RegisterObjectName(string name, BaseEditor obj)
        {
            this.nameList.Add(name, obj);
            this.namesByType[(int)obj.EditorType].Add(name, obj);
            this.namesByTypeID[(int)obj.ObjectTypeID].Add(name, obj);
        }

        public NameObjectPairList GetObjectsByType(EditorType type)
        {
            if (type < EditorType.LastEditor)
                return this.namesByType[(int)type];
            else
                return this.namesByType[0];
        }

        public void GetObjectList(EditorType type, ObjectVector list)
        {
            list.Clear();
            if (type == EditorType.Multisel)
                return;
            if (type != EditorType.Node)
            {
                foreach (KeyValuePair<string, BaseEditor> it in this.namesByType[(int)type])
                {
                    list.Add(it.Value);
                }
            }
            else
            {
                this.rootEditor.GetNodeList(list);
            }
        }

        public Mogre.Vector3 GetGizmoIntersectCameraPlane(BaseEditor obj, Mogre.Ray pickRay)
        {
            Mogre.Vector3 vPos = obj.DerivedPosition;
            Mogre.Pair<bool, float> result = pickRay.Intersects(new Mogre.Plane(-ActiveViewport.CameraEditor.Camera.DerivedDirection, vPos));

            if (result.first)
            {
                Mogre.Vector3 AxisX = obj.DerivedOrientation.XAxis;
                Mogre.Vector3 AxisY = obj.DerivedOrientation.YAxis;
                Mogre.Vector3 AxisZ = obj.DerivedOrientation.ZAxis;

                Mogre.Vector3 Proj = pickRay.GetPoint(result.second) - vPos;
                Mogre.Vector3 vPos1 = (AxisX.DotProduct(Proj) * AxisX);
                Mogre.Vector3 vPos2 = (AxisY.DotProduct(Proj) * AxisY);
                Mogre.Vector3 vPos3 = (AxisZ.DotProduct(Proj) * AxisZ);
                vPos += vPos1 + vPos2 + vPos3;
            }

            return vPos;
        }

        public void DestroyEditorObject(BaseEditor obj, bool removeFromTreeList)
        {
            // Index0 Viewport can not be deleted
            if (obj.EditorType == EditorType.Viewport)
            {
                ViewportEditor viewport = obj as ViewportEditor;

                if (viewport.ViewportIndex == 1)
                {
                    MogitorsSystem.Instance.DisplayMessageDialog("Can not delete the main viewport!!", System.Windows.MessageBoxButton.OK);
                    return;
                }

                if (ActiveViewport == viewport)
                {
                    foreach (var vt in this.namesByType[(int)EditorType.Viewport])
                    {
                        if (vt.Value == obj)
                            continue;

                        ActiveViewport = vt.Value as ViewportEditor;
                        break;
                    }
                }
            }

            if (this.selectedEditor == obj)
            {
                obj.IsSelected = false;
                obj.IsHighLighted = false;
            }

            if (removeFromTreeList)
            {
                this.system.DeleteTreeItem(obj.TreeItemHandle);
            }

            if (obj.Parent != null)
                obj.Parent.RemoveChild(obj.Name);

            obj.FactoryDynamic.DestroyObject(obj);

            IsSceneModified = true;
        }
        #endregion

        #region Private Methods
        private Mogre.SceneManager GetFirstSceneManager()
        {
            if (this.namesByType[(int)EditorType.SceneManager].Count > 0)
                return this.namesByType[(int)EditorType.SceneManager].First().Value.SceneManager;
            else
                return null;
        }

        private void RegisterAllEditorObjects()
        {
            editorObjectTypeIDCounter = 0;

            RegisterEditorFactory(BaseEditor.Factory);
            RegisterEditorFactory(Mogitor.Data.SceneManagerEditor.Factory);
            RegisterEditorFactory(ViewportEditor.Factory);
            RegisterEditorFactory(EntityEditor.Factory);
            RegisterEditorFactory(CameraEditor.Factory);
            RegisterEditorFactory(NodeEditor.Factory);

            foreach (KeyValuePair<string, BaseEditorFactory> factory in this.editorObjectFactories)
            {
                if (factory.Value != null)
                    factory.Value.Init();
            }
        }

        private void RegisterEditorFactory(BaseEditorFactory factory)
        {
            if (this.editorObjectFactories.ContainsKey(factory.TypeName) == false)
            {
                this.editorObjectFactories.Add(factory.TypeName, factory);
                factory.TypeID = this.editorObjectTypeIDCounter++;
            }
        }

        private BaseEditorFactory GetEditorObjectFactory(string typeName)
        {
            if (this.editorObjectFactories.ContainsKey(typeName) == false)
                return null;
            return this.editorObjectFactories[typeName];
        }

        private void ClearEditors()
        {
            this.activeDragData = null;

            // Make sure to unload all the viewports first, since they are dependent on SceneManager
            // but they share the same parent with scene manager and scene manager may get deleted before they do
            foreach (KeyValuePair<string, BaseEditor> it in this.namesByType[(int)EditorType.Viewport])
                it.Value.UnLoad();

            this.rootEditor.Destroy(false);
            this.rootEditor = null;

            ActiveViewport = null;
            this.sceneManager = null;
            this.sceneManagerEditor = null;
            this.selectedEditor = null;
            this.objCounter = 0;
            IsSceneModified = false;
            IsSceneLoaded = false;
            this.nameList.Clear();
            SceneUpdated = null;
            
            foreach (KeyValuePair<string, BaseEditorFactory> it in this.editorObjectFactories)
            {
                if (it.Value != null)
                    it.Value.InstanceCount = 0;
            }

            foreach (NameObjectPairList it in this.namesByType)
            {
                it.Clear();
            }

            foreach (NameObjectPairList it in this.namesByTypeID)
            {
                it.Clear();
            }

            BaseEditor parent = null;
            Mogre.NameValuePairList parameters = new Mogre.NameValuePairList();
            this.rootEditor = BaseEditor.Factory.CreateObject(ref parent, parameters);
        }
        #endregion
    }
}
