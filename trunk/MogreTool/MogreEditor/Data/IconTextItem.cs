using System.Windows;

namespace Mogitor.Data
{
    class IconTextItem : DependencyObject
    {
        public string Name
        {
            get { return (string)GetValue(NameProperty); }
            set { SetValue(NameProperty, value); }
        }

        public string Icon
        {
            get;
            private set;
        }

        public IconTextItem(string name, string icon)
        {
            Name = name;
            Icon = icon;
        }

        public static readonly DependencyProperty NameProperty =
            DependencyProperty.Register("Name", typeof(string), typeof(IconTextItem), new UIPropertyMetadata(null));
    }
}
