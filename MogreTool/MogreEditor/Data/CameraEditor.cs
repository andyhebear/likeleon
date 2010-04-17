
namespace Mogitor.Data
{
    class CameraEditor : BaseEditor
    {
        #region Properties
        public Mogre.Camera Camera
        {
            get { return this.handle; }
        }

        public bool ShowHelper
        {
            set;
        }
        #endregion

        #region Fields
        private Mogre.Camera handle;
        #endregion

        #region Overrides BaseEditor
        public override object Handle
        {
            get
            {
                return this.handle as object;
            }
        }
        #endregion
    }
}
