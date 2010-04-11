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
            foreach (DictionaryEntry child in this.children)
            {
                (child.Value as BaseEditor).UnLoad();
            }
        }

        public void DestroyAllChildren()
        {
            foreach (DictionaryEntry child in this.children)
            {
                (child.Value as BaseEditor).Destroy(false);
            }
            this.children.Clear();
        }

        public void DestroyBoundingBox()
        {
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
        private readonly Hashtable children = new Hashtable();

        protected static MogitorsSystem system = null;
        protected static bool initialized = false;
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
            get;
            protected set;
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

        public virtual BaseEditor CreateObject(ref BaseEditor parent, Mogre.NameValuePairList parameters)
        {
            this.instanceCount++;
            return new BaseEditor();
        }

        public virtual void DestroyObject(BaseEditor _object)
        {
            _object.UnLoad();
            _object.DestroyAllChildren();
            if (_object.Name != "")
                MogitorsRoot.Instance.UnRegisterObjectName(_object.Name, _object);

            this.instanceCount--;
        }
        #endregion

        public BaseEditorFactory()
        {
            this.instanceCount = 0;
        }

        #region Fields
        protected int instanceCount;
        #endregion

        #region Properties
        public uint TypeID
        {
            get;
            set; 
        }
        #endregion
    }
}
