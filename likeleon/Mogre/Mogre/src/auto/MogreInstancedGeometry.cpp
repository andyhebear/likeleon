/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreInstancedGeometry.h"
#include "MogreSceneManager.h"
#include "MogreSceneNode.h"
#include "MogreCamera.h"
#include "MogreRenderQueue.h"
#include "MogreCommon.h"
#include "MogreSkeletonInstance.h"
#include "MogreAnimationState.h"
#include "MogreRenderOperation.h"
#include "MogreEntity.h"
#include "MogreSkeleton.h"

namespace Mogre
{
	//################################################################
	//InstancedGeometry
	//################################################################
	
	//Nested Types
	//################################################################
	//BatchInstance
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDKEY int
	#define STLDECL_MANAGEDVALUE Mogre::InstancedGeometry::InstancedObject^
	#define STLDECL_NATIVEKEY int
	#define STLDECL_NATIVEVALUE Ogre::InstancedGeometry::InstancedObject*
	CPP_DECLARE_STLMAP( InstancedGeometry::BatchInstance::, ObjectsMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDTYPE Mogre::Real
	#define STLDECL_NATIVETYPE Ogre::Real
	CPP_DECLARE_STLVECTOR( InstancedGeometry::BatchInstance::, STLVector_Real, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	InstancedGeometry::BatchInstance::BatchInstance( Mogre::InstancedGeometry^ parent, String^ name, Mogre::SceneManager^ mgr, Mogre::uint32 BatchInstanceID ) : MovableObject((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::InstancedGeometry::BatchInstance( parent, o_name, mgr, BatchInstanceID);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	InstancedGeometry::BatchInstance::STLVector_Real^ InstancedGeometry::BatchInstance::mLodSquaredDistances::get()
	{
		return ( CLR_NULL == _mLodSquaredDistances ) ? (_mLodSquaredDistances = static_cast<Ogre::InstancedGeometry::BatchInstance*>(_native)->mLodSquaredDistances) : _mLodSquaredDistances;
	}
	
	Mogre::AxisAlignedBox^ InstancedGeometry::BatchInstance::mAABB::get()
	{
		return static_cast<Ogre::InstancedGeometry::BatchInstance*>(_native)->mAABB;
	}
	void InstancedGeometry::BatchInstance::mAABB::set( Mogre::AxisAlignedBox^ value )
	{
		static_cast<Ogre::InstancedGeometry::BatchInstance*>(_native)->mAABB = (Ogre::AxisAlignedBox)value;
	}
	
	Mogre::Real InstancedGeometry::BatchInstance::mBoundingRadius::get()
	{
		return static_cast<Ogre::InstancedGeometry::BatchInstance*>(_native)->mBoundingRadius;
	}
	void InstancedGeometry::BatchInstance::mBoundingRadius::set( Mogre::Real value )
	{
		static_cast<Ogre::InstancedGeometry::BatchInstance*>(_native)->mBoundingRadius = value;
	}
	
	Mogre::ushort InstancedGeometry::BatchInstance::mCurrentLod::get()
	{
		return static_cast<Ogre::InstancedGeometry::BatchInstance*>(_native)->mCurrentLod;
	}
	void InstancedGeometry::BatchInstance::mCurrentLod::set( Mogre::ushort value )
	{
		static_cast<Ogre::InstancedGeometry::BatchInstance*>(_native)->mCurrentLod = value;
	}
	
	Mogre::Real InstancedGeometry::BatchInstance::mCamDistanceSquared::get()
	{
		return static_cast<Ogre::InstancedGeometry::BatchInstance*>(_native)->mCamDistanceSquared;
	}
	void InstancedGeometry::BatchInstance::mCamDistanceSquared::set( Mogre::Real value )
	{
		static_cast<Ogre::InstancedGeometry::BatchInstance*>(_native)->mCamDistanceSquared = value;
	}
	
	Mogre::AxisAlignedBox^ InstancedGeometry::BatchInstance::BoundingBox::get()
	{
		return static_cast<const Ogre::InstancedGeometry::BatchInstance*>(_native)->getBoundingBox( );
	}
	void InstancedGeometry::BatchInstance::BoundingBox::set( Mogre::AxisAlignedBox^ box )
	{
		static_cast<Ogre::InstancedGeometry::BatchInstance*>(_native)->setBoundingBox( (Ogre::AxisAlignedBox)box );
	}
	
	Mogre::Real InstancedGeometry::BatchInstance::BoundingRadius::get()
	{
		return static_cast<const Ogre::InstancedGeometry::BatchInstance*>(_native)->getBoundingRadius( );
	}
	
	Mogre::uint32 InstancedGeometry::BatchInstance::ID::get()
	{
		return static_cast<const Ogre::InstancedGeometry::BatchInstance*>(_native)->getID( );
	}
	
	String^ InstancedGeometry::BatchInstance::MovableType::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::InstancedGeometry::BatchInstance*>(_native)->getMovableType( ) );
	}
	
	Mogre::InstancedGeometry^ InstancedGeometry::BatchInstance::Parent::get()
	{
		return static_cast<const Ogre::InstancedGeometry::BatchInstance*>(_native)->getParent( );
	}
	
	Mogre::SceneNode^ InstancedGeometry::BatchInstance::SceneNode::get()
	{
		return static_cast<Ogre::InstancedGeometry::BatchInstance*>(_native)->getSceneNode( );
	}
	
	void InstancedGeometry::BatchInstance::Build( )
	{
		static_cast<Ogre::InstancedGeometry::BatchInstance*>(_native)->build( );
	}
	
	void InstancedGeometry::BatchInstance::_notifyCurrentCamera( Mogre::Camera^ cam )
	{
		static_cast<Ogre::InstancedGeometry::BatchInstance*>(_native)->_notifyCurrentCamera( cam );
	}
	
	void InstancedGeometry::BatchInstance::_updateRenderQueue( Mogre::RenderQueue^ queue )
	{
		static_cast<Ogre::InstancedGeometry::BatchInstance*>(_native)->_updateRenderQueue( queue );
	}
	
	bool InstancedGeometry::BatchInstance::IsVisible( )
	{
		return static_cast<const Ogre::InstancedGeometry::BatchInstance*>(_native)->isVisible( );
	}
	
	Mogre::Const_LightList^ InstancedGeometry::BatchInstance::GetLights( )
	{
		return static_cast<const Ogre::InstancedGeometry::BatchInstance*>(_native)->getLights( );
	}
	
	void InstancedGeometry::BatchInstance::UpdateBoundingBox( )
	{
		static_cast<Ogre::InstancedGeometry::BatchInstance*>(_native)->updateBoundingBox( );
	}
	
	void InstancedGeometry::BatchInstance::Dump( [Out] std::ofstream% of )
	{
		pin_ptr<std::ofstream> p_of = &of;
	
		static_cast<const Ogre::InstancedGeometry::BatchInstance*>(_native)->dump( *p_of );
	}
	
	void InstancedGeometry::BatchInstance::AttachToScene( )
	{
		static_cast<Ogre::InstancedGeometry::BatchInstance*>(_native)->attachToScene( );
	}
	
	void InstancedGeometry::BatchInstance::AddInstancedObject( int index, Mogre::InstancedGeometry::InstancedObject^ object )
	{
		static_cast<Ogre::InstancedGeometry::BatchInstance*>(_native)->addInstancedObject( index, object );
	}
	
	Mogre::InstancedGeometry::InstancedObject^ InstancedGeometry::BatchInstance::IsInstancedObjectPresent( int index )
	{
		return static_cast<Ogre::InstancedGeometry::BatchInstance*>(_native)->isInstancedObjectPresent( index );
	}
	
	Mogre::InstancedGeometry::BatchInstance::ObjectsMap^ InstancedGeometry::BatchInstance::GetInstancesMap( )
	{
		return static_cast<Ogre::InstancedGeometry::BatchInstance*>(_native)->getInstancesMap( );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//InstancedObject
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	InstancedGeometry::InstancedObject::InstancedObject( int index )
	{
		_createdByCLR = true;
		_native = new Ogre::InstancedGeometry::InstancedObject( index);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	InstancedGeometry::InstancedObject::InstancedObject( int index, Mogre::SkeletonInstance^ skeleton, Mogre::AnimationStateSet^ animations )
	{
		_createdByCLR = true;
		_native = new Ogre::InstancedGeometry::InstancedObject( index, skeleton, animations);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::Matrix3^ InstancedGeometry::InstancedObject::LocalAxes::get()
	{
		return static_cast<const Ogre::InstancedGeometry::InstancedObject*>(_native)->getLocalAxes( );
	}
	
	Mogre::Vector3 InstancedGeometry::InstancedObject::Position::get()
	{
		return static_cast<Ogre::InstancedGeometry::InstancedObject*>(_native)->getPosition( );
	}
	void InstancedGeometry::InstancedObject::Position::set( Mogre::Vector3 position )
	{
		static_cast<Ogre::InstancedGeometry::InstancedObject*>(_native)->setPosition( position );
	}
	
	Mogre::SkeletonInstance^ InstancedGeometry::InstancedObject::SkeletonInstance::get()
	{
		return static_cast<Ogre::InstancedGeometry::InstancedObject*>(_native)->getSkeletonInstance( );
	}
	
	void InstancedGeometry::InstancedObject::Yaw( Mogre::Radian angle )
	{
		static_cast<Ogre::InstancedGeometry::InstancedObject*>(_native)->yaw( angle );
	}
	
	void InstancedGeometry::InstancedObject::Pitch( Mogre::Radian angle )
	{
		static_cast<Ogre::InstancedGeometry::InstancedObject*>(_native)->pitch( angle );
	}
	
	void InstancedGeometry::InstancedObject::Roll( Mogre::Radian angle )
	{
		static_cast<Ogre::InstancedGeometry::InstancedObject*>(_native)->roll( angle );
	}
	
	void InstancedGeometry::InstancedObject::Rotate( Mogre::Quaternion q )
	{
		static_cast<Ogre::InstancedGeometry::InstancedObject*>(_native)->rotate( q );
	}
	
	void InstancedGeometry::InstancedObject::SetScale( Mogre::Vector3 scale )
	{
		static_cast<Ogre::InstancedGeometry::InstancedObject*>(_native)->setScale( scale );
	}
	
	void InstancedGeometry::InstancedObject::NeedUpdate( )
	{
		static_cast<Ogre::InstancedGeometry::InstancedObject*>(_native)->needUpdate( );
	}
	
	void InstancedGeometry::InstancedObject::Translate( Mogre::Matrix3^ axes, Mogre::Vector3 move )
	{
		pin_ptr<Ogre::Matrix3> p_axes = interior_ptr<Ogre::Matrix3>(&axes->m00);
	
		static_cast<Ogre::InstancedGeometry::InstancedObject*>(_native)->translate( *p_axes, move );
	}
	
	void InstancedGeometry::InstancedObject::Translate( Mogre::Vector3 d )
	{
		static_cast<Ogre::InstancedGeometry::InstancedObject*>(_native)->translate( d );
	}
	
	void InstancedGeometry::InstancedObject::UpdateAnimation( )
	{
		static_cast<Ogre::InstancedGeometry::InstancedObject*>(_native)->updateAnimation( );
	}
	
	Mogre::AnimationState^ InstancedGeometry::InstancedObject::GetAnimationState( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::InstancedGeometry::InstancedObject*>(_native)->getAnimationState( o_name );
	}
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDTYPE String^
	#define STLDECL_NATIVETYPE Ogre::String
	CPP_DECLARE_STLVECTOR( InstancedGeometry::, QueuedSubMeshOriginList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDKEY Mogre::uint32
	#define STLDECL_MANAGEDVALUE Mogre::InstancedGeometry::BatchInstance^
	#define STLDECL_NATIVEKEY Ogre::uint32
	#define STLDECL_NATIVEVALUE Ogre::InstancedGeometry::BatchInstance*
	CPP_DECLARE_STLMAP( InstancedGeometry::, BatchInstanceMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDTYPE Mogre::RenderOperation^
	#define STLDECL_NATIVETYPE Ogre::RenderOperation*
	CPP_DECLARE_STLVECTOR( InstancedGeometry::, RenderOperationVector, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	CPP_DECLARE_MAP_ITERATOR( InstancedGeometry::, BatchInstanceIterator, Ogre::InstancedGeometry::BatchInstanceIterator, Mogre::InstancedGeometry::BatchInstanceMap, Mogre::InstancedGeometry::BatchInstance^, Ogre::InstancedGeometry::BatchInstance*, Mogre::uint32, Ogre::uint32,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	InstancedGeometry::InstancedGeometry( Mogre::SceneManager^ owner, String^ name ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::InstancedGeometry( owner, o_name);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::AnimationStateSet^ InstancedGeometry::BaseAnimationState::get()
	{
		return static_cast<Ogre::InstancedGeometry*>(_native)->getBaseAnimationState( );
	}
	
	Mogre::SkeletonInstance^ InstancedGeometry::BaseSkeletonInstance::get()
	{
		return static_cast<Ogre::InstancedGeometry*>(_native)->getBaseSkeletonInstance( );
	}
	
	Mogre::Vector3 InstancedGeometry::BatchInstanceDimensions::get()
	{
		return static_cast<const Ogre::InstancedGeometry*>(_native)->getBatchInstanceDimensions( );
	}
	void InstancedGeometry::BatchInstanceDimensions::set( Mogre::Vector3 size )
	{
		static_cast<Ogre::InstancedGeometry*>(_native)->setBatchInstanceDimensions( size );
	}
	
	bool InstancedGeometry::CastShadows::get()
	{
		return static_cast<Ogre::InstancedGeometry*>(_native)->getCastShadows( );
	}
	void InstancedGeometry::CastShadows::set( bool castShadows )
	{
		static_cast<Ogre::InstancedGeometry*>(_native)->setCastShadows( castShadows );
	}
	
	bool InstancedGeometry::IsVisible::get()
	{
		return static_cast<const Ogre::InstancedGeometry*>(_native)->isVisible( );
	}
	
	String^ InstancedGeometry::Name::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::InstancedGeometry*>(_native)->getName( ) );
	}
	
	unsigned int InstancedGeometry::ObjectCount::get()
	{
		return static_cast<Ogre::InstancedGeometry*>(_native)->getObjectCount( );
	}
	
	Mogre::Vector3 InstancedGeometry::Origin::get()
	{
		return static_cast<const Ogre::InstancedGeometry*>(_native)->getOrigin( );
	}
	void InstancedGeometry::Origin::set( Mogre::Vector3 origin )
	{
		static_cast<Ogre::InstancedGeometry*>(_native)->setOrigin( origin );
	}
	
	Mogre::Real InstancedGeometry::RenderingDistance::get()
	{
		return static_cast<const Ogre::InstancedGeometry*>(_native)->getRenderingDistance( );
	}
	void InstancedGeometry::RenderingDistance::set( Mogre::Real dist )
	{
		static_cast<Ogre::InstancedGeometry*>(_native)->setRenderingDistance( dist );
	}
	
	Mogre::uint8 InstancedGeometry::RenderQueueGroup::get()
	{
		return static_cast<const Ogre::InstancedGeometry*>(_native)->getRenderQueueGroup( );
	}
	void InstancedGeometry::RenderQueueGroup::set( Mogre::uint8 queueID )
	{
		static_cast<Ogre::InstancedGeometry*>(_native)->setRenderQueueGroup( queueID );
	}
	
	Mogre::Real InstancedGeometry::SquaredRenderingDistance::get()
	{
		return static_cast<const Ogre::InstancedGeometry*>(_native)->getSquaredRenderingDistance( );
	}
	
	void InstancedGeometry::AddEntity( Mogre::Entity^ ent, Mogre::Vector3 position, Mogre::Quaternion orientation, Mogre::Vector3 scale )
	{
		static_cast<Ogre::InstancedGeometry*>(_native)->addEntity( ent, position, orientation, scale );
	}
	void InstancedGeometry::AddEntity( Mogre::Entity^ ent, Mogre::Vector3 position, Mogre::Quaternion orientation )
	{
		static_cast<Ogre::InstancedGeometry*>(_native)->addEntity( ent, position, orientation );
	}
	void InstancedGeometry::AddEntity( Mogre::Entity^ ent, Mogre::Vector3 position )
	{
		static_cast<Ogre::InstancedGeometry*>(_native)->addEntity( ent, position );
	}
	
	void InstancedGeometry::AddSceneNode( Mogre::SceneNode^ node )
	{
		static_cast<Ogre::InstancedGeometry*>(_native)->addSceneNode( node );
	}
	
	void InstancedGeometry::Build( )
	{
		static_cast<Ogre::InstancedGeometry*>(_native)->build( );
	}
	
	void InstancedGeometry::AddBatchInstance( )
	{
		static_cast<Ogre::InstancedGeometry*>(_native)->addBatchInstance( );
	}
	
	void InstancedGeometry::Destroy( )
	{
		static_cast<Ogre::InstancedGeometry*>(_native)->destroy( );
	}
	
	void InstancedGeometry::Reset( )
	{
		static_cast<Ogre::InstancedGeometry*>(_native)->reset( );
	}
	
	void InstancedGeometry::SetVisible( bool visible )
	{
		static_cast<Ogre::InstancedGeometry*>(_native)->setVisible( visible );
	}
	
	Mogre::InstancedGeometry::BatchInstanceIterator^ InstancedGeometry::GetBatchInstanceIterator( )
	{
		return static_cast<Ogre::InstancedGeometry*>(_native)->getBatchInstanceIterator( );
	}
	
	Mogre::InstancedGeometry::RenderOperationVector^ InstancedGeometry::GetRenderOperationVector( )
	{
		return static_cast<Ogre::InstancedGeometry*>(_native)->getRenderOperationVector( );
	}
	
	void InstancedGeometry::Dump( String^ filename )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
	
		static_cast<const Ogre::InstancedGeometry*>(_native)->dump( o_filename );
	}
	
	Mogre::SkeletonPtr^ InstancedGeometry::GetBaseSkeleton( )
	{
		return static_cast<Ogre::InstancedGeometry*>(_native)->getBaseSkeleton( );
	}
	
	
	//Protected Declarations
	
	

}
