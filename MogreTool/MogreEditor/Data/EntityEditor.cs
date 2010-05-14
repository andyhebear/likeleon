using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.IO;

namespace Mogitor.Data
{
    class EntityEditor : NodeEditor
    {
        #region Inner Classes
        class SubMeshData
        {
            public string Material { get; set; }
            public bool Visible { get; set; }
        }
        #endregion

        #region Properties
        public static new BaseEditorFactory Factory { get { return entityEditorFactory; } }

        public string MeshFile
        {
            get { return this.meshFile; }
            set
            {
                this.meshFile = value;
                Modified = true;

                this.OnPropertyChanged("MeshFile");
            }
        }

        public bool CastShadows
        {
            get { return this.castShadows; }
            set
            {
                if (this.entityHandle != null)
                    this.entityHandle.CastShadows = value;
                this.castShadows = value;
                Modified = true;

                this.OnPropertyChanged("CastShadows");
            }
        }
        #endregion

        #region Fields
        private static readonly EntityEditorFactory entityEditorFactory = new EntityEditorFactory();
        private string meshFile = "";
        private Mogre.Entity entityHandle;  // actual mesh handle
        private bool castShadows = true;
        private readonly List<SubMeshData> subMeshes = new List<SubMeshData>();
        #endregion

        #region Private Methods
        private SubMeshData GetSubMesh(int index)
        {
            while (index >= this.subMeshes.Count)
            {
                SubMeshData temp = new SubMeshData();
                temp.Visible = true;
                temp.Material = "";
                this.subMeshes.Add(temp);
            }
            return this.subMeshes[index];
        }
        #endregion

        #region Overrides BaseEditor
        public override BaseEditorFactory FactoryDynamic { get { return entityEditorFactory; } }

        public override object Handle
        {
            get
            {
                return this.entityHandle as object;
            }
        }

        public override void ProcessParameters(Mogre.NameValuePairList parameters)
        {
            base.ProcessParameters(parameters);

            Mogre.NameValuePairList.Iterator ni;

            if ((ni = parameters.Find("MeshFile")) != parameters.End())
                this.meshFile = ni.Value;

            if ((ni = parameters.Find("CastShadows")) != parameters.End())
                this.castShadows = Mogre.StringConverter.ParseBool(ni.Value);

            foreach (KeyValuePair<string, string> param in parameters)
            {
                if (!param.Key.StartsWith("SubEntity"))
                    continue;

                string valStr = param.Key;
                valStr = valStr.Remove(0, 9);

                if (valStr.EndsWith("Visible"))
                {
                    valStr = valStr.Remove(valStr.Length - 8, 8);
                    int ID = Mogre.StringConverter.ParseInt(valStr);
                    GetSubMesh(ID).Visible = Mogre.StringConverter.ParseBool(param.Value);
                }
                else if (valStr.EndsWith("Material"))
                {
                    valStr = valStr.Remove(valStr.Length - 9, 9);
                    int ID = Mogre.StringConverter.ParseInt(valStr);
                    GetSubMesh(ID).Material = param.Value;
                }
            }
        }

        public override bool Load()
        {
            if (IsLoaded)
                return true;

            if (base.Load())
            {
                this.entityHandle = MogitorsRoot.Instance.SceneManager.CreateEntity(Name, MeshFile);
                this.handle.AttachObject(this.entityHandle);
                this.entityHandle.QueryFlags = QueryFlags.Movable;
                this.entityHandle.CastShadows = this.castShadows;
                for (int i = 0; i < subMeshes.Count; ++i)
                {
                    this.entityHandle.GetSubEntity((uint)i).SetVisible(this.subMeshes[i].Visible);
                    this.entityHandle.GetSubEntity((uint)i).MaterialName = this.subMeshes[i].Material;
                }
                if (this.subMeshes.Count == 0)
                {
                    SubMeshData data = new SubMeshData();
                    for (int i = 0; i < this.entityHandle.NumSubEntities; ++i)
                    {
                        data.Visible = this.entityHandle.GetSubEntity((uint)i).IsVisible;
                        data.Material = this.entityHandle.GetSubEntity((uint)i).MaterialName;
                        this.subMeshes.Add(data);
                    }
                }
            }
            else
            {
                return false;
            }
            return true;
        }

        public override bool UnLoad()
        {
            if (!IsLoaded)
                return true;

            if (this.entityHandle != null)
            {
                this.entityHandle.ParentSceneNode.DetachObject(this.entityHandle);
                this.entityHandle._getManager().DestroyEntity(this.entityHandle);
                this.entityHandle = null;
            }

            return base.UnLoad();
        }

        public override void GetObjectProperties(Mogre.NameValuePairList retList)
        {
            base.GetObjectProperties(retList);

            retList["MeshFile"] = this.meshFile;
            retList["CastShadows"] = Mogre.StringConverter.ToString(this.castShadows);

            for (int i = 0; i < this.subMeshes.Count; ++i)
            {
                string paramName = "SubEntity" + Mogre.StringConverter.ToString(i) + ".";
                retList[paramName + "Visible"] = Mogre.StringConverter.ToString(this.subMeshes[i].Visible);
                retList[paramName + "Material"] = this.subMeshes[i].Material;
            }
        }

        protected override Mogre.AxisAlignedBox GetAABB()
        {
            if (this.entityHandle != null)
                return this.entityHandle.BoundingBox;
            else
                return Mogitor.MogreX.AxisAlignedBox.Null;
        }

        public override void ShowBoundingBox(bool bShow)
        {
            if (this.boxParentNode == null)
                CreateBoundingBox();

            this.bBoxNode.SetVisible(bShow);
        }

        public override bool UsesGizmos
        {
            get
            {
                return true;
            }
        }
        #endregion
    }

    class EntityEditorFactory : BaseEditorFactory
    {
        public EntityEditorFactory()
        {
            TypeName = "Entity Object";
            Capabilities = EditFlags.CanMove | EditFlags.CanScale | EditFlags.CanRotate | EditFlags.CanClone | EditFlags.CanDelete | 
                EditFlags.CanFocus | EditFlags.CanDrag | EditFlags.CanUndo | EditFlags.CanuseMaterial | EditFlags.CanAcceptCopy;
        }

        public override BaseEditor CreateObject(ref BaseEditor parent, Mogre.NameValuePairList parameters)
        {
            EntityEditor editor = new EntityEditor();

            if (parameters.Find("MeshFile") == parameters.End())
                parameters["MeshFile"] = "scbCamera.mesh";

            if (parameters.Find("Init") != parameters.End())
            {
                string entName = Path.GetFileNameWithoutExtension(parameters["MeshFile"]);
                parameters["Name"] = entName + MogitorsRoot.Instance.CreateUniqueID(entName, "", -1);
            }

            editor.ProcessParameters(parameters);
            editor.Parent = parent;

            InstanceCount++;
            return editor;
        }

        public override EditorType EditorType
        {
            get
            {
                return EditorType.Entity;
            }
        }

        public override string Icon
        {
            get
            {
                return "Icons/entity.png";
            }
        }
    }
}
