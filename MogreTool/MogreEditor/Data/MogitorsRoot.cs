﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;
using System.IO;
using System.Xml.Serialization;
using System.Xml;

namespace Mogitor.Data
{
    partial class MogitorsRoot
    {
        #region Fields
        /// <summary>
        /// The current instance of the MogitorsRoot
        /// </summary>
        private static MogitorsRoot instance;
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

        public Mogre.RenderWindow RenderWindow 
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
            set;
        }

        public ProjectOptions ProjectOptions
        {
            get;
            private set;
        }
        #endregion

        #region Constructors
        MogitorsRoot()
        {
            this.system = MogitorsSystem.Instance;

            RenderWindow = null;
            IsSceneLoaded = false;
            IsSceneModified = false;
            ProjectOptions = new ProjectOptions();
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

            if (SceneTerminated != null)
                SceneTerminated(this, EventArgs.Empty);

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

        public bool LoadProjectOptions(XmlTextReader reader)
        {
            XmlSerializer serializer = new XmlSerializer(typeof(ProjectOptions));
            try
            {
                ProjectOptions = (ProjectOptions)serializer.Deserialize(reader);
                return true;
            }
            catch (Exception)
            {
                return false;
            }
        }

        public bool SaveScene(bool saveAs)
        {
            MogitorsSceneSerializer defaultSerializer = new MogitorsSceneSerializer();
            return (defaultSerializer.Export(saveAs) == BaseSerializer.SceneFileResult.Ok);
        }

        public BaseSerializer.SceneFileResult LoadScene(string fileName)
        {
            if (fileName.Length > 0)
                fileName = system.QualifyPath(fileName);

            ClearProjectOptions();
            SceneUpdated = null;

            this.system.UpdateLoadProgress(-1, "Load in progress...");

            MogitorsSceneSerializer defaultSerializer = new MogitorsSceneSerializer();
            BaseSerializer.SceneFileResult ret = defaultSerializer.Import(fileName);

            if (ret != BaseSerializer.SceneFileResult.Ok)
            {
                this.system.UpdateLoadProgress(-1, "Please load a Scene File...");
            }

            return ret;
        }

        public void AdjustUserResourceDirectories(string oldPath)
        {
            throw new NotImplementedException("AdjustUserResourceDirectories");
        }

        public void PrepareProjectResources()
        {
            try
            {
                Mogre.ResourceGroupManager mngr = Mogre.ResourceGroupManager.Singleton;
                mngr.CreateResourceGroup("ProjectResources");

                FillResourceGroup(mngr, ProjectOptions.ResourceDirectories, ProjectOptions.ProjectDir, "ProjectResources");

                mngr.InitialiseResourceGroup("ProjectResources");
            }
            catch
            {
                Mogre.LogManager.Singleton.DefaultLog.LogMessage("MOGITOR EXCEPTION: Can not prepare project resources!!", Mogre.LogMessageLevel.LML_CRITICAL);
            }
        }

        public void AfterLoadScene()
        {
            system.UpdateLoadProgress(60, "Loading scene objects");

            if (SceneUpdated != null)
                SceneUpdated(this, EventArgs.Empty);
            SceneUpdated = null;

            system.UpdateLoadProgress(100, "Rendering...");

            IsSceneLoaded = true;
            IsSceneModified = false;

            if (SceneLoaded != null)
                SceneLoaded(this, EventArgs.Empty);
        }

        public void FillResourceGroup(Mogre.ResourceGroupManager mngr, IList<string> list, string path, string group)
        {
            foreach (string str in list)
            {
                string stype = "";

                if (str.Substring(0, 3) == "FS:")
                    stype = "FileSystem";
                else if (str.Substring(0, 3) == "ZP:")
                    stype = "Zip";

                string resource = str.Remove(0, 3);
                resource = system.QualifyPath(resource);

                mngr.AddResourceLocation(resource, stype, group);
            }
        }
        #endregion

        #region Private Methods
        private void ClearProjectOptions()
        {
            ProjectOptions.IsNewProject = false;
            ProjectOptions.ProjectDir = "";
            ProjectOptions.ProjectName = "";
            ProjectOptions.SceneManagerName = "";
            ProjectOptions.TerrainDirectory = "";
        }
        #endregion

        #region Events
        public event EventHandler<EventArgs> SceneUpdated;
        public event EventHandler<EventArgs> SceneLoaded;
        public event EventHandler<EventArgs> SceneTerminated;
        #endregion
    }
}