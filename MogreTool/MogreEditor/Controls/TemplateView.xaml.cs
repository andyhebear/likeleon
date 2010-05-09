using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using Mogitor.Data;

namespace Mogitor.Controls
{
    /// <summary>
    /// Interaction logic for TemplateView.xaml
    /// </summary>
    public partial class TemplateView : UserControl
    {
        public TemplateView()
        {
            InitializeComponent();
        }

        public void PrepareView()
        {
            TreeViewItem rootItem = new TreeViewItem();
            rootItem.Header = new IconTextItem("General Templates", "../Resources/Icons/project.png");
            rootItem.FontWeight = FontWeights.Bold;
            this.treeControl.Items.Add(rootItem);

            rootItem = new TreeViewItem();
            rootItem.Header = new IconTextItem("Project Templates", "../Resources/Icons/template.png");
            rootItem.FontWeight = FontWeights.Bold;
            this.treeControl.Items.Add(rootItem);
        }

        public void DestroyScene()
        {
            this.treeControl.Items.Clear();
        }
    }
}
