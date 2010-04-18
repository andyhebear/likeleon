using System;
using System.Collections.Generic;

namespace Mogitor.Data
{
    class ViewportEditor : BaseEditor
    {
        #region Properties
        public static new ViewportEditorFactory Factory { get { return viewportEditorFactory; } }

        public uint ViewportIndex
        {
            get;
            set;
        }

        public CameraEditor ViewCamera
        {
            get;
            private set;
        }

        public CameraEditor ActiveCamera
        {
            get;
            private set;
        }

        public bool Overlays
        {
            get { return this.overlays; }
            set
            {
                if (this.handle != null)
                    this.handle.OverlaysEnabled = value;
                this.overlays = value;
                Modified = true;

                OnPropertyChanged("Overlays");
            }
        }

        public bool Skies
        {
            get { return this.skies; }
            set
            {
                if (this.handle != null)
                    this.handle.SkiesEnabled = value;
                this.skies = value;
                Modified = true;

                OnPropertyChanged("Skies");
            }
        }

        public bool Shadows
        {
            get { return this.Shadows; }
            set
            {
                if (this.handle != null)
                    this.handle.ShadowsEnabled = value;
                this.shadows = value;
                Modified = true;

                OnPropertyChanged("Shadows");
            }
        }

        public Mogre.Vector3 CamPosition
        {
            get { return this.camPosition; }
            set
            {
                if (ViewCamera != null)
                    ViewCamera.Position = value;
                this.camPosition = value;
                Modified = true;

                OnPropertyChanged("CamPosition");
            }
        }

        public Mogre.Quaternion CamOrientation
        {
            get { return this.camOrientation; }
            set
            {
                if (ViewCamera != null)
                    ViewCamera.Orientation = value;
                this.camOrientation = value;
                Modified = true;

                OnPropertyChanged("CamOrientation");
            }
        }

        public float CamFOV
        {
            get { return this.camFOV; }
            set
            {
                if (ViewCamera != null)
                    ViewCamera.FOV = value;
                this.camFOV = value;
                Modified = true;

                OnPropertyChanged("CamFOV");
            }
        }

        public Mogre.PolygonMode CamPolyMode
        {
            get { return this.camPolyMode; }
            set
            {
                if (ViewCamera != null)
                {
                    ViewCamera.PolygonMode = value;
                    if (value != Mogre.PolygonMode.PM_SOLID)
                        this.handle.SetVisibilityMask(0x7F000000);
                    else
                        this.handle.SetVisibilityMask(0xFFFFFFFF);
                    this.camPolyMode = value;
                    Modified = true;

                    OnPropertyChanged("CamPolyMode");
                }
            }
        }

        public Mogre.Vector2 CamClipDistance
        {
            get { return this.camClipDistance; }
            set
            {
                this.camClipDistance = value;
                if (this.camClipDistance.x < 0.05f)
                    this.camClipDistance.x = 0.05f;

                if (ViewCamera != null)
                    ViewCamera.ClipDistance = value;
                Modified = true;

                OnPropertyChanged("CamClipDistance");
            }
        }

        public CameraEditor CameraEditor
        {
            get { return this.ActiveCamera; }
            set
            {
                if (ActiveCamera != null)
                {
                    ActiveCamera.ShowHelper = true;
                    throw new NotImplementedException("CameraEditor set");
                }

                if (value != null)
                    ActiveCamera = value;
                else
                    ActiveCamera = ViewCamera;

                ActiveCamera.ShowHelper = false;

                ActiveCamera.Camera.AspectRatio = (float)this.handle.ActualWidth / (float)this.handle.ActualHeight;
                this.handle.Camera = ActiveCamera.Camera;

                Mogre.PolygonMode polyMode = ActiveCamera.PolygonMode;
                if (polyMode != Mogre.PolygonMode.PM_SOLID)
                    this.handle.SetVisibilityMask(0x7F000000);
                else
                    this.handle.SetVisibilityMask(0xFFFFFFFF);

                PopCompositors();
            }
        }
        #endregion

