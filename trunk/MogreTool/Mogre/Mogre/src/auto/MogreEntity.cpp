/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreEntity.h"
#include "MogreMovableObject.h"
#include "MogreAnimationState.h"
#include "MogreEdgeListBuilder.h"
#include "MogreSkeletonInstance.h"
#include "MogreVertexIndexData.h"
#include "MogreMesh.h"
#include "MogreSubEntity.h"
#include "MogreCamera.h"
#include "MogreRenderQueue.h"
#include "MogreTagPoint.h"
#include "MogreLight.h"
#include "MogreHardwareIndexBuffer.h"
#include "MogreNode.h"
#include "MogreResource.h"

namespace Mogre
{
	//################################################################
	//Entity
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Mogre::Entity^
	#define STLDECL_NATIVETYPE Ogre::Entity*
	CPP_DECLARE_STLSET( Entity::, EntitySet, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::MovableObject^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::MovableObject*
	CPP_DECLARE_STLMAP( Entity::, ChildObjectList, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	CPP_DECLARE_MAP_ITERATOR( Entity::, ChildObjectListIterator, Ogre::Entity::ChildObjectListIterator, Mogre::Entity::ChildObjectList, Mogre::MovableObject^, Ogre::MovableObject*, String^, Ogre::String,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	Mogre::AnimationStateSet^ Entity::AllAnimationStates::get()
	{
		return static_cast<const Ogre::Entity*>(_native)->getAllAnimationStates( );
	}
	
	Mogre::AxisAlignedBox^ Entity::BoundingBox::get()
	{
		return static_cast<const Ogre::Entity*>(_native)->getBoundingBox( );
	}
	
	Mogre::Real Entity::BoundingRadius::get()
	{
		return static_cast<const Ogre::Entity*>(_native)->getBoundingRadius( );
	}
	
	Mogre::AxisAlignedBox^ Entity::ChildObjectsBoundingBox::get()
	{
		return static_cast<const Ogre::Entity*>(_native)->getChildObjectsBoundingBox( );
	}
	
	bool Entity::DisplaySkeleton::get()
	{
		return static_cast<const Ogre::Entity*>(_native)->getDisplaySkeleton( );
	}
	void Entity::DisplaySkeleton::set( bool display )
	{
		static_cast<Ogre::Entity*>(_native)->setDisplaySkeleton( display );
	}
	
	Mogre::EdgeData^ Entity::EdgeList::get()
	{
		return static_cast<Ogre::Entity*>(_native)->getEdgeList( );
	}
	
	bool Entity::HasEdgeList::get()
	{
		return static_cast<Ogre::Entity*>(_native)->hasEdgeList( );
	}
	
	bool Entity::HasSkeleton::get()
	{
		return static_cast<const Ogre::Entity*>(_native)->hasSkeleton( );
	}
	
	bool Entity::HasVertexAnimation::get()
	{
		return static_cast<const Ogre::Entity*>(_native)->hasVertexAnimation( );
	}
	
	bool Entity::IsHardwareAnimationEnabled::get()
	{
		return static_cast<const Ogre::Entity*>(_native)->isHardwareAnimationEnabled( );
	}
	
	bool Entity::IsInitialised::get()
	{
		return static_cast<const Ogre::Entity*>(_native)->isInitialised( );
	}
	
	String^ Entity::MovableType::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Entity*>(_native)->getMovableType( ) );
	}
	
	bool Entity::NormaliseNormals::get()
	{
		return static_cast<const Ogre::Entity*>(_native)->getNormaliseNormals( );
	}
	void Entity::NormaliseNormals::set( bool normalise )
	{
		static_cast<Ogre::Entity*>(_native)->setNormaliseNormals( normalise );
	}
	
	size_t Entity::NumManualLodLevels::get()
	{
		return static_cast<const Ogre::Entity*>(_native)->getNumManualLodLevels( );
	}
	
	unsigned int Entity::NumSubEntities::get()
	{
		return static_cast<const Ogre::Entity*>(_native)->getNumSubEntities( );
	}
	
	Mogre::uint8 Entity::RenderQueueGroup::get()
	{
		return static_cast<const Ogre::Entity*>(_native)->getRenderQueueGroup( );
	}
	void Entity::RenderQueueGroup::set( Mogre::uint8 queueID )
	{
		static_cast<Ogre::Entity*>(_native)->setRenderQueueGroup( queueID );
	}
	
	Mogre::SkeletonInstance^ Entity::Skeleton::get()
	{
		return static_cast<const Ogre::Entity*>(_native)->getSkeleton( );
	}
	
	int Entity::SoftwareAnimationNormalsRequests::get()
	{
		return static_cast<const Ogre::Entity*>(_native)->getSoftwareAnimationNormalsRequests( );
	}
	
	int Entity::SoftwareAnimationRequests::get()
	{
		return static_cast<const Ogre::Entity*>(_native)->getSoftwareAnimationRequests( );
	}
	
	Mogre::uint32 Entity::TypeFlags::get()
	{
		return static_cast<const Ogre::Entity*>(_native)->getTypeFlags( );
	}
	
	Mogre::VertexData^ Entity::VertexDataForBinding::get()
	{
		return static_cast<Ogre::Entity*>(_native)->getVertexDataForBinding( );
	}
	
	Mogre::MeshPtr^ Entity::GetMesh( )
	{
		return static_cast<const Ogre::Entity*>(_native)->getMesh( );
	}
	
	Mogre::SubEntity^ Entity::GetSubEntity( unsigned int index )
	{
		return static_cast<const Ogre::Entity*>(_native)->getSubEntity( index );
	}
	
	Mogre::SubEntity^ Entity::GetSubEntity( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::Entity*>(_native)->getSubEntity( o_name );
	}
	
	Mogre::Entity^ Entity::Clone( String^ newName )
	{
		DECLARE_NATIVE_STRING( o_newName, newName )
	
		return static_cast<const Ogre::Entity*>(_native)->clone( o_newName );
	}
	
	void Entity::SetMaterialName( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::Entity*>(_native)->setMaterialName( o_name );
	}
	
	void Entity::_notifyCurrentCamera( Mogre::Camera^ cam )
	{
		static_cast<Ogre::Entity*>(_native)->_notifyCurrentCamera( cam );
	}
	
	void Entity::_updateRenderQueue( Mogre::RenderQueue^ queue )
	{
		static_cast<Ogre::Entity*>(_native)->_updateRenderQueue( queue );
	}
	
	Mogre::AnimationState^ Entity::GetAnimationState( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::Entity*>(_native)->getAnimationState( o_name );
	}
	
	Mogre::Entity^ Entity::GetManualLodLevel( size_t index )
	{
		return static_cast<const Ogre::Entity*>(_native)->getManualLodLevel( index );
	}
	
	void Entity::SetMeshLodBias( Mogre::Real factor, Mogre::ushort maxDetailIndex, Mogre::ushort minDetailIndex )
	{
		static_cast<Ogre::Entity*>(_native)->setMeshLodBias( factor, maxDetailIndex, minDetailIndex );
	}
	void Entity::SetMeshLodBias( Mogre::Real factor, Mogre::ushort maxDetailIndex )
	{
		static_cast<Ogre::Entity*>(_native)->setMeshLodBias( factor, maxDetailIndex );
	}
	void Entity::SetMeshLodBias( Mogre::Real factor )
	{
		static_cast<Ogre::Entity*>(_native)->setMeshLodBias( factor );
	}
	
	void Entity::SetMaterialLodBias( Mogre::Real factor, Mogre::ushort maxDetailIndex, Mogre::ushort minDetailIndex )
	{
		static_cast<Ogre::Entity*>(_native)->setMaterialLodBias( factor, maxDetailIndex, minDetailIndex );
	}
	void Entity::SetMaterialLodBias( Mogre::Real factor, Mogre::ushort maxDetailIndex )
	{
		static_cast<Ogre::Entity*>(_native)->setMaterialLodBias( factor, maxDetailIndex );
	}
	void Entity::SetMaterialLodBias( Mogre::Real factor )
	{
		static_cast<Ogre::Entity*>(_native)->setMaterialLodBias( factor );
	}
	
	void Entity::SetPolygonModeOverrideable( bool PolygonModeOverrideable )
	{
		static_cast<Ogre::Entity*>(_native)->setPolygonModeOverrideable( PolygonModeOverrideable );
	}
	
	Mogre::TagPoint^ Entity::AttachObjectToBone( String^ boneName, Mogre::MovableObject^ pMovable, Mogre::Quaternion offsetOrientation, Mogre::Vector3 offsetPosition )
	{
		DECLARE_NATIVE_STRING( o_boneName, boneName )
	
		return static_cast<Ogre::Entity*>(_native)->attachObjectToBone( o_boneName, pMovable, offsetOrientation, offsetPosition );
	}
	Mogre::TagPoint^ Entity::AttachObjectToBone( String^ boneName, Mogre::MovableObject^ pMovable, Mogre::Quaternion offsetOrientation )
	{
		DECLARE_NATIVE_STRING( o_boneName, boneName )
	
		return static_cast<Ogre::Entity*>(_native)->attachObjectToBone( o_boneName, pMovable, offsetOrientation );
	}
	Mogre::TagPoint^ Entity::AttachObjectToBone( String^ boneName, Mogre::MovableObject^ pMovable )
	{
		DECLARE_NATIVE_STRING( o_boneName, boneName )
	
		return static_cast<Ogre::Entity*>(_native)->attachObjectToBone( o_boneName, pMovable );
	}
	
	Mogre::MovableObject^ Entity::DetachObjectFromBone( String^ movableName )
	{
		DECLARE_NATIVE_STRING( o_movableName, movableName )
	
		return static_cast<Ogre::Entity*>(_native)->detachObjectFromBone( o_movableName );
	}
	
	void Entity::DetachObjectFromBone( Mogre::MovableObject^ obj )
	{
		static_cast<Ogre::Entity*>(_native)->detachObjectFromBone( obj );
	}
	
	void Entity::DetachAllObjectsFromBone( )
	{
		static_cast<Ogre::Entity*>(_native)->detachAllObjectsFromBone( );
	}
	
	Mogre::Entity::ChildObjectListIterator^ Entity::GetAttachedObjectIterator( )
	{
		return static_cast<Ogre::Entity*>(_native)->getAttachedObjectIterator( );
	}
	
	Mogre::AxisAlignedBox^ Entity::GetWorldBoundingBox( bool derive )
	{
		return static_cast<const Ogre::Entity*>(_native)->getWorldBoundingBox( derive );
	}
	Mogre::AxisAlignedBox^ Entity::GetWorldBoundingBox( )
	{
		return static_cast<const Ogre::Entity*>(_native)->getWorldBoundingBox( );
	}
	
	Mogre::Sphere Entity::GetWorldBoundingSphere( bool derive )
	{
		return static_cast<const Ogre::Entity*>(_native)->getWorldBoundingSphere( derive );
	}
	Mogre::Sphere Entity::GetWorldBoundingSphere( )
	{
		return static_cast<const Ogre::Entity*>(_native)->getWorldBoundingSphere( );
	}
	
	Mogre::ShadowCaster::ShadowRenderableListIterator^ Entity::GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDistance, unsigned long flags )
	{
		return static_cast<Ogre::Entity*>(_native)->getShadowVolumeRenderableIterator( (Ogre::ShadowTechnique)shadowTechnique, light, (Ogre::HardwareIndexBufferSharedPtr*)indexBuffer, extrudeVertices, extrusionDistance, flags );
	}
	Mogre::ShadowCaster::ShadowRenderableListIterator^ Entity::GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDistance )
	{
		return static_cast<Ogre::Entity*>(_native)->getShadowVolumeRenderableIterator( (Ogre::ShadowTechnique)shadowTechnique, light, (Ogre::HardwareIndexBufferSharedPtr*)indexBuffer, extrudeVertices, extrusionDistance );
	}
	
	const Mogre::Matrix4::NativeValue* Entity::_getBoneMatrices( )
	{
		return reinterpret_cast<const Mogre::Matrix4::NativeValue*>(static_cast<const Ogre::Entity*>(_native)->_getBoneMatrices( ));
	}
	
	unsigned short Entity::_getNumBoneMatrices( )
	{
		return static_cast<const Ogre::Entity*>(_native)->_getNumBoneMatrices( );
	}
	
	void Entity::_notifyAttached( Mogre::Node^ parent, bool isTagPoint )
	{
		static_cast<Ogre::Entity*>(_native)->_notifyAttached( parent, isTagPoint );
	}
	void Entity::_notifyAttached( Mogre::Node^ parent )
	{
		static_cast<Ogre::Entity*>(_native)->_notifyAttached( parent );
	}
	
	void Entity::AddSoftwareAnimationRequest( bool normalsAlso )
	{
		static_cast<Ogre::Entity*>(_native)->addSoftwareAnimationRequest( normalsAlso );
	}
	
	void Entity::RemoveSoftwareAnimationRequest( bool normalsAlso )
	{
		static_cast<Ogre::Entity*>(_native)->removeSoftwareAnimationRequest( normalsAlso );
	}
	
	void Entity::ShareSkeletonInstanceWith( Mogre::Entity^ entity )
	{
		static_cast<Ogre::Entity*>(_native)->shareSkeletonInstanceWith( entity );
	}
	
	void Entity::StopSharingSkeletonInstance( )
	{
		static_cast<Ogre::Entity*>(_native)->stopSharingSkeletonInstance( );
	}
	
	bool Entity::SharesSkeletonInstance( )
	{
		return static_cast<const Ogre::Entity*>(_native)->sharesSkeletonInstance( );
	}
	
	Mogre::Entity::Const_EntitySet^ Entity::GetSkeletonInstanceSharingSet( )
	{
		return static_cast<const Ogre::Entity*>(_native)->getSkeletonInstanceSharingSet( );
	}
	
	void Entity::RefreshAvailableAnimationState( )
	{
		static_cast<Ogre::Entity*>(_native)->refreshAvailableAnimationState( );
	}
	
	void Entity::_updateAnimation( )
	{
		static_cast<Ogre::Entity*>(_native)->_updateAnimation( );
	}
	
	bool Entity::_isAnimated( )
	{
		return static_cast<const Ogre::Entity*>(_native)->_isAnimated( );
	}
	
	bool Entity::_isSkeletonAnimated( )
	{
		return static_cast<const Ogre::Entity*>(_native)->_isSkeletonAnimated( );
	}
	
	Mogre::VertexData^ Entity::_getSkelAnimVertexData( )
	{
		return static_cast<const Ogre::Entity*>(_native)->_getSkelAnimVertexData( );
	}
	
	Mogre::VertexData^ Entity::_getSoftwareVertexAnimVertexData( )
	{
		return static_cast<const Ogre::Entity*>(_native)->_getSoftwareVertexAnimVertexData( );
	}
	
	Mogre::VertexData^ Entity::_getHardwareVertexAnimVertexData( )
	{
		return static_cast<const Ogre::Entity*>(_native)->_getHardwareVertexAnimVertexData( );
	}
	
	Mogre::Entity::VertexDataBindChoice Entity::ChooseVertexDataForBinding( bool hasVertexAnim )
	{
		return (Mogre::Entity::VertexDataBindChoice)static_cast<const Ogre::Entity*>(_native)->chooseVertexDataForBinding( hasVertexAnim );
	}
	
	bool Entity::_getBuffersMarkedForAnimation( )
	{
		return static_cast<const Ogre::Entity*>(_native)->_getBuffersMarkedForAnimation( );
	}
	
	void Entity::_markBuffersUsedForAnimation( )
	{
		static_cast<Ogre::Entity*>(_native)->_markBuffersUsedForAnimation( );
	}
	
	void Entity::_initialise( bool forceReinitialise )
	{
		static_cast<Ogre::Entity*>(_native)->_initialise( forceReinitialise );
	}
	void Entity::_initialise( )
	{
		static_cast<Ogre::Entity*>(_native)->_initialise( );
	}
	
	void Entity::_deinitialise( )
	{
		static_cast<Ogre::Entity*>(_native)->_deinitialise( );
	}
	
	void Entity::BackgroundLoadingComplete( Mogre::Resource^ res )
	{
		static_cast<Ogre::Entity*>(_native)->backgroundLoadingComplete( res );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//EntityFactory
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	EntityFactory::EntityFactory( ) : MovableObjectFactory((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::EntityFactory();
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	String^ EntityFactory::FACTORY_TYPE_NAME::get()
	{
		return TO_CLR_STRING( Ogre::EntityFactory::FACTORY_TYPE_NAME );
	}
	void EntityFactory::FACTORY_TYPE_NAME::set( String^ value )
	{
		DECLARE_NATIVE_STRING( o_value, value )
	
		Ogre::EntityFactory::FACTORY_TYPE_NAME = o_value;
	}
	
	String^ EntityFactory::Type::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::EntityFactory*>(_native)->getType( ) );
	}
	
	void EntityFactory::DestroyInstance( Mogre::MovableObject^ obj )
	{
		static_cast<Ogre::EntityFactory*>(_native)->destroyInstance( obj );
	}
	
	
	//Protected Declarations
	
	

}
