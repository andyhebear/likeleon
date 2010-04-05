using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;
using System.IO;
using System.Xml.Serialization;
using System.Xml;

namespace Mogitor.Data
{
    class MogitorsRoot
    {
        #region Fields
        /// <summary>
        /// The current instance of the MogitorsRoot
        /// </summary>
        private static MogitorsRoot instance;
        private readonly ProjectOptions projectOptions = new ProjectOptions();
        private readonly MogitorsSystem system;
        #endregion

        #region Public Properties
        public static MogitorsRoot Instance
        {
            get
            {
                if (instance == null)
                {
                    instance = new MogitorsRoot();
                }

                return instance;
            }
        }

        Mogre.RenderWindow RenderWindow 
        { 
            get; 
            set;
        }

        public bool IsSceneLoaded
        {
            get;
            private set;
        }

        public bool IsSceneModified
        {
            get;
            private set;
        }

        public ProjectOptions ProjectOptions
        {
            get { return this.projectOptions; }
        }
        #endregion

        #region Constructors
        MogitorsRoot()
        {
            this.system = MogitorsSystem.Instance;

            RenderWindow = null;
            IsSceneLoaded = false;
            IsSceneModified = false;
        }
        #endregion

        #region Public Methods
        public bool TerminateScene()
        {
            if (!IsSceneLoaded)
                return true;

            if (IsSceneModified)
            {
                MessageBoxResult ret = MessageBox.Show("Do you want to save your current project?", "Mogitor", MessageBoxButton.YesNoCancel);
                switch (ret)
                {
                    case MessageBoxResult.Yes:
                        SaveScene(false);
                        break;
                    case MessageBoxResult.Cancel:
                        return false;
                    case MessageBoxResult.No:
                        break;
                }
            }

            IsSceneLoaded = false;

            RenderWindow.RemoveAllViewports();

            Mogre.ResourceGroupManager mngr = Mogre.ResourceGroupManager.Singleton;
            mngr.DestroyResourceGroup("ProjectResources");

            return true;
        }

        public void WriteProjectOptions(XmlTextWriter writer, bool newProject)
        {
            XmlSerializer serializer = new XmlSerializer(typeof(ProjectOptions));
            serializer.Serialize(writer, ProjectOptions);
        }

        public BaseSerializer.SceneFileResult LoadScene(string fileName)
        {
            if (fileName.Length > 0)
                fileName = system.QualifyPath(fileName);

            //ClearProjectOptions();
            return BaseSerializer.SceneFileResult.Ok;

        }
        #endregion

        #region Private Methods
        private bool SaveScene(bool saveAs)
        {
            // Serialize xml
            return false;
        }
        #endregion
    }
}
