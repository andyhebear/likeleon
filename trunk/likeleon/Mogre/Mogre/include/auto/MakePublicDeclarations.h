#pragma once

#include "OgreAnimable.h"
#include "OgreVector2.h"
#include "OgreVector3.h"
#include "OgreVector4.h"
#include "OgreQuaternion.h"
#include "OgreColourValue.h"
#include "OgreAnimation.h"
#include "OgreAnimationTrack.h"
#include "OgreNode.h"
#include "OgreVertexIndexData.h"
#include "OgreSkeleton.h"
#include "OgreEntity.h"
#include "OgreAnimationState.h"
#include "OgreKeyFrame.h"
#include "OgreArchive.h"
#include "OgreArchiveManager.h"
#include "OgreBillboard.h"
#include "OgreBillboardSet.h"
#include "OgreMath.h"
#include "OgreBillboardChain.h"
#include "OgreAxisAlignedBox.h"
#include "OgreCamera.h"
#include "OgreMaterial.h"
#include "OgreRenderQueue.h"
#include "OgreRenderOperation.h"
#include "OgreMatrix4.h"
#include "OgreTechnique.h"
#include "OgreGpuProgram.h"
#include "OgreMovableObject.h"
#include "OgreBillboardParticleRenderer.h"
#include "OgreBlendMode.h"
#include "OgreBone.h"
#include "OgreBorderPanelOverlayElement.h"
#include "OgrePlane.h"
#include "OgreSceneManager.h"
#include "OgreSceneNode.h"
#include "OgreFrustum.h"
#include "OgreViewport.h"
#include "OgreRay.h"
#include "OgreSphere.h"
#include "OgreCodec.h"
#include "OgreLight.h"
#include "OgreCompositionPass.h"
#include "OgreCompositionTargetPass.h"
#include "OgreCompositionTechnique.h"
#include "OgreCompositor.h"
#include "OgreCompositorInstance.h"
#include "OgreCompositorChain.h"
#include "OgreResourceManager.h"
#include "OgreResource.h"
#include "OgreRenderTargetListener.h"
#include "OgreCompositorManager.h"
#include "OgreRenderable.h"
#include "OgreCompositorSerializer.h"
#include "OgreConfigFile.h"
#include "OgreConfigOptionMap.h"
#include "OgreDataStream.h"
#include "OgreDDSCodec.h"
#include "OgreEdgeListBuilder.h"
#include "OgreHardwareVertexBuffer.h"
#include "OgreLog.h"
#include "OgreSkeletonInstance.h"
#include "OgreMesh.h"
#include "OgreSubEntity.h"
#include "OgreTagPoint.h"
#include "OgreHardwareIndexBuffer.h"
#include "OgreException.h"
#include "OgreExternalTextureSource.h"
#include "OgreStringInterface.h"
#include "OgreExternalTextureSourceManager.h"
#include "OgreFileSystem.h"
#include "OgreFont.h"
#include "OgreFontManager.h"
#include "OgreFrameListener.h"
#include "OgreMovablePlane.h"
#include "OgreGpuProgramManager.h"
#include "OgreHardwareBuffer.h"
#include "OgreHardwareBufferManager.h"
#include "OgreHardwareOcclusionQuery.h"
#include "OgreHardwarePixelBuffer.h"
#include "OgrePixelFormat.h"
#include "OgreRenderTexture.h"
#include "OgreHighLevelGpuProgram.h"
#include "OgreHighLevelGpuProgramManager.h"
#include "OgreILImageCodec.h"
#include "OgreImage.h"
#include "OgreImageCodec.h"
#include "OgreInstancedGeometry.h"
#include "OgreMatrix3.h"
#include "OgrePlaneBoundedVolume.h"
#include "OgreLogManager.h"
#include "OgreManualObject.h"
#include "OgreMaterialManager.h"
#include "OgreMaterialSerializer.h"
#include "OgreSubMesh.h"
#include "OgrePose.h"
#include "OgreMeshManager.h"
#include "OgrePatchMesh.h"
#include "OgreMeshSerializer.h"
#include "OgreOverlay.h"
#include "OgreOverlayContainer.h"
#include "OgreOverlayElement.h"
#include "OgreRectangle.h"
#include "OgreOverlayElementFactory.h"
#include "OgreOverlayManager.h"
#include "OgrePanelOverlayElement.h"
#include "OgreParticle.h"
#include "OgreParticleSystem.h"
#include "OgreParticleAffector.h"
#include "OgreParticleAffectorFactory.h"
#include "OgreParticleEmitter.h"
#include "OgreParticleEmitterFactory.h"
#include "OgreParticleIterator.h"
#include "OgreParticleSystemRenderer.h"
#include "OgreParticleSystemManager.h"
#include "OgrePass.h"
#include "OgreTextureUnitState.h"
#include "OgrePatchSurface.h"
#include "OgrePlugin.h"
#include "OgreProfiler.h"
#include "WIN32/OgreTimerImp.h"
#include "OgreProgressiveMesh.h"
#include "OgreRectangle2D.h"
#include "OgreRenderQueueSortingGrouping.h"
#include "OgreRenderQueueInvocation.h"
#include "OgreRenderQueueListener.h"
#include "OgreRenderSystem.h"
#include "OgreRenderTarget.h"
#include "OgreRenderSystemCapabilities.h"
#include "OgreRenderWindow.h"
#include "OgreTexture.h"
#include "OgreResourceBackgroundQueue.h"
#include "OgreResourceGroupManager.h"
#include "OgreRibbonTrail.h"
#include "OgreRoot.h"
#include "OgreRotationalSpline.h"
#include "OgreSceneQuery.h"
#include "OgreShadowTextureManager.h"
#include "OgreStaticGeometry.h"
#include "OgreSceneManagerEnumerator.h"
#include "OgreSerializer.h"
#include "OgreShadowCameraSetup.h"
#include "OgreShadowCameraSetupFocused.h"
#include "OgreShadowCameraSetupLiSPSM.h"
#include "OgreShadowCameraSetupPlaneOptimal.h"
#include "OgreShadowCaster.h"
#include "OgreSimpleRenderable.h"
#include "OgreSimpleSpline.h"
#include "OgreSkeletonManager.h"
#include "OgreSkeletonSerializer.h"
#include "OgreStringConverter.h"
#include "OgreTextAreaOverlayElement.h"
#include "OgreTextureManager.h"
#include "OgreUnifiedHighLevelGpuProgram.h"
#include "OgreVertexBoneAssignment.h"
#include "OgreWindowEventUtilities.h"
#include "OgreWireBoundingBox.h"
#include "OgreZip.h"

