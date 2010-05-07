using System;
using System.Windows;
using Mogitor.Data;
using System.Windows.Forms;
using System.Collections.Generic;
using System.Windows.Controls;

namespace Mogitor.Windows
{
    /// <summary>
    /// Interaction logic for SettingsDialog.xaml
    /// </summary>
    public partial class SettingsDialog : Window
    {
        #region Fields
        private IList<int> resourceFileTypes = new List<int>();
        #endregion

        #region Properties
        public ProjectOptions Options
        {
            get;
            private set;
        }
        #endregion

        #region Private Methods
        private string lastDirPath = MogitorsSystem.Instance.ProjectsDirectory;
        #endregion

        #region Constructors
        public SettingsDialog(ProjectOptions options)
        {
            InitializeComponent();

            Options = options;

            foreach (string value in Options.ResourceDirectories)
            {
                if (value.Contains("FS:") == true)
                {
                    lbResources.Items.Add(value.Remove(0, 3));
                    resourceFileTypes.Add(1);
                }
                else if (value.Contains("ZP:") == true)
                {
                    lbResources.Items.Add(value.Remove(0, 3));
                    resourceFileTypes.Add(2);
                }
            }
        }
        #endregion

        #region Private Methods
        private void btnOk_Click(object sender, RoutedEventArgs e)
        {
            if (Options.IsNewProject)
            {
                if (this.txtBoxProjectDir.Text.Length <= 0)
                    return;
                if (this.txtBoxProjectName.Text.Length <= 0)
                    return;
                if (this.txtBoxTerrainDir.Text.Length <= 0)
                    return;

                string projectDir = MogitorsSystem.Instance.GetFullPath(this.txtBoxProjectDir.Text + "\\" + this.txtBoxProjectName.Text);
                MogitorsSystem.Instance.MakeDirectory(projectDir);

                Options.ProjectDir = projectDir;
                Options.ProjectName = this.txtBoxProjectName.Text;
                Options.SceneManagerName = this.txtBoxSceneManager.Text;
                Options.TerrainDirectory = this.txtBoxTerrainDir.Text;
            }

            Options.ResourceDirectories.Clear();

            for (int i = 0; i < lbResources.Items.Count; ++i)
            {
                string strTemp = lbResources.Items[i].ToString();
                if (!MogitorsSystem.Instance.IsRelativePath(strTemp))
                    strTemp = MogitorsSystem.Instance.GetRelativePath(Options.ProjectDir + "\\", strTemp);

                string val = "";

                int stype = resourceFileTypes[i];
                if (stype == 1)
                {
                    val = "FS:" + strTemp;
                    Options.ResourceDirectories.Add(val);
                }
                else if (stype == 2)
                {
                    val = "ZP:" + strTemp;
                    Options.ResourceDirectories.Add(val);
                }
            }

            this.DialogResult = true;
        }

        private void btnCancel_Click(object sender, RoutedEventArgs e)
        {
            this.DialogResult = false;
        }

        private void btnBrowse_Click(object sender, RoutedEventArgs e)
        {
            FolderBrowserDialog dlg = new FolderBrowserDialog();
            if (dlg.ShowDialog() == System.Windows.Forms.DialogResult.OK)
            {
                this.txtBoxProjectDir.Text = dlg.SelectedPath;
            }
        }

        private void menuAddDir_Click(object sender, RoutedEventArgs e)
        {
            FolderBrowserDialog dlg = new FolderBrowserDialog();
            dlg.SelectedPath = this.lastDirPath;
            if (dlg.ShowDialog() == System.Windows.Forms.DialogResult.OK)
            {
                this.lbResources.Items.Add(dlg.SelectedPath);
                resourceFileTypes.Add(1);
                this.lastDirPath = dlg.SelectedPath;
            }
        }

        private void menuAddDirRecursive_Click(object sender, RoutedEventArgs e)
        {
            FolderBrowserDialog dlg = new FolderBrowserDialog();
            dlg.SelectedPath = this.lastDirPath;
            if (dlg.ShowDialog() == System.Windows.Forms.DialogResult.OK)
            {
                Stack<string> dirs = new Stack<string>();
                dirs.Push(dlg.SelectedPath);

                while (dirs.Count > 0)
                {
                    string currentDir = dirs.Pop();
                    string[] subDirs;
                    try
                    {
                        subDirs = System.IO.Directory.GetDirectories(currentDir);
                    }
                    catch (Exception)
                    {
                        continue;
                    }

                    this.lbResources.Items.Add(currentDir);
                    resourceFileTypes.Add(1);
                    lastDirPath = currentDir;

                    foreach (string subDir in subDirs)
                        dirs.Push(subDir);
                }
            }
        }

        private void menuRemoveEntry_Click(object sender, RoutedEventArgs e)
        {
            if (lbResources.SelectedIndex != -1)
            {
                resourceFileTypes.RemoveAt(lbResources.SelectedIndex);
                lbResources.Items.RemoveAt(lbResources.SelectedIndex);
            }
        }
        #endregion
    }
}
