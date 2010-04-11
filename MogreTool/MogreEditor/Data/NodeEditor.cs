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
        public override object Handle
        {
            get
            {
                return this.handle as object;
            }
        }

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

        public override Mogre.SceneNode Node
        {
            get
            {
                return this.handle;
            }
        }
        #endregion

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
    }

    class NodeEditorFactory : BaseEditorFactory
    {
        public override EditorType EditorType
        {
            get
            {
                return EditorType.Node;
            }
        }
    }
}