#pragma make_public( Ogre::AnimableValue )
#pragma make_public( Ogre::Vector2 )
#pragma make_public( Ogre::Vector3 )
#pragma make_public( Ogre::Vector4 )
#pragma make_public( Ogre::Quaternion )
#pragma make_public( Ogre::ColourValue )
#pragma make_public( Ogre::AnimableObject )
#pragma make_public( Ogre::Animation )
#pragma make_public( Ogre::NodeAnimationTrack )
#pragma make_public( Ogre::NumericAnimationTrack )
#pragma make_public( Ogre::VertexAnimationTrack )
#pragma make_public( Ogre::Node )
#pragma make_public( Ogre::VertexData )
#pragma make_public( Ogre::Skeleton )
#pragma make_public( Ogre::Entity )
#pragma make_public( Ogre::TimeIndex )
#pragma make_public( Ogre::AnimationState )
#pragma make_public( Ogre::AnimationStateSet )
#pragma make_public( Ogre::AnimationTrack )
#pragma make_public( Ogre::KeyFrame )
#pragma make_public( Ogre::NumericKeyFrame )
#pragma make_public( Ogre::TransformKeyFrame )
#pragma make_public( Ogre::VertexMorphKeyFrame )
#pragma make_public( Ogre::VertexPoseKeyFrame )
#pragma make_public( Ogre::FileInfo )
#pragma make_public( Ogre::Archive )
#pragma make_public( Ogre::ArchiveManager )
#pragma make_public( Ogre::Billboard )
#pragma make_public( Ogre::BillboardSet )
#pragma make_public( Ogre::Radian )
#pragma make_public( Ogre::BillboardChain )
#pragma make_public( Ogre::AxisAlignedBox )
#pragma make_public( Ogre::Camera )
#pragma make_public( Ogre::MaterialPtr )
#pragma make_public( Ogre::RenderQueue )
#pragma make_public( Ogre::RenderOperation )
#pragma make_public( Ogre::Matrix4 )
#pragma make_public( Ogre::Technique )
#pragma make_public( Ogre::GpuProgramParameters )
#pragma make_public( Ogre::BillboardChainFactory )
#pragma make_public( Ogre::MovableObject )
#pragma make_public( Ogre::BillboardParticleRenderer )
#pragma make_public( Ogre::BillboardSetFactory )
#pragma make_public( Ogre::LayerBlendModeEx )
#pragma make_public( Ogre::Bone )
#pragma make_public( Ogre::BorderPanelOverlayElement )
#pragma make_public( Ogre::BorderRenderable )
#pragma make_public( Ogre::Plane )
#pragma make_public( Ogre::SceneManager )
#pragma make_public( Ogre::SceneNode )
#pragma make_public( Ogre::Frustum )
#pragma make_public( Ogre::Viewport )
#pragma make_public( Ogre::Ray )
#pragma make_public( Ogre::Sphere )
#pragma make_public( Ogre::Codec )
#pragma make_public( Ogre::Light )
#pragma make_public( Ogre::CompositionPass )
#pragma make_public( Ogre::CompositionTargetPass )
#pragma make_public( Ogre::CompositionTechnique )
#pragma make_public( Ogre::Compositor )
#pragma make_public( Ogre::CompositorInstance )
#pragma make_public( Ogre::CompositorChain )
#pragma make_public( Ogre::ResourceManager )
#pragma make_public( Ogre::ManualResourceLoader )
#pragma make_public( Ogre::CompositorPtr )
#pragma make_public( Ogre::RenderTargetEvent )
#pragma make_public( Ogre::RenderTargetViewportEvent )
#pragma make_public( Ogre::CompositorManager )
#pragma make_public( Ogre::Renderable )
#pragma make_public( Ogre::CompositorSerializer )
#pragma make_public( Ogre::ConfigFile )
#pragma make_public( Ogre::_ConfigOption )
#pragma make_public( Ogre::DataStream )
#pragma make_public( Ogre::MemoryDataStream )
#pragma make_public( Ogre::DDSCodec )
#pragma make_public( Ogre::EdgeData )
#pragma make_public( Ogre::HardwareVertexBufferSharedPtr )
#pragma make_public( Ogre::Log )
#pragma make_public( Ogre::SkeletonInstance )
#pragma make_public( Ogre::MeshPtr )
#pragma make_public( Ogre::SubEntity )
#pragma make_public( Ogre::TagPoint )
#pragma make_public( Ogre::HardwareIndexBufferSharedPtr )
#pragma make_public( Ogre::Resource )
#pragma make_public( Ogre::EntityFactory )
#pragma make_public( Ogre::Exception )
#pragma make_public( Ogre::ExternalTextureSource )
#pragma make_public( Ogre::ParamDictionary )
#pragma make_public( Ogre::StringInterface )
#pragma make_public( Ogre::ExternalTextureSourceManager )
#pragma make_public( Ogre::FileSystemArchive )
#pragma make_public( Ogre::Font )
#pragma make_public( Ogre::FontManager )
#pragma make_public( Ogre::FrameEvent )
#pragma make_public( Ogre::FrameListener )
#pragma make_public( Ogre::MovablePlane )
#pragma make_public( Ogre::GpuLogicalBufferStruct )
#pragma make_public( Ogre::GpuNamedConstants )
#pragma make_public( Ogre::GpuConstantDefinition )
#pragma make_public( Ogre::GpuProgram )
#pragma make_public( Ogre::GpuProgramManager )
#pragma make_public( Ogre::GpuProgramPtr )
#pragma make_public( Ogre::HardwareBuffer )
#pragma make_public( Ogre::HardwareBufferManager )
#pragma make_public( Ogre::VertexDeclaration )
#pragma make_public( Ogre::VertexBufferBinding )
#pragma make_public( Ogre::HardwareVertexBuffer )
#pragma make_public( Ogre::HardwareIndexBuffer )
#pragma make_public( Ogre::HardwareOcclusionQuery )
#pragma make_public( Ogre::HardwarePixelBuffer )
#pragma make_public( Ogre::PixelBox )
#pragma make_public( Ogre::HardwarePixelBufferSharedPtr )
#pragma make_public( Ogre::RenderTexture )
#pragma make_public( Ogre::VertexElement )
#pragma make_public( Ogre::HighLevelGpuProgram )
#pragma make_public( Ogre::HighLevelGpuProgramManager )
#pragma make_public( Ogre::HighLevelGpuProgramPtr )
#pragma make_public( Ogre::ILImageCodec )
#pragma make_public( Ogre::Image )
#pragma make_public( Ogre::ImageCodec )
#pragma make_public( Ogre::InstancedGeometry )
#pragma make_public( Ogre::Matrix3 )
#pragma make_public( Ogre::SkeletonPtr )
#pragma make_public( Ogre::PlaneBoundedVolume )
#pragma make_public( Ogre::LightFactory )
#pragma make_public( Ogre::LogListener )
#pragma make_public( Ogre::LogManager )
#pragma make_public( Ogre::ManualObject )
#pragma make_public( Ogre::ManualObjectFactory )
#pragma make_public( Ogre::Material )
#pragma make_public( Ogre::MaterialManager )
#pragma make_public( Ogre::MaterialSerializer )
#pragma make_public( Ogre::Mesh )
#pragma make_public( Ogre::SubMesh )
#pragma make_public( Ogre::Pose )
#pragma make_public( Ogre::MeshLodUsage )
#pragma make_public( Ogre::IndexData )
#pragma make_public( Ogre::MeshManager )
#pragma make_public( Ogre::PatchMeshPtr )
#pragma make_public( Ogre::MeshSerializer )
#pragma make_public( Ogre::MovableObjectFactory )
#pragma make_public( Ogre::Overlay )
#pragma make_public( Ogre::OverlayContainer )
#pragma make_public( Ogre::OverlayElement )
#pragma make_public( Ogre::Rectangle )
#pragma make_public( Ogre::OverlayElementFactory )
#pragma make_public( Ogre::PanelOverlayElementFactory )
#pragma make_public( Ogre::BorderPanelOverlayElementFactory )
#pragma make_public( Ogre::TextAreaOverlayElementFactory )
#pragma make_public( Ogre::OverlayManager )
#pragma make_public( Ogre::PanelOverlayElement )
#pragma make_public( Ogre::Particle )
#pragma make_public( Ogre::ParticleSystem )
#pragma make_public( Ogre::ParticleAffector )
#pragma make_public( Ogre::ParticleAffectorFactory )
#pragma make_public( Ogre::ParticleEmitter )
#pragma make_public( Ogre::ParticleEmitterFactory )
#pragma make_public( Ogre::ParticleIterator )
#pragma make_public( Ogre::ParticleSystemRenderer )
#pragma make_public( Ogre::ParticleSystemManager )
#pragma make_public( Ogre::ParticleSystemFactory )
#pragma make_public( Ogre::IlluminationPass )
#pragma make_public( Ogre::Pass )
#pragma make_public( Ogre::TextureUnitState )
#pragma make_public( Ogre::PatchMesh )
#pragma make_public( Ogre::PatchSurface )
#pragma make_public( Ogre::PixelUtil )
#pragma make_public( Ogre::Plugin )
#pragma make_public( Ogre::Profiler )
#pragma make_public( Ogre::Timer )
#pragma make_public( Ogre::ProgressiveMesh )
#pragma make_public( Ogre::Rectangle2D )
#pragma make_public( Ogre::RenderQueueGroup )
#pragma make_public( Ogre::RenderQueueInvocation )
#pragma make_public( Ogre::RenderQueueInvocationSequence )
#pragma make_public( Ogre::RenderQueueListener )
#pragma make_public( Ogre::RenderablePass )
#pragma make_public( Ogre::QueuedRenderableVisitor )
#pragma make_public( Ogre::QueuedRenderableCollection )
#pragma make_public( Ogre::RenderPriorityGroup )
#pragma make_public( Ogre::RenderSystem )
#pragma make_public( Ogre::RenderTarget )
#pragma make_public( Ogre::RenderSystemCapabilities )
#pragma make_public( Ogre::RenderWindow )
#pragma make_public( Ogre::MultiRenderTarget )
#pragma make_public( Ogre::TexturePtr )
#pragma make_public( Ogre::RenderTargetListener )
#pragma make_public( Ogre::ResourceBackgroundQueue )
#pragma make_public( Ogre::ResourceGroupListener )
#pragma make_public( Ogre::ResourceGroupManager )
#pragma make_public( Ogre::RibbonTrail )
#pragma make_public( Ogre::RibbonTrailFactory )
#pragma make_public( Ogre::Root )
#pragma make_public( Ogre::SceneManagerFactory )
#pragma make_public( Ogre::SceneManagerMetaData )
#pragma make_public( Ogre::RotationalSpline )
#pragma make_public( Ogre::VisibleObjectsBoundsInfo )
#pragma make_public( Ogre::ViewPoint )
#pragma make_public( Ogre::ShadowListener )
#pragma make_public( Ogre::AxisAlignedBoxSceneQuery )
#pragma make_public( Ogre::SphereSceneQuery )
#pragma make_public( Ogre::PlaneBoundedVolumeListSceneQuery )
#pragma make_public( Ogre::RaySceneQuery )
#pragma make_public( Ogre::IntersectionSceneQuery )
#pragma make_public( Ogre::SceneQuery )
#pragma make_public( Ogre::ShadowTextureConfig )
#pragma make_public( Ogre::StaticGeometry )
#pragma make_public( Ogre::DefaultIntersectionSceneQuery )
#pragma make_public( Ogre::IntersectionSceneQueryListener )
#pragma make_public( Ogre::DefaultRaySceneQuery )
#pragma make_public( Ogre::RaySceneQueryListener )
#pragma make_public( Ogre::DefaultSphereSceneQuery )
#pragma make_public( Ogre::SceneQueryListener )
#pragma make_public( Ogre::DefaultPlaneBoundedVolumeListSceneQuery )
#pragma make_public( Ogre::DefaultAxisAlignedBoxSceneQuery )
#pragma make_public( Ogre::DefaultSceneManagerFactory )
#pragma make_public( Ogre::SceneManagerEnumerator )
#pragma make_public( Ogre::SceneQueryResult )
#pragma make_public( Ogre::RegionSceneQuery )
#pragma make_public( Ogre::RaySceneQueryResultEntry )
#pragma make_public( Ogre::IntersectionSceneQueryResult )
#pragma make_public( Ogre::Serializer )
#pragma make_public( Ogre::ShadowCameraSetup )
#pragma make_public( Ogre::DefaultShadowCameraSetup )
#pragma make_public( Ogre::FocusedShadowCameraSetup )
#pragma make_public( Ogre::LiSPSMShadowCameraSetup )
#pragma make_public( Ogre::PlaneOptimalShadowCameraSetup )
#pragma make_public( Ogre::ShadowRenderable )
#pragma make_public( Ogre::ShadowCaster )
#pragma make_public( Ogre::ShadowTextureManager )
#pragma make_public( Ogre::SimpleRenderable )
#pragma make_public( Ogre::SimpleSpline )
#pragma make_public( Ogre::LinkedSkeletonAnimationSource )
#pragma make_public( Ogre::SkeletonManager )
#pragma make_public( Ogre::SkeletonSerializer )
#pragma make_public( Ogre::StringConverter )
#pragma make_public( Ogre::Degree )
#pragma make_public( Ogre::ParameterDef )
#pragma make_public( Ogre::ParamCommand )
#pragma make_public( Ogre::TextAreaOverlayElement )
#pragma make_public( Ogre::Texture )
#pragma make_public( Ogre::TextureManager )
#pragma make_public( Ogre::UnifiedHighLevelGpuProgram )
#pragma make_public( Ogre::VertexBoneAssignment_s )
#pragma make_public( Ogre::WindowEventListener )
#pragma make_public( Ogre::WindowEventUtilities )
#pragma make_public( Ogre::WireBoundingBox )
#pragma make_public( Ogre::ZipArchive )
