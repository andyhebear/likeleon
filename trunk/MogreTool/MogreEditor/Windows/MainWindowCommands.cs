using System.Windows;
using Mogitor.Data;
using System.IO;
using System.Xml;
using System.Collections.Generic;
using System.Windows.Media;

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
            opt.SelectionBBColourForSerializer = Color.FromRgb(255, 255, 255);
            opt.HighlightBBColourForSerializer = Color.FromRgb(232, 48, 48);

            SettingsDialog dlg = new SettingsDialog(opt);
            if (dlg.ShowDialog() == true)
            {
                string fileName = MogitorsSystem.Instance.CombinePath(mogRoot.ProjectOptions.ProjectDir, mogRoot.ProjectOptions.ProjectName + ".mogscene");
                fileName = MogitorsSystem.Instance.GetFullPath(fileName);

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

            this.statusString.Text = "New scene created";
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

            this.statusString.Text = "Scene opened";
        }
        #endregion

        #region Close
        private void CommandBinding_CloseCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            MogitorsRoot.Instance.TerminateScene();
            this.statusString.Text = "Scene closed";
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
            this.statusString.Text = "Scene saved";
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
            this.statusString.Text = "Scene saved";
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

        #region Edit - Delete
        public void CommandBinding_EditDeleteCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            MogitorsRoot.Instance.ActiveViewport.DeleteSelectedObject(false);
        }

        public void CommandBinding_EditDeleteCmdCanExecute(object sender, System.Windows.Input.CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = (MogitorsRoot.Instance.Selected != null && MogitorsRoot.Instance.Selected.Supports(EditFlags.CanDelete));
        }
        #endregion

        #region Edit - Rename
        public void CommandBinding_EditRenameCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            BaseEditor obj = MogitorsRoot.Instance.Selected;
            if (obj == null)
                return;

            InputDialog dlg = new InputDialog("Enter a new name", "Name : ", obj.Name);
            if (dlg.ShowDialog() == true)
            {
                string text = dlg.InputText.Trim();
                if (text != obj.Name)
                    obj.Name = text;
            }
        }

        public void CommandBinding_EditRenameCmdCanExecute(object sender, System.Windows.Input.CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = (MogitorsRoot.Instance.Selected != null && MogitorsRoot.Instance.Selected.EditorType != EditorType.Multisel);
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
            PreferencesDialog dlg = new PreferencesDialog();
            if (dlg.ShowDialog() == true)
            {
                this.ogreControl.FrameRate = MogitorSettings.Instance.UseWpfDisplaySurface? (int?)null : MogitorSettings.Instance.FrameRate;
            }
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
        
        #region CamModeSolid
        private void CommandBinding_CamModeSolidCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
        }

        private void CommandBinding_CamModeSolidCmdCanExecute(object sender, System.Windows.Input.CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = MogitorsRoot.Instance.IsSceneLoaded;
        }
        #endregion

        #region CamModeWireframe
        private void CommandBinding_CamModeWireframeCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
        }

        private void CommandBinding_CamModeWireframeCmdCanExecute(object sender, System.Windows.Input.CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = MogitorsRoot.Instance.IsSceneLoaded;
        }
        #endregion

        #region CamModePoints
        private void CommandBinding_CamModePointsCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
        }

        private void CommandBinding_CamModePointsCmdCanExecute(object sender, System.Windows.Input.CanExecuteRoutedEventArgs e)
        {
            e.CanExecute = MogitorsRoot.Instance.IsSceneLoaded;
        }
        #endregion

        #region ClearLog
        private void CommandBinding_ClearLogCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
            Dispatcher.Invoke((System.Action)delegate() { this.logBuffer.Clear(); });
        }
        #endregion

        #region ToggleScene
        private void CommandBinding_ToggleSceneCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
        }
        #endregion

        #region ToggleObjects
        private void CommandBinding_ToggleObjectsCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
        }
        #endregion

        #region ToggleEntity
        private void CommandBinding_ToggleEntityCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
        }
        #endregion

        #region ToggleProperties
        private void CommandBinding_TogglePropertiesCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
        }
        #endregion

        #region ToggleLog
        private void CommandBinding_ToggleLogCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
        }
        #endregion

        #region ToggleMaterials
        private void CommandBinding_ToggleMaterialsCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
        }
        #endregion

        #region ToggleTemplates
        private void CommandBinding_ToggleTemplatesCmdExecuted(object sender, System.Windows.Input.ExecutedRoutedEventArgs e)
        {
        }
        #endregion
    }
}
