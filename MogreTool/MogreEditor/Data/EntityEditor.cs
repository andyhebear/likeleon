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
        public override BaseEditorFactory FactoryDynamic { get { return entityEditorFactory; } }

        public string MeshFile
        {
            get { return this.MeshFile; }
            set
            {
                this.MeshFile = value;
                Modified = true;

                this.OnPropertyChanged("MeshFile");
            }
        }

        public override object Handle
        {
            get
            {
                return this.entityHandle as object;
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
        private Mogre.Entity entityHandle = null;  // actual mesh handle
        private bool castShadows = true;
        private readonly List<SubMeshData> subMeshes = new List<SubMeshData>();
        #endregion

        #region Methods
        public override void ProcessParameters(Mogre.NameValuePairList parameters)
        {
            base.ProcessParameters(parameters);

            Mogre.NameValuePairList.Iterator ni;

            if ((ni = parameters.Find("meshfile")) != parameters.End())
                this.meshFile = ni.Value;
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
        #endregion
    }

    class EntityEditorFactory : BaseEditorFactory
    {
        public override BaseEditor CreateObject(ref BaseEditor parent, Mogre.NameValuePairList parameters)
        {
            EntityEditor editor = new EntityEditor();

            if (parameters.Find("meshfile") == parameters.End())
                parameters["meshfile"] = "scbCamera.mesh";

            if (parameters.Find("init") != parameters.End())
            {
                string entName = Path.GetFileNameWithoutExtension(parameters["meshfile"]);
                parameters["name"] = entName + MogitorsRoot.Instance.CreateUniqueID(entName, "", -1);
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
    }
}
