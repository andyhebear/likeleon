using System;
using System.IO;
using Mogitor.Controls;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Media;
using System.Collections.Generic;
using Mogitor.Data;

namespace Mogitor
{
    class MogitorsSystem
    {
        #region Fields
        /// <summary>
        /// The current instance of the MogitorsRoot
        /// </summary>
        private static MogitorsSystem instance;
        private OgreControl renderViewControl;
        private TreeControl treeControl;
        private readonly IDictionary<uint, string> iconList = new Dictionary<uint, string>();
        #endregion

        #region Public Properties
        public static MogitorsSystem Instance
        {
            get
            {
                if (instance == null)
                {
                    instance = new MogitorsSystem();
                }

                return instance;
            }
        }

        public string ProjectsDirectory
        {
            get
            {
                return Directory.GetCurrentDirectory();
            }
        }
        #endregion

        #region Constructors
        public MogitorsSystem()
        {
            this.iconList.Clear();
        }
        #endregion

        #region Public Methods
        public void InitTreeIcons()
        {
            foreach (KeyValuePair<string, BaseEditorFactory> factory in MogitorsRoot.Instance.EditorObjectFactories)
            {
                if (factory.Value == null)
                    continue;

                string filenm = factory.Value.Icon;
                if (filenm != "")
                {
                    filenm = QualifyPath("../Resources/" + filenm);
                    this.iconList[factory.Value.TypeID] = filenm;
                }
                else
                {
                    this.iconList[factory.Value.TypeID] = QualifyPath("../Resources/Icons/project.png");
                }
            }
        }

        public string QualifyPath(string fileName)
        {
            return fileName;
        }

        public void UpdateLoadProgress(float percentage, string msg)
        {
            if (percentage > 0)
                renderViewControl.OverlayText = "Loading " + percentage + "%\n" + msg;
            else
                renderViewControl.OverlayText = msg;
        }

        public string ExtractFileName(string fileName)
        {
            return Path.GetFileNameWithoutExtension(fileName);
        }

        public string ExtractFilePath(string fileName)
        {
            return Path.GetDirectoryName(fileName);
        }

        public bool MakeDirectory(string dirName)
        {
            DirectoryInfo di = new DirectoryInfo(dirName);
            try
            {
                if (di.Exists)
                {
                    // Already exists
                    return true;
                }
                di.Create();
                return true;
            }
            catch (Exception)
            {
                return false;
            }
        }

        public bool CopyFilesEx(string source, string destination)
        {
            // TODO: Copy, not move.
            Directory.Move(source, destination);
            return true;
        }

        public void DeleteFile(string file)
        {
            if (!File.Exists(file))
                return;
            try
            {
                File.Delete(file);
            }
            catch (IOException)
            {
            }
            return;
        }

        public void SetWindows(OgreControl renderViewControl, TreeControl treeControl)
        {
            this.renderViewControl = renderViewControl;
            this.treeControl = treeControl;
        }

        public MessageBoxResult DisplayMessageDialog(string msg, MessageBoxButton messageBoxButton)
        {
            return MessageBox.Show(msg, "MogitorsSystem", messageBoxButton);
        }

        public string CombinePath(string path1, string path2)
        {
            return Path.Combine(path1, path2);
        }

        public void ClearTreeItems()
        {
            this.treeControl.Items.Clear();
        }

        public object CreateTreeRoot(string name)
        {
            TreeViewItem item = new TreeViewItem();
            item.Header = new TreeControl.Item(name, this.iconList[0]);
            item.FontWeight = FontWeights.Bold;
            this.treeControl.Items.Add(item);
            return item;
        }

        public object InsertTreeItem(object parent, string name, uint iconId, Color color)
        {
            if (parent == null)
                return null;

            TreeViewItem item = new TreeViewItem();
            item.Header = new TreeControl.Item(name, this.iconList[iconId]);
            item.FontWeight = FontWeights.Normal;
            item.Foreground = new SolidColorBrush(color);
            
            (parent as TreeViewItem).Items.Add(item);

            return item;
        }
        #endregion
    }
}
