/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreSceneManager.h"
#include "MogreCamera.h"
#include "MogreViewport.h"
#include "MogreRenderSystem.h"
#include "MogreRenderQueue.h"
#include "MogreSceneNode.h"
#include "MogreLight.h"
#include "MogreCommon.h"
#include "MogreEntity.h"
#include "MogreManualObject.h"
#include "MogreBillboardChain.h"
#include "MogreRibbonTrail.h"
#include "MogreParticleSystem.h"
#include "MogreDataStream.h"
#include "MogreStringVector.h"
#include "MogreBillboardSet.h"
#include "MogreAnimation.h"
#include "MogreAnimationState.h"
#include "MogreRenderOperation.h"
#include "MogrePass.h"
#include "MogreSceneQuery.h"
#include "MogrePlaneBoundedVolume.h"
#include "MogreShadowTextureManager.h"
#include "MogreTexture.h"
#include "MogreShadowCameraSetup.h"
#include "MogreStaticGeometry.h"
#include "MogreInstancedGeometry.h"
#include "MogreMovableObject.h"
#include "MogreRenderable.h"
#include "MogreRenderQueueSortingGrouping.h"

namespace Mogre
{
	//################################################################
	//SceneManagerMetaData_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	String^ SceneManagerMetaData_NativePtr::typeName::get()
	{
		return TO_CLR_STRING( _native->typeName );
	}
	
	String^ SceneManagerMetaData_NativePtr::description::get()
	{
		return TO_CLR_STRING( _native->description );
	}
	
	Mogre::SceneType SceneManagerMetaData_NativePtr::sceneTypeMask::get()
	{
		return (Mogre::SceneType)_native->sceneTypeMask;
	}
	
	bool SceneManagerMetaData_NativePtr::worldGeometrySupported::get()
	{
		return _native->worldGeometrySupported;
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//VisibleObjectsBoundsInfo_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	Mogre::AxisAlignedBox^ VisibleObjectsBoundsInfo_NativePtr::aabb::get()
	{
		return _native->aabb;
	}
	void VisibleObjectsBoundsInfo_NativePtr::aabb::set( Mogre::AxisAlignedBox^ value )
	{
		_native->aabb = (Ogre::AxisAlignedBox)value;
	}
	
	Mogre::Real VisibleObjectsBoundsInfo_NativePtr::minDistance::get()
	{
		return _native->minDistance;
	}
	void VisibleObjectsBoundsInfo_NativePtr::minDistance::set( Mogre::Real value )
	{
		_native->minDistance = value;
	}
	
	Mogre::Real VisibleObjectsBoundsInfo_NativePtr::maxDistance::get()
	{
		return _native->maxDistance;
	}
	void VisibleObjectsBoundsInfo_NativePtr::maxDistance::set( Mogre::Real value )
	{
		_native->maxDistance = value;
	}
	
	void VisibleObjectsBoundsInfo_NativePtr::Reset( )
	{
		_native->reset( );
	}
	
	void VisibleObjectsBoundsInfo_NativePtr::Merge( Mogre::AxisAlignedBox^ boxBounds, Mogre::Sphere sphereBounds, Mogre::Camera^ cam )
	{
		_native->merge( (Ogre::AxisAlignedBox)boxBounds, sphereBounds, cam );
	}
	
	
	Mogre::VisibleObjectsBoundsInfo_NativePtr VisibleObjectsBoundsInfo_NativePtr::Create( )
	{
		VisibleObjectsBoundsInfo_NativePtr ptr;
		ptr._native = new Ogre::VisibleObjectsBoundsInfo();
		return ptr;
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//ShadowListener
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	void ShadowListener_Director::shadowTexturesUpdated( size_t numberOfShadowTextures )
	{
		if (doCallForShadowTexturesUpdated)
		{
			_receiver->ShadowTexturesUpdated( numberOfShadowTextures );
		}
	}
	
	void ShadowListener_Director::shadowTextureCasterPreViewProj( Ogre::Light* light, Ogre::Camera* camera )
	{
		if (doCallForShadowTextureCasterPreViewProj)
		{
			_receiver->ShadowTextureCasterPreViewProj( light, camera );
		}
	}
	
	void ShadowListener_Director::shadowTextureReceiverPreViewProj( Ogre::Light* light, Ogre::Frustum* frustum )
	{
		if (doCallForShadowTextureReceiverPreViewProj)
		{
			_receiver->ShadowTextureReceiverPreViewProj( light, frustum );
		}
	}
	
	bool ShadowListener_Director::sortLightsAffectingFrustum( Ogre::LightList& lightList )
	{
		if (doCallForSortLightsAffectingFrustum)
		{
			bool mp_return = _receiver->SortLightsAffectingFrustum( lightList );
			return mp_return;
		}
		else
			return false;
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//SceneManager
	//################################################################
	
	//Nested Types
	CPP_DECLARE_MAP_ITERATOR_NOCONSTRUCTOR( SceneManager::, CameraIterator, Ogre::SceneManager::CameraIterator, Mogre::SceneManager::CameraList, Mogre::Camera^, Ogre::Camera*, String^, Ogre::String )
	
	CPP_DECLARE_MAP_ITERATOR_NOCONSTRUCTOR( SceneManager::, AnimationIterator, Ogre::SceneManager::AnimationIterator, Mogre::SceneManager::AnimationList, Mogre::Animation^, Ogre::Animation*, String^, Ogre::String )
	
	CPP_DECLARE_MAP_ITERATOR_NOCONSTRUCTOR( SceneManager::, MovableObjectIterator, Ogre::SceneManager::MovableObjectIterator, Mogre::SceneManager::MovableObjectMap, Mogre::MovableObject^, Ogre::MovableObject*, String^, Ogre::String )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Mogre::uint32 SceneManager::WORLD_GEOMETRY_TYPE_MASK::get()
	{
		return Ogre::SceneManager::WORLD_GEOMETRY_TYPE_MASK;
	}
	void SceneManager::WORLD_GEOMETRY_TYPE_MASK::set( Mogre::uint32 value )
	{
		Ogre::SceneManager::WORLD_GEOMETRY_TYPE_MASK = value;
	}
	
	Mogre::uint32 SceneManager::ENTITY_TYPE_MASK::get()
	{
		return Ogre::SceneManager::ENTITY_TYPE_MASK;
	}
	void SceneManager::ENTITY_TYPE_MASK::set( Mogre::uint32 value )
	{
		Ogre::SceneManager::ENTITY_TYPE_MASK = value;
	}
	
	Mogre::uint32 SceneManager::FX_TYPE_MASK::get()
	{
		return Ogre::SceneManager::FX_TYPE_MASK;
	}
	void SceneManager::FX_TYPE_MASK::set( Mogre::uint32 value )
	{
		Ogre::SceneManager::FX_TYPE_MASK = value;
	}
	
	Mogre::uint32 SceneManager::STATICGEOMETRY_TYPE_MASK::get()
	{
		return Ogre::SceneManager::STATICGEOMETRY_TYPE_MASK;
	}
	void SceneManager::STATICGEOMETRY_TYPE_MASK::set( Mogre::uint32 value )
	{
		Ogre::SceneManager::STATICGEOMETRY_TYPE_MASK = value;
	}
	
	Mogre::uint32 SceneManager::LIGHT_TYPE_MASK::get()
	{
		return Ogre::SceneManager::LIGHT_TYPE_MASK;
	}
	void SceneManager::LIGHT_TYPE_MASK::set( Mogre::uint32 value )
	{
		Ogre::SceneManager::LIGHT_TYPE_MASK = value;
	}
	
	Mogre::uint32 SceneManager::USER_TYPE_MASK_LIMIT::get()
	{
		return Ogre::SceneManager::USER_TYPE_MASK_LIMIT;
	}
	void SceneManager::USER_TYPE_MASK_LIMIT::set( Mogre::uint32 value )
	{
		Ogre::SceneManager::USER_TYPE_MASK_LIMIT = value;
	}
	
	Mogre::ColourValue SceneManager::AmbientLight::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getAmbientLight( );
	}
	void SceneManager::AmbientLight::set( Mogre::ColourValue colour )
	{
		static_cast<Ogre::SceneManager*>(_native)->setAmbientLight( colour );
	}
	
	Mogre::Viewport^ SceneManager::CurrentViewport::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getCurrentViewport( );
	}
	
	Mogre::RenderSystem^ SceneManager::DestinationRenderSystem::get()
	{
		return static_cast<Ogre::SceneManager*>(_native)->getDestinationRenderSystem( );
	}
	
	bool SceneManager::DisplaySceneNodes::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getDisplaySceneNodes( );
	}
	void SceneManager::DisplaySceneNodes::set( bool display )
	{
		static_cast<Ogre::SceneManager*>(_native)->setDisplaySceneNodes( display );
	}
	
