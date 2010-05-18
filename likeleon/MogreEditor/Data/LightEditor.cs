using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Mogre;

namespace Mogitor.Data
{
    class LightEditor : BaseEditor
    {
        #region Properties
        public static new LightEditorFactory Factory
        {
            get { return lightEditorFactory; }
        }

        public Vector3 Position
        {
            get
            {
                return this.position;
            }
            set
            {
                if (this.handle != null)
                    this.handle.SetPosition(value.x, value.y, value.z);

                this.position = value;
                Modified = true;

                OnPropertyChanged("Position");
            }
        }

        public Quaternion Orientation
        {
            get { return this.orientation; }
            set
            {
                Vector3 direction = new Vector3(0, 0, 1);
                direction = value * direction;

                if (this.handle != null)
                    this.handle.SetDirection(direction.x, direction.y, direction.z);

                this.orientation = value;
                this.direction = direction;
                Modified = true;

                OnPropertyChanged("Orientation");
            }
        }

        public Vector3 Direction
        {
            get { return this.direction; }
            set
            {
                this.direction = value.NormalisedCopy;
                if (this.handle != null)
                {
                    this.handle.Direction = this.direction;
                    CalculateOrientation();
                }

                Modified = true;

                OnPropertyChanged("Direction");
            }
        }

        public ColourValue Diffuse
        {
            get { return this.diffuse; }
            set
            {
                if (this.handle != null)
                    this.handle.SetDiffuseColour(value.r, value.g, value.b);

                this.diffuse = value;
                Modified = true;

                OnPropertyChanged("Diffuse");
            }
        }

        public ColourValue Specular
        {
            get { return this.specular; }
            set
            {
                if (this.handle != null)
                    this.handle.SetSpecularColour(value.r, value.g, value.b);

                this.specular = value;
                Modified = true;

                OnPropertyChanged("Specular");
            }
        }

        public Vector3 Range
        {
            get { return this.range; }
            set
            {
                if (this.handle != null && this.handle.Type == Light.LightTypes.LT_POINT)
                    this.handle.SetSpotlightRange(new Degree(value.x), new Degree(value.y), value.z);

                this.range = value;

                Modified = true;

                OnPropertyChanged("LightRange");
            }
        }

        public Vector4 Attenuation
        {
            get { return this.attenuation; }
            set
            {
                if (this.handle != null)
                    this.handle.SetAttenuation(value.x, value.y, value.z, value.w);

                this.attenuation = value;

                Modified = true;

                OnPropertyChanged("Attenuation");
            }
        }

        public float Power
        {
            get { return this.power; }
            set
            {
                if (this.handle != null)
                    this.handle.PowerScale = value;

                this.power = value;
                Modified = true;

                OnPropertyChanged("Power");
            }
        }

        public bool CastShadows
        {
            get { return this.castShadows; }
            set
            {
                if (this.handle != null)
                    this.handle.CastShadows = value;
                this.castShadows = value;
                Modified = true;

                OnPropertyChanged("CastShadows");
            }
        }

        public Light.LightTypes LightType
        {
            get { return this.lightType; }
            set
            {
                this.lightType = value;

                Modified = true;
                OnPropertyChanged("LightType");
            }
        }
        #endregion

        #region Overrides BaseEditor
        public override BaseEditorFactory FactoryDynamic
        {
            get
            {
                return lightEditorFactory;
            }
        }

        //protected override AxisAlignedBox GetAABB()
        //{
        //    return MogreX.AxisAlignedBox.Null;
        //}

        public override Vector3 DerivedPosition
        {
            get
            {
                if (this.handle != null)
                    return this.handle.DerivedPosition;
                else
                    return Parent.DerivedPosition + Parent.DerivedOrientation * this.position;
            }
            set
            {
                if (Parent != null)
                {
                    Quaternion qParent = Parent.DerivedOrientation.Inverse();
                    Vector3 vParent = Parent.DerivedPosition;
                    Vector3 newPos = (value - vParent);
                    value = qParent * newPos;
                }
                SetPosition(value);
            }
        }

        public override Quaternion DerivedOrientation
        {
            get
            {
                if (Parent != null)
                    return Parent.DerivedOrientation * this.orientation;
                else
                    return this.orientation;
            }
        }

        public override bool Load()
        {
            if (IsLoaded)
                return false;

            if (!Parent.Load())
                return false;

            this.handle = MogitorsRoot.Instance.SceneManager.CreateLight(Name);

            this.handle.SetPosition(this.position.x, this.position.y, this.position.z);
            this.handle.SetDirection(this.direction.x, this.direction.y, this.direction.z);
            this.handle.SetDiffuseColour(this.diffuse.r, this.diffuse.g, this.diffuse.b);
            this.handle.SetSpecularColour(this.specular.r, this.diffuse.g, this.diffuse.b);
            this.handle.Type = this.lightType;

            if (this.lightType == Light.LightTypes.LT_SPOTLIGHT)
                this.handle.SetSpotlightRange(new Degree(this.range.x), new Degree(this.range.y), this.range.z);

            this.handle.SetAttenuation(this.attenuation.x, this.attenuation.y, this.attenuation.z, this.attenuation.w);
            this.handle.CastShadows = this.castShadows;
            this.handle.PowerScale = this.power;

            Parent.Node.AttachObject(this.handle);

            CalculateOrientation();

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
                this.handle._getManager().DestroyLight(this.handle);
                this.handle = null;
            }

