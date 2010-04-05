using System;
using System.Collections.Generic;
using System.Configuration;
using System.Data;
using System.Linq;
using System.Windows;
using Mogitor.Data;

namespace Mogitor
{
    /// <summary>
    /// Interaction logic for App.xaml
    /// </summary>
    public partial class App : Application
    {
        #region Private Fields
        private Mogre.Root mogreRoot;
        private MogitorsRoot mogitorsRoot;
        #endregion

        #region Protected Methods
        protected override void OnStartup(StartupEventArgs e)
        {
            AppDomain.CurrentDomain.UnhandledException +=
                (object sender, UnhandledExceptionEventArgs excArgs) =>
                {
                    Exception ex = (Exception)excArgs.ExceptionObject;

                    MessageBox.Show("Whops! Please contat the developer with the following information:\n\n" +
                        ex.Message + ex.StackTrace,
                        "Fatal Error",
                        MessageBoxButton.OK, MessageBoxImage.Stop);
                };
            base.OnStartup(e);

            SetupMogre("plugins.cfg", "ogre.cfg", "mogitor.log");
        }
        #endregion

        #region Private Methods
        void SetupMogre(string pluginFileName, string configFileName, string logFileName)
        {
            // Create the main mogre object
            this.mogreRoot = new Mogre.Root(pluginFileName);

            Mogre.LogManager.Singleton.SetLogDetail(Mogre.LoggingLevel.LL_BOREME);

            SetupMogreResources();

            SetupDirectX();

            // Initialize without creating window
            this.mogreRoot.Initialise(false);   // don't create a window

            this.mogitorsRoot = MogitorsRoot.Instance;
        }

        private static void SetupMogreResources()
        {
            // Configure resource paths from : "resources.cfg" file
            Mogre.ConfigFile cf = new Mogre.ConfigFile();
            cf.Load("resources.cfg", "\t:=", true);

            // Go through all sections & settings in the file
            Mogre.ConfigFile.SectionIterator seci = cf.GetSectionIterator();
            while (seci.MoveNext())
            {
                string secName = seci.CurrentKey;

                Mogre.ConfigFile.SettingsMultiMap settings = seci.Current;
                foreach (var pair in settings)
                {
                    string typeName = pair.Key;
                    string archName = pair.Value;
                    Mogre.ResourceGroupManager.Singleton.AddResourceLocation(archName, typeName, secName);
                }
            }
        }

        private bool SetupDirectX()
        {
            bool foundit = false;
            foreach (Mogre.RenderSystem rs in this.mogreRoot.GetAvailableRenderers())
            {
                if (rs == null)
                    continue;

                this.mogreRoot.RenderSystem = rs;
                string rname = this.mogreRoot.RenderSystem.Name;
                if (rname == "Direct3D9 Rendering Subsystem")
                {
                    foundit = true;
                    break;
                }
            }

            if (!foundit)
                return false;

            this.mogreRoot.RenderSystem.SetConfigOption("Full Screen", "No");
            this.mogreRoot.RenderSystem.SetConfigOption("Video Mode", "800 x 600 @ 32-bit colour");

            return true;
        }
        #endregion
    }
}
