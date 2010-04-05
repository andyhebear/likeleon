using System.IO;

namespace Mogitor
{
    class MogitorsSystem
    {
        #region Fields
        /// <summary>
        /// The current instance of the MogitorsRoot
        /// </summary>
        private static MogitorsSystem instance;
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
        #endregion
    }
}