        #region Fields
        private Mogre.Viewport handle;
        private Mogre.Vector4 dimensions = new Mogre.Vector4(0, 0, 1, 1);
        private Mogre.ColourValue colour = new Mogre.ColourValue(0, 0, 0);
        private bool overlays = true;
        private bool skies = true;
        private bool shadows = true;
        private Mogre.Vector3 camPosition = Mogre.Vector3.ZERO;
        private Mogre.Quaternion camOrientation = Mogre.Quaternion.IDENTITY;
        private float camFOV = 1.0f;
        private Mogre.PolygonMode camPolyMode = Mogre.PolygonMode.PM_SOLID;
        private Mogre.Vector2 camClipDistance = new Mogre.Vector2(1, 1000);
        private static readonly ViewportEditorFactory viewportEditorFactory = new ViewportEditorFactory();
        #endregion

        #region Overrides BaseEditor
        public override object Handle
        { 
            get { return this.handle as object; } 
        }

        public override BaseEditorFactory FactoryDynamic 
        { 
            get { return viewportEditorFactory; }
        }

        public override bool Load()
        {
            if (IsLoaded)
                return true;

            if (Parent.Load() == false)
                return false;

            CreateViewport();

            this.handle.OverlaysEnabled = this.overlays;
            this.handle.SkiesEnabled = this.skies;
            this.handle.ShadowsEnabled = this.shadows;
            ViewCamera.Position = this.camPosition;
            ViewCamera.Orientation = this.camOrientation;
            ViewCamera.FOV = this.camFOV;
            ViewCamera.PolygonMode = this.camPolyMode;
            ViewCamera.ClipDistance = this.camClipDistance;

            IsLoaded = true;
            return true;
        }

        public override bool UnLoad()
        {
            if (!IsLoaded)
                return true;

            UnLoadAllChildren();
            DestroyBoundingBox();

            if (this.handle != null)
            {
                throw new NotImplementedException("this.viewGrid = null");

                ViewCamera.Destroy(false);
                ViewCamera = null;

                MogitorsRoot.Instance.RenderWindow.RemoveViewport(this.handle.ZOrder);
                this.handle = null;
            }

            IsLoaded = false;
            return true;
        }

        public override void ProcessParameters(Mogre.NameValuePairList parameters)
        {
            Mogre.NameValuePairList.Iterator ni;

            if ((ni = parameters.Find("Name")) != parameters.End())
                Name = ni.Value;

            if ((ni = parameters.Find("Dimensions")) != parameters.End())
                this.dimensions = MogreX.StringConverter.ParseVector4(ni.Value);

            if ((ni = parameters.Find("Skies")) != parameters.End())
                this.skies = Mogre.StringConverter.ParseBool(ni.Value);

            if ((ni = parameters.Find("Shadows")) != parameters.End())
                this.shadows = Mogre.StringConverter.ParseBool(ni.Value);

            if ((ni = parameters.Find("Overlays")) != parameters.End())
                this.overlays = Mogre.StringConverter.ParseBool(ni.Value);

            if ((ni = parameters.Find("CamPosition")) != parameters.End())
                this.camPosition = Mogre.StringConverter.ParseVector3(ni.Value);

            if ((ni = parameters.Find("CamOrientation")) != parameters.End())
                this.camOrientation = Mogre.StringConverter.ParseQuaternion(ni.Value);

            if ((ni = parameters.Find("CamClipDistance")) != parameters.End())
                this.camClipDistance = MogreX.StringConverter.ParseVector2(ni.Value);

            if ((ni = parameters.Find("CamPolyMode")) != parameters.End())
                this.CamPolyMode = (Mogre.PolygonMode)Mogre.StringConverter.ParseInt(ni.Value);

            if ((ni = parameters.Find("CamFOV")) != parameters.End())
                this.camFOV = Mogre.StringConverter.ParseReal(ni.Value);

            if ((ni = parameters.Find("Colour")) != parameters.End())
                this.colour = Mogre.StringConverter.ParseColourValue(ni.Value);

            throw new NotImplementedException("process compositor parameters");
        }

