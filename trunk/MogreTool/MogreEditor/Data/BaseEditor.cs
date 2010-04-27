using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.ComponentModel;
using System.Collections;

namespace Mogitor.Data
{
    class BaseEditor : INotifyPropertyChanged
    {
        #region Overridable Properties & Methods
        public virtual object Handle { get { return null; } }

        public virtual Mogre.SceneNode Node
        {
            get
            {
                if (Parent != null)
                    return Parent.Node;
                else
                    return null;
            }
        }

        public virtual Mogre.SceneManager SceneManager
        {
            get
            {
                if (Parent != null)
                    return Parent.SceneManager;
                else
                    return null;
            }
        }

        public virtual BaseEditorFactory FactoryDynamic
        {
            get { return baseEditorFactory; }
        }

        public virtual bool Load()
        {
            IsLoaded = true;
            return true;
        }

        public virtual bool UnLoad()
        {
            UnLoadAllChildren();
            IsLoaded = false;
            return true;
        }

        public virtual void ProcessParameters(Mogre.NameValuePairList parameters)
        {
        }

        protected virtual void OnPropertyChanged(string propertyName)
        {
            if (this.PropertyChanged != null)
            {
                this.PropertyChanged(this, new PropertyChangedEventArgs(propertyName));
            }
        }

        protected virtual void SetNameImpl(string name)
        {
            name = name.Trim();
            if (name == this.name)
                return;

            if (MogitorsRoot.Instance.FindObject(name, 0) != null)
                return;

            if (IsLoaded)
            {
                UnLoadAllChildren();
                UnLoad();
                UnRegisterObjectName();
                this.name = name;
                RegisterObjectName();
                Load();
                LoadAllChildren();
            }
            else
            {
                UnRegisterObjectName();
                this.name = name;
                RegisterObjectName();
            }

            Modified = true;
        }

        public virtual void PostSceneUpdate(object sender, SceneUpdatedEventArgs args)
        {
        }

        public virtual bool IsSerializable
        {
            get { return true; }
        }

        public virtual void OnSave()
        { 
        }

        public virtual void GetObjectProperties(Mogre.NameValuePairList retList)
        {
            retList.Clear();
            retList["Name"] = Name;
        }

        public virtual Mogre.Vector3 DerivedPosition
        {
            get { return new Mogre.Vector3(0, 0, 0); }
        }

        public virtual Mogre.Quaternion DerivedOrientation
        {
            get { return Mogre.Quaternion.IDENTITY; }
        }

        public virtual Mogre.Vector3 DerivedScale
        {
            get { return new Mogre.Vector3(1, 1, 1); }
        }
        #endregion

        #region Public Methods
        public void Destroy(bool informParent)
        {
            if (informParent && Parent != null)
                Parent.RemoveChild(Name);
            FactoryDynamic.DestroyObject(this);
        }

        public void RemoveChild(string name)
        {
            if (this.children.ContainsKey(name))
            {
                (this.children[name] as BaseEditor).Parent = null;
                this.children.Remove(name);
            }
        }

        public void UnLoadAllChildren()
        {
            foreach (KeyValuePair<string, BaseEditor> child in this.children)
            {
                (child.Value as BaseEditor).UnLoad();
            }
        }

        public void DestroyAllChildren()
        {
            foreach (KeyValuePair<string, BaseEditor> child in this.children)
            {
                (child.Value as BaseEditor).Destroy(false);
            }
            this.children.Clear();
        }

        public void DestroyBoundingBox()
        {
        }

        public void AddChild(BaseEditor child)
        {
            this.children.Add(child.Name, child);
            child.Parent = this;
        }

        public void GetNodeList(ObjectVector list)
        {
            foreach (KeyValuePair<string, BaseEditor> it in this.children)
            {
                if (it.Value.EditorType == EditorType.Node)
                {
                    list.Add(it.Value);
                }
                it.Value.GetNodeList(list);
            }
        }

        public void LoadAllChildren()
        {
            foreach (KeyValuePair<string, BaseEditor> it in this.children)
            {
                if (it.Value.Load())
                    it.Value.LoadAllChildren();
            }
        }
        #endregion

        #region Protected Methods
        protected void RegisterObjectName()
        {
            MogitorsRoot.Instance.RegisterObjectName(this.name, this);
        }

        protected void UnRegisterObjectName()
        {
            MogitorsRoot.Instance.UnRegisterObjectName(this.name, this);
        }

        protected void RegisterForPostSceneUpdates()
        {
            MogitorsRoot.Instance.RegisterForPostSceneUpdates(this);
        }
        #endregion

        #region Constructor
        public BaseEditor()
        {
            if (!initialized)
            {
                system = MogitorsSystem.Instance;
                initialized = true;
            }
        }
        #endregion

        #region Events
        public event PropertyChangedEventHandler PropertyChanged;
        #endregion

        #region Fields
        private bool modified = false;
        private static readonly BaseEditorFactory baseEditorFactory = new BaseEditorFactory();
        private readonly NameObjectPairList children = new NameObjectPairList();

        protected static MogitorsSystem system = null;
        protected static bool initialized = false;
        protected string name = "";
        #endregion

        #region Properties
        public bool Modified
        {
            get { return this.modified; }
            set 
            { 
                this.modified = value;
                MogitorsRoot.Instance.IsSceneModified = this.modified;
            }
        }

        public BaseEditor Parent { get; set; }
        
        public bool IsLoaded
        {
            get;
            protected set;
        }

        public string Name
        {
            get { return this.name; }
            set
            {
                string oldName = this.name;
                SetNameImpl(value);
                if (oldName != this.name)
                {
                    BaseEditor parent = Parent;
                    if (parent != null)
                    {
                        parent.RemoveChild(oldName);
                        parent.AddChild(this);
                    }
                }

                OnPropertyChanged("Name");
            }
        }

        public static BaseEditorFactory Factory
        {
            get { return baseEditorFactory; }
        }

        public EditorType EditorType
        {
            get { return FactoryDynamic.EditorType; }
        }

        public uint ObjectTypeID
        {
            get { return FactoryDynamic.TypeID; }
        }

        public string ObjectTypeName
        {
            get { return this.FactoryDynamic.TypeName; }
        }

        public object TreeItemHandle
        {
            get;
            set;
        }

        public NameObjectPairList Children
        {
            get { return this.children; }
        }
        #endregion
    }

    /// <summary>
    /// A class that is responsible for instantiating base editor class(es)
    /// </summary>
    class BaseEditorFactory
    {
        #region Overridables
        public virtual EditorType EditorType
        {
            get { return EditorType.Base; }
        }

        public virtual void Init()
        {
        }

        public virtual BaseEditor CreateObject(ref BaseEditor parent, Mogre.NameValuePairList parameters)
        {
            InstanceCount++;
            return new BaseEditor();
        }

        public virtual void DestroyObject(BaseEditor _object)
        {
            _object.UnLoad();
            _object.DestroyAllChildren();
            if (_object.Name != "")
                MogitorsRoot.Instance.UnRegisterObjectName(_object.Name, _object);

            InstanceCount--;
        }

        public virtual string Icon
        {
            get { return ""; }
        }
        #endregion

        public BaseEditorFactory()
        {
            InstanceCount = 0;
            TypeName = "";
        }

        #region Properties
        public uint TypeID
        {
            get;
            set; 
        }

        public string TypeName
        {
            get;
            protected set;
        }

        public int InstanceCount
        {
            get;
            set; 
        }
        #endregion
    }
}
