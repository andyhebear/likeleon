using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

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
            throw new NotImplementedException();
        }

        public override SceneFileResult Import(string importFile)
        {
            throw new NotImplementedException();
        }
    }
}
