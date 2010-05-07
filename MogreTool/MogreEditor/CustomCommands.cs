﻿using System;
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
            selectCommand = new RoutedCommand("Select", typeof(CustomCommands));
            moveCommand = new RoutedCommand("Move", typeof(CustomCommands));
            rotateCommand = new RoutedCommand("Rotate", typeof(CustomCommands));
            scaleCommand = new RoutedCommand("Scale", typeof(CustomCommands));
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

        public static RoutedCommand Select
        {
            get { return selectCommand; }
        }

        public static RoutedCommand Move
        {
            get { return moveCommand; }
        }

        public static RoutedCommand Rotate
        {
            get { return rotateCommand; }
        }

        public static RoutedCommand Scale
        {
            get { return scaleCommand; }
        }

        static readonly RoutedCommand exitCommand;
        static readonly RoutedCommand aboutCommand;
        static readonly RoutedCommand settingsCommand;
        static readonly RoutedCommand preferencesCommand;
        static readonly RoutedCommand selectCommand;
        static readonly RoutedCommand moveCommand;
        static readonly RoutedCommand rotateCommand;
        static readonly RoutedCommand scaleCommand;
    }
}