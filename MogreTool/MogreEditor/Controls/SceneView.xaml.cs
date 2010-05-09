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

        #region Private Methods
        private void treeControl_MouseRightButtonDown(object sender, System.Windows.Input.MouseButtonEventArgs e)
        {
            TreeViewItem treeItem = e.Source as TreeViewItem;
            if (treeItem == null)
                return;
            treeItem.Focus();
            e.Handled = true;
        }

        private void treeControl_SelectedItemChanged(object sender, RoutedPropertyChangedEventArgs<object> e)
        {
            TreeViewItem treeItem = e.NewValue as TreeViewItem;
            if (treeItem == null)
                return;

            IconTextItem item = treeItem.Header as IconTextItem;
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

        private void treeControl_ContextMenuOpening(object sender, ContextMenuEventArgs e)
        {
            TreeViewItem treeItem = e.Source as TreeViewItem;
            if (treeItem == null)
            {
                e.Handled = true;
                return;
            }
            treeItem.Focus();

            IconTextItem item = treeItem.Header as IconTextItem;
            if (item == null)
            {
                e.Handled = true;
                return;
            }

            BaseEditor editor = MogitorsRoot.Instance.FindObject(item.Name, 0);
            if (editor == null)
            {
                e.Handled = true;
                return;
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
