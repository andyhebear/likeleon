#pragma once

#include "OgrePlatform.h"

// Most Ogre classes that are wrapped by Mogre inherit from CLRObject.
// It acts as the connection between the .NET objects and the Ogre objects that they wrap.
// Without it, a new .NET object will be created each time an Ogre object is requested.
// In order to use it, a rebuild of OgreMain, the renderers and the plugins is required.
// It doesn't interfere with the Ogre code; native applications that use Ogre will link to the
// new DLLs without problems.
#define USE_CLROBJECT_CLASS 1

#if OGRE_PLATFORM != OGRE_PLATFORM_WIN32 || ! USE_CLROBJECT_CLASS

#define DECLARE_INIT_CLROBJECT_METHOD_OVERRIDE(T)

class CLRObject
{
};

#else

//for subclasses of CLRObject
#define DECLARE_INIT_CLROBJECT_METHOD_OVERRIDE(T)	virtual void _Init_CLRObject(void) { _Init_CLRObject_##T(this); }

#if defined( __cplusplus_cli )
	//Make CLRObject and CLRHandle public native types for Mogre
	#define PUBLIC_FOR_CLI	public

	// If this file is included in managed code expose all the managed stuff,
	// otherwise hide them.
	#define SHOW_MANAGED_CLROBJECT
	#define __GCHANDLE_TO_VOIDPTR(x) ((GCHandle::operator System::IntPtr(x)).ToPointer())
	#define __VOIDPTR_TO_GCHANDLE(x) (GCHandle::operator GCHandle(System::IntPtr(x)))
#else
	#define PUBLIC_FOR_CLI
#endif

// Free the handle in a separate function in managed context. CLRObject's destructor
// will call it only if it's necessary.
void _OgreExport _FreeCLRObject(void* handle);

PUBLIC_FOR_CLI  class CLRObject
{
	void* _handle;

public:
	CLRObject() : _handle(0)
	{
	}
	CLRObject(const CLRObject& clrObject)
	{
		// Don't let the GC handle get copied by value, otherwise it may get freed multiple times, leading to crashes.
		_handle = 0;
	}
	virtual ~CLRObject()
	{
		if (_handle != 0)
		{
			_FreeCLRObject(_handle);
			_handle = 0;
		}
	}

	virtual void _Init_CLRObject(void) = 0;

#ifdef SHOW_MANAGED_CLROBJECT

	typedef System::Runtime::InteropServices::GCHandle GCHandle;
	typedef System::Runtime::InteropServices::GCHandleType GCHandleType;
	typedef System::Object Object;

	CLRObject(Object^ t)
	{
		_handle = __GCHANDLE_TO_VOIDPTR(GCHandle::Alloc(t, GCHandleType::Normal));
	}

	inline CLRObject& operator=(Object^ t) {
		if (_handle == 0)
			_handle = __GCHANDLE_TO_VOIDPTR(GCHandle::Alloc(t, GCHandleType::Normal));
		else
			__VOIDPTR_TO_GCHANDLE(_handle).Target = t;

		return *this;
	}

	void _MapToCLRObject(Object^ t, GCHandleType handleType)
	{
		if (_handle == 0)
			_handle = __GCHANDLE_TO_VOIDPTR(GCHandle::Alloc(t, handleType));
		else
			throw gcnew System::Exception("_MapToCLRObject was called on a already mapped native object.");
	}

	inline operator Object^ () {
		if (_handle == 0)
			return nullptr;
		else
			return __VOIDPTR_TO_GCHANDLE(_handle).Target;
	}

#endif

};


#define EXPORT_INIT_CLROBJECT_METHOD(T) void _OgreExport _Init_CLRObject_##T(CLRObject* pClrObj);

EXPORT_INIT_CLROBJECT_METHOD( InstancedGeometry );
EXPORT_INIT_CLROBJECT_METHOD( ShadowCameraSetup );
EXPORT_INIT_CLROBJECT_METHOD( DefaultShadowCameraSetup );
EXPORT_INIT_CLROBJECT_METHOD( FocusedShadowCameraSetup );
EXPORT_INIT_CLROBJECT_METHOD( LiSPSMShadowCameraSetup );
EXPORT_INIT_CLROBJECT_METHOD( PlaneOptimalShadowCameraSetup );
EXPORT_INIT_CLROBJECT_METHOD( RenderTexture );
EXPORT_INIT_CLROBJECT_METHOD( MultiRenderTarget );
EXPORT_INIT_CLROBJECT_METHOD( UnifiedHighLevelGpuProgram );

EXPORT_INIT_CLROBJECT_METHOD( Archive )
EXPORT_INIT_CLROBJECT_METHOD( FileSystemArchive )
EXPORT_INIT_CLROBJECT_METHOD( ZipArchive )

