using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Mogitor.Data
{
    /// <summary>
    /// Project options
    /// </summary>
    public class ProjectOptions
    {
        public class Camera
        {
            public Mogre.Vector3 Position;
            public Mogre.Quaternion Orientation;
        }

        #region Public Properties
        [System.Xml.Serialization.XmlIgnore]
        public bool IsNewProject { get; set; }
        public string ProjectDir { get; set; }
        public string ProjectName { get; set; }
        public string SceneManagerName { get; set; }
        public string TerrainDirectory { get; set; }
        public List<string> ResourceDirectories { get; set; }
        public List<Camera> Cameras { get; set; }
        #endregion

        #region Constructor
        public ProjectOptions()
        {
            ResourceDirectories = new List<string>();
        }
        #endregion
    }
}
