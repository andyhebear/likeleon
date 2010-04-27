using System.Windows.Controls;

namespace Mogitor.Controls
{
    class TreeControl : TreeView
    {
        public class Item
        {
            public string Name
            {
                get;
                private set;
            }

            public string Icon
            {
                get;
                private set;
            }

            public Item(string name, string icon)
            {
                Name = name;
                Icon = icon;
            }
        }
    }
}
