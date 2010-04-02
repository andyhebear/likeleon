#include "CLRConfig.h"
#include "CLRObject.h"

#define DEFINE_EMPTY_INIT_METHOD(T)					void _Init_CLRObject_##T(CLRObject* pClrObj) { }
#define DEFINE_EMPTY_INIT_METHOD_EXPLICIT(N, T)		void _Init_CLRObject_##N(CLRObject* pClrObj) { }
#define DEFINE_EMPTY_INIT_METHOD_FOR_ABSTRACT(T) 	void _Init_CLRObject_##T(CLRObject* pClrObj) { }


#if LINK_TO_MOGRE

#using "Mogre.dll" as_friend

typedef System::Runtime::InteropServices::GCHandle GCHandle;


#include "OgreNoMemoryMacros.h"

void _FreeCLRObject(void* handle)
{
	GCHandle g = __VOIDPTR_TO_GCHANDLE(handle);
	if (g.Target != nullptr)
	{
		// Set _native pointer of CLR object to 0
		static_cast<Mogre::Implementation::Wrapper^>(g.Target)->_native = 0;
		// Dispose the CLR object
		delete g.Target;
	}
	g.Free();
}


#define DEFINE_INIT_METHOD(T) \
		void _Init_CLRObject_##T(CLRObject* pClrObj) \
		{ \
			*pClrObj = gcnew Mogre::T(pClrObj); \
		}

//Some managed classes are defined as abstract (for subclassing purposes). For these classes
//there is a subclass (named as 'CLASSNAME_Default') that is used for instancing
#define DEFINE_INIT_METHOD_FOR_ABSTRACT(T) \
		void _Init_CLRObject_##T(CLRObject* pClrObj) \
		{ \
			*pClrObj = gcnew Mogre::T##_Default(pClrObj); \
		}

//The compiler is buggy and crashes when trying to gcnew a nested class inside OgreMain.dll.
//To get around this problem I created specific methods in a class in the Mogre.dll that
//create an object of the nested class.
#define DEFINE_INIT_METHOD_EXPLICIT(N, T) \
		void _Init_CLRObject_##N(CLRObject* pClrObj) \
		{ \
			*pClrObj = Mogre::Implementation::CreateNestedHelper::CreateNested_##N(pClrObj); \
		}
		//Use this when the compiler gets fixed..
		//void _Init_CLRObject_##N(CLRObject* pClrObj) \
		//{ \
		//	*pClrObj = gcnew Mogre::T(pClrObj); \
		//}
#else

void _FreeCLRObject(void* handle)
{
}

#define DEFINE_INIT_METHOD(T)					DEFINE_EMPTY_INIT_METHOD(T)
#define DEFINE_INIT_METHOD_EXPLICIT(N, T)		DEFINE_EMPTY_INIT_METHOD_EXPLICIT(N, T)
#define DEFINE_INIT_METHOD_FOR_ABSTRACT(T) 		DEFINE_EMPTY_INIT_METHOD_FOR_ABSTRACT(T)

#endif


//Has protected access
DEFINE_EMPTY_INIT_METHOD_EXPLICIT( EntityShadowRenderable, Entity::EntityShadowRenderable )
//Has protected access
DEFINE_EMPTY_INIT_METHOD_EXPLICIT( StaticGeometry_RegionShadowRenderable, StaticGeometry::Region::RegionShadowRenderable )


DEFINE_INIT_METHOD( InstancedGeometry );
DEFINE_INIT_METHOD( ShadowCameraSetup );
DEFINE_INIT_METHOD( DefaultShadowCameraSetup );
DEFINE_INIT_METHOD( FocusedShadowCameraSetup );
DEFINE_INIT_METHOD( LiSPSMShadowCameraSetup );
DEFINE_INIT_METHOD( PlaneOptimalShadowCameraSetup );
DEFINE_INIT_METHOD( RenderTexture );
DEFINE_INIT_METHOD( MultiRenderTarget );
DEFINE_INIT_METHOD( UnifiedHighLevelGpuProgram );

DEFINE_INIT_METHOD( Archive )
DEFINE_INIT_METHOD( FileSystemArchive )
DEFINE_INIT_METHOD( ZipArchive )

DEFINE_INIT_METHOD( Codec )
DEFINE_INIT_METHOD( ImageCodec )
DEFINE_INIT_METHOD_EXPLICIT( Codec_CodecData, Codec::CodecData )
DEFINE_INIT_METHOD_EXPLICIT( ImageCodec_ImageData, ImageCodec::ImageData )
DEFINE_INIT_METHOD( ExternalTextureSource )
DEFINE_INIT_METHOD( ParticleSystemRenderer )
DEFINE_INIT_METHOD( BillboardParticleRenderer )

DEFINE_INIT_METHOD( BillboardChainFactory )
DEFINE_INIT_METHOD( BillboardSetFactory )
DEFINE_INIT_METHOD( EntityFactory )
DEFINE_INIT_METHOD( LightFactory )
DEFINE_INIT_METHOD( ManualObjectFactory )
DEFINE_INIT_METHOD( MovableObjectFactory )
DEFINE_INIT_METHOD( OverlayElementFactory )
DEFINE_INIT_METHOD( PanelOverlayElementFactory )
DEFINE_INIT_METHOD( BorderPanelOverlayElementFactory )
DEFINE_INIT_METHOD( TextAreaOverlayElementFactory )
DEFINE_INIT_METHOD( RibbonTrailFactory )
DEFINE_INIT_METHOD( SceneManagerFactory )
DEFINE_INIT_METHOD( DefaultSceneManagerFactory )

