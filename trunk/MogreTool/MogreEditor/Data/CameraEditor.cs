
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
            set { this.showHelper = value; }
        }
        #endregion

        #region Fields
        private Mogre.Camera handle;
        private bool showHelper;
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
