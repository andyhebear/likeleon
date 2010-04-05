using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Mogitor.Data
{
    class BaseSerializer
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
    }
}
