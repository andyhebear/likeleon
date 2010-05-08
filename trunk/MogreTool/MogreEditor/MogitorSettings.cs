using System;

namespace Mogitor
{
    class MogitorSettings
    {
        public static void Initialize(MogitorSettings newInstance)
        {
            if (newInstance == null)
            {
                throw new ArgumentNullException("newInstance");
            }
            instance = newInstance;
        }

        private static MogitorSettings instance = null;
        public static MogitorSettings Instance
        {
            get
            {
                if (instance == null)
                {
                    throw new InvalidOperationException("Settings not initialized");
                }
                return instance;
            }
        }

        public int MaxObjectType
        {
            get { return Properties.Settings.Default.MaxObjectType; }
        }

        public bool UseWpfDisplaySurface
        {
            get { return Properties.Settings.Default.UseWpfDisplaySurface; }
            set { Properties.Settings.Default.UseWpfDisplaySurface = value; }
        }

        public int FrameRate
        {
            get { return Properties.Settings.Default.FrameRate; }
            set { Properties.Settings.Default.FrameRate = value; }
        }
    }
}
