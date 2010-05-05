using System;
using System.IO;
using Mogitor.Controls;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Media;
using System.Collections.Generic;
using Mogitor.Data;
using System.Windows.Interop;

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
        private TreeView treeControl;
        private PropertiesView propsControl;
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

        public void SetWindows(OgreControl renderViewControl, TreeView treeControl, PropertiesView propsControl)
        {
            this.renderViewControl = renderViewControl;
            this.treeControl = treeControl;
            this.propsControl = propsControl;
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
            item.Header = new SceneView.Item(name, this.iconList[0]);
            item.FontWeight = FontWeights.Bold;
            this.treeControl.Items.Add(item);
            return item;
        }

        public object InsertTreeItem(object parent, string name, uint iconId, Color color)
        {
            if (parent == null)
                return null;

            TreeViewItem item = new TreeViewItem();
            item.Header = new SceneView.Item(name, this.iconList[iconId]);
            item.FontWeight = FontWeights.Normal;
            item.Foreground = new SolidColorBrush(color);
            
            (parent as TreeViewItem).Items.Add(item);

            return item;
        }

        public void SetMouseCursor(System.Windows.Input.Cursor cursor)
        {
            this.renderViewControl.SetCursor(cursor);
        }

        public void ShowMouseCursor(bool bShow)
        {
            this.renderViewControl.ShowCursorEx(bShow);
        }

        public void SetMousePosition(Mogre.Vector2 position)
        {
            Point pos = TransformToScreen(new Point(position.x, position.y), this.renderViewControl);
            NativeMethods.SetCursorPos((int)pos.X, (int)pos.Y);
        }

        public bool SetProperty(object caller)
        {
            BaseEditor selected = MogitorsRoot.Instance.Selected;
            if (selected != null && selected != caller && selected.Parent != caller)
                return false;
            this.propsControl.Selected = caller;
            return true;
        }

        public bool ClearPropertiesView()
        {
            this.propsControl.Selected = null;
            return true;
        }
        #endregion

        #region Private Methods

        static Point TransformToScreen(Point point, Visual relativeTo)
        {
            HwndSource hwndSource = PresentationSource.FromVisual(relativeTo) as HwndSource;
            Visual root = hwndSource.RootVisual;

            // Translate the point from the visual to the root.
            GeneralTransform transformToRoot = relativeTo.TransformToAncestor(root);
            Point pointRoot = transformToRoot.Transform(point);

            // Transform the point from the root to client coordinates.
            Matrix m = Matrix.Identity;
            Transform transform = VisualTreeHelper.GetTransform(root);

            if (transform != null)
            {
                m = Matrix.Multiply(m, transform.Value);
            }

            Vector offset = VisualTreeHelper.GetOffset(root);
            m.Translate(offset.X, offset.Y);

            Point pointClient = m.Transform(pointRoot);

            // Convert from “device-independent pixels” into pixels.
            pointClient = hwndSource.CompositionTarget.TransformToDevice.Transform(pointClient);

            NativeMethods.POINT pointClientPixels = new NativeMethods.POINT();
            pointClientPixels.x = (0 < pointClient.X) ? (int)(pointClient.X + 0.5) : (int)(pointClient.X - 0.5);
            pointClientPixels.y = (0 < pointClient.Y) ? (int)(pointClient.Y + 0.5) : (int)(pointClient.Y - 0.5);

            // Transform the point into screen coordinates.
            NativeMethods.POINT pointScreenPixels = pointClientPixels;
            NativeMethods.ClientToScreen(hwndSource.Handle, pointScreenPixels);

            return new Point(pointScreenPixels.x, pointScreenPixels.y);
        }
        #endregion
    }
}