            IsLoaded = false;
            return true;
        }

        public override void ProcessParameters(NameValuePairList parameters)
        {
            NameValuePairList.Iterator ni;

            if ((ni = parameters.Find("Name")) != parameters.End())
                this.name = ni.Value;

            if ((ni = parameters.Find("Position")) != parameters.End())
                this.position = StringConverter.ParseVector3(ni.Value);

            if ((ni = parameters.Find("Orientation")) != parameters.End())
                this.orientation = StringConverter.ParseQuaternion(ni.Value);

            if ((ni = parameters.Find("Direction")) != parameters.End())
                this.direction = StringConverter.ParseVector3(ni.Value);

            if ((ni = parameters.Find("LightType")) != parameters.End())
                this.lightType = (Light.LightTypes)Enum.Parse(typeof(Light.LightTypes), ni.Value);

            if ((ni = parameters.Find("Diffuse")) != parameters.End())
                this.diffuse = StringConverter.ParseColourValue(ni.Value);

            if ((ni = parameters.Find("Specular")) != parameters.End())
                this.specular = StringConverter.ParseColourValue(ni.Value);

            if ((ni = parameters.Find("LightRange")) != parameters.End())
                this.range = StringConverter.ParseVector3(ni.Value);

            if ((ni = parameters.Find("Attenuation")) != parameters.End())
                this.attenuation = MogreX.StringConverter.ParseVector4(ni.Value);

            if ((ni = parameters.Find("Power")) != parameters.End())
                this.power = StringConverter.ParseReal(ni.Value);

            if ((ni = parameters.Find("CastShadows")) != parameters.End())
                this.castShadows = StringConverter.ParseBool(ni.Value);
        }

        public override void GetObjectProperties(NameValuePairList retList)
        {
            retList.Clear();
            retList["Name"] = Name;
            retList["LightType"] = LightType.ToString();
            retList["Position"] = StringConverter.ToString(Position);
            retList["Direction"] = StringConverter.ToString(Direction);
            retList["Diffuse"] = StringConverter.ToString(Diffuse);
            retList["Specular"] = StringConverter.ToString(Specular);
            retList["LightRange"] = StringConverter.ToString(Range);
            retList["Attenuation"] = StringConverter.ToString(Attenuation);
            retList["CastShadows"] = StringConverter.ToString(CastShadows);
            retList["Power"] = StringConverter.ToString(Power);
        }

        public override bool UsesGizmos
        {
            get
            {
                return true;
            }
        }

        public override object Handle
        {
            get
            {
                return this.handle as object;
            }
        }
        #endregion

        #region Private Methods
        private void SetPosition(Vector3 position)
        {
            if (this.handle != null)
                this.handle.SetPosition(position.x, position.y, position.z);

            this.position = position;
            Modified = true;

            OnPropertyChanged("Position");
        }

        private void CalculateOrientation()
        {
            Vector3 direction = this.handle.DerivedDirection;
            Vector3 normal = Vector3.UNIT_Z;
            this.orientation = normal.GetRotationTo(direction);
        }
        #endregion

        #region Fields
        private static readonly LightEditorFactory lightEditorFactory = new LightEditorFactory();
        private Light handle;
        private Vector3 position = Vector3.ZERO;
        private Quaternion orientation = Quaternion.IDENTITY;
        private Light.LightTypes lightType = Light.LightTypes.LT_POINT;
        private Vector3 direction = Vector3.UNIT_Z;
        private ColourValue diffuse = new ColourValue(1, 1, 1, 1);
        private ColourValue specular = new ColourValue(0, 0, 0);
        private Vector3 range = new Vector3(15, 30, 1.0f);
        private Vector4 attenuation = new Vector4(100.0f, 1.0f, 0.5f, 0.0f);
        private float power = 1.0f;
        private bool castShadows = true;
        #endregion
    }

    class LightEditorFactory : BaseEditorFactory
    {
        public LightEditorFactory()
        {
            TypeName = "Light Object";
            Capabilities = EditFlags.CanMove | EditFlags.CanRotate | EditFlags.CanClone | EditFlags.CanDelete |
                EditFlags.CanFocus | EditFlags.CanFocus | EditFlags.CanDrag | EditFlags.CanUndo | EditFlags.CanAcceptCopy;
        }

        public override EditorType EditorType
        {
            get
            {
                return EditorType.Light;
            }
        }

        public override BaseEditor CreateObject(ref BaseEditor parent, Mogre.NameValuePairList parameters)
        {
            LightEditor obj = new LightEditor();

            NameValuePairList.Iterator ni;
            if ((ni = parameters.Find("Init")) != parameters.End())
            {
                parameters["Name"] = "Light" + MogitorsRoot.Instance.CreateUniqueID("Light", "", -1);
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
                return "Icons/light.png";
            }
        }

        public override bool AddToObjectList
        {
            get
            {
                return true;
            }
        }

        public override bool RequirePlacement
        {
            get
            {
                return true;
            }
        }

        public override string PlaceHolderName
        {
            get
            {
                return "scbLight_Omni.mesh";
            }
        }
    }
}