DEFINE_INIT_METHOD( ParticleAffectorFactory )
DEFINE_INIT_METHOD( ParticleEmitterFactory )
DEFINE_INIT_METHOD( ParticleSystemFactory )
DEFINE_INIT_METHOD( CompositorChain )
DEFINE_INIT_METHOD( PlaneBoundedVolumeListSceneQuery )
DEFINE_INIT_METHOD( CompositorInstance )
DEFINE_INIT_METHOD( AnimationState )
DEFINE_INIT_METHOD( Camera )
DEFINE_INIT_METHOD( Entity )
DEFINE_INIT_METHOD( Frustum )
DEFINE_INIT_METHOD( Light )
DEFINE_INIT_METHOD( MovableObject )
DEFINE_INIT_METHOD( RenderTarget )
DEFINE_INIT_METHOD( RenderWindow )
DEFINE_INIT_METHOD( SceneManager )
DEFINE_INIT_METHOD( SceneNode )
DEFINE_INIT_METHOD( ShadowCaster )
DEFINE_INIT_METHOD( Viewport )

DEFINE_INIT_METHOD( Animation )
DEFINE_INIT_METHOD( AnimableValue )
DEFINE_INIT_METHOD( AnimationTrack )
DEFINE_INIT_METHOD( BorderRenderable )
DEFINE_INIT_METHOD( CompositionTechnique )
DEFINE_INIT_METHOD( HardwareBuffer )
DEFINE_INIT_METHOD( HardwareIndexBuffer )
DEFINE_INIT_METHOD( HardwarePixelBuffer )
DEFINE_INIT_METHOD( HardwareVertexBuffer )
DEFINE_INIT_METHOD( HardwareOcclusionQuery )
DEFINE_INIT_METHOD( KeyFrame )
DEFINE_INIT_METHOD( NumericKeyFrame )
DEFINE_INIT_METHOD( TransformKeyFrame )
DEFINE_INIT_METHOD( VertexMorphKeyFrame )
DEFINE_INIT_METHOD( VertexPoseKeyFrame )
DEFINE_INIT_METHOD_EXPLICIT( ManualObjectSection, ManualObject::ManualObjectSection )
DEFINE_INIT_METHOD( Node )
DEFINE_INIT_METHOD( Overlay )
DEFINE_INIT_METHOD( OverlayElement )
DEFINE_INIT_METHOD( Pose )
DEFINE_INIT_METHOD( ProgressiveMesh )
DEFINE_INIT_METHOD( RenderQueue )
DEFINE_INIT_METHOD( RenderQueueInvocation )
DEFINE_INIT_METHOD( RenderQueueInvocationSequence )
DEFINE_INIT_METHOD( RenderSystem )
DEFINE_INIT_METHOD( Resource )
DEFINE_INIT_METHOD( SceneQuery )
DEFINE_INIT_METHOD( Serializer )
DEFINE_INIT_METHOD( ShadowRenderable )
DEFINE_INIT_METHOD( StaticGeometry )
DEFINE_INIT_METHOD( SubEntity )
DEFINE_INIT_METHOD( VertexBufferBinding )
DEFINE_INIT_METHOD( VertexDeclaration )

DEFINE_INIT_METHOD( NumericAnimationTrack )
DEFINE_INIT_METHOD( NodeAnimationTrack )
DEFINE_INIT_METHOD( VertexAnimationTrack )
DEFINE_INIT_METHOD( BillboardChain )
DEFINE_INIT_METHOD( BillboardSet )
DEFINE_INIT_METHOD( Bone )
DEFINE_INIT_METHOD( BorderPanelOverlayElement )
DEFINE_INIT_METHOD( Compositor )
DEFINE_INIT_METHOD( Font )
DEFINE_INIT_METHOD( GpuProgram )
DEFINE_INIT_METHOD( HighLevelGpuProgram )
DEFINE_INIT_METHOD( ManualObject )
DEFINE_INIT_METHOD_EXPLICIT( ManualObjectSectionShadowRenderable, ManualObject::ManualObjectSectionShadowRenderable )
DEFINE_INIT_METHOD( Material )
DEFINE_INIT_METHOD( Mesh )
DEFINE_INIT_METHOD( MeshSerializer )
DEFINE_INIT_METHOD( MovablePlane )
DEFINE_INIT_METHOD( OverlayContainer )
DEFINE_INIT_METHOD( PanelOverlayElement )
DEFINE_INIT_METHOD( ParticleSystem )
DEFINE_INIT_METHOD( ParticleEmitter )
DEFINE_INIT_METHOD( ParticleAffector )
DEFINE_INIT_METHOD( PatchMesh )
DEFINE_INIT_METHOD( Rectangle2D )

//Compiler crashes when using DEFINE_INIT_METHOD
DEFINE_INIT_METHOD_EXPLICIT( RibbonTrail, RibbonTrail )

DEFINE_INIT_METHOD( RegionSceneQuery )
DEFINE_INIT_METHOD( AxisAlignedBoxSceneQuery )
DEFINE_INIT_METHOD( SphereSceneQuery )
DEFINE_INIT_METHOD( RaySceneQuery )
DEFINE_INIT_METHOD( IntersectionSceneQuery )
DEFINE_INIT_METHOD( SimpleRenderable )
DEFINE_INIT_METHOD( Skeleton )
DEFINE_INIT_METHOD( SkeletonInstance )
DEFINE_INIT_METHOD( SkeletonSerializer )
DEFINE_INIT_METHOD_EXPLICIT( StaticGeometry_Region, StaticGeometry::Region )
DEFINE_INIT_METHOD( TagPoint )
DEFINE_INIT_METHOD( TextAreaOverlayElement )
DEFINE_INIT_METHOD( Texture )
DEFINE_INIT_METHOD( WireBoundingBox )
