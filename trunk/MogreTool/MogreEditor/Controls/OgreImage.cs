using System;
using System.ComponentModel;
using System.Windows.Media;
using System.Threading;
using System.Windows;
using System.Windows.Interop;
using System.Windows.Threading;
using Mogre;

namespace MogreEditor.Controls
{
    partial class OgreImage : D3DImage, ISupportInitialize
    {
        #region IDisposable Members
        public void Dispose()
        {
            IsFrontBufferAvailableChanged -= OnIsFrontBufferAvailableChanged;

            DetachRenderTarget(true, true);

            if (this.currentThread != null)
            {
                this.currentThread.Abort();
            }

            if (this.root != null)
            {
                DisposeRenderTarget();
                CompositorManager.Singleton.RemoveAll();

                this.root.Dispose();
                this.root = null;
            }
        }
        #endregion

        #region ISupportInitialize Implementations
        public void BeginInit()
        {
        }

        public void EndInit()
        {
            if (AutoInitialize)
            {
                InitOgre();
            }
        }
        #endregion

        #region Public Events
        public event RoutedEventHandler Initialized;
        public event EventHandler PreRender;
        public event EventHandler PostRender;
        #endregion

        #region Public Properties
        public Root Root
        {
            get { return this.root; }
        }

        public SceneManager SceneManager
        {
            get { return this.sceneMgr; }
        }

        public Camera Camera
        {
            get { return this.camera; }
        }
        #endregion

        #region Private Fields
        private Root root;
        private RenderWindow renderWindow;
        private SceneManager sceneMgr;
        private Camera camera;
        private Viewport viewPort;
        private RenderTarget renTarget;
        private TexturePtr texture;
        private bool imageSourceValid;
        private bool eventAttached;
        private Thread currentThread;
        private DispatcherTimer timer;
        private int reloadRenderTargetTime;
        #endregion

        #region Public Methods
        public bool InitOgre()
        {
            return InitOgreInternal();
        }

        public void InitOgreAsync()
        {
            InitOgreAsync(ThreadPriority.Normal, null);
        }
        #endregion

        #region Private Methods
        private Thread InitOgreAsync(ThreadPriority priority, RoutedEventHandler completeHandler)
        {
            if (completeHandler != null)
                Initialized += completeHandler;

            this.currentThread = new Thread(() => InitOgreInternal())
                                        {
                                            Priority = priority
                                        };
            this.currentThread.Start();

            return this.currentThread;
        }

        private bool InitOgreInternal()
        {
            lock (this)
            {
                IntPtr hWnd = IntPtr.Zero;

                foreach (PresentationSource source in PresentationSource.CurrentSources)
                {
                    var hwndSource = (source as HwndSource);
                    if (hwndSource != null)
                    {
                        hWnd = hwndSource.Handle;
                        break;
                    }
                }

                if (hWnd == IntPtr.Zero)
                    return false;

                CallResourceItemLoaded(new ResourceLoadEventArgs("Engine", 0));

                // Load the ogre engine
                this.root = new Root();

                InitResources();

                if (SetupDirectX() == false)
                    return false;

                CreateRenderWindow(hWnd);

                InitializeResources();

                this.Dispatcher.Invoke(
                    (MethodInvoker)delegate
                    {
                        CreateSceneManager();
                        CreateCamera();
                        CreateViewport();

                        IsFrontBufferAvailableChanged += OnIsFrontBufferAvailableChanged;

                        if (Initialized != null)
                            Initialized(this, new RoutedEventArgs());

                        ReInitRenderTarget();
                        AttachRenderTarget(true);

                        OnFrameRateChanged(this.FrameRate);

                        this.currentThread = null;
                    });

                CreateInputHandler();
            }

            return true;
        }

        private void InitResources()
        {
            // Configure resource paths from : "resources.cfg" file
            ConfigFile cf = new ConfigFile();
            cf.Load("resources.cfg", "\t:=", true);

            // Go through all sections & settings in the file
            ConfigFile.SectionIterator seci = cf.GetSectionIterator();
            while (seci.MoveNext())
            {
                string secName = seci.CurrentKey;

                ConfigFile.SettingsMultiMap settings = seci.Current;
                foreach (var pair in settings)
                {
                    string typeName = pair.Key;
                    string archName = pair.Value;
                    ResourceGroupManager.Singleton.AddResourceLocation(archName, typeName, secName);
                }
            }
        }

        private bool SetupDirectX()
        {
            bool foundit = false;
            foreach (RenderSystem rs in this.root.GetAvailableRenderers())
            {
                if (rs == null)
                    continue;

                this.root.RenderSystem = rs;
                string rname = this.root.RenderSystem.Name;
                if (rname == "Direct3D9 Rendering Subsystem")
                {
                    foundit = true;
                    break;
                }
            }

            if (!foundit)
                return false;

            this.root.RenderSystem.SetConfigOption("Full Screen", "No");
            this.root.RenderSystem.SetConfigOption("Video Mode", "800 x 600 @ 32-bit colour");

            return true;
        }

        private void CreateRenderWindow(IntPtr hWnd)
        {
            this.root.Initialise(false);

            var misc = new NameValuePairList();
            misc["externalWindowHandle"] = hWnd.ToString();
            this.renderWindow = this.root.CreateRenderWindow("OgreImageSource Windows", 0, 0, false, misc);
            this.renderWindow.IsAutoUpdated = false;
        }

        private void InitializeResources()
        {
            InitResourceLoad();
            ResourceGroupManager.Singleton.InitialiseAllResourceGroups();
        }

        private void CreateSceneManager()
        {
            this.sceneMgr = this.root.CreateSceneManager(SceneType.ST_GENERIC, "Main SceneManager");
        }

