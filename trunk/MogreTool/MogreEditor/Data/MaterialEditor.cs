using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Mogitor.Data
{
    class MaterialEditor : BaseEditor
    {
        #region Properties
        public int PropertyLevel
        {
            get;
            set;
        }

        public int PropertyId
        {
            get;
            set;
        }

        public BaseEditor PropertiesTarget
        {
            get { return this; }
        }
        #endregion

        #region Overrides BaseEditor
        public override void ProcessParameters(Mogre.NameValuePairList parameters)
        {
            Mogre.NameValuePairList.Iterator ni;

            if ((ni = parameters.Find("Name")) != parameters.End())
                this.name = ni.Value;
        }

        public override bool Load()
        {
            if (IsLoaded)
                return true;

            if (!Parent.Load())
                return false;

            this.handle = Mogre.MaterialManager.Singleton.GetByName(this.name);

            IsLoaded = true;
            return true;
        }

        public override bool UnLoad()
        {
            if (!IsLoaded)
                return true;

            DestroyBoundingBox();

            this.handle = null;

            IsLoaded = false;
            return true;
        }

        public override void GetObjectProperties(Mogre.NameValuePairList retList)
        {
            retList.Clear();
            retList["Name"] = this.name;
        }

        public override void ShowBoundingBox(bool bShow)
        {
        }

        public override object Handle
        {
            get
            {
                return this.handle as object;
            }
        }

        public static new BaseEditorFactory Factory
        {
            get
            {
                return materialEditorFactory;
            }
        }

        public override BaseEditorFactory FactoryDynamic
        {
            get
            {
                return materialEditorFactory;
            }
        }

        protected override Mogre.AxisAlignedBox GetAABB()
        {
            return Mogitor.MogreX.AxisAlignedBox.Null;
        }

        public override Mogre.SceneNode Node
        {
            get
            {
                return null;
            }
        }
        #endregion

        #region Fields
        private Mogre.MaterialPtr handle;
        private static readonly MaterialEditorFactory materialEditorFactory = new MaterialEditorFactory();
        #endregion
    }

    class MaterialEditorFactory : BaseEditorFactory
    {
        public MaterialEditorFactory()
        {
            TypeName = "Material Object";
            Capabilities = EditFlags.CanUndo;
        }

        public override EditorType EditorType
        {
            get
            {
                return EditorType.Material;
            }
        }

        public override string Icon
        {
            get
            {
                return "Icons/material.png";
            }
        }

        public override BaseEditor CreateObject(ref BaseEditor parent, Mogre.NameValuePairList parameters)
        {
            MaterialEditor obj = new MaterialEditor();

            Mogre.NameValuePairList.Iterator ni;
            if ((ni = parameters.Find("Init")) != parameters.End())
            {
                parameters["Name"] = "Material" + MogitorsRoot.Instance.CreateUniqueID("Material", "", 1);
            }

            obj.ProcessParameters(parameters);
            parent = MogitorsRoot.Instance.SceneManagerEditor;
            obj.Parent = parent;

            InstanceCount++;
            return obj;
        }
    }
}
