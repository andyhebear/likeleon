using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Mogitor.Data
{
    class NodeEditor : BaseEditor
    {
        #region Fields
        protected Mogre.SceneNode handle = null;
        protected Mogre.Vector3 position = Mogre.Vector3.ZERO;
        protected string autoTrackTarget = "None";
        protected BaseEditor autoTrackTargetPtr = null;
        protected Mogre.Quaternion orientation = Mogre.Quaternion.IDENTITY;
        protected Mogre.Vector3 scale = new Mogre.Vector3(1, 1, 1);
        #endregion

        #region Properties
        public string AutoTrackTarget
        {
            get { return this.autoTrackTarget; }
        }

        public Mogre.Quaternion Orientation
        {
            get { return this.orientation; }
            set
            {
                if (this.autoTrackTargetPtr != null)
                    return;

                if (this.handle != null)
                    this.handle.SetOrientation(value.w, value.x, value.y, value.z);

                this.orientation = value;
                Modified = true;

                OnPropertyChanged("Orientation");
            }
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
                        this.handle.LookAt(this.autoTrackTargetPtr.Node._getDerivedPosition(), Mogre.Node.TransformSpace.TS_WORLD);
                        this.orientation = this.handle.Orientation;

                        OnPropertyChanged("Orientation");
                    }
                }

                this.position = value;
                Modified = true;

                OnPropertyChanged("Position");
            }
        }

        public Mogre.Vector3 Scale
        {
            get { return this.scale; }
            set
            {
                if (this.handle != null)
                    this.handle.SetScale(value);

                this.scale = value;
                Modified = true;

                OnPropertyChanged("Scale");
            }
        }
        #endregion

        #region Overrides BaseEditor
        public override object Handle
        {
            get
            {
                return this.handle as object;
            }
        }

        public override Mogre.SceneNode Node
        {
            get
            {
                return this.handle;
            }
        }

        public override bool Load()
        {
            if (IsLoaded)
                return true;

            if (!Parent.Load())
                return false;

            this.handle = Parent.Node.CreateChildSceneNode(Name, Position, Orientation);
            this.handle.SetScale(Scale);

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
                this.handle.ParentSceneNode.RemoveAndDestroyChild(this.name);
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

            if ((ni = parameters.Find("Position")) != parameters.End())
                this.position = Mogre.StringConverter.ParseVector3(ni.Value);

            if ((ni = parameters.Find("Orientation")) != parameters.End())
                this.orientation = Mogre.StringConverter.ParseQuaternion(ni.Value);

            if ((ni = parameters.Find("Scale")) != parameters.End())
                this.scale = Mogre.StringConverter.ParseVector3(ni.Value);

            if ((ni = parameters.Find("AutoTrackTarget")) != parameters.End())
                this.autoTrackTarget = ni.Value;
        }

        public override void GetObjectProperties(Mogre.NameValuePairList retList)
        {
            retList.Clear();
            retList["Name"] = this.name;
            retList["Position"] = Mogre.StringConverter.ToString(this.position);
            retList["Orientation"] = Mogre.StringConverter.ToString(this.orientation);
            retList["Scale"] = Mogre.StringConverter.ToString(this.scale);
            retList["AutoTrackTarget"] = this.autoTrackTarget;
        }

        public override Mogre.Vector3 DerivedPosition
        {
            get
            {
                if (this.handle != null)
                    return this.handle._getDerivedPosition();
                else
                    return Parent.DerivedPosition + (Parent.DerivedOrientation * (Parent.DerivedScale * this.position));
            }
        }

        public override Mogre.Quaternion DerivedOrientation
        {
            get
            {
                if (this.handle != null)
                    return this.handle._getDerivedOrientation();
                else
                    return (Parent.DerivedOrientation * this.orientation);
            }
        }

        public override Mogre.Vector3 DerivedScale
        {
            get
            {
                if (this.handle != null)
                    return this.handle._getDerivedScale();
                else
                    return (Parent.DerivedScale * this.scale);
            }
        }

        protected override Mogre.AxisAlignedBox GetAABB()
        {
            if (this.handle != null)
                return this.handle._getWorldAABB();
            else
                return Mogitor.MogreX.AxisAlignedBox.Null;
        }

        public override void ShowBoundingBox(bool bShow)
        {
            if (this.handle == null)
                return;

            this.handle.ShowBoundingBox = bShow;

            foreach (KeyValuePair<string, BaseEditor> child in Children)
            {
                BaseEditor current = child.Value;
                if (current.EditorType != EditorType.Movable && current.EditorType != EditorType.Entity && current.EditorType != EditorType.Base)
                {
                    current.ShowBoundingBox(bShow);
                }
            }
        }

        public override bool IsNodeType
        {
            get
            {
                return true;
            }
        }
        #endregion
    }

    class NodeEditorFactory : BaseEditorFactory
    {
        public NodeEditorFactory()
        {
            TypeName = "Node Object";
            Capabilities = EditFlags.CanMove | EditFlags.CanRotate | EditFlags.CanScale | EditFlags.CanFocus | EditFlags.CanDelete |
                EditFlags.CanDrag | EditFlags.CanDrop | EditFlags.CanUndo | EditFlags.CanAcceptCopy | EditFlags.CanAcceptPaste;
        }

        public override EditorType EditorType
        {
            get
            {
                return EditorType.Node;
            }
        }

        public override string Icon
        {
            get
            {
                return "Icons/node.png";
            }
        }
    }
}
