using System.Windows;
using Mogitor.Data;
using System.IO;
using System.Xml;

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
            MogitorsRoot mogRoot = MogitorsRoot.Instance;
            if (!(mogRoot.TerminateScene()))
                return;

            ProjectOptions opt = mogRoot.ProjectOptions;
            opt.IsNewProject = true;
            opt.ProjectName = "";
            opt.ProjectDir = MogitorsSystem.Instance.ProjectsDirectory;
            opt.SceneManagerName = "OctreeSceneManager";
            opt.TerrainDirectory = "Terrain";

            // TODO: Open settings dialog
            mogRoot.ProjectOptions.ProjectName = "test_project";
            if (MessageBox.Show("New project?", "Project Settings", MessageBoxButton.OKCancel) == MessageBoxResult.OK)
            {
                string fileName = mogRoot.ProjectOptions.ProjectDir + "/" + mogRoot.ProjectOptions.ProjectName + ".mogscene";
                fileName = MogitorsSystem.Instance.QualifyPath(fileName);

                XmlTextWriter textWriter = new XmlTextWriter(fileName, System.Text.Encoding.Unicode);
                textWriter.Formatting = Formatting.Indented;
                textWriter.WriteStartDocument();
                textWriter.WriteStartElement("MogitorScene");
                mogRoot.WriteProjectOptions(textWriter, true);
                textWriter.WriteEndElement();
                textWriter.WriteEndDocument();
                textWriter.Close();

                mogRoot.LoadScene(fileName);
            }
        }
        #endregion

        #region Open
        private void CommandBinding_OpenCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            if (!(MogitorsRoot.Instance.TerminateScene()))
                return;

            BaseSerializer.SceneFileResult ret = MogitorsRoot.Instance.LoadScene("");
            if (ret == BaseSerializer.SceneFileResult.Cancel)
                return;

            if (ret != BaseSerializer.SceneFileResult.Ok)
            {
                MessageBox.Show("Error Loading File", "Mogitor", MessageBoxButton.OK, MessageBoxImage.Warning);
                return;
            }
        }
        #endregion

        #region Close
        private void CommandBinding_CloseCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            MogitorsRoot.Instance.TerminateScene();
        }

        private void CommandBinding_CloseCmdCanExecute(object sender, System.Windows.Input.CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = MogitorsRoot.Instance.IsSceneLoaded;
        }
        #endregion

        #region Save
        private void CommandBinding_SaveCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            MogitorsRoot.Instance.SaveScene(false);
        }

        private void CommandBinding_SaveCmdCanExecute(object sender, System.Windows.Input.CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = MogitorsRoot.Instance.IsSceneLoaded && MogitorsRoot.Instance.IsSceneModified;
        }
        #endregion

        #region SaveAs
        private void CommandBinding_SaveAsCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            MogitorsRoot.Instance.SaveScene(true);
        }

        private void CommandBinding_SaveAsCmdCanExecute(object sender, System.Windows.Input.CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = MogitorsRoot.Instance.IsSceneLoaded;
        }
        #endregion

        #region Exit
        private void CommandBinding_ExitCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            if (MogitorsRoot.Instance.TerminateScene())
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
