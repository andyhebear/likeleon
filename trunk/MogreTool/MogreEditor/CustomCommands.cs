using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Input;

namespace Mogitor
{
    static class CustomCommands
    {
        static CustomCommands()
        {
            exitCommand = new RoutedCommand("Exit", typeof(CustomCommands));
            aboutCommand = new RoutedCommand("About", typeof(CustomCommands));
        }

        public static RoutedCommand Exit
        {
            get { return exitCommand; }
        }

        public static RoutedCommand About
        {
            get { return aboutCommand; }
        }

        static readonly RoutedCommand exitCommand;
        static readonly RoutedCommand aboutCommand;
    }
}
