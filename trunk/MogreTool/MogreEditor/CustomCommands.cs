using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows.Input;

namespace Mogitor
{
    static class CustomCommands
    {

        static readonly RoutedCommand exitCommand;
        static readonly RoutedCommand aboutCommand;
        static readonly RoutedCommand editDeleteCommand;
        static readonly RoutedCommand editRenameCommand;
        static readonly RoutedCommand settingsCommand;
        static readonly RoutedCommand preferencesCommand;
        static readonly RoutedCommand selectCommand;
        static readonly RoutedCommand moveCommand;
        static readonly RoutedCommand rotateCommand;
        static readonly RoutedCommand scaleCommand;
        static readonly RoutedCommand camModeSolidCommand;
        static readonly RoutedCommand camModeWireframeCommand;
        static readonly RoutedCommand camModePointsCommand;
        static readonly RoutedCommand clearLogCommand;
        static readonly RoutedCommand toggleSceneCommand;
        static readonly RoutedCommand toggleObjectsCommand;
        static readonly RoutedCommand toggleEntityCommand;
        static readonly RoutedCommand togglePropertiesCommand;
        static readonly RoutedCommand toggleLogCommand;
        static readonly RoutedCommand toggleMaterialsCommand;
        static readonly RoutedCommand toggleTemplatesCommand;

        static CustomCommands()
        {
            exitCommand = new RoutedCommand("Exit", typeof(CustomCommands));
            aboutCommand = new RoutedCommand("About", typeof(CustomCommands));
            editDeleteCommand = new RoutedCommand("EditDelete", typeof(CustomCommands));
            editRenameCommand = new RoutedCommand("EditRename", typeof(CustomCommands));
            settingsCommand = new RoutedCommand("Settings", typeof(CustomCommands));
            preferencesCommand = new RoutedCommand("Preferences", typeof(CustomCommands));
            selectCommand = new RoutedCommand("Select", typeof(CustomCommands));
            moveCommand = new RoutedCommand("Move", typeof(CustomCommands));
            rotateCommand = new RoutedCommand("Rotate", typeof(CustomCommands));
            scaleCommand = new RoutedCommand("Scale", typeof(CustomCommands));
            camModeSolidCommand = new RoutedCommand("CamModeSolid", typeof(CustomCommands));
            camModeWireframeCommand = new RoutedCommand("CamModeWireframe", typeof(CustomCommands));
            camModePointsCommand = new RoutedCommand("CamModePoints", typeof(CustomCommands));
            clearLogCommand = new RoutedCommand("ClearLog", typeof(CustomCommands));
            toggleSceneCommand = new RoutedCommand("ToggleScene", typeof(CustomCommands));
            toggleObjectsCommand = new RoutedCommand("ToggleObjects", typeof(CustomCommands));
            toggleEntityCommand = new RoutedCommand("ToggleEntity", typeof(CustomCommands));
            togglePropertiesCommand = new RoutedCommand("ToggleProperties", typeof(CustomCommands));
            toggleLogCommand = new RoutedCommand("ToggleLog", typeof(CustomCommands));
            toggleMaterialsCommand = new RoutedCommand("ToggleMaterials", typeof(CustomCommands));
            toggleTemplatesCommand = new RoutedCommand("ToggleTemplates", typeof(CustomCommands));
        }

        public static RoutedCommand Exit
        {
            get { return exitCommand; }
        }

        public static RoutedCommand About
        {
            get { return aboutCommand; }
        }

        public static RoutedCommand EditDelete
        {
            get { return editDeleteCommand; }
        }

        public static RoutedCommand EditRename
        {
            get { return editRenameCommand; }
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

        public static RoutedCommand CamModeSolid
        {
            get { return camModeSolidCommand; }
        }

        public static RoutedCommand CamModeWireframe
        {
            get { return camModeWireframeCommand; }
        }

        public static RoutedCommand CamModePoints
        {
            get { return camModePointsCommand; }
        }

        public static RoutedCommand ClearLog
        {
            get { return clearLogCommand; }
        }

        public static RoutedCommand ToggleScene
        {
            get { return toggleSceneCommand; }
        }

        public static RoutedCommand ToggleObjects
        {
            get { return toggleObjectsCommand; }
        }

        public static RoutedCommand ToggleEntity
        {
            get { return toggleEntityCommand; }
        }

        public static RoutedCommand ToggleProperties
        {
            get { return togglePropertiesCommand; }
        }

        public static RoutedCommand ToggleLog
        {
            get { return toggleLogCommand; }
        }

        public static RoutedCommand ToggleMaterials
        {
            get { return toggleMaterialsCommand; }
        }

        public static RoutedCommand ToggleTemplates
        {
            get { return toggleTemplatesCommand; }
        }
    }
}
