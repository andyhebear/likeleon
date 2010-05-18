using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.ComponentModel;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Media;
using Mogitor.Data;
using System.Reflection;

namespace Mogitor.Controls
{
    [TemplatePart(Name = "PART_ListBox", Type = typeof(ListBox))]
    class ObjectsView : Control, MogitorsRoot.IDragDropHandler
    {
        #region Fields
        ListBox iconsListBox;
        #endregion

        #region Public Properties
        public ObservableCollection<IconTextItem> Icons { get; private set; }
        #endregion

        #region Public Methods
        public override void OnApplyTemplate()
        {
            base.OnApplyTemplate();

            this.iconsListBox = this.Template.FindName("PART_ListBox", this) as ListBox;
            this.iconsListBox.PreviewMouseLeftButtonDown += (s, e) =>
            {
                ListBox listBox = s as ListBox;
                IconTextItem item = ControlHelper.GetObjectDataFromPoint(listBox, e.GetPosition(listBox)) as IconTextItem;
                if (item != null)
                {
                    DragDrop.DoDragDrop(listBox, new DragData(this, item), DragDropEffects.Copy);
                }
            };
        }

        public void PrepareView()
        {
            Icons.Clear();

            foreach (var iter in MogitorsRoot.Instance.EditorObjectFactories)
            {
                if (iter.Value == null || iter.Value.AddToObjectList == false)
                    continue;

                string iconName = "";
                if (iter.Value.Icon != "")
                    iconName = "../Resources/" + iter.Value.Icon;

                string itemName = iter.Value.TypeName;
                itemName = itemName.Replace(" Object", "");

                Icons.Add(new IconTextItem(itemName, iconName));
            }
        }
        #endregion

        #region Constructor
        public ObjectsView()
        {
            Icons = new ObservableCollection<IconTextItem>();

            MogitorsRoot.Instance.RegisterDragDropHandler(this, this);
        }
        #endregion

        #region Implements IDragDropHandler
        bool MogitorsRoot.IDragDropHandler.OnDrageEnter(DragData dragData)
        {
            IconTextItem item = dragData.SourceObject as IconTextItem;
            if (item == null)
                return false;

            BaseEditorFactory factory = MogitorsRoot.Instance.GetEditorObjectFactory(item.Name + " Object");

            if (factory == null)
                return false;

            dragData.ObjectType = factory.TypeName;

            string placeHolder = "";

            if (factory.RequirePlacement)
                placeHolder = factory.PlaceHolderName;

            if (placeHolder == "")
                return true;

            dragData.Parameters["Init"] = "true";
            dragData.Parameters["MeshFile"] = placeHolder;
            dragData.Parameters["Position"] = "999999 999999 999999";

            BaseEditor parent = MogitorsRoot.Instance.SceneManagerEditor;
            dragData.Object = EntityEditor.Factory.CreateObject(ref parent, dragData.Parameters);
            dragData.Object.Load();

            (dragData.Object.Handle as Mogre.Entity).SetMaterialName("scbMATWIREFRAME");
            (dragData.Object.Handle as Mogre.Entity).QueryFlags = 0;

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
            if (dragData.ObjectType == "")
                return false;

            if (dragData.Object == null)
                return true;

            Mogre.Ray mouseRay;
            mouseRay = vp.Camera.GetCameraToViewportRay(position.x, position.y);

            Mogre.Vector3 vPos = Mogre.Vector3.ZERO;
            PropertyInfo prop = dragData.Object.GetType().GetProperty("Position");
            if (prop != null)
                vPos = (Mogre.Vector3)prop.GetValue(dragData.Object, null);

            if (vPos.x == 999999 && vPos.y == 999999 && vPos.z == 999999)
                vPos = mouseRay.Origin + (mouseRay.Direction * 40.0f);
            else
                vPos = MogitorsRoot.Instance.GetGizmoIntersectCameraPlane(dragData.Object, mouseRay);

            if (prop != null)
                prop.SetValue(dragData.Object, vPos, null);

            return true;
        }

        void MogitorsRoot.IDragDropHandler.OnDragDrop(DragData dragData, Mogre.Viewport vp, Mogre.Vector2 position)
        {
            dragData.Parameters.Clear();
            dragData.Parameters["Init"] = "true";

            if (dragData.Object != null)
            {
                Mogre.NameValuePairList parameters = new Mogre.NameValuePairList();
                dragData.Object.GetObjectProperties(parameters);
                dragData.Object.Destroy(false);
                dragData.Object = null;

                dragData.Parameters["Position"] = parameters["Position"];
            }

            MogitorsRoot.Instance.CreateEditorObject(null, dragData.ObjectType, dragData.Parameters, true, true);

            dragData.Parameters.Clear();
            dragData.ObjectType = "";
            dragData.ObjectType = null;
        }

        void MogitorsRoot.IDragDropHandler.OnDragWheel(DragData dragData, Mogre.Viewport vp, float delta)
        {
            if (dragData.Object == null)
                return;

            Mogre.Vector3 vPos = Mogre.Vector3.ZERO;

            PropertyInfo prop = dragData.Object.GetType().GetProperty("Position");
            if (prop != null)
                vPos = (Mogre.Vector3)prop.GetValue(dragData.Object, null);
            float distance = (vPos - vp.Camera.DerivedPosition).Length + (delta / 120.0f);

            if (vPos.x == 999999 && vPos.y == 999999 && vPos.z == 999999)
                return;
            else
                vPos = vp.Camera.DerivedPosition + ((vPos - vp.Camera.DerivedPosition).NormalisedCopy * distance);

            prop.SetValue(dragData.ObjectType, vPos, null);
        }
        #endregion
    }
}
