using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Mogre;

namespace Mogitor.Data
{
    partial class MogitorsRoot
    {
        #region Fields
        private SceneNode gizmoNode;
        private SceneNode gizmoX;
        private SceneNode gizmoY;
        private SceneNode gizmoZ;
        private readonly Entity[] gizmoEntities = new Entity[3];
        private EditorTools oldGizmoMode = EditorTools.None;
        #endregion

        #region Private Methods
        private void CreateGizmo()
        {
            this.gizmoNode = SceneManager.RootSceneNode.CreateChildSceneNode("scbWidgetNode", new Vector3(0, 0, 0), Quaternion.IDENTITY);

            this.gizmoX = this.gizmoNode.CreateChildSceneNode("scbnwx", new Vector3(0, 0, 0), Quaternion.IDENTITY);
            this.gizmoY = this.gizmoNode.CreateChildSceneNode("scbnwy", new Vector3(0, 0, 0), Quaternion.IDENTITY);
            this.gizmoZ = this.gizmoNode.CreateChildSceneNode("scbnwz", new Vector3(0, 0, 0), Quaternion.IDENTITY);

            this.gizmoX.Yaw(new Degree(-90));
            this.gizmoY.Pitch(new Degree(90));
            this.gizmoZ.Yaw(new Degree(180));

            // Entities
            this.gizmoEntities[0] = SceneManager.CreateEntity("scbwx", "scbArrowEx.mesh");
            this.gizmoEntities[1] = SceneManager.CreateEntity("scbwy", "scbArrowEx.mesh");
            this.gizmoEntities[2] = SceneManager.CreateEntity("scbwz", "scbArrowEx.mesh");

            // ZZ arrows
            this.gizmoEntities[2].CastShadows = false;
            this.gizmoEntities[2].SetMaterialName("mtSCBBLUE");
            this.gizmoEntities[2].RenderQueueGroup = (byte)RenderQueueGroupID.RENDER_QUEUE_SKIES_LATE;
            this.gizmoEntities[2].QueryFlags = QueryFlags.Widget;
            this.gizmoZ.AttachObject(this.gizmoEntities[2]);

            // XX arrows
            this.gizmoEntities[0].CastShadows = false;
            this.gizmoEntities[0].SetMaterialName("mtSCBRED");
            this.gizmoEntities[0].RenderQueueGroup = (byte)RenderQueueGroupID.RENDER_QUEUE_SKIES_LATE;
            this.gizmoEntities[0].QueryFlags = QueryFlags.Widget;
            this.gizmoZ.AttachObject(this.gizmoEntities[0]);

            // YY arrows
            this.gizmoEntities[1].CastShadows = false;
            this.gizmoEntities[1].SetMaterialName("mtSCBGREEN");
            this.gizmoEntities[1].RenderQueueGroup = (byte)RenderQueueGroupID.RENDER_QUEUE_SKIES_LATE;
            this.gizmoEntities[1].QueryFlags = QueryFlags.Widget;
            this.gizmoZ.AttachObject(this.gizmoEntities[1]);

            this.gizmoNode.SetVisible(false);
        }

        private void DestroyGizmo()
        {
            if (this.gizmoNode == null)
                return;

            Entity dObj = this.gizmoX.GetAttachedObject(0) as Entity;
            this.gizmoNode.RemoveAndDestroyChild(this.gizmoX.Name);
            dObj._getManager().DestroyEntity(dObj);
            
            dObj = this.gizmoY.GetAttachedObject(0) as Entity;
            this.gizmoNode.RemoveAndDestroyChild(this.gizmoY.Name);
            dObj._getManager().DestroyEntity(dObj);

            dObj = this.gizmoZ.GetAttachedObject(0) as Entity;
            this.gizmoNode.RemoveAndDestroyChild(this.gizmoZ.Name);
            dObj._getManager().DestroyEntity(dObj);

            this.gizmoNode.ParentSceneNode.RemoveAndDestroyChild(this.gizmoNode.Name);
            this.gizmoNode = null;
            this.gizmoX = null;
            this.gizmoY = null;
            this.gizmoZ = null;
            this.gizmoEntities[0] = this.gizmoEntities[1] = this.gizmoEntities[2] = null;
        }

        private void SetGizmoMode(EditorTools mode)
        {
            if (this.oldGizmoMode == mode)
                return;
            this.oldGizmoMode = mode;

            Entity wx = this.gizmoEntities[0];
            Entity wy = this.gizmoEntities[1];
            Entity wz = this.gizmoEntities[2];

            wx.GetSubEntity(1).SetVisible(false);
            wx.GetSubEntity(2).SetVisible(false);
            wx.GetSubEntity(3).SetVisible(false);
            wy.GetSubEntity(1).SetVisible(false);
            wy.GetSubEntity(2).SetVisible(false);
            wy.GetSubEntity(3).SetVisible(false);
            wz.GetSubEntity(1).SetVisible(false);
            wz.GetSubEntity(2).SetVisible(false);
            wz.GetSubEntity(3).SetVisible(false);

            switch (mode)
            {
                case EditorTools.Move:
                    wx.GetSubEntity(1).SetVisible(true);
                    wy.GetSubEntity(1).SetVisible(true);
                    wz.GetSubEntity(1).SetVisible(true);
                    break;
                case EditorTools.Rotate:
                    wx.GetSubEntity(2).SetVisible(true);
                    wy.GetSubEntity(2).SetVisible(true);
                    wz.GetSubEntity(2).SetVisible(true);
                    break;
                case EditorTools.Scale:
                    wx.GetSubEntity(3).SetVisible(true);
                    wy.GetSubEntity(3).SetVisible(true);
                    wz.GetSubEntity(3).SetVisible(true);
                    break;
            }
        }
        #endregion
    }
}
