using System.Windows;

namespace Mogitor.Windows
{
    /// <summary>
    /// Interaction logic for PreferencesDialog.xaml
    /// </summary>
    public partial class PreferencesDialog : Window
    {
        public PreferencesDialog()
        {
            InitializeComponent();

            ShowInTaskbar = false;

            this.chkNotWpfSurface.IsChecked = !MogitorSettings.Instance.UseWpfDisplaySurface;
            this.tboxTargetFps.Text = MogitorSettings.Instance.FrameRate.ToString();
        }

        private void btnOk_Click(object sender, RoutedEventArgs e)
        {
            MogitorSettings.Instance.UseWpfDisplaySurface = this.chkNotWpfSurface.IsChecked == true ? false : true;

            if (this.chkNotWpfSurface.IsChecked == true)
            {
                int newFps;
                if (int.TryParse(this.tboxTargetFps.Text, out newFps))
                    MogitorSettings.Instance.FrameRate = newFps;
                else
                    MessageBox.Show("Failed to parse target FPS, this item will not be saved");
            }

            this.DialogResult = true;
        }
    }
}
