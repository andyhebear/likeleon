using System;
using System.Windows;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Controls;

namespace Mogitor.Windows
{
    /// <summary>
    /// Command Bindings for MainWindow
    /// </summary>
    public partial class MainWindow : Window
    {
        #region New
        private void CommandBinding_NewCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            MessageBox.Show(e.ToString());
        }
        #endregion

        #region Open
        private void CommandBinding_OpenCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            MessageBox.Show(e.ToString());
        }
        #endregion

        #region Close
        private void CommandBinding_CloseCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            MessageBox.Show(e.ToString());
        }

        private void CommandBinding_CloseCmdCanExecute(object sender, System.Windows.Input.CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = false;
        }
        #endregion

        #region Save
        private void CommandBinding_SaveCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            MessageBox.Show(e.ToString());
        }

        private void CommandBinding_SaveCmdCanExecute(object sender, System.Windows.Input.CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = false;
        }
        #endregion

        #region SaveAs
        private void CommandBinding_SaveAsCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            MessageBox.Show(e.ToString());
        }

        private void CommandBinding_SaveAsCmdCanExecute(object sender, System.Windows.Input.CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = false;
        }
        #endregion

        #region Exit
        private void CommandBinding_ExitCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            Application.Current.Shutdown();
        }
        #endregion

        #region About
        private void CommandBinding_AboutCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            MessageBox.Show("by likeleon.");
        }
        #endregion
    }
}
