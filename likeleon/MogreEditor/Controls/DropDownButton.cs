using System.Windows.Controls.Primitives;
using System.Windows;
using System.Windows.Controls;
using System;
using System.Windows.Data;

namespace Mogitor.Controls
{
    class DropDownButton : ToggleButton
    {
        public static readonly DependencyProperty DropDownProperty =
            DependencyProperty.Register("DropDown", typeof(Popup), typeof(DropDownButton), new UIPropertyMetadata(null));

        public DropDownButton()
        {
            Binding binding = new Binding("DropDown.IsOpen");
            binding.Source = this;
            this.SetBinding(IsCheckedProperty, binding);
        }

        public Popup DropDown
        {
            get { return (Popup)GetValue(DropDownProperty); }
            set { SetValue(DropDownProperty, value); }
        }

        protected override void OnClick()
        {
            if (DropDown == null)
                return;

            if (DropDown.IsOpen)
            {
                DropDown.IsOpen = false;
            }
            else
            {
                DropDown.PlacementTarget = this;
                DropDown.Placement = PlacementMode.Bottom;

                DropDown.IsOpen = true;
            }
        }
    }
}
