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
        private AxisType oldGizmoAxis = AxisType.None;
        private Vector3 lastTranslationDelta = Vector3.ZERO;
        #endregion

        #region Public Properties
        public EditorTools GizmoMode
        {
            set
            {
                if (this.oldGizmoMode == value)
                    return;
                this.oldGizmoMode = value;

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

                switch (value)
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
        }
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
            this.gizmoX.AttachObject(this.gizmoEntities[0]);

            // YY arrows
            this.gizmoEntities[1].CastShadows = false;
            this.gizmoEntities[1].SetMaterialName("mtSCBGREEN");
            this.gizmoEntities[1].RenderQueueGroup = (byte)RenderQueueGroupID.RENDER_QUEUE_SKIES_LATE;
            this.gizmoEntities[1].QueryFlags = QueryFlags.Widget;
            this.gizmoY.AttachObject(this.gizmoEntities[1]);

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
        #endregion

        #region Public Methods
        public void UpdateGizmo()
        {
            if (this.gizmoNode == null)
                return;

            if (Selected != null && Selected.UsesGizmos && Selected != ActiveViewport.CameraEditor)
            {
                Mogre.Vector3 position = Selected.DerivedPosition;

                Mogre.Vector4 rect = new Vector4();
                ActiveViewport.GetRect(ref rect);

                float minSize = System.Math.Min(rect.z, rect.w);
                float distance = (position - ActiveViewport.CameraEditor.DerivedPosition).Length;

                distance /= (minSize / 20.0f);

                this.gizmoNode.SetPosition(position.x, position.y, position.z);
                this.gizmoNode.SetOrientation(Selected.DerivedOrientation.w, Selected.DerivedOrientation.x, Selected.DerivedOrientation.y, Selected.DerivedOrientation.z);
                this.gizmoNode.SetScale(distance, distance, distance);
                this.gizmoNode.SetVisible(true);
            }
            else
            {
                this.gizmoNode.SetVisible(false);
            }
        }

        public bool PickGizmos(Mogre.Ray ray, ref AxisType axis)
        {
            if (this.gizmoEntities[0] == null || !this.gizmoEntities[0].IsVisible())
                return false;

            float closesDistance = -1.0f;

            for (int widx = 0; widx < 3; ++widx)
            {
                // get the entity to check
                Mogre.Entity entity = this.gizmoEntities[widx];

                var hit = Mogre.Math.Intersects(ray, entity.GetWorldBoundingBox());
                if (!hit.first)
                    continue;

                bool newClosestFound = FindNewClosest(ray, ref closesDistance, entity);

                // if we found a new closest raycast for this object, update the
                // closestResult befor moving on to the next object
                if (newClosestFound)
                {
                    switch (widx)
                    {
                        case 0:
                            axis = AxisType.X;
                            break;
                        case 1:
                            axis = AxisType.Y;
                            break;
                        case 2:
                            axis = AxisType.Z;
                            break;
                    }
                }
            }

            return (closesDistance >= 0.0f);
        }

        public void HighlightGizmo(AxisType id)
        {
            if (this.oldGizmoAxis == id)
                return;

            this.oldGizmoAxis = id;
            Entity wx = this.gizmoEntities[0];
            Entity wy = this.gizmoEntities[1];
            Entity wz = this.gizmoEntities[2];

            if ((int)(id & AxisType.X) != 0)
                wx.SetMaterialName("mtSCBREDL");
            else
                wx.SetMaterialName("mtSCBRED");
            if ((int)(id & AxisType.Y) != 0)
                wy.SetMaterialName("mtSCBGREENL");
            else
                wy.SetMaterialName("mtSCBGREEN");
            if ((int)(id & AxisType.Z) != 0)
                wz.SetMaterialName("mtSCBBLUEL");
            else
                wz.SetMaterialName("mtSCBBLUE");
        }

        public Vector3 GetGizmoIntersect(Ray pickRay, Plane planetous, AxisType translationAxis, Vector3 vLastPosition)
        {
            var result = pickRay.Intersects(planetous);

            if (result.first)
            {
                Vector3 axisX = Vector3.ZERO;
                Vector3 axisY = Vector3.ZERO;
                Vector3 axisZ = Vector3.ZERO;

                if (translationAxis != AxisType.None)
                {
                    if ((int)(translationAxis & AxisType.X) != 0)
                        axisX = Selected.DerivedOrientation.XAxis;
                    if ((int)(translationAxis & AxisType.Y) != 0)
                        axisY = Selected.DerivedOrientation.YAxis;
                    if ((int)(translationAxis & AxisType.Z) != 0)
                        axisZ = Selected.DerivedOrientation.ZAxis;
                }
                else
                {
                    axisX = Selected.DerivedOrientation.XAxis;
                    axisY = Selected.DerivedOrientation.YAxis;
                    axisZ = Selected.DerivedOrientation.ZAxis;
                }

                Vector3 proj = pickRay.GetPoint(result.second) - vLastPosition;
                Vector3 vPos1 = (axisX.DotProduct(proj) * axisX);
                Vector3 vPos2 = (axisY.DotProduct(proj) * axisY);
                Vector3 vPos3 = (axisZ.DotProduct(proj) * axisZ);
                Vector3 vPos = vPos1 + vPos2 + vPos3;

                this.lastTranslationDelta = vPos;
                return vPos;
            }
            return this.lastTranslationDelta;
        }

        public Plane FindGizmoTranslationPlane(Ray pickRay, AxisType translationAxis)
        {
            Vector3 vPos = Selected.DerivedPosition;
            Vector3 vCamBack = ActiveViewport.CameraEditor.Camera.DerivedDirection;
            vCamBack = -vCamBack;

            if (translationAxis == AxisType.None)
                return new Plane(vCamBack, vPos);

            Quaternion qOrient = Selected.DerivedOrientation;
            Plane planeX = new Plane(qOrient.XAxis, vPos);
            Plane planeY = new Plane(qOrient.YAxis, vPos);
            Plane planeZ = new Plane(qOrient.ZAxis, vPos);

            float vX = planeX.ProjectVector(pickRay.Direction).Length;
            float vY = planeY.ProjectVector(pickRay.Direction).Length;
            float vZ = planeZ.ProjectVector(pickRay.Direction).Length;

            if ((int)(translationAxis & AxisType.X) != 0)
                vX = 10000.0f;
            if ((int)(translationAxis & AxisType.Y) != 0)
                vY = 10000.0f;
            if ((int)(translationAxis & AxisType.Z) != 0)
                vZ = 10000.0f;

            if (vX < vY && vX < vZ)
                return planeX;
            else
            {
                if (vY < vX && vY < vZ)
                    return planeY;
                else
                    return planeZ;
            }
        }
        #endregion
    }
}
