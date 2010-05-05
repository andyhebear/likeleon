using System.Windows;
using Mogitor.Data;
using System.IO;
using System.Xml;
using System.Collections.Generic;

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
            opt.ResourceDirectories.Clear();
            opt.Cameras.Clear();

            SettingsDialog dlg = new SettingsDialog(opt);
            if (dlg.ShowDialog() == true)
            {
                string fileName = MogitorsSystem.Instance.CombinePath(mogRoot.ProjectOptions.ProjectDir, mogRoot.ProjectOptions.ProjectName + ".mogscene");
                fileName = MogitorsSystem.Instance.QualifyPath(fileName);

                XmlTextWriter textWriter = new XmlTextWriter(fileName, System.Text.Encoding.Unicode);
                textWriter.Formatting = Formatting.Indented;
                textWriter.WriteStartDocument();

                // XML Root
                textWriter.WriteStartElement("MogitorScene");

                // Write project options
                mogRoot.WriteProjectOptions(textWriter, true);

                // Write new scene definition
                textWriter.WriteStartElement("Object");
                textWriter.WriteStartAttribute("Type");
                textWriter.WriteValue(mogRoot.ProjectOptions.SceneManagerName);
                textWriter.WriteEndAttribute();
                textWriter.WriteStartAttribute("SceneManagerType");
                textWriter.WriteValue(mogRoot.ProjectOptions.SceneManagerName);
                textWriter.WriteEndAttribute();
                textWriter.WriteStartAttribute("Name");
                textWriter.WriteValue("SceneManager");
                textWriter.WriteEndAttribute();
                textWriter.WriteStartAttribute("Ambient");
                textWriter.WriteValue("1.000 1.000 1.000");
                textWriter.WriteEndAttribute();
                textWriter.WriteEndElement();

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

        #region Settings
        private void CommandBinding_SettingsCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            ProjectOptions opt = MogitorsRoot.Instance.ProjectOptions;
            SettingsDialog dlg = new SettingsDialog(opt);

            List<string> directories = new List<string>();
            opt.ResourceDirectories.ForEach(s => directories.Add(s));

            if (dlg.ShowDialog() == true)
            {
                bool identical = true;
                if (directories.Count == opt.ResourceDirectories.Count)
                {
                    foreach (string orgStr in directories)
                    {
                        bool found = false;
                        foreach (string newStr in opt.ResourceDirectories)
                        {
                            if (orgStr == newStr)
                                found = true;
                        }
                        if (!found)
                        {
                            identical = false;
                            break;
                        }
                    }
                }
                else
                {
                    identical = false;
                }

                if (!identical)
                    ogreControl.ReloadUserResources();
            }
        }

        private void CommandBinding_SettingsCmdCanExecute(object sender, System.Windows.Input.CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = MogitorsRoot.Instance.IsSceneLoaded;
        }
        #endregion

        #region Preferences
        private void CommandBinding_PreferencesCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            MessageBox.Show("awefawefaweF");
        }
        #endregion

        #region About
        private void CommandBinding_AboutCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            MessageBox.Show("by likeleon.");
        }
        #endregion

        #region Select
        private void CommandBinding_SelectCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
        }

        private void CommandBinding_SelectCmdCanExecute(object sender, System.Windows.Input.CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = MogitorsRoot.Instance.IsSceneLoaded;
        }
        #endregion

        #region Move
        private void CommandBinding_MoveCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
        }

        private void CommandBinding_MoveCmdCanExecute(object sender, System.Windows.Input.CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = MogitorsRoot.Instance.IsSceneLoaded;
        }
        #endregion

        #region Rotate
        private void CommandBinding_RotateCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
        }

        private void CommandBinding_RotateCmdCanExecute(object sender, System.Windows.Input.CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = MogitorsRoot.Instance.IsSceneLoaded;
        }
        #endregion

        #region Scale
        private void CommandBinding_ScaleCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
        }

        private void CommandBinding_ScaleCmdCanExecute(object sender, System.Windows.Input.CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = MogitorsRoot.Instance.IsSceneLoaded;
        }
        #endregion
    }
}
