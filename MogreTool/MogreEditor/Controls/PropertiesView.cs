using System.Windows;
using System.Windows.Controls;
using Mogitor.Data;

namespace Mogitor.Controls
{
    [TemplatePart(Name="PART_PropertyGrid", Type = typeof(System.Windows.Forms.PropertyGrid))]
    class PropertiesView : Control
    {
        #region Properties
        public object Selected
        {
            get
            {
                if (this.propertyGrid == null)
                    return null;
                return this.propertyGrid.SelectedObject;
            }
            set
            {
                if (this.propertyGrid == null)
                    return;
                this.propertyGrid.SelectedObject = value;
            }
        }
        #endregion

        #region Fields
        private System.Windows.Forms.PropertyGrid propertyGrid;
        #endregion

        #region Public Methods
        public override void OnApplyTemplate()
        {
            base.OnApplyTemplate();
            this.propertyGrid = this.Template.FindName("PART_PropertyGrid", this) as System.Windows.Forms.PropertyGrid;
        }
        #endregion
    }
}
