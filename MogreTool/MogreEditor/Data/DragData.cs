using System.Collections.Generic;

namespace Mogitor.Data
{
    class DragData
    {
        public DragData(object source, object sourceObject)
        {
            Source = source;
            SourceObject = sourceObject;

            Parameters = new Mogre.NameValuePairList();
        }

        public object Source { get; private set; }
        public object SourceObject { get; private set; }

        public BaseEditor Object { get; set; }
        public string ObjectType { get; set; }
        public Mogre.NameValuePairList Parameters { get; private set; }
    }
}
