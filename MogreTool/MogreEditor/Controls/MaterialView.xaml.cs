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
                    matItem.Items.Add(techItem);

                    for (ushort p = 0; p < tech.NumPasses; ++p)
                    {
                        Mogre.Pass pass = tech.GetPass(p);
                        dumTitle = "Pass " + p + ": (" + pass.Name + ")";
                        TreeViewItem passItem = new TreeViewItem();
                        passItem.Header = new IconTextItem(dumTitle, "../Resources/Icons/pass.png");
                        passItem.FontWeight = FontWeights.Normal;
                        passItem.ToolTip = ((t << 8) + p).ToString();
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
    }
}