EXPORT_INIT_CLROBJECT_METHOD( Codec )
EXPORT_INIT_CLROBJECT_METHOD( ImageCodec )
EXPORT_INIT_CLROBJECT_METHOD( Codec_CodecData )
EXPORT_INIT_CLROBJECT_METHOD( ImageCodec_ImageData )
EXPORT_INIT_CLROBJECT_METHOD( ExternalTextureSource )
EXPORT_INIT_CLROBJECT_METHOD( ParticleSystemRenderer )
EXPORT_INIT_CLROBJECT_METHOD( BillboardParticleRenderer )

EXPORT_INIT_CLROBJECT_METHOD( BillboardChainFactory )
EXPORT_INIT_CLROBJECT_METHOD( BillboardSetFactory )
EXPORT_INIT_CLROBJECT_METHOD( EntityFactory )
EXPORT_INIT_CLROBJECT_METHOD( LightFactory )
EXPORT_INIT_CLROBJECT_METHOD( ManualObjectFactory )
EXPORT_INIT_CLROBJECT_METHOD( MovableObjectFactory )
EXPORT_INIT_CLROBJECT_METHOD( PanelOverlayElementFactory )
EXPORT_INIT_CLROBJECT_METHOD( BorderPanelOverlayElementFactory )
EXPORT_INIT_CLROBJECT_METHOD( TextAreaOverlayElementFactory )
EXPORT_INIT_CLROBJECT_METHOD( ParticleAffectorFactory )
EXPORT_INIT_CLROBJECT_METHOD( ParticleEmitterFactory )
EXPORT_INIT_CLROBJECT_METHOD( ParticleSystemFactory )
EXPORT_INIT_CLROBJECT_METHOD( RibbonTrailFactory )
EXPORT_INIT_CLROBJECT_METHOD( SceneManagerFactory )
EXPORT_INIT_CLROBJECT_METHOD( OverlayElementFactory )
EXPORT_INIT_CLROBJECT_METHOD( DefaultSceneManagerFactory )

EXPORT_INIT_CLROBJECT_METHOD( AnimationState )
EXPORT_INIT_CLROBJECT_METHOD( Camera )
EXPORT_INIT_CLROBJECT_METHOD( Entity )
EXPORT_INIT_CLROBJECT_METHOD( Frustum )
EXPORT_INIT_CLROBJECT_METHOD( Light )
EXPORT_INIT_CLROBJECT_METHOD( MovableObject )
EXPORT_INIT_CLROBJECT_METHOD( RenderTarget )
EXPORT_INIT_CLROBJECT_METHOD( RenderWindow )
EXPORT_INIT_CLROBJECT_METHOD( SceneManager )
EXPORT_INIT_CLROBJECT_METHOD( SceneNode )
EXPORT_INIT_CLROBJECT_METHOD( ShadowCaster )
EXPORT_INIT_CLROBJECT_METHOD( Viewport )

EXPORT_INIT_CLROBJECT_METHOD( Animation )
EXPORT_INIT_CLROBJECT_METHOD( AnimableValue )
EXPORT_INIT_CLROBJECT_METHOD( AnimationTrack )
EXPORT_INIT_CLROBJECT_METHOD( BorderRenderable )
EXPORT_INIT_CLROBJECT_METHOD( CompositionTechnique )
EXPORT_INIT_CLROBJECT_METHOD( CompositorChain )
EXPORT_INIT_CLROBJECT_METHOD( CompositorInstance )
EXPORT_INIT_CLROBJECT_METHOD( HardwareBuffer )
EXPORT_INIT_CLROBJECT_METHOD( HardwareIndexBuffer )
EXPORT_INIT_CLROBJECT_METHOD( HardwarePixelBuffer )
EXPORT_INIT_CLROBJECT_METHOD( HardwareVertexBuffer )
EXPORT_INIT_CLROBJECT_METHOD( HardwareOcclusionQuery )
EXPORT_INIT_CLROBJECT_METHOD( KeyFrame )
EXPORT_INIT_CLROBJECT_METHOD( NumericKeyFrame )
EXPORT_INIT_CLROBJECT_METHOD( TransformKeyFrame )
EXPORT_INIT_CLROBJECT_METHOD( VertexMorphKeyFrame )
EXPORT_INIT_CLROBJECT_METHOD( VertexPoseKeyFrame )
EXPORT_INIT_CLROBJECT_METHOD( ManualObjectSection )
EXPORT_INIT_CLROBJECT_METHOD( Node )
EXPORT_INIT_CLROBJECT_METHOD( Overlay )
EXPORT_INIT_CLROBJECT_METHOD( OverlayElement )
EXPORT_INIT_CLROBJECT_METHOD( Pose )
EXPORT_INIT_CLROBJECT_METHOD( ProgressiveMesh )
EXPORT_INIT_CLROBJECT_METHOD( RenderQueue )
EXPORT_INIT_CLROBJECT_METHOD( RenderQueueInvocation )
EXPORT_INIT_CLROBJECT_METHOD( RenderQueueInvocationSequence )
EXPORT_INIT_CLROBJECT_METHOD( RenderSystem )
EXPORT_INIT_CLROBJECT_METHOD( Resource )
EXPORT_INIT_CLROBJECT_METHOD( SceneQuery )
EXPORT_INIT_CLROBJECT_METHOD( Serializer )
EXPORT_INIT_CLROBJECT_METHOD( ShadowRenderable )
EXPORT_INIT_CLROBJECT_METHOD( StaticGeometry )
EXPORT_INIT_CLROBJECT_METHOD( SubEntity )
EXPORT_INIT_CLROBJECT_METHOD( VertexBufferBinding )
EXPORT_INIT_CLROBJECT_METHOD( VertexDeclaration )

