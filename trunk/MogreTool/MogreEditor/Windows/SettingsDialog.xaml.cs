using System;
using System.Windows;
using Mogitor.Data;
using System.Windows.Forms;

namespace Mogitor.Windows
{
    /// <summary>
    /// Interaction logic for SettingsDialog.xaml
    /// </summary>
    public partial class SettingsDialog : Window
    {
        #region Properties
        public ProjectOptions Options
        {
            get;
            private set;
        }
        #endregion

        public SettingsDialog(ProjectOptions options)
        {
            Options = options;

            InitializeComponent();
        }

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

                string projectDir = MogitorsSystem.Instance.QualifyPath(this.txtBoxProjectDir.Text + "\\" + this.txtBoxProjectName.Text);
                MogitorsSystem.Instance.MakeDirectory(projectDir);

                Options.ProjectDir = projectDir;
                Options.ProjectName = this.txtBoxProjectName.Text;
                Options.SceneManagerName = this.txtBoxSceneManager.Text;
                Options.TerrainDirectory = this.txtBoxTerrainDir.Text;
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
    }
}
