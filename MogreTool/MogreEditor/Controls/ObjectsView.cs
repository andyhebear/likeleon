using System;
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
    class ObjectsView : Control, MogitorsRoot.IDragDropHandler
    {
        #region Implements IDragDropHandlerref
        bool MogitorsRoot.IDragDropHandler.OnDrageEnter(DragData dragData)
        {
            return false;
        }

        void MogitorsRoot.IDragDropHandler.OnDragLeave(DragData dragData)
        {
        }

        bool MogitorsRoot.IDragDropHandler.OnDragOver(DragData dragData, Mogre.Viewport vp, Mogre.Vector2 position)
        {
            return false;
        }

        void MogitorsRoot.IDragDropHandler.OnDragDrop(DragData dragData, Mogre.Viewport vp, Mogre.Vector2 position)
        {
        }

        void MogitorsRoot.IDragDropHandler.OnDragWheel(DragData dragData, Mogre.Viewport vp, float delta)
        {
        }
        #endregion
    }
}