        protected override void SetNameImpl(string name)
        {
            if (name == this.name)
                return;

            if (MogitorsRoot.Instance.FindObject(name, 0) == null)
            {
                UnRegisterObjectName();
                this.name = name;
                RegisterObjectName();
            }

            OnPropertyChanged("Name");

            Modified = true;
        }
        #endregion

        #region Private Methods
        private void CreateViewport()
        {
            Mogre.NameValuePairList parameters = new Mogre.NameValuePairList();

            parameters["Name"] = "intViewCamera" + Mogre.StringConverter.ToString(ViewportIndex);
            parameters["ClipDistance"] = "0.1 40000";

            BaseEditor scnMgr = MogitorsRoot.Instance.SceneManagerEditor;
            ViewCamera = CameraEditor.Factory.CreateObject(ref scnMgr, parameters) as CameraEditor;
            ViewCamera.Load();

            this.handle = MogitorsRoot.Instance.RenderWindow.AddViewport(ViewCamera.Camera, (int)ViewportIndex,
                dimensions.x, dimensions.y, dimensions.z, dimensions.w);

            if (Name == "")
            {
                Name = "Viewport" + Mogre.StringConverter.ToString(ViewportIndex);
            }

            ViewCamera.Camera.AspectRatio = (float)this.handle.ActualWidth / (float)this.handle.ActualHeight;
            ViewCamera.ShowHelper = false;

            ActiveCamera = ViewCamera;
            this.handle.BackgroundColour = this.colour;

            PopCompositors();

            throw new NotImplementedException("Set camera position");
            LoadEditorObjects();
        }

        private void PopCompositors()
        {
            throw new NotImplementedException("PopCompositors");
        }

        private void LoadEditorObjects()
        {
            throw new NotImplementedException("LoadEditorObjects");
        }
        #endregion
    }

    class ViewportEditorFactory : BaseEditorFactory
    {
        private uint lastZOrder;

        public ViewportEditorFactory()
        {
            TypeName = "Viewport Object";
        }

        public override EditorType EditorType
        {
            get
            {
                return EditorType.Viewport;
            }
        }

        public override BaseEditor CreateObject(ref BaseEditor parent, Mogre.NameValuePairList parameters)
        {
            ViewportEditor obj = new ViewportEditor();

            Mogre.NameValuePairList.Iterator ni;
            if ((ni = parameters.Find("ViewportIndex")) != parameters.End())
            {
                obj.ViewportIndex = (uint)Mogre.StringConverter.ParseInt(ni.Value);
                if (lastZOrder < obj.ViewportIndex)
                    lastZOrder = obj.ViewportIndex;
            }
            else
            {
                obj.ViewportIndex = ++lastZOrder;
            }

            if (obj.ViewportIndex == 1)
                MogitorsRoot.Instance.ActiveViewport = obj;

            parent = MogitorsRoot.Instance.RootEditor;
            obj.Parent = parent;
            obj.ProcessParameters(parameters);
            obj.Load();

            InstanceCount++;
            return obj;
        }

        public override void DestroyObject(BaseEditor _object)
        {
            ViewportEditor editor = _object as ViewportEditor;

            MogitorsRoot.Instance.IsClearScreenNeeded = true;

            editor.DestroyAllChildren();
            editor.UnLoad();

            if (editor.Name != "")
                MogitorsRoot.Instance.UnRegisterObjectName(editor.Name, editor);

            InstanceCount--;

            NameObjectPairList viewports = MogitorsRoot.Instance.GetObjectsByType(EditorType.Viewport);

            lastZOrder = 0;
            foreach (ViewportEditor viewport in viewports.Values)
            {
                if (viewport.ViewportIndex > lastZOrder)
                    lastZOrder = viewport.ViewportIndex;
            }
        }
    }
}
