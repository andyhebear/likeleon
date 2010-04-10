namespace Mogitor.Data
{
    class DragData
    {
        public DragData(object dragSource, object innerObject)
        {
            DragSource = dragSource;
            Object = innerObject;
        }

        public object DragSource { get; private set; }
        public object Object { get; private set; }
    }
}
