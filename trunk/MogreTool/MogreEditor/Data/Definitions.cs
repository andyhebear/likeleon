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
        Smooth,

        None = 256
    };

    class QueryFlags
    {
        public const uint Widget = 1;
        public const uint Movable = 2;
    }

    /// <summary>
    /// Capabilities enumeration for editor class(es)
    /// </summary>
    enum EditFlags
    {
        None = 0,
        CanMove = 1,
        CanScale = 2,
        CanRotate = 4,
        CanDelete = 8,
        CanClone = 16,
        CanFocus = 32,
        CanDrag = 64,
        CanDrop = 128,
        CanUndo = 256,
        CanuseMaterial = 512,
        CanAcceptCopy = 1024,
        CanAcceptPaste = 2048
    }

    /// <summary>
    ///  The Axis enumeration
    /// </summary>
    enum AxisType
    {
        None = 0,
        X = 1,
        Y = 2,
        XY = 3,
        Z = 4,
        XZ = 5,
        YZ = 6,
        All = 7
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
