using System.Windows.Controls;
using Mogitor.Data;
using System.Windows;
using System.Collections.Generic;

namespace Mogitor.Controls
{
    /// <summary>
    /// Interaction logic for MaterialView.xaml
    /// </summary>
    public partial class MaterialView : UserControl
    {
        #region Fields
        private MaterialEditor materialEditor;
        #endregion

        #region Public Methods
        public MaterialView()
        {
            InitializeComponent();
        }

        public void PrepareView()
        {
            IList<string> materials = MogitorsRoot.Instance.MaterialNames;
            this.treeControl.Items.Clear();

            TreeViewItem rootItem = new TreeViewItem();
            rootItem.Header = new IconTextItem("Project Materials", "../Resources/Icons/project.png");
            rootItem.FontWeight = FontWeights.Bold;

            foreach (string material in materials)
            {
                Mogre.MaterialPtr matPtr = Mogre.MaterialManager.Singleton.GetByName(material);
                if (matPtr == null)
                    continue;

                TreeViewItem matItem = new TreeViewItem();
                matItem.Header = new IconTextItem(material, "../Resources/Icons/material.png");
                matItem.FontWeight = FontWeights.Normal;
                rootItem.Items.Add(matItem);

                for (ushort t = 0; t < matPtr.NumTechniques; ++t)
                {
                    Mogre.Technique tech = matPtr.GetTechnique(t);
                    string dumTitle = "Technique " + t + ": (" + tech.Name + ")";
                    TreeViewItem techItem = new TreeViewItem();
                    techItem.Header = new IconTextItem(dumTitle, "../Resources/Icons/technique.png");
                    techItem.FontWeight = FontWeights.Normal;
                    techItem.Tag = t << 8;
                    matItem.Items.Add(techItem);

                    for (ushort p = 0; p < tech.NumPasses; ++p)
                    {
                        Mogre.Pass pass = tech.GetPass(p);
                        dumTitle = "Pass " + p + ": (" + pass.Name + ")";
                        TreeViewItem passItem = new TreeViewItem();
                        passItem.Header = new IconTextItem(dumTitle, "../Resources/Icons/pass.png");
                        passItem.FontWeight = FontWeights.Normal;
                        passItem.Tag = (t << 8) + p;
                        techItem.Items.Add(passItem);
                    }
                }
            }

            rootItem.IsExpanded = true;
            this.treeControl.Items.Add(rootItem);
        }

        public void DestroyScene()
        {
            this.treeControl.Items.Clear();
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

            if (treeItem.Parent == null)
            {
                if (MogitorsRoot.Instance.Selected != null)
                    MogitorsRoot.Instance.Selected.IsSelected = false;
                MogitorsRoot.Instance.RootEditor.IsSelected = true;
                return;
            }

            IconTextItem item = treeItem.Header as IconTextItem;
            if (item == null)
            {
                e.Handled = true;
                return;
            }

            int id = (treeItem.Tag != null) ? (int)treeItem.Tag : 0;

            int level = 0;
            while (treeItem.Tag != null)
            {
                treeItem = treeItem.Parent as TreeViewItem;
                item = treeItem.Header as IconTextItem;
                ++level;
            }

            string name = item.Name;

            MogitorsRoot mogRoot = MogitorsRoot.Instance;

            if (this.materialEditor == null || name != this.materialEditor.Name ||
                level != this.materialEditor.PropertyLevel ||
                id != this.materialEditor.PropertyId)
            {
                if (mogRoot.Selected != null)
                    mogRoot.Selected.IsSelected = false;

                if (this.materialEditor != null)
                    this.materialEditor.Destroy(false);

                BaseEditor parentEd = null;
                Mogre.NameValuePairList parameters = new Mogre.NameValuePairList();
                parameters["Name"] = name;

                this.materialEditor = MaterialEditor.Factory.CreateObject(ref parentEd, parameters) as MaterialEditor;
                if (this.materialEditor != null && this.materialEditor.Load())
                {
                    this.materialEditor.TreeItemHandle = treeItem;
                    this.materialEditor.SetPropertiesLevel(level, id);
                    this.materialEditor.IsSelected = true;
                }
            }
        }
        #endregion
    }
}
