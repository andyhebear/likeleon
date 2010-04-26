using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Mogitor.Data
{
    class SceneUpdatedEventArgs : EventArgs
    {
        private Mogre.SceneManager sceneMngr;
        private Mogre.Camera camera;
        private Mogre.RenderTarget renderTarget;

        public SceneUpdatedEventArgs(Mogre.SceneManager sceneMngr, Mogre.Camera camera, Mogre.RenderTarget renderTarget)
        {
            this.sceneMngr = sceneMngr;
            this.camera = camera;
            this.renderTarget = renderTarget;
        }
    }
}