	bool SceneManager::FindVisibleObjects::get()
	{
		return static_cast<Ogre::SceneManager*>(_native)->getFindVisibleObjects( );
	}
	void SceneManager::FindVisibleObjects::set( bool find )
	{
		static_cast<Ogre::SceneManager*>(_native)->setFindVisibleObjects( find );
	}
	
	Mogre::ColourValue SceneManager::FogColour::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getFogColour( );
	}
	
	Mogre::Real SceneManager::FogDensity::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getFogDensity( );
	}
	
	Mogre::Real SceneManager::FogEnd::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getFogEnd( );
	}
	
	Mogre::FogMode SceneManager::FogMode::get()
	{
		return (Mogre::FogMode)static_cast<const Ogre::SceneManager*>(_native)->getFogMode( );
	}
	
	Mogre::Real SceneManager::FogStart::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getFogStart( );
	}
	
	bool SceneManager::IsShadowTechniqueAdditive::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->isShadowTechniqueAdditive( );
	}
	
	bool SceneManager::IsShadowTechniqueIntegrated::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->isShadowTechniqueIntegrated( );
	}
	
	bool SceneManager::IsShadowTechniqueInUse::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->isShadowTechniqueInUse( );
	}
	
	bool SceneManager::IsShadowTechniqueModulative::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->isShadowTechniqueModulative( );
	}
	
	bool SceneManager::IsShadowTechniqueStencilBased::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->isShadowTechniqueStencilBased( );
	}
	
	bool SceneManager::IsShadowTechniqueTextureBased::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->isShadowTechniqueTextureBased( );
	}
	
	bool SceneManager::IsSkyBoxEnabled::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->isSkyBoxEnabled( );
	}
	
	bool SceneManager::IsSkyDomeEnabled::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->isSkyDomeEnabled( );
	}
	
	bool SceneManager::IsSkyPlaneEnabled::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->isSkyPlaneEnabled( );
	}
	
	String^ SceneManager::Name::get()
	{
		return ( CLR_NULL == _name ) ? (_name = TO_CLR_STRING( static_cast<const Ogre::SceneManager*>(_native)->getName( ) )) : _name;
	}
	
	Mogre::RenderQueue^ SceneManager::RenderQueue::get()
	{
		return ( CLR_NULL == _renderQueue ) ? (_renderQueue = static_cast<Ogre::SceneManager*>(_native)->getRenderQueue( )) : _renderQueue;
	}
	
	Mogre::SceneNode^ SceneManager::RootSceneNode::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getRootSceneNode( );
	}
	
	bool SceneManager::ShadowCasterRenderBackFaces::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getShadowCasterRenderBackFaces( );
	}
	void SceneManager::ShadowCasterRenderBackFaces::set( bool bf )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShadowCasterRenderBackFaces( bf );
	}
	
	Mogre::ColourValue SceneManager::ShadowColour::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getShadowColour( );
	}
	void SceneManager::ShadowColour::set( Mogre::ColourValue colour )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShadowColour( colour );
	}
	
	Mogre::Real SceneManager::ShadowDirectionalLightExtrusionDistance::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getShadowDirectionalLightExtrusionDistance( );
	}
	void SceneManager::ShadowDirectionalLightExtrusionDistance::set( Mogre::Real dist )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShadowDirectionalLightExtrusionDistance( dist );
	}
	
	Mogre::Real SceneManager::ShadowDirLightTextureOffset::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getShadowDirLightTextureOffset( );
	}
	void SceneManager::ShadowDirLightTextureOffset::set( Mogre::Real offset )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShadowDirLightTextureOffset( offset );
	}
	
	Mogre::Real SceneManager::ShadowFarDistance::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getShadowFarDistance( );
	}
	void SceneManager::ShadowFarDistance::set( Mogre::Real distance )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShadowFarDistance( distance );
	}
	
	size_t SceneManager::ShadowIndexBufferSize::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getShadowIndexBufferSize( );
	}
	void SceneManager::ShadowIndexBufferSize::set( size_t size )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShadowIndexBufferSize( size );
	}
	
	Mogre::ShadowTechnique SceneManager::ShadowTechnique::get()
	{
		return (Mogre::ShadowTechnique)static_cast<const Ogre::SceneManager*>(_native)->getShadowTechnique( );
	}
	void SceneManager::ShadowTechnique::set( Mogre::ShadowTechnique technique )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShadowTechnique( (Ogre::ShadowTechnique)technique );
	}
	
	size_t SceneManager::ShadowTextureCount::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getShadowTextureCount( );
	}
	void SceneManager::ShadowTextureCount::set( size_t count )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShadowTextureCount( count );
	}
	
	bool SceneManager::ShadowTextureSelfShadow::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getShadowTextureSelfShadow( );
	}
	void SceneManager::ShadowTextureSelfShadow::set( bool selfShadow )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShadowTextureSelfShadow( selfShadow );
	}
	
	bool SceneManager::ShowBoundingBoxes::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getShowBoundingBoxes( );
	}
	void SceneManager::ShowBoundingBoxes::set( bool bShow )
	{
		static_cast<Ogre::SceneManager*>(_native)->showBoundingBoxes( bShow );
	}
	
	bool SceneManager::ShowDebugShadows::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getShowDebugShadows( );
	}
	void SceneManager::ShowDebugShadows::set( bool debug )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShowDebugShadows( debug );
	}
	
	Mogre::SceneNode^ SceneManager::SkyBoxNode::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getSkyBoxNode( );
	}
	
	Mogre::SceneNode^ SceneManager::SkyDomeNode::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getSkyDomeNode( );
	}
	
	Mogre::SceneNode^ SceneManager::SkyPlaneNode::get()
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getSkyPlaneNode( );
	}
	
	String^ SceneManager::TypeName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::SceneManager*>(_native)->getTypeName( ) );
	}
	
	Mogre::uint32 SceneManager::VisibilityMask::get()
	{
		return static_cast<Ogre::SceneManager*>(_native)->getVisibilityMask( );
	}
	void SceneManager::VisibilityMask::set( Mogre::uint32 vmask )
	{
		static_cast<Ogre::SceneManager*>(_native)->setVisibilityMask( vmask );
	}
	
	Mogre::uint8 SceneManager::WorldGeometryRenderQueue::get()
	{
		return static_cast<Ogre::SceneManager*>(_native)->getWorldGeometryRenderQueue( );
	}
	void SceneManager::WorldGeometryRenderQueue::set( Mogre::uint8 qid )
	{
		static_cast<Ogre::SceneManager*>(_native)->setWorldGeometryRenderQueue( qid );
	}
	
	Mogre::Camera^ SceneManager::CreateCamera( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::SceneManager*>(_native)->createCamera( o_name );
	}
	
	Mogre::Camera^ SceneManager::GetCamera( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->getCamera( o_name );
	}
	
	bool SceneManager::HasCamera( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->hasCamera( o_name );
	}
	
	void SceneManager::DestroyCamera( Mogre::Camera^ cam )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyCamera( cam );
	}
	
	void SceneManager::DestroyCamera( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::SceneManager*>(_native)->destroyCamera( o_name );
	}
	
	void SceneManager::DestroyAllCameras( )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyAllCameras( );
	}
	
	Mogre::Light^ SceneManager::CreateLight( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::SceneManager*>(_native)->createLight( o_name );
	}
	
	Mogre::Light^ SceneManager::GetLight( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->getLight( o_name );
	}
	
	bool SceneManager::HasLight( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->hasLight( o_name );
	}
	
	void SceneManager::DestroyLight( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::SceneManager*>(_native)->destroyLight( o_name );
	}
	
	void SceneManager::DestroyLight( Mogre::Light^ light )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyLight( light );
	}
	
	void SceneManager::DestroyAllLights( )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyAllLights( );
	}
	
	void SceneManager::_notifyLightsDirty( )
	{
		static_cast<Ogre::SceneManager*>(_native)->_notifyLightsDirty( );
	}
	
	Mogre::ulong SceneManager::_getLightsDirtyCounter( )
	{
		return static_cast<const Ogre::SceneManager*>(_native)->_getLightsDirtyCounter( );
	}
	
	Mogre::Const_LightList^ SceneManager::_getLightsAffectingFrustum( )
	{
		return static_cast<const Ogre::SceneManager*>(_native)->_getLightsAffectingFrustum( );
	}
	
	void SceneManager::_populateLightList( Mogre::Vector3 position, Mogre::Real radius, Mogre::LightList^ destList )
	{
		static_cast<Ogre::SceneManager*>(_native)->_populateLightList( position, radius, destList );
	}
	
	Mogre::SceneNode^ SceneManager::CreateSceneNode( )
	{
		return static_cast<Ogre::SceneManager*>(_native)->createSceneNode( );
	}
	
	Mogre::SceneNode^ SceneManager::CreateSceneNode( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::SceneManager*>(_native)->createSceneNode( o_name );
	}
	
	void SceneManager::DestroySceneNode( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::SceneManager*>(_native)->destroySceneNode( o_name );
	}
	
	Mogre::SceneNode^ SceneManager::GetSceneNode( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->getSceneNode( o_name );
	}
	
	bool SceneManager::HasSceneNode( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->hasSceneNode( o_name );
	}
	
	Mogre::Entity^ SceneManager::CreateEntity( String^ entityName, String^ meshName )
	{
		DECLARE_NATIVE_STRING( o_entityName, entityName )
		DECLARE_NATIVE_STRING( o_meshName, meshName )
	
		return static_cast<Ogre::SceneManager*>(_native)->createEntity( o_entityName, o_meshName );
	}
	
	Mogre::Entity^ SceneManager::CreateEntity( String^ entityName, Mogre::SceneManager::PrefabType ptype )
	{
		DECLARE_NATIVE_STRING( o_entityName, entityName )
	
		return static_cast<Ogre::SceneManager*>(_native)->createEntity( o_entityName, (Ogre::SceneManager::PrefabType)ptype );
	}
	
	Mogre::Entity^ SceneManager::GetEntity( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->getEntity( o_name );
	}
	
	bool SceneManager::HasEntity( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->hasEntity( o_name );
	}
	
	void SceneManager::DestroyEntity( Mogre::Entity^ ent )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyEntity( ent );
	}
	
	void SceneManager::DestroyEntity( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::SceneManager*>(_native)->destroyEntity( o_name );
	}
	
	void SceneManager::DestroyAllEntities( )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyAllEntities( );
	}
	
	Mogre::ManualObject^ SceneManager::CreateManualObject( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::SceneManager*>(_native)->createManualObject( o_name );
	}
	
	Mogre::ManualObject^ SceneManager::GetManualObject( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->getManualObject( o_name );
	}
	
	bool SceneManager::HasManualObject( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->hasManualObject( o_name );
	}
	
	void SceneManager::DestroyManualObject( Mogre::ManualObject^ obj )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyManualObject( obj );
	}
	
	void SceneManager::DestroyManualObject( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::SceneManager*>(_native)->destroyManualObject( o_name );
	}
	
	void SceneManager::DestroyAllManualObjects( )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyAllManualObjects( );
	}
	
	Mogre::BillboardChain^ SceneManager::CreateBillboardChain( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::SceneManager*>(_native)->createBillboardChain( o_name );
	}
	
	Mogre::BillboardChain^ SceneManager::GetBillboardChain( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->getBillboardChain( o_name );
	}
	
	bool SceneManager::HasBillboardChain( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->hasBillboardChain( o_name );
	}
	
	void SceneManager::DestroyBillboardChain( Mogre::BillboardChain^ obj )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyBillboardChain( obj );
	}
	
	void SceneManager::DestroyBillboardChain( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::SceneManager*>(_native)->destroyBillboardChain( o_name );
	}
	
	void SceneManager::DestroyAllBillboardChains( )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyAllBillboardChains( );
	}
	
	Mogre::RibbonTrail^ SceneManager::CreateRibbonTrail( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::SceneManager*>(_native)->createRibbonTrail( o_name );
	}
	
	Mogre::RibbonTrail^ SceneManager::GetRibbonTrail( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->getRibbonTrail( o_name );
	}
	
	bool SceneManager::HasRibbonTrail( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->hasRibbonTrail( o_name );
	}
	
	void SceneManager::DestroyRibbonTrail( Mogre::RibbonTrail^ obj )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyRibbonTrail( obj );
	}
	
	void SceneManager::DestroyRibbonTrail( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::SceneManager*>(_native)->destroyRibbonTrail( o_name );
	}
	
	void SceneManager::DestroyAllRibbonTrails( )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyAllRibbonTrails( );
	}
	
	Mogre::ParticleSystem^ SceneManager::CreateParticleSystem( String^ name, String^ templateName )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_templateName, templateName )
	
		return static_cast<Ogre::SceneManager*>(_native)->createParticleSystem( o_name, o_templateName );
	}
	
	Mogre::ParticleSystem^ SceneManager::CreateParticleSystem( String^ name, size_t quota, String^ resourceGroup )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_resourceGroup, resourceGroup )
	
		return static_cast<Ogre::SceneManager*>(_native)->createParticleSystem( o_name, quota, o_resourceGroup );
	}
	Mogre::ParticleSystem^ SceneManager::CreateParticleSystem( String^ name, size_t quota )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::SceneManager*>(_native)->createParticleSystem( o_name, quota );
	}
	Mogre::ParticleSystem^ SceneManager::CreateParticleSystem( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::SceneManager*>(_native)->createParticleSystem( o_name );
	}
	
	Mogre::ParticleSystem^ SceneManager::GetParticleSystem( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->getParticleSystem( o_name );
	}
	
	bool SceneManager::HasParticleSystem( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->hasParticleSystem( o_name );
	}
	
	void SceneManager::DestroyParticleSystem( Mogre::ParticleSystem^ obj )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyParticleSystem( obj );
	}
	
	void SceneManager::DestroyParticleSystem( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::SceneManager*>(_native)->destroyParticleSystem( o_name );
	}
	
	void SceneManager::DestroyAllParticleSystems( )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyAllParticleSystems( );
	}
	
	void SceneManager::ClearScene( )
	{
		static_cast<Ogre::SceneManager*>(_native)->clearScene( );
	}
	
	void SceneManager::SetWorldGeometry( String^ filename )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
	
		static_cast<Ogre::SceneManager*>(_native)->setWorldGeometry( o_filename );
	}
	
	void SceneManager::SetWorldGeometry( Mogre::DataStreamPtr^ stream, String^ typeName )
	{
		DECLARE_NATIVE_STRING( o_typeName, typeName )
	
		static_cast<Ogre::SceneManager*>(_native)->setWorldGeometry( (Ogre::DataStreamPtr&)stream, o_typeName );
	}
	void SceneManager::SetWorldGeometry( Mogre::DataStreamPtr^ stream )
	{
		static_cast<Ogre::SceneManager*>(_native)->setWorldGeometry( (Ogre::DataStreamPtr&)stream );
	}
	
	size_t SceneManager::EstimateWorldGeometry( String^ filename )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
	
		return static_cast<Ogre::SceneManager*>(_native)->estimateWorldGeometry( o_filename );
	}
	
	size_t SceneManager::EstimateWorldGeometry( Mogre::DataStreamPtr^ stream, String^ typeName )
	{
		DECLARE_NATIVE_STRING( o_typeName, typeName )
	
		return static_cast<Ogre::SceneManager*>(_native)->estimateWorldGeometry( (Ogre::DataStreamPtr&)stream, o_typeName );
	}
	size_t SceneManager::EstimateWorldGeometry( Mogre::DataStreamPtr^ stream )
	{
		return static_cast<Ogre::SceneManager*>(_native)->estimateWorldGeometry( (Ogre::DataStreamPtr&)stream );
	}
	
	Mogre::ViewPoint^ SceneManager::GetSuggestedViewpoint( bool random )
	{
		return static_cast<Ogre::SceneManager*>(_native)->getSuggestedViewpoint( random );
	}
	Mogre::ViewPoint^ SceneManager::GetSuggestedViewpoint( )
	{
		return static_cast<Ogre::SceneManager*>(_native)->getSuggestedViewpoint( );
	}
	
	bool SceneManager::SetOption( String^ strKey, const void* pValue )
	{
		DECLARE_NATIVE_STRING( o_strKey, strKey )
	
		return static_cast<Ogre::SceneManager*>(_native)->setOption( o_strKey, pValue );
	}
	
	bool SceneManager::GetOption( String^ strKey, void* pDestValue )
	{
		DECLARE_NATIVE_STRING( o_strKey, strKey )
	
		return static_cast<Ogre::SceneManager*>(_native)->getOption( o_strKey, pDestValue );
	}
	
	bool SceneManager::HasOption( String^ strKey )
	{
		DECLARE_NATIVE_STRING( o_strKey, strKey )
	
		return static_cast<const Ogre::SceneManager*>(_native)->hasOption( o_strKey );
	}
	
	bool SceneManager::GetOptionValues( String^ strKey, Mogre::StringVector^ refValueList )
	{
		DECLARE_NATIVE_STRING( o_strKey, strKey )
	
		return static_cast<Ogre::SceneManager*>(_native)->getOptionValues( o_strKey, refValueList );
	}
	
	bool SceneManager::GetOptionKeys( Mogre::StringVector^ refKeys )
	{
		return static_cast<Ogre::SceneManager*>(_native)->getOptionKeys( refKeys );
	}
	
	void SceneManager::_updateSceneGraph( Mogre::Camera^ cam )
	{
		static_cast<Ogre::SceneManager*>(_native)->_updateSceneGraph( cam );
	}
	
	void SceneManager::_findVisibleObjects( Mogre::Camera^ cam, Mogre::VisibleObjectsBoundsInfo_NativePtr visibleBounds, bool onlyShadowCasters )
	{
		static_cast<Ogre::SceneManager*>(_native)->_findVisibleObjects( cam, visibleBounds, onlyShadowCasters );
	}
	
	void SceneManager::_applySceneAnimations( )
	{
		static_cast<Ogre::SceneManager*>(_native)->_applySceneAnimations( );
	}
	
	void SceneManager::_renderVisibleObjects( )
	{
		static_cast<Ogre::SceneManager*>(_native)->_renderVisibleObjects( );
	}
	
	void SceneManager::_renderScene( Mogre::Camera^ camera, Mogre::Viewport^ vp, bool includeOverlays )
	{
		static_cast<Ogre::SceneManager*>(_native)->_renderScene( camera, vp, includeOverlays );
	}
	
	void SceneManager::_queueSkiesForRendering( Mogre::Camera^ cam )
	{
		static_cast<Ogre::SceneManager*>(_native)->_queueSkiesForRendering( cam );
	}
	
	void SceneManager::_setDestinationRenderSystem( Mogre::RenderSystem^ sys )
	{
		static_cast<Ogre::SceneManager*>(_native)->_setDestinationRenderSystem( sys );
	}
	
	void SceneManager::SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, bool drawFirst, Mogre::Real bow, int xsegments, int ysegments, String^ groupName )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
		DECLARE_NATIVE_STRING( o_groupName, groupName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyPlane( enable, plane, o_materialName, scale, tiling, drawFirst, bow, xsegments, ysegments, o_groupName );
	}
	void SceneManager::SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, bool drawFirst, Mogre::Real bow, int xsegments, int ysegments )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyPlane( enable, plane, o_materialName, scale, tiling, drawFirst, bow, xsegments, ysegments );
	}
	void SceneManager::SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, bool drawFirst, Mogre::Real bow, int xsegments )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyPlane( enable, plane, o_materialName, scale, tiling, drawFirst, bow, xsegments );
	}
	void SceneManager::SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, bool drawFirst, Mogre::Real bow )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyPlane( enable, plane, o_materialName, scale, tiling, drawFirst, bow );
	}
	void SceneManager::SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, bool drawFirst )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyPlane( enable, plane, o_materialName, scale, tiling, drawFirst );
	}
	void SceneManager::SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyPlane( enable, plane, o_materialName, scale, tiling );
	}
	void SceneManager::SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyPlane( enable, plane, o_materialName, scale );
	}
	void SceneManager::SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyPlane( enable, plane, o_materialName );
	}
	
	Mogre::SceneManager::SkyPlaneGenParameters^ SceneManager::GetSkyPlaneGenParameters( )
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getSkyPlaneGenParameters( );
	}
	
	void SceneManager::SetSkyBox( bool enable, String^ materialName, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation, String^ groupName )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
		DECLARE_NATIVE_STRING( o_groupName, groupName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyBox( enable, o_materialName, distance, drawFirst, orientation, o_groupName );
	}
	void SceneManager::SetSkyBox( bool enable, String^ materialName, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyBox( enable, o_materialName, distance, drawFirst, orientation );
	}
	void SceneManager::SetSkyBox( bool enable, String^ materialName, Mogre::Real distance, bool drawFirst )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyBox( enable, o_materialName, distance, drawFirst );
	}
	void SceneManager::SetSkyBox( bool enable, String^ materialName, Mogre::Real distance )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyBox( enable, o_materialName, distance );
	}
	void SceneManager::SetSkyBox( bool enable, String^ materialName )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyBox( enable, o_materialName );
	}
	
	Mogre::SceneManager::SkyBoxGenParameters^ SceneManager::GetSkyBoxGenParameters( )
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getSkyBoxGenParameters( );
	}
	
	void SceneManager::SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation, int xsegments, int ysegments, int ysegments_keep, String^ groupName )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
		DECLARE_NATIVE_STRING( o_groupName, groupName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyDome( enable, o_materialName, curvature, tiling, distance, drawFirst, orientation, xsegments, ysegments, ysegments_keep, o_groupName );
	}
	void SceneManager::SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation, int xsegments, int ysegments, int ysegments_keep )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyDome( enable, o_materialName, curvature, tiling, distance, drawFirst, orientation, xsegments, ysegments, ysegments_keep );
	}
	void SceneManager::SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation, int xsegments, int ysegments )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyDome( enable, o_materialName, curvature, tiling, distance, drawFirst, orientation, xsegments, ysegments );
	}
	void SceneManager::SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation, int xsegments )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyDome( enable, o_materialName, curvature, tiling, distance, drawFirst, orientation, xsegments );
	}
	void SceneManager::SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyDome( enable, o_materialName, curvature, tiling, distance, drawFirst, orientation );
	}
	void SceneManager::SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, bool drawFirst )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyDome( enable, o_materialName, curvature, tiling, distance, drawFirst );
	}
	void SceneManager::SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyDome( enable, o_materialName, curvature, tiling, distance );
	}
	void SceneManager::SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyDome( enable, o_materialName, curvature, tiling );
	}
	void SceneManager::SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyDome( enable, o_materialName, curvature );
	}
	void SceneManager::SetSkyDome( bool enable, String^ materialName )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::SceneManager*>(_native)->setSkyDome( enable, o_materialName );
	}
	
	Mogre::SceneManager::SkyDomeGenParameters^ SceneManager::GetSkyDomeGenParameters( )
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getSkyDomeGenParameters( );
	}
	
	void SceneManager::SetFog( Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart, Mogre::Real linearEnd )
	{
		static_cast<Ogre::SceneManager*>(_native)->setFog( (Ogre::FogMode)mode, colour, expDensity, linearStart, linearEnd );
	}
	void SceneManager::SetFog( Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart )
	{
		static_cast<Ogre::SceneManager*>(_native)->setFog( (Ogre::FogMode)mode, colour, expDensity, linearStart );
	}
	void SceneManager::SetFog( Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity )
	{
		static_cast<Ogre::SceneManager*>(_native)->setFog( (Ogre::FogMode)mode, colour, expDensity );
	}
	void SceneManager::SetFog( Mogre::FogMode mode, Mogre::ColourValue colour )
	{
		static_cast<Ogre::SceneManager*>(_native)->setFog( (Ogre::FogMode)mode, colour );
	}
	void SceneManager::SetFog( Mogre::FogMode mode )
	{
		static_cast<Ogre::SceneManager*>(_native)->setFog( (Ogre::FogMode)mode );
	}
	void SceneManager::SetFog( )
	{
		static_cast<Ogre::SceneManager*>(_native)->setFog( );
	}
	
	Mogre::BillboardSet^ SceneManager::CreateBillboardSet( String^ name, unsigned int poolSize )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::SceneManager*>(_native)->createBillboardSet( o_name, poolSize );
	}
	Mogre::BillboardSet^ SceneManager::CreateBillboardSet( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::SceneManager*>(_native)->createBillboardSet( o_name );
	}
	
	Mogre::BillboardSet^ SceneManager::GetBillboardSet( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->getBillboardSet( o_name );
	}
	
	bool SceneManager::HasBillboardSet( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->hasBillboardSet( o_name );
	}
	
	void SceneManager::DestroyBillboardSet( Mogre::BillboardSet^ set )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyBillboardSet( set );
	}
	
	void SceneManager::DestroyBillboardSet( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::SceneManager*>(_native)->destroyBillboardSet( o_name );
	}
	
	void SceneManager::DestroyAllBillboardSets( )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyAllBillboardSets( );
	}
	
	Mogre::Animation^ SceneManager::CreateAnimation( String^ name, Mogre::Real length )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::SceneManager*>(_native)->createAnimation( o_name, length );
	}
	
	Mogre::Animation^ SceneManager::GetAnimation( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->getAnimation( o_name );
	}
	
	bool SceneManager::HasAnimation( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->hasAnimation( o_name );
	}
	
	void SceneManager::DestroyAnimation( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::SceneManager*>(_native)->destroyAnimation( o_name );
	}
	
	void SceneManager::DestroyAllAnimations( )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyAllAnimations( );
	}
	
	Mogre::AnimationState^ SceneManager::CreateAnimationState( String^ animName )
	{
		DECLARE_NATIVE_STRING( o_animName, animName )
	
		return static_cast<Ogre::SceneManager*>(_native)->createAnimationState( o_animName );
	}
	
	Mogre::AnimationState^ SceneManager::GetAnimationState( String^ animName )
	{
		DECLARE_NATIVE_STRING( o_animName, animName )
	
		return static_cast<const Ogre::SceneManager*>(_native)->getAnimationState( o_animName );
	}
	
	bool SceneManager::HasAnimationState( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->hasAnimationState( o_name );
	}
	
	void SceneManager::DestroyAnimationState( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::SceneManager*>(_native)->destroyAnimationState( o_name );
	}
	
	void SceneManager::DestroyAllAnimationStates( )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyAllAnimationStates( );
	}
	
	void SceneManager::ManualRender( Mogre::RenderOperation^ rend, Mogre::Pass^ pass, Mogre::Viewport^ vp, Mogre::Matrix4^ worldMatrix, Mogre::Matrix4^ viewMatrix, Mogre::Matrix4^ projMatrix, bool doBeginEndFrame )
	{
		pin_ptr<Ogre::Matrix4> p_worldMatrix = interior_ptr<Ogre::Matrix4>(&worldMatrix->m00);
		pin_ptr<Ogre::Matrix4> p_viewMatrix = interior_ptr<Ogre::Matrix4>(&viewMatrix->m00);
		pin_ptr<Ogre::Matrix4> p_projMatrix = interior_ptr<Ogre::Matrix4>(&projMatrix->m00);
	
		static_cast<Ogre::SceneManager*>(_native)->manualRender( rend, pass, vp, *p_worldMatrix, *p_viewMatrix, *p_projMatrix, doBeginEndFrame );
	}
	void SceneManager::ManualRender( Mogre::RenderOperation^ rend, Mogre::Pass^ pass, Mogre::Viewport^ vp, Mogre::Matrix4^ worldMatrix, Mogre::Matrix4^ viewMatrix, Mogre::Matrix4^ projMatrix )
	{
		pin_ptr<Ogre::Matrix4> p_worldMatrix = interior_ptr<Ogre::Matrix4>(&worldMatrix->m00);
		pin_ptr<Ogre::Matrix4> p_viewMatrix = interior_ptr<Ogre::Matrix4>(&viewMatrix->m00);
		pin_ptr<Ogre::Matrix4> p_projMatrix = interior_ptr<Ogre::Matrix4>(&projMatrix->m00);
	
		static_cast<Ogre::SceneManager*>(_native)->manualRender( rend, pass, vp, *p_worldMatrix, *p_viewMatrix, *p_projMatrix );
	}
	
	void SceneManager::AddSpecialCaseRenderQueue( Mogre::uint8 qid )
	{
		static_cast<Ogre::SceneManager*>(_native)->addSpecialCaseRenderQueue( qid );
	}
	
	void SceneManager::RemoveSpecialCaseRenderQueue( Mogre::uint8 qid )
	{
		static_cast<Ogre::SceneManager*>(_native)->removeSpecialCaseRenderQueue( qid );
	}
	
	void SceneManager::ClearSpecialCaseRenderQueues( )
	{
		static_cast<Ogre::SceneManager*>(_native)->clearSpecialCaseRenderQueues( );
	}
	
	void SceneManager::SetSpecialCaseRenderQueueMode( Mogre::SceneManager::SpecialCaseRenderQueueMode mode )
	{
		static_cast<Ogre::SceneManager*>(_native)->setSpecialCaseRenderQueueMode( (Ogre::SceneManager::SpecialCaseRenderQueueMode)mode );
	}
	
	Mogre::SceneManager::SpecialCaseRenderQueueMode SceneManager::GetSpecialCaseRenderQueueMode( )
	{
		return (Mogre::SceneManager::SpecialCaseRenderQueueMode)static_cast<Ogre::SceneManager*>(_native)->getSpecialCaseRenderQueueMode( );
	}
	
	bool SceneManager::IsRenderQueueToBeProcessed( Mogre::uint8 qid )
	{
		return static_cast<Ogre::SceneManager*>(_native)->isRenderQueueToBeProcessed( qid );
	}
	
	void SceneManager::_notifyAutotrackingSceneNode( Mogre::SceneNode^ node, bool autoTrack )
	{
		static_cast<Ogre::SceneManager*>(_native)->_notifyAutotrackingSceneNode( node, autoTrack );
	}
	
	Mogre::AxisAlignedBoxSceneQuery^ SceneManager::CreateAABBQuery( Mogre::AxisAlignedBox^ box, unsigned long mask )
	{
		return static_cast<Ogre::SceneManager*>(_native)->createAABBQuery( (Ogre::AxisAlignedBox)box, mask );
	}
	Mogre::AxisAlignedBoxSceneQuery^ SceneManager::CreateAABBQuery( Mogre::AxisAlignedBox^ box )
	{
		return static_cast<Ogre::SceneManager*>(_native)->createAABBQuery( (Ogre::AxisAlignedBox)box );
	}
	
	Mogre::SphereSceneQuery^ SceneManager::CreateSphereQuery( Mogre::Sphere sphere, unsigned long mask )
	{
		return static_cast<Ogre::SceneManager*>(_native)->createSphereQuery( sphere, mask );
	}
	Mogre::SphereSceneQuery^ SceneManager::CreateSphereQuery( Mogre::Sphere sphere )
	{
		return static_cast<Ogre::SceneManager*>(_native)->createSphereQuery( sphere );
	}
	
	Mogre::PlaneBoundedVolumeListSceneQuery^ SceneManager::CreatePlaneBoundedVolumeQuery( Mogre::Const_PlaneBoundedVolumeList^ volumes, unsigned long mask )
	{
		return static_cast<Ogre::SceneManager*>(_native)->createPlaneBoundedVolumeQuery( volumes, mask );
	}
	Mogre::PlaneBoundedVolumeListSceneQuery^ SceneManager::CreatePlaneBoundedVolumeQuery( Mogre::Const_PlaneBoundedVolumeList^ volumes )
	{
		return static_cast<Ogre::SceneManager*>(_native)->createPlaneBoundedVolumeQuery( volumes );
	}
	
	Mogre::RaySceneQuery^ SceneManager::CreateRayQuery( Mogre::Ray ray, unsigned long mask )
	{
		return static_cast<Ogre::SceneManager*>(_native)->createRayQuery( ray, mask );
	}
	Mogre::RaySceneQuery^ SceneManager::CreateRayQuery( Mogre::Ray ray )
	{
		return static_cast<Ogre::SceneManager*>(_native)->createRayQuery( ray );
	}
	
	Mogre::IntersectionSceneQuery^ SceneManager::CreateIntersectionQuery( unsigned long mask )
	{
		return static_cast<Ogre::SceneManager*>(_native)->createIntersectionQuery( mask );
	}
	Mogre::IntersectionSceneQuery^ SceneManager::CreateIntersectionQuery( )
	{
		return static_cast<Ogre::SceneManager*>(_native)->createIntersectionQuery( );
	}
	
	void SceneManager::DestroyQuery( Mogre::SceneQuery^ query )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyQuery( query );
	}
	
	Mogre::SceneManager::CameraIterator^ SceneManager::GetCameraIterator( )
	{
		return static_cast<Ogre::SceneManager*>(_native)->getCameraIterator( );
	}
	
	Mogre::SceneManager::AnimationIterator^ SceneManager::GetAnimationIterator( )
	{
		return static_cast<Ogre::SceneManager*>(_native)->getAnimationIterator( );
	}
	
	Mogre::AnimationStateIterator^ SceneManager::GetAnimationStateIterator( )
	{
		return static_cast<Ogre::SceneManager*>(_native)->getAnimationStateIterator( );
	}
	
	void SceneManager::SetShadowTextureSize( unsigned short size )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShadowTextureSize( size );
	}
	
	void SceneManager::SetShadowTextureConfig( size_t shadowIndex, unsigned short width, unsigned short height, Mogre::PixelFormat format )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShadowTextureConfig( shadowIndex, width, height, (Ogre::PixelFormat)format );
	}
	
	void SceneManager::SetShadowTextureConfig( size_t shadowIndex, Mogre::ShadowTextureConfig config )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShadowTextureConfig( shadowIndex, config );
	}
	
	Mogre::ConstShadowTextureConfigIterator^ SceneManager::GetShadowTextureConfigIterator( )
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getShadowTextureConfigIterator( );
	}
	
	void SceneManager::SetShadowTexturePixelFormat( Mogre::PixelFormat fmt )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShadowTexturePixelFormat( (Ogre::PixelFormat)fmt );
	}
	
	void SceneManager::SetShadowTextureSettings( unsigned short size, unsigned short count, Mogre::PixelFormat fmt )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShadowTextureSettings( size, count, (Ogre::PixelFormat)fmt );
	}
	void SceneManager::SetShadowTextureSettings( unsigned short size, unsigned short count )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShadowTextureSettings( size, count );
	}
	
	Mogre::TexturePtr^ SceneManager::GetShadowTexture( size_t shadowIndex )
	{
		return static_cast<Ogre::SceneManager*>(_native)->getShadowTexture( shadowIndex );
	}
	
	void SceneManager::SetShadowTextureFadeStart( Mogre::Real fadeStart )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShadowTextureFadeStart( fadeStart );
	}
	
	void SceneManager::SetShadowTextureFadeEnd( Mogre::Real fadeEnd )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShadowTextureFadeEnd( fadeEnd );
	}
	
	void SceneManager::SetShadowTextureCasterMaterial( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::SceneManager*>(_native)->setShadowTextureCasterMaterial( o_name );
	}
	
	void SceneManager::SetShadowTextureReceiverMaterial( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::SceneManager*>(_native)->setShadowTextureReceiverMaterial( o_name );
	}
	
	void SceneManager::SetShadowCameraSetup( Mogre::ShadowCameraSetupPtr^ shadowSetup )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShadowCameraSetup( (const Ogre::ShadowCameraSetupPtr&)shadowSetup );
	}
	
	Mogre::ShadowCameraSetupPtr^ SceneManager::GetShadowCameraSetup( )
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getShadowCameraSetup( );
	}
	
	void SceneManager::SetShadowUseInfiniteFarPlane( bool enable )
	{
		static_cast<Ogre::SceneManager*>(_native)->setShadowUseInfiniteFarPlane( enable );
	}
	
	Mogre::StaticGeometry^ SceneManager::CreateStaticGeometry( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::SceneManager*>(_native)->createStaticGeometry( o_name );
	}
	
	Mogre::StaticGeometry^ SceneManager::GetStaticGeometry( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->getStaticGeometry( o_name );
	}
	
	bool SceneManager::HasStaticGeometry( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->hasStaticGeometry( o_name );
	}
	
	void SceneManager::DestroyStaticGeometry( Mogre::StaticGeometry^ geom )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyStaticGeometry( geom );
	}
	
	void SceneManager::DestroyStaticGeometry( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::SceneManager*>(_native)->destroyStaticGeometry( o_name );
	}
	
	void SceneManager::DestroyAllStaticGeometry( )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyAllStaticGeometry( );
	}
	
	Mogre::InstancedGeometry^ SceneManager::CreateInstancedGeometry( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::SceneManager*>(_native)->createInstancedGeometry( o_name );
	}
	
	Mogre::InstancedGeometry^ SceneManager::GetInstancedGeometry( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SceneManager*>(_native)->getInstancedGeometry( o_name );
	}
	
	void SceneManager::DestroyInstancedGeometry( Mogre::InstancedGeometry^ geom )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyInstancedGeometry( geom );
	}
	
	void SceneManager::DestroyInstancedGeometry( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::SceneManager*>(_native)->destroyInstancedGeometry( o_name );
	}
	
	void SceneManager::DestroyAllInstancedGeometry( )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyAllInstancedGeometry( );
	}
	
	Mogre::MovableObject^ SceneManager::CreateMovableObject( String^ name, String^ typeName, Mogre::Const_NameValuePairList^ params )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_typeName, typeName )
	
		return static_cast<Ogre::SceneManager*>(_native)->createMovableObject( o_name, o_typeName, params );
	}
	Mogre::MovableObject^ SceneManager::CreateMovableObject( String^ name, String^ typeName )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_typeName, typeName )
	
		return static_cast<Ogre::SceneManager*>(_native)->createMovableObject( o_name, o_typeName );
	}
	
	void SceneManager::DestroyMovableObject( String^ name, String^ typeName )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_typeName, typeName )
	
		static_cast<Ogre::SceneManager*>(_native)->destroyMovableObject( o_name, o_typeName );
	}
	
	void SceneManager::DestroyMovableObject( Mogre::MovableObject^ m )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyMovableObject( m );
	}
	
	void SceneManager::DestroyAllMovableObjectsByType( String^ typeName )
	{
		DECLARE_NATIVE_STRING( o_typeName, typeName )
	
		static_cast<Ogre::SceneManager*>(_native)->destroyAllMovableObjectsByType( o_typeName );
	}
	
	void SceneManager::DestroyAllMovableObjects( )
	{
		static_cast<Ogre::SceneManager*>(_native)->destroyAllMovableObjects( );
	}
	
	Mogre::MovableObject^ SceneManager::GetMovableObject( String^ name, String^ typeName )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_typeName, typeName )
	
		return static_cast<const Ogre::SceneManager*>(_native)->getMovableObject( o_name, o_typeName );
	}
	
	bool SceneManager::HasMovableObject( String^ name, String^ typeName )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_typeName, typeName )
	
		return static_cast<const Ogre::SceneManager*>(_native)->hasMovableObject( o_name, o_typeName );
	}
	
	Mogre::SceneManager::MovableObjectIterator^ SceneManager::GetMovableObjectIterator( String^ typeName )
	{
		DECLARE_NATIVE_STRING( o_typeName, typeName )
	
		return static_cast<Ogre::SceneManager*>(_native)->getMovableObjectIterator( o_typeName );
	}
	
	void SceneManager::InjectMovableObject( Mogre::MovableObject^ m )
	{
		static_cast<Ogre::SceneManager*>(_native)->injectMovableObject( m );
	}
	
	void SceneManager::ExtractMovableObject( String^ name, String^ typeName )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_typeName, typeName )
	
		static_cast<Ogre::SceneManager*>(_native)->extractMovableObject( o_name, o_typeName );
	}
	
	void SceneManager::ExtractMovableObject( Mogre::MovableObject^ m )
	{
		static_cast<Ogre::SceneManager*>(_native)->extractMovableObject( m );
	}
	
	void SceneManager::ExtractAllMovableObjectsByType( String^ typeName )
	{
		DECLARE_NATIVE_STRING( o_typeName, typeName )
	
		static_cast<Ogre::SceneManager*>(_native)->extractAllMovableObjectsByType( o_typeName );
	}
	
	Mogre::uint32 SceneManager::_getCombinedVisibilityMask( )
	{
		return static_cast<const Ogre::SceneManager*>(_native)->_getCombinedVisibilityMask( );
	}
	
	void SceneManager::_injectRenderWithPass( Mogre::Pass^ pass, Mogre::IRenderable^ rend, bool shadowDerivation )
	{
		static_cast<Ogre::SceneManager*>(_native)->_injectRenderWithPass( pass, rend, shadowDerivation );
	}
	void SceneManager::_injectRenderWithPass( Mogre::Pass^ pass, Mogre::IRenderable^ rend )
	{
		static_cast<Ogre::SceneManager*>(_native)->_injectRenderWithPass( pass, rend );
	}
	
	void SceneManager::_suppressRenderStateChanges( bool suppress )
	{
		static_cast<Ogre::SceneManager*>(_native)->_suppressRenderStateChanges( suppress );
	}
	
	bool SceneManager::_areRenderStateChangesSuppressed( )
	{
		return static_cast<const Ogre::SceneManager*>(_native)->_areRenderStateChangesSuppressed( );
	}
	
	Mogre::Pass^ SceneManager::_setPass( Mogre::Pass^ pass, bool evenIfSuppressed, bool shadowDerivation )
	{
		return static_cast<Ogre::SceneManager*>(_native)->_setPass( pass, evenIfSuppressed, shadowDerivation );
	}
	Mogre::Pass^ SceneManager::_setPass( Mogre::Pass^ pass, bool evenIfSuppressed )
	{
		return static_cast<Ogre::SceneManager*>(_native)->_setPass( pass, evenIfSuppressed );
	}
	Mogre::Pass^ SceneManager::_setPass( Mogre::Pass^ pass )
	{
		return static_cast<Ogre::SceneManager*>(_native)->_setPass( pass );
	}
	
	void SceneManager::_suppressShadows( bool suppress )
	{
		static_cast<Ogre::SceneManager*>(_native)->_suppressShadows( suppress );
	}
	
	bool SceneManager::_areShadowsSuppressed( )
	{
		return static_cast<const Ogre::SceneManager*>(_native)->_areShadowsSuppressed( );
	}
	
	void SceneManager::_renderQueueGroupObjects( Mogre::RenderQueueGroup^ group, Mogre::QueuedRenderableCollection::OrganisationMode om )
	{
		static_cast<Ogre::SceneManager*>(_native)->_renderQueueGroupObjects( group, (Ogre::QueuedRenderableCollection::OrganisationMode)om );
	}
	
	Mogre::VisibleObjectsBoundsInfo_NativePtr SceneManager::GetVisibleObjectsBoundsInfo( Mogre::Camera^ cam )
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getVisibleObjectsBoundsInfo( cam );
	}
	
	Mogre::VisibleObjectsBoundsInfo_NativePtr SceneManager::GetShadowCasterBoundsInfo( Mogre::Light^ light )
	{
		return static_cast<const Ogre::SceneManager*>(_native)->getShadowCasterBoundsInfo( light );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//DefaultIntersectionSceneQuery
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	DefaultIntersectionSceneQuery::DefaultIntersectionSceneQuery( Mogre::SceneManager^ creator ) : IntersectionSceneQuery((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::DefaultIntersectionSceneQuery( creator);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	void DefaultIntersectionSceneQuery::Execute( Mogre::IIntersectionSceneQueryListener^ listener )
	{
		static_cast<Ogre::DefaultIntersectionSceneQuery*>(_native)->execute( listener );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//DefaultRaySceneQuery
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	DefaultRaySceneQuery::DefaultRaySceneQuery( Mogre::SceneManager^ creator ) : RaySceneQuery((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::DefaultRaySceneQuery( creator);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	void DefaultRaySceneQuery::Execute( Mogre::IRaySceneQueryListener^ listener )
	{
		static_cast<Ogre::DefaultRaySceneQuery*>(_native)->execute( listener );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//DefaultSphereSceneQuery
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	DefaultSphereSceneQuery::DefaultSphereSceneQuery( Mogre::SceneManager^ creator ) : SphereSceneQuery((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::DefaultSphereSceneQuery( creator);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	void DefaultSphereSceneQuery::Execute( Mogre::ISceneQueryListener^ listener )
	{
		static_cast<Ogre::DefaultSphereSceneQuery*>(_native)->execute( listener );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//DefaultPlaneBoundedVolumeListSceneQuery
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	DefaultPlaneBoundedVolumeListSceneQuery::DefaultPlaneBoundedVolumeListSceneQuery( Mogre::SceneManager^ creator ) : PlaneBoundedVolumeListSceneQuery((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::DefaultPlaneBoundedVolumeListSceneQuery( creator);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	void DefaultPlaneBoundedVolumeListSceneQuery::Execute( Mogre::ISceneQueryListener^ listener )
	{
		static_cast<Ogre::DefaultPlaneBoundedVolumeListSceneQuery*>(_native)->execute( listener );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//DefaultAxisAlignedBoxSceneQuery
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	DefaultAxisAlignedBoxSceneQuery::DefaultAxisAlignedBoxSceneQuery( Mogre::SceneManager^ creator ) : AxisAlignedBoxSceneQuery((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::DefaultAxisAlignedBoxSceneQuery( creator);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	void DefaultAxisAlignedBoxSceneQuery::Execute( Mogre::ISceneQueryListener^ listener )
	{
		static_cast<Ogre::DefaultAxisAlignedBoxSceneQuery*>(_native)->execute( listener );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//SceneManagerFactory
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Mogre::SceneManagerMetaData_NativePtr SceneManagerFactory::MetaData::get()
	{
		return static_cast<const Ogre::SceneManagerFactory*>(_native)->getMetaData( );
	}
	
	Mogre::SceneManager^ SceneManagerFactory::CreateInstance( String^ instanceName )
	{
		DECLARE_NATIVE_STRING( o_instanceName, instanceName )
	
		return static_cast<Ogre::SceneManagerFactory*>(_native)->createInstance( o_instanceName );
	}
	
	void SceneManagerFactory::DestroyInstance( Mogre::SceneManager^ instance )
	{
		static_cast<Ogre::SceneManagerFactory*>(_native)->destroyInstance( instance );
	}
	
	
	//Protected Declarations
	
	

}
