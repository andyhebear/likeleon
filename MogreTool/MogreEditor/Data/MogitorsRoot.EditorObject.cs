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
                throw new NotImplementedException("addToTreeList");

            if (display)
            {
                obj.Load();
                //obj.UpdateTreeView();
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
            RegisterEditorFactory(EntityEditor.Factory);
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
            foreach (KeyValuePair<string, BaseEditor> it in this.namesByType[(int)EditorType.Viewport])
                it.Value.UnLoad();

            this.rootEditor.Destroy(false);
            this.rootEditor = null;

            this.sceneManager = null;
            this.sceneManagerEditor = null;
            this.objCounter = 0;
            IsSceneModified = false;
            IsSceneLoaded = false;
            this.nameList.Clear();
            
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
