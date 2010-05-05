
namespace Mogitor.Data
{
    class CameraEditor : BaseEditor
    {
        #region Properties
        public static new CameraEditorFactory Factory
        {
            get { return cameraEditorFactory; }
        }

        public Mogre.Camera Camera
        {
            get { return this.handle; }
        }

        public bool ShowHelper
        {
            set { this.showHelper = value; }
        }

        public Mogre.Vector3 Position
        {
            get { return this.position; }
            set
            {
                if (this.handle != null)
                {
                    this.handle.SetPosition(value.x, value.y, value.z);
                    if (this.autoTrackTargetPtr != null)
                    {
                        this.handle.LookAt(this.autoTrackTargetPtr.Node._getDerivedPosition());
                        this.orientation = this.handle.Orientation;

                        OnPropertyChanged("Orientation");
                    }
                }

                this.position = value;
                Modified = true;

                OnPropertyChanged("Position");
            }
        }

        public Mogre.Quaternion Orientation
        {
            get { return this.orientation; }
            set
            {
                if (this.autoTrackTargetPtr != null)
                    return;

                if (this.handle != null)
                {
                    this.handle.Orientation = value;
                }

                this.orientation = value;
                Modified = true;

                OnPropertyChanged("Orientation");
            }
        }

        public Mogre.Vector2 ClipDistance
        {
            get { return this.clipDistance; }
            set
            {
                this.clipDistance = value;
                if (this.clipDistance.x < 0.05f)
                    this.clipDistance.x = 0.05f;

                if (this.handle != null)
                {
                    this.handle.NearClipDistance = this.clipDistance.x;
                    this.handle.FarClipDistance = this.clipDistance.y;
                }

                Modified = true;

                OnPropertyChanged("ClipDistance");
            }
        }

        public float FOV
        {
            get { return this.fov; }
            set
            {
                if (this.handle != null)
                {
                    this.handle.FOVy = new Mogre.Radian(value);
                }

                this.fov = value;

                Modified = true;

                OnPropertyChanged("FOV");
            }
        }

        public Mogre.PolygonMode PolygonMode
        {
            get { return this.polygonMode; }
            set
            {
                this.polygonMode = value;

                if (this.handle != null)
                {
                    this.handle.PolygonMode = this.polygonMode;

                    if (MogitorsRoot.Instance.ActiveViewport.CameraEditor == this)
                    {
                        Mogre.Viewport vp = MogitorsRoot.Instance.ActiveViewport.Handle as Mogre.Viewport;
                        if (value != Mogre.PolygonMode.PM_SOLID)
                            vp.SetVisibilityMask(0x7F000000);
                        else
                            vp.SetVisibilityMask(0xFFFFFFFF);
                    }
                }

                Modified = true;

                OnPropertyChanged("PolygonMode");
            }
        }
        #endregion

        #region Fields
        private static readonly CameraEditorFactory cameraEditorFactory = new CameraEditorFactory();
        private Mogre.Camera handle;
        private bool showHelper;
        private Mogre.Vector3 position = Mogre.Vector3.ZERO;
        private BaseEditor autoTrackTargetPtr;
        private Mogre.Quaternion orientation = Mogre.Quaternion.IDENTITY;
        private Mogre.Vector2 clipDistance = new Mogre.Vector2(1, 10000);
        private float fov = 1.0f;
        private Mogre.PolygonMode polygonMode = Mogre.PolygonMode.PM_SOLID;
        #endregion

        #region Overrides BaseEditor
        public override object Handle
        {
            get
            {
                return this.handle as object;
            }
        }

        public override BaseEditorFactory FactoryDynamic
        {
            get
            {
                return cameraEditorFactory;
            }
        }

