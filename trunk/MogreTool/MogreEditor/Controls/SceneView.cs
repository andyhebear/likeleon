using System.Windows.Controls;
using System.Windows;
using Mogitor.Data;

namespace Mogitor.Controls
{
    [TemplatePart(Name = "PART_TreeControl", Type = typeof(TreeView))]
    class SceneView : Control
    {
        #region Inner Classes
        public class Item
        {
            public string Name
            {
                get;
                private set;
            }

            public string Icon
            {
                get;
                private set;
            }

            public Item(string name, string icon)
            {
                Name = name;
                Icon = icon;
            }
        }
        #endregion

        #region Properties
        public TreeView TreeControl
        {
            get { return this.treeControl; }
        }
        #endregion

        #region Fields
        private TreeView treeControl;
        #endregion

        #region Public Methods
        public override void OnApplyTemplate()
        {
            base.OnApplyTemplate();

            this.treeControl = this.Template.FindName("PART_TreeControl", this) as TreeView;
            this.treeControl.SelectedItemChanged += new RoutedPropertyChangedEventHandler<object>(treeControl_SelectedItemChanged);
        }

        void treeControl_SelectedItemChanged(object sender, RoutedPropertyChangedEventArgs<object> e)
        {
            TreeViewItem treeItem = e.NewValue as TreeViewItem;
            Item item = treeItem.Header as Item;
            if (item == null)
                return;

            string name = item.Name;

            MogitorsRoot mogRoot = MogitorsRoot.Instance;
            BaseEditor curEdit = mogRoot.FindObject(name, 0);

            if (curEdit != mogRoot.Selected)
            {
                if (mogRoot.Selected != null)
                    mogRoot.Selected.IsSelected = false;

                if (curEdit != null)
                {
                    curEdit.IsSelected = true;
                }
            }
        }
        #endregion
    }
}
