using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;

namespace Mogitor.Data
{
    partial class MogitorsRoot
    {
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
            IDragDropHandler handler = this.dragDropHandlers[dragData.DragSource];
            if (handler == null)
                return false;

            return handler.OnDrageEnter(dragData);
        }

        public void OnDragLeave(IDataObject data)
        {
            if (!data.GetDataPresent(typeof(DragData)))
                return;

            DragData dragData = data.GetData(typeof(DragData)) as DragData;
            IDragDropHandler handler = this.dragDropHandlers[dragData.DragSource];
            if (handler == null)
                return;

            handler.OnDragLeave(dragData);
        }

        public bool OnDragOver(IDataObject data, Point pt)
        {
            return true;
        }

        public void OnDragDrop(IDataObject data, Point pt)
        {
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
        };

        private IDictionary<object, IDragDropHandler> dragDropHandlers = new Dictionary<object, IDragDropHandler>();
    }
}
