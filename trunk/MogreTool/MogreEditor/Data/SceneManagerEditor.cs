using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;

namespace Mogitor.Data
{
    class SceneManagerEditor : BaseEditor
    {
        #region Properties
        public static new BaseEditorFactory Factory { get { return sceneManagerEditorFactory; } }

        public string SceneMangerType
        {
            get { return "OctreeSceneManager"; }
        }

        public bool SkyBoxActive
        {
            get { return this.skyBoxActive; }
            set
            {
                if (value && this.skyBoxMaterial == "")
                {
                    system.DisplayMessageDialog("You must first define a SkyBox Material!", MessageBoxButton.OK);
                    return;
                }

                this.skyBoxActive = value;
                if (this.handle != null)
                {
                    this.handle.SetSkyBox(this.skyBoxActive, this.skyBoxMaterial, this.skyBoxDistance);
                    if (this.skyBoxActive)
                    {
                        Mogre.SceneNode node = this.handle.SkyBoxNode;
                        foreach (Mogre.MovableObject obj in node.GetAttachedObjectIterator())
                        {
                            obj.VisibilityFlags = 0x7F000000;
                        }
                    }
                }

                Modified = true;

                OnPropertyChanged("SkyBoxActive");
            }
        }

        public string SkyBoxMaterial
        {
            get { return this.skyBoxMaterial; }
            set
            {
                this.skyBoxMaterial = value;
                if (this.skyBoxMaterial == "")
                    SkyBoxActive = false;
                else if (this.handle != null && this.skyBoxActive)
                {
                    this.handle.SetSkyBox(this.skyBoxActive, this.skyBoxMaterial, this.skyBoxDistance);
                }
                Modified = true;

                OnPropertyChanged("SkyBoxMaterial");
            }
        }

        public float SkyBoxDistance
        {
            get { return this.skyBoxDistance; }
            set
            {
                this.skyBoxDistance = value;

                if (this.handle != null && this.skyBoxActive)
                {
                    this.handle.SetSkyBox(this.skyBoxActive, this.skyBoxMaterial, this.skyBoxDistance);
                }
                Modified = true;

                OnPropertyChanged("SkyBoxDistance");
            }
        }

        public Mogre.FogMode FogMode
        {
            get { return this.fogMode; }
            set
            {
                this.fogMode = value;

                if (this.handle != null)
                    this.handle.SetFog(this.fogMode, this.fogColour, this.fogDensity, this.fogStart, this.fogEnd);
                Modified = true;

                OnPropertyChanged("FogMode");
            }
        }

        public Mogre.ColourValue FogColour
        {
            get { return this.fogColour; }
            set
            {
                this.fogColour = value;

                if (this.handle != null)
                    this.handle.SetFog(this.fogMode, this.fogColour, this.fogDensity, this.fogStart, this.fogEnd);
                Modified = true;

                OnPropertyChanged("FogColour");
            }
        }

        public float FogStart
        {
            get { return this.fogStart; }
            set
            {
                this.fogStart = value;

                if (this.handle != null)
                    this.handle.SetFog(this.fogMode, this.fogColour, this.fogDensity, this.fogStart, this.fogEnd);
                Modified = true;

                OnPropertyChanged("FogStart");
            }
        }

        public float FogEnd
        {
            get { return this.fogEnd; }
            set
            {
                this.fogEnd = value;

                if (this.handle != null)
                    this.handle.SetFog(this.fogMode, this.fogColour, this.fogDensity, this.fogStart, this.fogEnd);
                Modified = true;

                OnPropertyChanged("FogEnd");
            }
        }

        public float FogDensity
        {
            get { return this.fogDensity; }
            set
            {
                this.fogDensity = value;

                if (this.handle != null)
                    this.handle.SetFog(this.fogMode, this.fogColour, this.fogDensity, this.fogStart, this.fogEnd);
                Modified = true;

                OnPropertyChanged("FogDensity");
            }
        }

        public Mogre.ColourValue Ambient
        {
            get { return this.ambient; }
            set
            {
                if (this.handle != null)
                    this.handle.AmbientLight = value;
                this.ambient = value;
                Modified = true;

                OnPropertyChanged("Ambient");
            }
        }
        #endregion

        #region Fields
        private static readonly SceneMangerEditorFactory sceneManagerEditorFactory = new SceneMangerEditorFactory();
        protected Mogre.SceneManager handle = null;
        protected bool skyBoxActive = false;
        protected string skyBoxMaterial = "";
        protected float skyBoxDistance = 5000;
        protected Mogre.FogMode fogMode = Mogre.FogMode.FOG_NONE;
        protected Mogre.ColourValue fogColour = new Mogre.ColourValue(0.5f, 0.5f, 0.5f);
        protected float fogStart = 0;
        protected float fogEnd = 1000;
        protected float fogDensity = 0;
        protected Mogre.ColourValue ambient = new Mogre.ColourValue(0.5f, 0.5f, 0.5f);
        #endregion

        #region Overrides BaseEditor
        public override object Handle { get { return this.handle as object; } }

        public override Mogre.SceneNode Node { get { return this.handle.RootSceneNode; } }

        public override Mogre.SceneManager SceneManager { get { return this.handle; } }

        public override BaseEditorFactory FactoryDynamic { get { return sceneManagerEditorFactory; } }

        public override bool Load()
        {
            if (IsLoaded)
                return true;

            if (Parent.Load() == false)
                return false;

            this.handle = Mogre.Root.Singleton.CreateSceneManager(SceneMangerType, Name);
            if (this.skyBoxActive)
                this.handle.SetSkyBox(this.skyBoxActive, this.skyBoxMaterial, this.skyBoxDistance);

            this.handle.SetFog(this.fogMode, this.fogColour, this.fogDensity, this.fogStart, this.fogEnd);
            this.handle.AmbientLight = this.ambient;

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
                Mogre.Root.Singleton.DestroySceneManager(this.handle);
                this.handle = null;
            }

            IsLoaded = false;
            return true;
        }
        #endregion
    }

    class SceneMangerEditorFactory : BaseEditorFactory
    {
        public override EditorType EditorType
        {
            get
            {
                return EditorType.SceneManager;
            }
        }

        public override BaseEditor CreateObject(ref BaseEditor parent, Mogre.NameValuePairList parameters)
        {
            SceneManagerEditor editor = new SceneManagerEditor();

            editor.ProcessParameters(parameters);
            editor.Parent = parent;
            editor.Load();

            this.instanceCount++;
            return editor;
        }

    }
}