EXPORT_INIT_CLROBJECT_METHOD( NumericAnimationTrack )
EXPORT_INIT_CLROBJECT_METHOD( NodeAnimationTrack )
EXPORT_INIT_CLROBJECT_METHOD( VertexAnimationTrack )
EXPORT_INIT_CLROBJECT_METHOD( BillboardChain )
EXPORT_INIT_CLROBJECT_METHOD( BillboardSet )
EXPORT_INIT_CLROBJECT_METHOD( Bone )
EXPORT_INIT_CLROBJECT_METHOD( BorderPanelOverlayElement )
EXPORT_INIT_CLROBJECT_METHOD( Compositor )
EXPORT_INIT_CLROBJECT_METHOD( EntityShadowRenderable )
EXPORT_INIT_CLROBJECT_METHOD( Font )
EXPORT_INIT_CLROBJECT_METHOD( GpuProgram )
EXPORT_INIT_CLROBJECT_METHOD( HighLevelGpuProgram )
EXPORT_INIT_CLROBJECT_METHOD( ManualObject )
EXPORT_INIT_CLROBJECT_METHOD( ManualObjectSectionShadowRenderable )
EXPORT_INIT_CLROBJECT_METHOD( Material )
EXPORT_INIT_CLROBJECT_METHOD( Mesh )
EXPORT_INIT_CLROBJECT_METHOD( MeshSerializer )
EXPORT_INIT_CLROBJECT_METHOD( MovablePlane )
EXPORT_INIT_CLROBJECT_METHOD( OverlayContainer )
EXPORT_INIT_CLROBJECT_METHOD( PanelOverlayElement )
EXPORT_INIT_CLROBJECT_METHOD( ParticleSystem )
EXPORT_INIT_CLROBJECT_METHOD( ParticleEmitter )
EXPORT_INIT_CLROBJECT_METHOD( ParticleAffector )
EXPORT_INIT_CLROBJECT_METHOD( PatchMesh )
EXPORT_INIT_CLROBJECT_METHOD( Rectangle2D )
EXPORT_INIT_CLROBJECT_METHOD( RibbonTrail )
EXPORT_INIT_CLROBJECT_METHOD( RegionSceneQuery )
EXPORT_INIT_CLROBJECT_METHOD( AxisAlignedBoxSceneQuery )
EXPORT_INIT_CLROBJECT_METHOD( SphereSceneQuery )
EXPORT_INIT_CLROBJECT_METHOD( PlaneBoundedVolumeListSceneQuery )
EXPORT_INIT_CLROBJECT_METHOD( RaySceneQuery )
EXPORT_INIT_CLROBJECT_METHOD( IntersectionSceneQuery )
EXPORT_INIT_CLROBJECT_METHOD( SimpleRenderable )
EXPORT_INIT_CLROBJECT_METHOD( OBBoxRenderable )
EXPORT_INIT_CLROBJECT_METHOD( Skeleton )
EXPORT_INIT_CLROBJECT_METHOD( SkeletonInstance )
EXPORT_INIT_CLROBJECT_METHOD( SkeletonSerializer )
EXPORT_INIT_CLROBJECT_METHOD( StaticGeometry_Region )
EXPORT_INIT_CLROBJECT_METHOD( StaticGeometry_RegionShadowRenderable )
EXPORT_INIT_CLROBJECT_METHOD( TagPoint )
EXPORT_INIT_CLROBJECT_METHOD( TextAreaOverlayElement )
EXPORT_INIT_CLROBJECT_METHOD( Texture )
EXPORT_INIT_CLROBJECT_METHOD( WireBoundingBox )

#endif