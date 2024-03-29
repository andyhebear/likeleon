﻿using System;
using System.Collections.Generic;
using System.Windows.Input;
using System.Windows;
using Mogre;
using System.Reflection;

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
            get { return this.activeCamera; }
            private set
            {
                this.activeCamera = value;
                OnPropertyChanged("ActiveCamera");
            }
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

                MogitorsRoot.Instance.GizmoMode = editorTool;

                instance.OnPropertyChanged("EditorTool");
                OnPropertyChanged("EditorTool");
            }
        }

        public static ViewportEditor Instance
        {
            get { return instance; }
        }

        public static AxisType EditorAxis
        {
            get;
            set;
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
        private Mogre.Vector2 lastClickPoint = Mogre.Vector2.ZERO;
        private MouseDevice lastMouseDevice;
        private static bool isSettingPos = false;
        private static EditorTools editorTool = EditorTools.Select;
        private static readonly ViewportEditor instance = new ViewportEditor();
        private CameraEditor activeCamera;
        private static NameObjectPairList highLighted = new NameObjectPairList();
        private static bool isEditing = false;
        private Plane lastUsedPlane;
        private Vector3 lastDerivedPosition = Vector3.ZERO;
        private Vector3 last3DDelta = Vector3.ZERO;
        private Vector3 lastScale = Vector3.ZERO;
        private Quaternion lastDerivedOrient = Quaternion.IDENTITY;
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
            {
                this.camPolyMode = (Mogre.PolygonMode)Mogre.StringConverter.ParseInt(ni.Value);
                OnPropertyChanged("CamPolyMode");
            }

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
            retList["CamPolyMode"] = Mogre.StringConverter.ToString((int)ViewCamera.PolygonMode);
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
                system.SetTreeItemText(TreeItemHandle, name);
                UnRegisterObjectName();
                this.name = name;
                RegisterObjectName();
            }

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

        private void PushCompositors(Camera camera)
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

        private bool GetMouseRay(Vector2 point, out Ray ray)
        {
            if (this.activeCamera == null)
            {
                ray = new Mogre.Ray();
                return false;
            }

            float width = this.handle.ActualWidth;
            float height = this.handle.ActualHeight;
            ray = ActiveCamera.Camera.GetCameraToViewportRay(point.x / width, point.y / height);
            return true;
        }

        private void HighlightObjectAtPosition(Ray mouseRay)
        {
            BaseEditor selected = GetObjectUnderMouse(mouseRay, false, false);

            foreach (var iter in highLighted)
            {
                if (iter.Value != selected)
                    iter.Value.IsHighLighted = false;
            }
            highLighted.Clear();

            if (selected != null)
            {
                selected.IsHighLighted = true;
                highLighted.Add(selected.Name, selected);
            }
        }

        private void DoSelect(Ray mouseRay)
        {
            BaseEditor currentSelection = MogitorsRoot.Instance.Selected;
            BaseEditor newSelection = GetObjectUnderMouse(mouseRay, true, true);

            if (newSelection != null && newSelection != currentSelection)
            {
                newSelection.UpdateTreeView();

                EditorAxis = AxisType.None;
            }
            else if (newSelection == null && currentSelection != null)
            {
                ClearSelection();
            }
        }

        private void ClearSelection()
        {
            MogitorsRoot.Instance.RootEditor.UpdateTreeView();
        }

        private BaseEditor GetObjectUnderMouse(Ray mouseRay, bool pickWidgets, bool pickTerrain)
        {
            Mogre.Entity result;
            Mogre.Vector3 hitLocation = new Mogre.Vector3();
            Mogre.RaySceneQuery raySceneQuery = MogitorsRoot.Instance.SceneManager.CreateRayQuery(new Mogre.Ray());
            BaseEditor selected = null;

            AxisType editorAxis = AxisType.None;
            if (pickWidgets && MogitorsRoot.Instance.PickGizmos(mouseRay, ref editorAxis))
            {
                selected = MogitorsRoot.Instance.Selected;
                EditorAxis = editorAxis;
            }
            else
            {
                raySceneQuery.QueryMask = ~QueryFlags.Widget;
                if (MogitorsRoot.Instance.PickEntity(raySceneQuery, mouseRay, out result, hitLocation, "", -1.0f) && result.Name != "HydraxMeshEnt")
                {
                    selected = MogitorsRoot.Instance.FindObject(result.Name, 0);
                }
            }
            MogitorsRoot.Instance.SceneManager.DestroyQuery(raySceneQuery);
            return selected;
        }

        private void SaveEditorStates(Ray mouseRay)
        {
            BaseEditor selected = MogitorsRoot.Instance.Selected;
            if (selected == null)
                return;

            PropertyInfo prop = selected.GetType().GetProperty("Scale");
            if (prop != null)
                this.lastScale = (Vector3)prop.GetValue(selected, null);
            else
                this.lastScale = new Vector3(1, 1, 1);

            this.lastDerivedOrient = selected.DerivedOrientation;
            this.lastDerivedPosition = selected.DerivedPosition;
            this.lastUsedPlane = MogitorsRoot.Instance.FindGizmoTranslationPlane(mouseRay, EditorAxis);
            this.last3DDelta = MogitorsRoot.Instance.GetGizmoIntersect(mouseRay, this.lastUsedPlane, EditorAxis, this.lastDerivedPosition);
        }
        #endregion

        #region Public Methods
        public int GetRect(ref Vector4 rect)
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

        public virtual void OnMouseMove(Vector2 point, MouseDevice mouseDevice, bool imitate)
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
            BaseEditor selected = mogRoot.Selected;

            Ray mouseRay;

            if (!imitate)
            {
                if (mouseDevice.MiddleButton == MouseButtonState.Pressed)
                {
                    Vector3 vPos = ActiveCamera.DerivedPosition;
                    Vector3 vDelta = new Vector3(deltaX * CameraSpeed / 3.0f, -deltaY * CameraSpeed / 3.0f, 0);
                    ActiveCamera.DerivedPosition = (vPos + (ActiveCamera.DerivedOrientation * vDelta));
                    this.newCamPosition = Vector3.ZERO;
                    MogitorsSystem.Instance.ShowMouseCursor(false);

                    point.x -= (deltaX * 2.0f);
                    point.y -= (deltaY * 2.0f);

                    isSettingPos = true;
                    MogitorsSystem.Instance.SetMousePosition(point + new Vector2(this.handle.ActualLeft, this.handle.ActualTop));
                }
                else if (mouseDevice.RightButton == MouseButtonState.Pressed)
                {
                    ActiveCamera.Yaw(new Degree(-deltaX / 4.0f));
                    ActiveCamera.Pitch(new Degree(-deltaY / 4.0f));
                    MogitorsSystem.Instance.ShowMouseCursor(false);

                    point.x -= (deltaX * 2.0f);
                    point.y -= (deltaY * 2.0f);

                    isSettingPos = true;
                    MogitorsSystem.Instance.SetMousePosition(point + new Vector2(this.handle.ActualLeft, this.handle.ActualTop));

                    if (!GetMouseRay(point, out mouseRay))
                        return;

                    if (mogRoot.Selected != null)
                        this.lastUsedPlane = MogitorsRoot.Instance.FindGizmoTranslationPlane(mouseRay, EditorAxis);
                }
            }

            if (!GetMouseRay(point, out mouseRay))
                return;

            if (EditorTool != EditorTools.Rotate || selected == null)
                this.lastMouse = point;

            if (selected != null)
            {
                if (EditorAxis == AxisType.None)
                {
                    AxisType axis = AxisType.None;
                    mogRoot.PickGizmos(mouseRay, ref axis);
                    mogRoot.HighlightGizmo(axis);
                }
                else
                {
                    mogRoot.HighlightGizmo(EditorAxis);
                }
            }

            if (isEditing && selected != null)
            {
                if ((EditorTool == EditorTools.Move) && selected.Supports(EditFlags.CanMove))
                {
                    Vector3 vNewPos = Vector3.ZERO;

                    vNewPos = mogRoot.GetGizmoIntersect(mouseRay, this.lastUsedPlane, EditorAxis, this.lastDerivedPosition);
                    vNewPos = vNewPos - this.last3DDelta + this.lastDerivedPosition;

                    selected.DerivedPosition = vNewPos;
                }
                else if ((EditorTool == EditorTools.Scale) && selected.Supports(EditFlags.CanScale))
                {
                    Vector3 vNewDist = mogRoot.GetGizmoIntersect(mouseRay, this.lastUsedPlane, EditorAxis, this.lastDerivedPosition);
                    Vector3 vScale = this.lastScale;
                    float fNewDist = vNewDist.Length;
                    float fLength = this.last3DDelta.Length;

                    if ((int)(EditorAxis & AxisType.X) != 0)
                        vScale.x *= (fNewDist / fLength);
                    if ((int)(EditorAxis & AxisType.Y) != 0)
                        vScale.y *= (fNewDist / fLength);
                    if ((int)(EditorAxis & AxisType.Z) != 0)
                        vScale.z *= (fNewDist / fLength);

                    PropertyInfo prop = selected.GetType().GetProperty("Scale");
                    if (prop != null)
                        prop.SetValue(selected, vScale, null);
                }
                else if ((EditorTool == EditorTools.Rotate) && selected.Supports(EditFlags.CanRotate))
                {
                    Quaternion q1 = this.lastDerivedOrient;

                    switch (EditorAxis)
                    {
                        case AxisType.X:
                            q1 = q1 * new Quaternion(new Degree(-deltaY), new Vector3(1, 0, 0));
                            break;
                        case AxisType.Y:
                            q1 = q1 * new Quaternion(new Degree(-deltaY), new Vector3(0, 1, 0));
                            break;
                        case AxisType.Z:
                            q1 = q1 * new Quaternion(new Degree(-deltaY), new Vector3(0, 0, 1));
                            break;
                    }

                    selected.DerivedOrientation = q1;
                }
            }

            HighlightObjectAtPosition(mouseRay);
        }

        public virtual void OnMouseLeave(Vector2 point, MouseDevice mouseDevice)
        {
            this.lastMouseDevice = null;

            foreach (var it in highLighted)
            {
                it.Value.IsHighLighted = false;
            }
            highLighted.Clear();

            this.lastMouse = new Mogre.Vector2(-1, -1);

            isEditing = false;

            MogitorsSystem.Instance.ShowMouseCursor(true);
        }

        public virtual void OnMouseLeftDown(Vector2 point, MouseDevice mouseDevice)
        {
            this.lastMouse = point;
            this.lastClickPoint = point;
            this.lastMouseDevice = mouseDevice;

            if (mouseDevice.RightButton == MouseButtonState.Pressed)
                return;

            Mogre.Ray mouseRay;
            GetMouseRay(this.lastMouse, out mouseRay);

            BaseEditor selected = MogitorsRoot.Instance.Selected;

            if (selected != null && selected == GetObjectUnderMouse(mouseRay, true, true))
            {
                SaveEditorStates(mouseRay);

                isEditing = true;
            }
            else
            {
                isEditing = false;
            }
        }

        public virtual void OnMouseLeftUp(Vector2 point, MouseDevice mouseDevice)
        {
            this.lastMouse = point;
            this.lastClickPoint = point;
            this.lastMouseDevice = mouseDevice;

            Mogre.Ray mouseRay;
            GetMouseRay(this.lastMouse, out mouseRay);

            EditorAxis = AxisType.None;

            MogitorsRoot.Instance.HighlightGizmo(AxisType.None);

            if (!isEditing)
            {
                if (editorTool >= EditorTools.Select && editorTool <= EditorTools.Scale)
                {
                    DoSelect(mouseRay);
                }
            }
            isEditing = false;
        }

        public virtual void OnMouseRightDown(Vector2 point, MouseDevice mouseDevice)
        {
            this.lastMouse = point;
            this.lastMouseDevice = mouseDevice;
        }

        public virtual void OnMouseRightUp(Vector2 point, MouseDevice mouseDevice)
        {
            this.lastMouse = point;
            this.lastMouseDevice = mouseDevice;
            MogitorsSystem.Instance.SetMouseCursor(Cursors.Arrow);
            MogitorsSystem.Instance.ShowMouseCursor(true);
        }

        public virtual void OnMouseMiddleDown(Vector2 point, MouseDevice mouseDevice)
        {
            this.lastMouse = point;
            this.lastMouseDevice = mouseDevice;
        }

        public virtual void OnMouseMiddleUp(Vector2 point, MouseDevice mouseDevice)
        {
            this.lastMouse = point;
            this.lastMouseDevice = mouseDevice;
            MogitorsSystem.Instance.ShowMouseCursor(true);
        }

        public virtual void OnMouseWheel(Vector2 point, float delta, MouseDevice mouseDevice)
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
            highLighted.Clear();
            Instance.EditorTool = EditorTools.Select;
            EditorAxis = AxisType.None;
            CameraSpeed = 1.0f;
            isEditing = false;
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

            EditorAxis = AxisType.None;
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

        public override BaseEditor CreateObject(ref BaseEditor parent, NameValuePairList parameters)
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
