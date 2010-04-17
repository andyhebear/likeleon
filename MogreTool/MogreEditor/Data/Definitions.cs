using System.Collections.Generic;

namespace Mogitor.Data
{
    enum EditorType
    {
        Base = 0,
        SceneManager,
        Viewport,
        CustomNamanger,
        Node,
        Light,
        Camera,
        Entity,
        Plane,
        Particle,
        BillboardSet,
        Movable,
        Multisel,
        Material,

        LastEditor
    };

    class QueryFlags
    {
        public const uint Widget = 1;
        public const uint Movable = 2;
    }

    class EditorObjectFactoryMap : Dictionary<string, BaseEditorFactory>
    {
    }

    class NameObjectPairList : Dictionary<string, BaseEditor>
    {
    }
}
