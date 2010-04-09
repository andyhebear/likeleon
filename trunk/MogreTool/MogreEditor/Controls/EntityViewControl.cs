using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using Mogitor.Data;

namespace Mogitor.Controls
{
    class EntityViewControl : Control
    {
        #region Inner Class
        public class ImageEntry
        {
            public string Name { get; private set; }
            public string ImgFile { get; private set; }
            public ImageEntry(string name, string imgFile)
            {
                Name = name;
                ImgFile = imgFile;
            }
        };
        #endregion

        #region Fields
        public static readonly DependencyProperty FilterProperty =
            DependencyProperty.Register("Filter", typeof(string), typeof(EntityViewControl), new PropertyMetadata(OnFilterChanged));
        #endregion

        #region Public Methods
        public void PrepareView()
        {
            CreateImages(Icons);
        }
        #endregion

        #region Constructor
        public EntityViewControl()
        {
            Icons = new ObservableCollection<ImageEntry>();
        }
        #endregion

        #region Public Properties
        public ObservableCollection<ImageEntry> Icons { get; private set; }
        public string Filter
        {
            get { return (string)GetValue(FilterProperty); }
            set { SetValue(FilterProperty, value); }
        }
        #endregion

        #region Private Methods
        void CreateImages(ObservableCollection<ImageEntry> retlist)
        {
            retlist.Clear();

            Mogre.TexturePtr texture = Mogre.TextureManager.Singleton.CreateManual("EntityTex",
                Mogre.ResourceGroupManager.DEFAULT_RESOURCE_GROUP_NAME, Mogre.TextureType.TEX_TYPE_2D,
                256, 256, 0, Mogre.PixelFormat.PF_A8R8G8B8, (int)Mogre.TextureUsage.TU_RENDERTARGET);

            Mogre.RenderTexture rttTex = texture.GetBuffer().GetRenderTarget();
            Mogre.SceneManager sceneMgr = Mogre.Root.Singleton.CreateSceneManager("OctreeSceneManager", "EntityTexMgr");

            Mogre.Light dir1 = sceneMgr.CreateLight("DisplayLight");
            dir1.SetDirection(-1, -1, -1);
            dir1.SetDiffuseColour(1, 1, 1);
            dir1.Type = Mogre.Light.LightTypes.LT_DIRECTIONAL;

            Mogre.Camera RTTCam = sceneMgr.CreateCamera("EntityCam");
            RTTCam.NearClipDistance = 0.01F;
            RTTCam.FarClipDistance = 0;
            RTTCam.AspectRatio = 1;
            RTTCam.FOVy = new Mogre.Radian(new Mogre.Degree(90));
            RTTCam.Position = new Mogre.Vector3(0, 0, 1);
            RTTCam.LookAt(0, 0, 0);

            Mogre.Viewport v = rttTex.AddViewport(RTTCam);
            v.SetClearEveryFrame(true);
            v.BackgroundColour = new Mogre.ColourValue(0, 0, 0, 0);

            Mogre.StringVector list = Mogre.ResourceGroupManager.Singleton.FindResourceNames("ProjectResources", "*.mesh", false);

            IDictionary<string, string> entities = new Dictionary<string, string>(list.Count);
            foreach (string addstr in list)
            {
                if (entities.Values.Contains(addstr) == false)
                {
                    entities.Add(addstr, addstr);
                }
            }

            foreach (KeyValuePair<string, string> ite in entities)
            {
                string addstr = ite.Key;

                Mogre.Entity entity = sceneMgr.CreateEntity("scbDisplay", addstr);
                sceneMgr.RootSceneNode.AttachObject(entity);

                Mogre.Vector3 vSize = entity.BoundingBox.HalfSize;
                Mogre.Vector3 vCenter = entity.BoundingBox.Center;

                vSize += new Mogre.Vector3(vSize.z, vSize.z, vSize.z);

                float maxsize = Math.Max(Math.Max(vSize.x, vSize.y), vSize.z);

                vSize = new Mogre.Vector3(0, 0, maxsize * 1.1f) + vCenter;

                RTTCam.SetPosition(vSize.x, vSize.y, vSize.z);
                RTTCam.LookAt(vCenter.x, vCenter.y, vCenter.z);

                rttTex.Update();
                string addstrFile = MogitorsRoot.Instance.ProjectOptions.ProjectDir + addstr + ".png";
                rttTex.WriteContentsToFile(addstrFile);

                retlist.Add(new ImageEntry(addstr.Remove(addstr.Length - 5, 5), addstrFile));

                entity.ParentSceneNode.DetachObject(entity);
                sceneMgr.DestroyEntity(entity);
            }

            rttTex.RemoveAllViewports();
            Mogre.Root.Singleton.DestroySceneManager(sceneMgr);
            Mogre.Root.Singleton.DetachRenderTarget(rttTex.Name);
            Mogre.TextureManager.Singleton.Unload(texture.Name);
            Mogre.TextureManager.Singleton.Remove(texture.Name);

            list = null;
        }

        private static void OnFilterChanged(DependencyObject d, DependencyPropertyChangedEventArgs e)
        {
            EntityViewControl entityView = d as EntityViewControl;
            string filter = e.NewValue as string;

            ICollectionView view = CollectionViewSource.GetDefaultView(entityView.Icons);
            view.Filter = (object o) =>
                {
                    filter = filter.Trim();
                    if (filter.Length == 0)
                    {
                        return true;
                    }

                    ImageEntry imageEntry = o as ImageEntry;
                    return imageEntry.Name.ToLower().Contains(filter.ToLower());
                };
        }

        #endregion

        internal void ClearView()
        {
            Icons.Clear();
        }
    }
}
