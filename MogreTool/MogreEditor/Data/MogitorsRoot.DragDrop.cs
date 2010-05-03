using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;

namespace Mogitor.Data
{
    partial class MogitorsRoot
    {
        #region Fields
        private DragData activeDragData;
        #endregion

        public void RegisterDragDropHandler(object source, IDragDropHandler handler)
        {
            if (dragDropHandlers.Keys.Contains<object>(source))
                dragDropHandlers.Remove(source);
            dragDropHandlers.Add(source, handler);
        }

        public void UnRegisterDragDropHandler(object source, IDragDropHandler handler)
        {
            if (dragDropHandlers.Keys.Contains<object>(source))
                dragDropHandlers.Remove(source);
        }

        public bool OnDragEnter(IDataObject data)
        {
            if (!IsSceneLoaded)
                return false;

            if (!data.GetDataPresent(typeof(DragData)))
                return false;

            DragData dragData = data.GetData(typeof(DragData)) as DragData;
            IDragDropHandler handler = this.dragDropHandlers[dragData.Source];
            if (handler == null)
                return false;

            this.activeDragData = dragData;
            return handler.OnDrageEnter(dragData);
        }

        public void OnDragLeave(IDataObject data)
        {
            if (!data.GetDataPresent(typeof(DragData)))
                return;

            DragData dragData = data.GetData(typeof(DragData)) as DragData;
            IDragDropHandler handler = this.dragDropHandlers[dragData.Source];
            if (handler == null)
                return;

            handler.OnDragLeave(dragData);
            this.activeDragData = null;
        }

        public bool OnDragOver(IDataObject data, Point pt)
        {
            Mogre.Vector4 rect = new Mogre.Vector4();
            ViewportEditor vp = null;

            int ZOrder = -1000;
            foreach (KeyValuePair<string, BaseEditor> it in GetObjectsByType(EditorType.Viewport))
            {
                int order = ((it.Value) as ViewportEditor).GetRect(ref rect);
                if ((rect.x <= pt.X) && (rect.y <= pt.Y) && ((rect.y + rect.w) >= pt.Y) && (order > ZOrder))
                {
                    ZOrder = order;
                    vp = (it.Value) as ViewportEditor;
                }
            }

            if (vp != null)
            {
                ActiveViewport = vp;
                ActiveViewport.GetRect(ref rect);

                DragData dragData = data.GetData(typeof(DragData)) as DragData;

                foreach (KeyValuePair<object, IDragDropHandler> handler in this.dragDropHandlers)
                {
                    if (handler.Key == dragData.Source)
                    {
                        Mogre.Vector2 point = new Mogre.Vector2((float)(pt.X - rect.x) / rect.z, (float)(pt.Y - rect.y) / rect.w);
                        return handler.Value.OnDragOver(dragData, ActiveViewport.Handle as Mogre.Viewport, point);
                    }
                }
                return true;
            }
            return false;
        }

        public void OnDragDrop(IDataObject data, Point pt)
        {
            Mogre.Vector4 drect = new Mogre.Vector4();
            ActiveViewport.GetRect(ref drect);
            Mogre.Vector2 dropPos = new Mogre.Vector2((float)(pt.X - drect.x) / drect.z, (float)(pt.Y - drect.y) / drect.w);

            DragData dragData = data.GetData(typeof(DragData)) as DragData;
            foreach (KeyValuePair<object, IDragDropHandler> handler in this.dragDropHandlers)
            {
                if (handler.Key == dragData.Source)
                {
                    handler.Value.OnDragDrop(dragData, ActiveViewport.Handle as Mogre.Viewport, dropPos);
                    break;
                }
            }
            this.activeDragData = null;
        }

        public interface IDragDropHandler
        {
            /// <summary>
            /// Delegate function for drag enter event
            /// </summary>
            /// <param name="dragData"></param>
            /// <returns>true if the drag event accepted, otherwise false</returns>
            bool OnDrageEnter(DragData dragData);

            /// <summary>
            /// Delegate function for drag leave event
            /// </summary>
            /// <param name="dragData"></param>
            void OnDragLeave(DragData dragData);

            /// <summary>
            /// Delegate function for drag move event
            /// </summary>
            /// <param name="vp">the viewport in which the event occured</param>
            /// <param name="position">mouse position relative to the viewports width/height</param>
            /// <returns>true if the drag event accepted, otherwise false</returns>
            bool OnDragOver(DragData dragData, Mogre.Viewport vp, Mogre.Vector2 position);

            /// <summary>
            /// Delegate function for drag dropped event
            /// </summary>
            /// <param name="vp">the viewport in which the event occured</param>
            /// <param name="position">mouse position relative to the viewports width/height</param>
            void OnDragDrop(DragData dragData, Mogre.Viewport vp, Mogre.Vector2 position);

            /// <summary>
            /// Delegate function for drag wheel event
            /// </summary>
            /// <param name="vp"></param>
            /// <param name="delta"></param>
            void OnDragWheel(DragData dragData, Mogre.Viewport vp, float delta);
        };

        private IDictionary<object, IDragDropHandler> dragDropHandlers = new Dictionary<object, IDragDropHandler>();
    }
}
