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

    /// <summary>
    /// Possible types of editor tools enumeration
    /// </summary>
    enum EditorTools
    {
        Select = 0,
        Move,
        Rotate,
        Scale,
        Deform,
        Splat,
        Paint,
        Smooth
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

    class ObjectVector : List<BaseEditor>
    {
    }
}
