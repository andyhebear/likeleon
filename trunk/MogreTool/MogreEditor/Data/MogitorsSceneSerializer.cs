using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Xml;

namespace Mogitor.Data
{
    class MogitorsSceneSerializer : BaseSerializer
    {
        public MogitorsSceneSerializer()
            : base("Mogitors Scene Serializer")
        {
        }

        public override SceneFileResult Export(bool saveAs)
        {
            MogitorsRoot mogRoot = MogitorsRoot.Instance;
            MogitorsSystem system = MogitorsSystem.Instance;

            ProjectOptions opt = mogRoot.ProjectOptions;
            string fileName = opt.ProjectDir + opt.ProjectName + ".mogscene";

            // If saveAs is true, use the MogitorsSystem Function to retrieve
            // a FileName and also copy the contents of current scene to the new location
            if (saveAs)
            {
                Microsoft.Win32.OpenFileDialog dlg = new Microsoft.Win32.OpenFileDialog();
                dlg.FileName = "";
                dlg.DefaultExt = ".mogscene";
                dlg.Filter = "Mogitor Scene File (.mogscene)|*.mogscene";

                Nullable<bool> result = dlg.ShowDialog();
                if (result != true)
                    return SceneFileResult.Cancel;

                fileName = dlg.FileName;

                string oldProjDir = opt.ProjectDir;
                string oldProjName = opt.ProjectName;

                opt.ProjectName = system.ExtractFileName(fileName);
                opt.ProjectDir = system.ExtractFilePath(fileName);

                mogRoot.AdjustUserResourceDirectories(oldProjDir);

                string newDir = opt.ProjectDir;

                system.MakeDirectory(newDir);
                system.CopyFilesEx(oldProjDir, newDir);

                string delFileStr = system.QualifyPath(opt.ProjectDir + "\\" + oldProjName + ".mogscene");
                system.DeleteFile(delFileStr);
            }

            XmlTextWriter textWriter = new XmlTextWriter(fileName, System.Text.Encoding.Unicode);
            textWriter.Formatting = Formatting.Indented;
            textWriter.WriteStartDocument();
            textWriter.WriteStartElement("MogitorScene version=\"1\"");
            mogRoot.WriteProjectOptions(textWriter, true);
            
            // TODO: Write objects.

            textWriter.WriteEndElement();
            textWriter.WriteEndDocument();
            textWriter.Close();

            mogRoot.IsSceneModified = false;

            if (saveAs)
            {
                mogRoot.TerminateScene();
                mogRoot.LoadScene(fileName);
            }
            return SceneFileResult.Ok;
        }

        public override SceneFileResult Import(string importFile)
        {
            MogitorsRoot mogRoot = MogitorsRoot.Instance;
            MogitorsSystem system = MogitorsSystem.Instance;

            if (importFile == "")
            {
                Microsoft.Win32.OpenFileDialog dlg = new Microsoft.Win32.OpenFileDialog();
                dlg.FileName = "";
                dlg.DefaultExt = ".mogscene";
                dlg.Filter = "Mogitor Scene File (.mogscene)|*.mogscene";
                Nullable<bool> result = dlg.ShowDialog();
                if (result != true)
                {
                    return SceneFileResult.Cancel;
                }
                importFile = dlg.FileName;
            }

            string filePath = system.ExtractFilePath(importFile);
            string fileName = system.ExtractFileName(importFile);

            ProjectOptions opt = mogRoot.ProjectOptions;

            opt.ProjectDir = filePath;
            opt.ProjectName = fileName;

            XmlTextReader textReader = new XmlTextReader(importFile);

            system.UpdateLoadProgress(5, "Loading scene objects");

            if (!textReader.ReadToFollowing("MogitorScene"))
                return SceneFileResult.ErrParse;

            // Check version
            string fileVersion = textReader.GetAttribute("version");
            if (fileVersion != null)
            {
                if (int.Parse(fileVersion) != 1)
                    return SceneFileResult.ErrParse;
            }

            // Read project options
            if (textReader.ReadToFollowing("ProjectOptions") == true)
            {
                system.UpdateLoadProgress(15, "Parsing project options");
                mogRoot.LoadProjectOptions(textReader);
                mogRoot.PrepareProjectResources();
            }

            //// Moves the reader back to the "MogitorScene" element node.
            //textReader.MoveToElement();

            system.UpdateLoadProgress(30, "Creating scene objects");

            // Load objects
            Mogre.NameValuePairList param = new Mogre.NameValuePairList();
            while (textReader.ReadToNextSibling("Object"))
            {
                string objectType = textReader.GetAttribute("Type");
                if (objectType == "")
                    continue;

                param.Clear();
                while (textReader.MoveToNextAttribute())
                {
                    param.Insert(textReader.Name, textReader.Value);
                }

                BaseEditor result = MogitorsRoot.CreateEditorObject(0, objectType, param, false, false);
            }

            mogRoot.AfterLoadScene();

            return SceneFileResult.Ok;
        }
    }
}
