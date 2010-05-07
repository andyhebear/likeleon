using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Media;

namespace Mogitor.Data
{
    /// <summary>
    /// Project options
    /// </summary>
    public class ProjectOptions
    {
        public class Camera
        {
            public Mogre.Vector3 Position { get; set; }
            public Mogre.Quaternion Orientation { get; set; }
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
        
        public Color SelectionBBColourForSerializer;
        [System.Xml.Serialization.XmlIgnore]
        public Mogre.ColourValue SelectionBBColour
        {
            get
            {
                return new Mogre.ColourValue((float)SelectionBBColourForSerializer.R / 255.0f,
                    (float)SelectionBBColourForSerializer.G / 255.0f,
                    (float)SelectionBBColourForSerializer.B / 255.0f);
            }
        }

        public Color HighlightBBColourForSerializer;
        [System.Xml.Serialization.XmlIgnore]
        public Mogre.ColourValue HighlightBBColour
        {
            get
            {
                return new Mogre.ColourValue((float)HighlightBBColourForSerializer.R / 255.0f,
                        (float)HighlightBBColourForSerializer.G / 255.0f,
                        (float)HighlightBBColourForSerializer.B / 255.0f,
                        (float)HighlightBBColourForSerializer.A / 255.0f);
            }
        }
        #endregion

        #region Constructor
        public ProjectOptions()
        {
            ResourceDirectories = new List<string>();
            Cameras = new List<Camera>();
        }
        #endregion
    }
}
