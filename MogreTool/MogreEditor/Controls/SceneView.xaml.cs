using System.Windows.Controls;
using System.Windows;
using Mogitor.Data;
using Mogitor.Windows;
using System.Windows.Input;

namespace Mogitor.Controls
{
    partial class SceneView : UserControl
    {
        public SceneView()
        {
            InitializeComponent();
        }

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

        public MainWindow MainWindow
        {
            set;
            private get;
        }
        #endregion

        #region Public Methods
        void treeControl_MouseRightButtonDown(object sender, System.Windows.Input.MouseButtonEventArgs e)
        {
            TreeViewItem treeItem = e.Source as TreeViewItem;
            if (treeItem == null)
                return;
            treeItem.Focus();
            e.Handled = true;
        }

        void treeControl_MouseRightButtonUp(object sender, System.Windows.Input.MouseButtonEventArgs e)
        {
            //TreeViewItem treeItem = e.Source as TreeViewItem;
            //if (treeItem == null)
            //    return;

            //Item item = treeItem.Header as Item;
            //if (item == null)
            //    return;

            //BaseEditor editor = MogitorsRoot.Instance.FindObject(item.Name, 0);
            //if (editor == null)
            //    return;

            //this.treeControl.ContextMenu.IsOpen = true;
            //e.Handled = true;
        }

        void treeControl_SelectedItemChanged(object sender, RoutedPropertyChangedEventArgs<object> e)
        {
            TreeViewItem treeItem = e.NewValue as TreeViewItem;
            if (treeItem == null)
                return;

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

        #region Edit - Delete
        private void CommandBinding_EditDeleteCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            MainWindow.CommandBinding_EditDeleteCmdExecuted(sender, e);
        }

        private void CommandBinding_EditDeleteCmdCanExecute(object sender, System.Windows.Input.CanExecuteRoutedEventArgs e)
        {
            MainWindow.CommandBinding_EditDeleteCmdCanExecute(sender, e);
        }
        #endregion

        #region Edit - Rename
        private void CommandBinding_EditRenameCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            MainWindow.CommandBinding_EditRenameCmdExecuted(sender, e);
        }

        private void CommandBinding_EditRenameCmdCanExecute(object sender, System.Windows.Input.CanExecuteRoutedEventArgs e)
        {
            MainWindow.CommandBinding_EditRenameCmdCanExecute(sender, e);
        }
        #endregion
    }
}
