using System.Windows.Controls;
using System.Windows;

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
            this.treeControl.SelectedItemChanged += (s, e) =>
                {
                    MessageBox.Show(e.ToString());
                };
        }
        #endregion
    }
}