        private void CreateCamera()
        {
            this.camera = this.sceneMgr.CreateCamera("MainCamera");
            this.camera.NearClipDistance = 1;
            this.camera.Position = new Vector3(0, 0, 300);
            this.camera.LookAt(Vector3.ZERO);
        }

        private void CreateViewport()
        {
            this.viewPort = this.renderWindow.AddViewport(this.camera);
            this.viewPort.BackgroundColour = new ColourValue(0.0f, 0.0f, 0.0f, 1.0f);
        }

        private void CreateInputHandler()
        {
        }

        private void OnIsFrontBufferAvailableChanged(object sender, DependencyPropertyChangedEventArgs e)
        {
            if (IsFrontBufferAvailable)
            {
                AttachRenderTarget(true);   // might not succeed
            }
            else
            {
                // need to keep old surface attached because it's the only way to get the front buffer active event.
                DetachRenderTarget(false, true);
            }
        }

        private void AttachRenderTarget(bool attachEvent)
        {
            if (!this.imageSourceValid)
            {
                Lock();
                try
                {
                    IntPtr surface;
                    this.renTarget.GetCustomAttribute("DDBACKBUFFER", out surface);
                    SetBackBuffer(D3DResourceType.IDirect3DSurface9, surface);

                    this.imageSourceValid = true;
                }
                finally
                {
                    Unlock();
                }
            }

            if (attachEvent)
                StartStopRender(true);
        }

        private void StartStopRender(bool attach)
        {
            this.eventAttached = attach;
            if (attach)
            {
                if (this.timer != null)
                    this.timer.Tick += OnRender;
                else
                    CompositionTarget.Rendering += OnRender;
            }
            else
            {
                if (this.timer != null)
                    this.timer.Tick -= OnRender;
                else
                    CompositionTarget.Rendering -= OnRender;
            }
        }

        private void DetachRenderTarget(bool detachSurface, bool detachEvent)
        {
            if (detachSurface && this.imageSourceValid)
            {
                Lock();
                SetBackBuffer(D3DResourceType.IDirect3DSurface9, IntPtr.Zero);
                Unlock();

                this.imageSourceValid = false;
            }

            if (detachEvent)
                StartStopRender(false);
        }

        private void OnRender(object sender, EventArgs e)
        {
            if (this.root == null)
                return;

            if (IsFrontBufferAvailable)
            {
                if (MogreWpf.Interop.D3D9RenderSystem.IsDeviceLost(this.renderWindow))
                {
                    this.renderWindow.Update(); // try restore
                    this.reloadRenderTargetTime = -1;

                    if (MogreWpf.Interop.D3D9RenderSystem.IsDeviceLost(this.renderWindow))
                        return;
                }

                long durationTicks = ResizeRenderTargetDelay.TimeSpan.Ticks;

                // if the new next ReInitRenderTarget() interval is up
                if (((this.reloadRenderTargetTime < 0) || (durationTicks <= 0)) ||  // negative time will be reloaded immediatly
                    ((this.reloadRenderTargetTime > 0) && (Environment.TickCount >= (this.reloadRenderTargetTime + durationTicks))))
                {
                    ReInitRenderTarget();
                }

                if (!this.imageSourceValid)
                    AttachRenderTarget(false);

                Lock();
                RenderFrame();
                AddDirtyRect(new Int32Rect(0, 0, PixelWidth, PixelHeight));
                Unlock();
            }
        }

        private void ReInitRenderTarget()
        {
            DetachRenderTarget(true, false);
            DisposeRenderTarget();

            this.texture = TextureManager.Singleton.CreateManual(
                "OgreImageSource RenderTarget",
                ResourceGroupManager.DEFAULT_RESOURCE_GROUP_NAME,
                TextureType.TEX_TYPE_2D,
                (uint)ViewportSize.Width,
                (uint)ViewportSize.Height,
                0,
                Mogre.PixelFormat.PF_A8R8G8B8,
                (int)TextureUsage.TU_RENDERTARGET);

            this.renTarget = this.texture.GetBuffer().GetRenderTarget();

            this.reloadRenderTargetTime = 0;
        }

        private void DisposeRenderTarget()
        {
            if (this.renTarget != null)
            {
                CompositorManager.Singleton.RemoveCompositorChain(this.viewPort);
                this.renTarget.RemoveAllListeners();
                this.renTarget.RemoveAllViewports();
                this.root.RenderSystem.DestroyRenderTarget(renTarget.Name);
                this.renTarget = null;
                this.viewPort = null;
            }

            if (this.texture != null)
            {
                TextureManager.Singleton.Remove(this.texture.Handle);
                this.texture.Dispose();
                this.texture = null;
            }
        }

        private void RenderFrame()
        {
            if ((this.camera != null) && (this.viewPort == null))
            {
                this.viewPort = renTarget.AddViewport(this.camera);
                this.viewPort.BackgroundColour = new ColourValue(0.0f, 0.0f, 1.0f, 0.0f);
            }

            if (PreRender != null)
                PreRender(this, EventArgs.Empty);

            this.root.RenderOneFrame();

            if (PostRender != null)
                PostRender(this, EventArgs.Empty);
        }

        private void OnFrameRateChanged(int? newFrameRate)
        {
            bool wasAttached = this.eventAttached;
            StartStopRender(false);

            if (newFrameRate == null)
            {
                if (this.timer != null)
                {
                    this.timer.Tick -= OnRender;
                    this.timer.Stop();
                    this.timer = null;
                }
            }
            else
            {
                if (this.timer == null)
                    this.timer = new DispatcherTimer();

                this.timer.Interval = new TimeSpan(1000 / newFrameRate.Value);
                this.timer.Start();
            }

            if (wasAttached)
                StartStopRender(true);
        }
        #endregion
    }
}