        public override void ProcessParameters(Mogre.NameValuePairList parameters)
        {
            Mogre.NameValuePairList.Iterator ni;

            if ((ni = parameters.Find("Name")) != parameters.End())
                this.name = ni.Value;

            if ((ni = parameters.Find("Position")) != parameters.End())
                this.position = Mogre.StringConverter.ParseVector3(ni.Value);

            if ((ni = parameters.Find("Orientation")) != parameters.End())
                this.orientation = Mogre.StringConverter.ParseQuaternion(ni.Value);

            if ((ni = parameters.Find("ClipDistance")) != parameters.End())
                this.clipDistance = MogreX.StringConverter.ParseVector2(ni.Value);

            if ((ni = parameters.Find("FOV")) != parameters.End())
                this.fov = Mogre.StringConverter.ParseReal(ni.Value);
        }

        public override bool Load()
        {
            if (IsLoaded)
                return true;

            if (!Parent.Load())
                return false;

            this.handle = MogitorsRoot.Instance.SceneManager.CreateCamera(Name);

            this.handle.SetPosition(this.position.x, this.position.y, this.position.z);
            this.handle.Orientation = this.orientation;
            this.handle.NearClipDistance = this.clipDistance.x;
            this.handle.FarClipDistance = this.clipDistance.y;
            this.handle.FOVy = new Mogre.Radian(this.fov);

            Parent.Node.AttachObject(this.handle);

            IsLoaded = true;

            RegisterForPostSceneUpdates();

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
                this.handle.ParentSceneNode.DetachObject(this.handle);
                this.handle.SceneManager.DestroyCamera(this.handle);
                this.handle = null;
            }

            IsLoaded = false;
            return true;
        }

        public override void GetObjectProperties(Mogre.NameValuePairList retList)
        {
            retList.Clear();
            retList["Name"] = this.name;
            retList["Position"] = Mogre.StringConverter.ToString(this.position);
            retList["Orientation"] = Mogre.StringConverter.ToString(this.orientation);
            retList["ClipDistance"] = Mogre.StringConverter.ToString(this.clipDistance);
            retList["FOV"] = Mogre.StringConverter.ToString(this.fov);
        }

        public override Mogre.Vector3 DerivedPosition
        {
            get
            {
                if (this.handle != null)
                    return this.handle.DerivedPosition;
                else
                    return Parent.DerivedPosition + (Parent.DerivedOrientation * this.position);
            }
            set
            {
                if (Parent != null)
                {
                    Mogre.Quaternion qParent = Parent.DerivedOrientation.Inverse();
                    Mogre.Vector3 vParent = Parent.DerivedPosition;
                    Mogre.Vector3 newPos = (value - vParent);
                    value = qParent * newPos;
                }
                Position = value;
            }
        }

        public override Mogre.Quaternion DerivedOrientation
        {
            get
            {
                if (this.handle != null)
                    return this.handle.DerivedOrientation;
                else
                    return (Parent.DerivedOrientation * this.orientation);
            }
        }
        #endregion

        #region Public Methods
        public void Yaw(Mogre.Radian value)
        {
            if (this.handle != null)
            {
                this.handle.Yaw(value);
                Orientation = this.handle.Orientation;
            }
        }

        public void Pitch(Mogre.Radian value)
        {
            if (this.handle != null)
            {
                this.handle.Pitch(value);
                Orientation = this.handle.Orientation;
            }
        }
        #endregion
    }

    class CameraEditorFactory : BaseEditorFactory
    {
        public CameraEditorFactory()
        {
            TypeName = "Camera Object";
        }

        public override EditorType EditorType
        {
            get
            {
                return EditorType.Camera;
            }
        }

        public override BaseEditor CreateObject(ref BaseEditor parent, Mogre.NameValuePairList parameters)
        {
            CameraEditor obj = new CameraEditor();

            Mogre.NameValuePairList.Iterator ni;
            if ((ni = parameters.Find("Init")) != parameters.End())
            {
                parameters["Name"] = "Camera" + MogitorsRoot.Instance.CreateUniqueID("Camera", "", -1);
            }

            obj.ProcessParameters(parameters);
            obj.Parent = parent;

            InstanceCount++;
            return obj;
        }

        public override string Icon
        {
            get
            {
                return "Icons/camera.png";
            }
        }
    }
}
