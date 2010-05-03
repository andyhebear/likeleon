﻿using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Media;
using Mogitor.Data;

namespace Mogitor.Controls
{
    [TemplatePart(Name = "PART_ListBox", Type = typeof(ListBox))]
    class EntityViewControl : Control, MogitorsRoot.IDragDropHandler
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
        private ListBox iconsListBox;
        #endregion

        #region Public Methods
        public void PrepareView()
        {
            CreateImages(Icons, true);
        }

        public override void OnApplyTemplate()
        {
            base.OnApplyTemplate();

            this.iconsListBox = this.Template.FindName("PART_ListBox", this) as ListBox;
            this.iconsListBox.PreviewMouseLeftButtonDown += (s, e) =>
                {
                    ListBox listBox = s as ListBox;
                    ImageEntry imageEntry = GetObjectDataFromPoint(listBox, e.GetPosition(listBox)) as ImageEntry;
                    if (imageEntry != null)
                    {
                        DragDrop.DoDragDrop(listBox, new DragData(this, imageEntry), DragDropEffects.Copy);
                    }
                };
        }

        public void ClearView()
        {
            Icons.Clear();
        }
        #endregion

        #region Constructor
        public EntityViewControl()
        {
            Icons = new ObservableCollection<ImageEntry>();

            MogitorsRoot.Instance.RegisterDragDropHandler(this, this);
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
        private void CreateImages(ObservableCollection<ImageEntry> retlist, bool skipCached)
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
                string addstrFile = MogitorsSystem.Instance.CombinePath(MogitorsRoot.Instance.ProjectOptions.ProjectDir, addstr + ".png");
                
                if (!skipCached || !System.IO.File.Exists(addstrFile))
                {
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
                    rttTex.WriteContentsToFile(addstrFile);

                    entity.ParentSceneNode.DetachObject(entity);
                    sceneMgr.DestroyEntity(entity);
                }

                retlist.Add(new ImageEntry(addstr.Remove(addstr.Length - 5, 5), addstrFile));
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

        #region Implements IDragDropHandlerref 
        bool MogitorsRoot.IDragDropHandler.OnDrageEnter(DragData dragData)
        {
            ImageEntry imageEntry = dragData.SourceObject as ImageEntry;
            if (imageEntry == null)
                return false;

            dragData.ObjectType = "Entity Object";
            dragData.Parameters["Init"] = "true";
            dragData.Parameters["MeshFile"] = imageEntry.Name + ".mesh";
            dragData.Parameters["Position"] = "999999 999999 999999";

            BaseEditor parent = MogitorsRoot.Instance.SceneManagerEditor;
            dragData.Object = EntityEditor.Factory.CreateObject(ref parent, dragData.Parameters);
            dragData.Object.Load();

            ((dragData.Object.Handle) as Mogre.Entity).SetMaterialName("scbMATWIREFRAME");
            ((dragData.Object.Handle) as Mogre.Entity).QueryFlags = 0;

            return true;
        }

        void MogitorsRoot.IDragDropHandler.OnDragLeave(DragData dragData)
        {
            if (dragData.Object != null)
                dragData.Object.Destroy(false);

            dragData.Object = null;
        }

        bool MogitorsRoot.IDragDropHandler.OnDragOver(DragData dragData, Mogre.Viewport vp, Mogre.Vector2 position)
        {
            if (dragData.Object == null)
                return false;

            Mogre.Ray mouseRay = vp.Camera.GetCameraToViewportRay(position.x, position.y);

            EntityEditor entity = dragData.Object as EntityEditor;

            bool hitFound = false;
            if (!hitFound)
            {
                if (entity.Position.x == 999999 && entity.Position.y == 999999 && entity.Position.z == 999999)
                    entity.Position = mouseRay.Origin + mouseRay.Direction * 40.0f;
                else
                    entity.Position = MogitorsRoot.Instance.GetGizmoIntersectCameraPlane(entity, mouseRay);
            }

            return true;
        }

        void MogitorsRoot.IDragDropHandler.OnDragDrop(DragData dragData, Mogre.Viewport vp, Mogre.Vector2 position)
        {
            if (dragData.Object != null)
            {
                Mogre.NameValuePairList parameters = new Mogre.NameValuePairList();
                dragData.Object.GetObjectProperties(parameters);
                dragData.Object.Destroy(false);
                dragData.Object = null;

                dragData.Parameters["Position"] = parameters["Position"];

                MogitorsRoot.Instance.CreateEditorObject(null, dragData.ObjectType, dragData.Parameters, true, true);
            }

            dragData.Parameters.Clear();
            dragData.ObjectType = "";
            dragData.Object = null;
        }

        void MogitorsRoot.IDragDropHandler.OnDragWheel(DragData dragData, Mogre.Viewport vp, float delta)
        {
            if (dragData.Object == null)
                return;

            EntityEditor entity = dragData.Object as EntityEditor;
            Mogre.Vector3 vPos = entity.Position;
            float distance = (vPos - vp.Camera.DerivedPosition).Length + (delta / 120.0f);

            if (vPos.x == 999999 && vPos.y == 999999 && vPos.z == 999999)
                return;
            else
                vPos = vp.Camera.DerivedPosition + ((vPos - vp.Camera.DerivedPosition).NormalisedCopy * distance);

            entity.Position = vPos;
        }
        #endregion

        #region Helpers
        //gets the object for the element selected (from the point) in the listbox (source)
        private static object GetObjectDataFromPoint(ListBox source, Point point)
        {
            UIElement element = source.InputHitTest(point) as UIElement;
            if (element != null)
            {
                //get the object from the element
                object data = DependencyProperty.UnsetValue;
                while (data == DependencyProperty.UnsetValue)
                {
                    // try to get the object value for the corresponding element
                    data = source.ItemContainerGenerator.ItemFromContainer(element);

                    //get the parent and we will iterate again
                    if (data == DependencyProperty.UnsetValue)
                        element = VisualTreeHelper.GetParent(element) as UIElement;

                    //if we reach the actual listbox then we must break to avoid an infinite loop
                    if (element == source)
                        return null;
                }

                //return the data that we fetched only if it is not Unset value, 
                //which would mean that we did not find the data
                if (data != DependencyProperty.UnsetValue)
                    return data;
            }

            return null;
        }
        #endregion
    }
}
