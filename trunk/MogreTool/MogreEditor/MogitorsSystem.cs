using System;
using System.IO;
using Mogitor.Controls;
using System.Windows;

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

        #region Public Methods
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

        public void SetWindows(OgreControl renderViewControl)
        {
            this.renderViewControl = renderViewControl;
        }

        public MessageBoxResult DisplayMessageDialog(string msg, MessageBoxButton messageBoxButton)
        {
            return MessageBox.Show(msg, "MogitorsSystem", messageBoxButton);
        }

        public string CombinePath(string path1, string path2)
        {
            return Path.Combine(path1, path2);
        }
        #endregion
    }
}
