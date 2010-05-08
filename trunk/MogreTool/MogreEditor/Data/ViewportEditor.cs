using System;
using System.Collections.Generic;
using System.Windows.Input;
using System.Windows;

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
            get { return this.shadows; }
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
                    if (ActiveCamera == MogitorsRoot.Instance.Selected)
                    {
                        ActiveCamera.ShowBoundingBox(true);
                    }

                    PushCompositors(this.ActiveCamera.Camera);
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

        public static float CameraSpeed
        {
            get;
            set;
        }

        public EditorTools EditorTool
        {
            get
            {
                return editorTool;
            }
            set
            {
                editorTool = value;

                instance.OnPropertyChanged("EditorTool");
                OnPropertyChanged("EditorTool");
            }
        }

        public static ViewportEditor Instance
        {
            get { return instance; }
        }
        #endregion

        #region Inner Classes
        private class CompositorPush
        {
            public string Name { get; set; }
            public bool Enabled { get; set; }
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
        private readonly IList<CompositorPush> compositorStorage = new List<CompositorPush>();
        private Mogre.Vector3 newCamPosition = Mogre.Vector3.ZERO;
        private Mogre.Vector2 lastMouse = Mogre.Vector2.ZERO;
        private MouseDevice lastMouseDevice;
        private static bool isSettingPos = false;
        private static EditorTools editorTool = EditorTools.Select;
        private static readonly ViewportEditor instance = new ViewportEditor();
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
                //throw new NotImplementedException("this.viewGrid = null");

                ViewCamera.Destroy(false);
                ViewCamera = null;

                MogitorsRoot.Instance.RenderTarget.RemoveViewport(this.handle.ZOrder);
                this.handle = null;
            }

            IsLoaded = false;
            return true;
        }

        public override void ProcessParameters(Mogre.NameValuePairList parameters)
        {
            Mogre.NameValuePairList.Iterator ni;

            if ((ni = parameters.Find("Name")) != parameters.End())
                this.name = ni.Value;

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

            this.compositorStorage.Clear();
            for (int cx = 0; cx < 100; ++cx)
            {
                string searchstr = "Compositor" + Mogre.StringConverter.ToString(cx);
                if ((ni = parameters.Find(searchstr + "Name")) != parameters.End())
                {
                    CompositorPush compData = new CompositorPush();
                    compData.Name = ni.Value;
                    ni = parameters.Find(searchstr + "Enabled");
                    compData.Enabled = Mogre.StringConverter.ParseBool(ni.Value);
                    this.compositorStorage.Add(compData);
                }
                else
                    break;
            }
        }

        public override void GetObjectProperties(Mogre.NameValuePairList retList)
        {
            retList.Clear();
            retList["Name"] = this.name;
            retList["Colour"] = Mogre.StringConverter.ToString(this.colour);
            retList["Index"] = Mogre.StringConverter.ToString(ViewportIndex);
            retList["Dimensions"] = Mogre.StringConverter.ToString(this.dimensions);
            retList["Overlays"] = Mogre.StringConverter.ToString(this.overlays);
            retList["Skies"] = Mogre.StringConverter.ToString(this.skies);
            retList["Shadows"] = Mogre.StringConverter.ToString(this.shadows);
            retList["CamPosition"] = Mogre.StringConverter.ToString(ViewCamera.Position);
            retList["CamOrientation"] = Mogre.StringConverter.ToString(ViewCamera.Orientation);
            retList["CamFOV"] = Mogre.StringConverter.ToString(ViewCamera.FOV);
            retList["CamPolyMode"] = Mogre.StringConverter.ToString((int)ViewCamera.Camera.PolygonMode);
            retList["CamClipDistance"] = Mogre.StringConverter.ToString(ViewCamera.ClipDistance);

            Mogre.CompositorManager comMngr = Mogre.CompositorManager.Singleton;
            if (!comMngr.HasCompositorChain(this.handle))
                return;

            int count = 0;
            Mogre.CompositorChain chain = comMngr.GetCompositorChain(this.handle);
            foreach (Mogre.CompositorInstance compositor in chain.GetCompositors())
            {
                Mogre.Compositor sub = compositor.Compositor;
                if (sub == null)
                    continue;

                if (sub.Name.Substring(1, 7) == "_Hydrax")
                    continue;

                string compId = "Compositor" + Mogre.StringConverter.ToString(count);
                retList[compId + "Name"] = sub.Name;
                retList[compId + "Enabled"] = Mogre.StringConverter.ToString(compositor.Enabled);
                count++;
            }
        }

        protected override void SetNameImpl(string name)
        {
            if (name == this.name)
                return;

            name = name.Trim();

            if (MogitorsRoot.Instance.FindObject(name, 0) == null)
            {
                UnRegisterObjectName();
                this.name = name;
                RegisterObjectName();
            }

            OnPropertyChanged("Name");

            Modified = true;
        }

        public override void ShowBoundingBox(bool bShow)
        {
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

            this.handle = MogitorsRoot.Instance.RenderTarget.AddViewport(ViewCamera.Camera, (int)ViewportIndex,
                dimensions.x, dimensions.y, dimensions.z, dimensions.w);

            if (Name == "")
            {
                this.name = "Viewport" + Mogre.StringConverter.ToString(ViewportIndex);
            }

            ViewCamera.Camera.AspectRatio = (float)this.handle.ActualWidth / (float)this.handle.ActualHeight;
            ViewCamera.ShowHelper = false;

            ActiveCamera = ViewCamera;
            this.handle.BackgroundColour = this.colour;

            PopCompositors();

            ProjectOptions opt = MogitorsRoot.Instance.ProjectOptions;
            if (opt.Cameras.Count > 0)
            {
                ViewCamera.Position = opt.Cameras[opt.Cameras.Count - 1].Position;
                ViewCamera.Orientation = opt.Cameras[opt.Cameras.Count - 1].Orientation;
            }
            
            LoadEditorObjects();
        }

        private void PopCompositors()
        {
            if (this.compositorStorage.Count == 0)
                return;

            Mogre.CompositorManager comMngr = Mogre.CompositorManager.Singleton;
            if (comMngr.HasCompositorChain(this.handle))
                comMngr.GetCompositorChain(this.handle).RemoveAllCompositors();

            foreach (CompositorPush compData in this.compositorStorage)
            {
                comMngr.AddCompositor(this.handle, compData.Name);
                comMngr.SetCompositorEnabled(this.handle, compData.Name, compData.Enabled);
            }
            this.compositorStorage.Clear();
            Modified = true;
        }

        private void LoadEditorObjects()
        {
            //throw new NotImplementedException("LoadEditorObjects");
        }

        private void PushCompositors(Mogre.Camera camera)
        {
            if (this.handle != null && this.handle.Camera == camera)
            {
                this.compositorStorage.Clear();

                Mogre.CompositorManager comMngr = Mogre.CompositorManager.Singleton;
                if (!comMngr.HasCompositorChain(this.handle))
                    return;

                Mogre.CompositorChain chain = comMngr.GetCompositorChain(this.handle);

                foreach (Mogre.CompositorInstance compositor in chain.GetCompositors())
                {
                    CompositorPush compData = new CompositorPush();
                    compData.Name = compositor.Compositor.Name;
                    compData.Enabled = compositor.Enabled;
                    this.compositorStorage.Add(compData);
                }
            }
        }
        #endregion

        #region Public Methods
        public int GetRect(ref Mogre.Vector4 rect)
        {
            if (this.handle != null)
            {
                int left, top, width, height;
                this.handle.GetActualDimensions(out left, out top, out width, out height);
                rect.x = left;
                rect.y = top;
                rect.z = width;
                rect.w = height;
            }
            else
            {
                float width = MogitorsRoot.Instance.RenderTarget.Width;
                float height = MogitorsRoot.Instance.RenderTarget.Height;
                rect.x = width * this.dimensions.x;
                rect.y = height * this.dimensions.y;
                rect.z = width * this.dimensions.z;
                rect.w = height * this.dimensions.w;
            }
            return (int)ViewportIndex;
        }

        public void RenderTargetResized(double viewportWidth, double viewportHeight)
        {
            if (this.handle != null && ActiveCamera != null)
            {
                ActiveCamera.Camera.AspectRatio = (float)(viewportWidth / viewportHeight);
                ActiveCamera.Camera.Yaw(new Mogre.Radian(0));
            }
        }

        public void UpdateAutoCameraPosition(float time)
        {
            if (ActiveCamera == null)
                return;

            if (this.newCamPosition != Mogre.Vector3.ZERO)
            {
                Mogre.Vector3 curPos = ActiveCamera.DerivedPosition;
                Mogre.Vector3 diff = this.newCamPosition - curPos;

                if (diff.Length > 0.03f)
                {
                    curPos += diff * System.Math.Min(time * 3.0f, 1.0f);
                }
                else
                {
                    this.newCamPosition = Mogre.Vector3.ZERO;
                }
                ActiveCamera.DerivedPosition = curPos;
            }
        }

        public virtual void OnMouseMove(Mogre.Vector2 point, MouseDevice mouseDevice, bool imitate)
        {
            this.lastMouseDevice = mouseDevice;

            if (isSettingPos)
            {
                isSettingPos = false;
                this.lastMouse = point;
                return;
            }

            float deltaX = (point.x - lastMouse.x) * 0.5f;
            float deltaY = (point.y - lastMouse.y) * 0.5f;

            MogitorsRoot mogRoot = MogitorsRoot.Instance;

            if (!imitate)
            {
                if (mouseDevice.MiddleButton == MouseButtonState.Pressed)
                {
                    Mogre.Vector3 vPos = ActiveCamera.DerivedPosition;
                    Mogre.Vector3 vDelta = new Mogre.Vector3(deltaX * CameraSpeed / 3.0f, -deltaY * CameraSpeed / 3.0f, 0);
                    ActiveCamera.DerivedPosition = (vPos + (ActiveCamera.DerivedOrientation * vDelta));
                    this.newCamPosition = Mogre.Vector3.ZERO;
                    MogitorsSystem.Instance.ShowMouseCursor(false);

                    point.x -= (deltaX * 2.0f);
                    point.y -= (deltaY * 2.0f);

                    isSettingPos = true;
                    MogitorsSystem.Instance.SetMousePosition(point + new Mogre.Vector2(this.handle.ActualLeft, this.handle.ActualTop));
                }
                else if (mouseDevice.RightButton == MouseButtonState.Pressed)
                {
                    ActiveCamera.Yaw(new Mogre.Degree(-deltaX / 4.0f));
                    ActiveCamera.Pitch(new Mogre.Degree(-deltaY / 4.0f));
                    MogitorsSystem.Instance.ShowMouseCursor(false);

                    point.x -= (deltaX * 2.0f);
                    point.y -= (deltaY * 2.0f);

                    isSettingPos = true;
                    MogitorsSystem.Instance.SetMousePosition(point + new Mogre.Vector2(this.handle.ActualLeft, this.handle.ActualTop));
                }
            }

            this.lastMouse = point;
        }

        public virtual void OnMouseLeave(Mogre.Vector2 point, MouseDevice mouseDevice)
        {
            this.lastMouseDevice = mouseDevice;
            this.lastMouse = new Mogre.Vector2(-1, -1);

            MogitorsSystem.Instance.ShowMouseCursor(true);
        }

        public virtual void OnMouseRightDown(Mogre.Vector2 point, MouseDevice mouseDevice)
        {
            this.lastMouse = point;
            this.lastMouseDevice = mouseDevice;
        }

        public virtual void OnMouseRightUp(Mogre.Vector2 point, MouseDevice mouseDevice)
        {
            this.lastMouse = point;
            this.lastMouseDevice = mouseDevice;
            MogitorsSystem.Instance.SetMouseCursor(Cursors.Arrow);
            MogitorsSystem.Instance.ShowMouseCursor(true);
        }

        public virtual void OnMouseMiddleDown(Mogre.Vector2 point, MouseDevice mouseDevice)
        {
            this.lastMouse = point;
            this.lastMouseDevice = mouseDevice;
        }

        public virtual void OnMouseMiddleUp(Mogre.Vector2 point, MouseDevice mouseDevice)
        {
            this.lastMouse = point;
            this.lastMouseDevice = mouseDevice;
            MogitorsSystem.Instance.ShowMouseCursor(true);
        }

        public virtual void OnMouseWheel(Mogre.Vector2 point, float delta, MouseDevice mouseDevice)
        {
            this.lastMouse = point;
            this.lastMouseDevice = mouseDevice;

            if (ActiveCamera == null)
                return;
            Mogre.Vector3 vPos = ActiveCamera.DerivedPosition;

            Mogre.Vector3 vDelta = new Mogre.Vector3(0, 0, delta / 16.0f) * CameraSpeed;
            vPos = vPos - (ActiveCamera.DerivedOrientation * vDelta);
            this.newCamPosition = vPos;
        }

        public static void ResetCommonValues()
        {
            CameraSpeed = 1.0f;
            Instance.EditorTool = EditorTools.Select;
            isSettingPos = false;
        }

        public virtual void DeleteSelectedObject(bool silent)
        {
            BaseEditor selected = MogitorsRoot.Instance.Selected;
            if (selected == null || !selected.Supports(EditFlags.CanDelete))
                return;

            bool cont = false;
            if (!silent)
            {
                string strWarn;
                if (selected.IsNodeType)
                    strWarn = "Are you sure want to delete " + selected.Name + " and all of its children?";
                else if (selected.EditorType == EditorType.Multisel)
                    strWarn = "Are you sure want to delete all selected objects?";
                else
                    strWarn = "Are you sure want to delete " + selected.Name + "?";

                if (MogitorsSystem.Instance.DisplayMessageDialog(strWarn, MessageBoxButton.YesNo) == MessageBoxResult.Yes)
                    cont = true;
            }
            else
                cont = true;

            if (!cont)
                return;

            BaseEditor delEd = selected;

            if (delEd.EditorType == EditorType.Multisel)
                throw new System.NotImplementedException("Delete MultiSelEditor");
            else
                MogitorsRoot.Instance.DestroyEditorObject(delEd, true);
        }
        #endregion

        #region Constructors
        static ViewportEditor()
        {
            CameraSpeed = 1.0f;
        }
        #endregion
    }

    class ViewportEditorFactory : BaseEditorFactory
    {
        private uint lastZOrder;

        public ViewportEditorFactory()
        {
            TypeName = "Viewport Object";
            Capabilities = EditFlags.CanDelete | EditFlags.CanUndo;
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

        public override string Icon
        {
            get
            {
                return "Icons/viewport.png";
            }
        }
    }
}
