using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Mogitor.Data
{
    /// <summary>
    /// A class that is responsible for serialization/deserialization of scene file
    /// </summary>
    public abstract class BaseSerializer
    {
        public enum SceneFileResult
        {
            Ok = 1,
            Cancel = 0,
            ErrUnknown = -1,
            ErrFile = -2,
            ErrParse = -3,
            ErrOgre = -4
        }

        public BaseSerializer(string typeName)
        {
            TypeName = typeName;
        }

        public abstract SceneFileResult Export(bool saveAs);
        public abstract SceneFileResult Import(string importFile);

        #region Properties
        public string TypeName
        {
            get;
            private set;
        }
        #endregion
    }
}
