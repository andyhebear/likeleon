using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Mogitor.Data
{
    class MaterialEditor : BaseEditor
    {
        #region Fields
        private object property;
        private int propertyLevel;
        private int propertyId;
        private Mogre.MaterialPtr handle;
        private static readonly MaterialEditorFactory materialEditorFactory = new MaterialEditorFactory();
        #endregion

        #region Properties
        public int PropertyLevel
        {
            get { return this.propertyLevel; }
        }

        public int PropertyId
        {
            get { return this.propertyId; }
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

        public override object Property
        {
            get { return this.property; }
        }
        #endregion

        #region Public Methods
        public void SetPropertiesLevel(int level, int id)
        {
            this.propertyLevel = level;
            this.propertyId = id;

            if (this.propertyLevel == 0)
            {
                this.property = this;
            }
            else if (this.propertyLevel == 1)
            {
                ushort techId = (ushort)(this.propertyLevel >> 8);
                this.property = this.handle.GetTechnique(techId);
            }
            else if (this.propertyLevel == 2)
            {
                ushort techId = (ushort)(this.propertyLevel >> 8);
                ushort passId = (ushort)(this.propertyId & 0xFF);
                this.property = this.handle.GetTechnique(techId).GetPass(passId);
            }
            else
            {
                this.property = null;
            }
        }
        #endregion

        #region Inner Classes
        //class TechniqueProperties
        //{
        //    public string Material { get; private set; }
        //    public int Technique { get; private set; }
        //    public string Name { get; private set;  }
        //    public string Scheme { get; private set; }
        //    public ushort LodIndex { get; private set; }
        //    public string ShadowRecMat { get; private set; }
        //    public string ShadowCastMat { get; private set; }
        //}

        //class PassProperies
        //{
        //}
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
