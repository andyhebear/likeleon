using System.Windows;

namespace Mogitor.Windows
{
    /// <summary>
    /// Interaction logic for InputDialog.xaml
    /// </summary>
    public partial class InputDialog : Window
    {
        public InputDialog(string title, string label, string inputText)
        {
            InitializeComponent();

            ShowInTaskbar = false;

            this.Title = title;
            this.tblkLabel.Text = label;
            this.tboxInput.Text = inputText;

            this.tboxInput.SelectAll();
            this.tboxInput.Focus();
        }

        public string InputText
        {
            get { return this.tboxInput.Text; }
        }

        private void btnOk_Click(object sender, RoutedEventArgs e)
        {
            this.DialogResult = true;
        }
    }
}
