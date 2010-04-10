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
            settingsCommand = new RoutedCommand("Settings", typeof(CustomCommands));
            preferencesCommand = new RoutedCommand("Preferences", typeof(CustomCommands));
        }

        public static RoutedCommand Exit
        {
            get { return exitCommand; }
        }

        public static RoutedCommand About
        {
            get { return aboutCommand; }
        }

        public static RoutedCommand Settings
        {
            get { return settingsCommand; }
        }

        public static RoutedCommand Preferences
        {
            get { return preferencesCommand; }
        }

        static readonly RoutedCommand exitCommand;
        static readonly RoutedCommand aboutCommand;
        static readonly RoutedCommand settingsCommand;
        static readonly RoutedCommand preferencesCommand;
    }
}
