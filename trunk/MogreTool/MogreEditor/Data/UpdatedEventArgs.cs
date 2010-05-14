using System;

namespace Mogitor.Data
{
    class UpdatedEventArgs : EventArgs
    {
        private float timePassed;

        public UpdatedEventArgs(float timePassed)
        {
            this.timePassed = timePassed;
        }
    }
}
