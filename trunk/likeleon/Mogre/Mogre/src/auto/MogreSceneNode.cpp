/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreSceneNode.h"
#include "MogreMovableObject.h"
#include "MogreSceneManager.h"
#include "MogreCamera.h"
#include "MogreRenderQueue.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//SceneNode
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::MovableObject^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::MovableObject*
	CPP_DECLARE_STLHASHMAP( SceneNode::, ObjectMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	CPP_DECLARE_MAP_ITERATOR( SceneNode::, ObjectIterator, Ogre::SceneNode::ObjectIterator, Mogre::SceneNode::ObjectMap, Mogre::MovableObject^, Ogre::MovableObject*, String^, Ogre::String,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	SceneNode::SceneNode( Mogre::SceneManager^ creator ) : Node((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::SceneNode( creator);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	SceneNode::SceneNode( Mogre::SceneManager^ creator, String^ name ) : Node((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::SceneNode( creator, o_name);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::Vector3 SceneNode::AutoTrackLocalDirection::get()
	{
		return static_cast<Ogre::SceneNode*>(_native)->getAutoTrackLocalDirection( );
	}
	
	Mogre::Vector3 SceneNode::AutoTrackOffset::get()
	{
		return static_cast<Ogre::SceneNode*>(_native)->getAutoTrackOffset( );
	}
	
	Mogre::SceneNode^ SceneNode::AutoTrackTarget::get()
	{
		return static_cast<Ogre::SceneNode*>(_native)->getAutoTrackTarget( );
	}
	
	Mogre::SceneManager^ SceneNode::Creator::get()
	{
		return static_cast<const Ogre::SceneNode*>(_native)->getCreator( );
	}
	
	bool SceneNode::IsInSceneGraph::get()
	{
		return static_cast<const Ogre::SceneNode*>(_native)->isInSceneGraph( );
	}
	
	Mogre::SceneNode^ SceneNode::ParentSceneNode::get()
	{
		return static_cast<const Ogre::SceneNode*>(_native)->getParentSceneNode( );
	}
	
	bool SceneNode::ShowBoundingBox::get()
	{
		return static_cast<const Ogre::SceneNode*>(_native)->getShowBoundingBox( );
	}
	void SceneNode::ShowBoundingBox::set( bool bShow )
	{
		static_cast<Ogre::SceneNode*>(_native)->showBoundingBox( bShow );
	}
	
	void SceneNode::AttachObject( Mogre::MovableObject^ obj )
	{
		static_cast<Ogre::SceneNode*>(_native)->attachObject( obj );
	}
	
	unsigned short SceneNode::NumAttachedObjects( )
	{
		return static_cast<const Ogre::SceneNode*>(_native)->numAttachedObjects( );
	}
	
	Mogre::MovableObject^ SceneNode::GetAttachedObject( unsigned short index )
	{
		return static_cast<Ogre::SceneNode*>(_native)->getAttachedObject( index );
	}
	
	Mogre::MovableObject^ SceneNode::GetAttachedObject( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::SceneNode*>(_native)->getAttachedObject( o_name );
	}
	
	Mogre::MovableObject^ SceneNode::DetachObject( unsigned short index )
	{
		return static_cast<Ogre::SceneNode*>(_native)->detachObject( index );
	}
	
	void SceneNode::DetachObject( Mogre::MovableObject^ obj )
	{
		static_cast<Ogre::SceneNode*>(_native)->detachObject( obj );
	}
	
	Mogre::MovableObject^ SceneNode::DetachObject( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::SceneNode*>(_native)->detachObject( o_name );
	}
	
	void SceneNode::DetachAllObjects( )
	{
		static_cast<Ogre::SceneNode*>(_native)->detachAllObjects( );
	}
	
	void SceneNode::_notifyRootNode( )
	{
		static_cast<Ogre::SceneNode*>(_native)->_notifyRootNode( );
	}
	
	void SceneNode::_update( bool updateChildren, bool parentHasChanged )
	{
		static_cast<Ogre::SceneNode*>(_native)->_update( updateChildren, parentHasChanged );
	}
	
	void SceneNode::_updateBounds( )
	{
		static_cast<Ogre::SceneNode*>(_native)->_updateBounds( );
	}
	
	void SceneNode::_findVisibleObjects( Mogre::Camera^ cam, Mogre::RenderQueue^ queue, Mogre::VisibleObjectsBoundsInfo_NativePtr visibleBounds, bool includeChildren, bool displayNodes, bool onlyShadowCasters )
	{
		static_cast<Ogre::SceneNode*>(_native)->_findVisibleObjects( cam, queue, visibleBounds, includeChildren, displayNodes, onlyShadowCasters );
	}
	void SceneNode::_findVisibleObjects( Mogre::Camera^ cam, Mogre::RenderQueue^ queue, Mogre::VisibleObjectsBoundsInfo_NativePtr visibleBounds, bool includeChildren, bool displayNodes )
	{
		static_cast<Ogre::SceneNode*>(_native)->_findVisibleObjects( cam, queue, visibleBounds, includeChildren, displayNodes );
	}
	void SceneNode::_findVisibleObjects( Mogre::Camera^ cam, Mogre::RenderQueue^ queue, Mogre::VisibleObjectsBoundsInfo_NativePtr visibleBounds, bool includeChildren )
	{
		static_cast<Ogre::SceneNode*>(_native)->_findVisibleObjects( cam, queue, visibleBounds, includeChildren );
	}
	void SceneNode::_findVisibleObjects( Mogre::Camera^ cam, Mogre::RenderQueue^ queue, Mogre::VisibleObjectsBoundsInfo_NativePtr visibleBounds )
	{
		static_cast<Ogre::SceneNode*>(_native)->_findVisibleObjects( cam, queue, visibleBounds );
	}
	
	Mogre::AxisAlignedBox^ SceneNode::_getWorldAABB( )
	{
		return static_cast<const Ogre::SceneNode*>(_native)->_getWorldAABB( );
	}
	
	Mogre::SceneNode::ObjectIterator^ SceneNode::GetAttachedObjectIterator( )
	{
		return static_cast<Ogre::SceneNode*>(_native)->getAttachedObjectIterator( );
	}
	
	void SceneNode::RemoveAndDestroyChild( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::SceneNode*>(_native)->removeAndDestroyChild( o_name );
	}
	
	void SceneNode::RemoveAndDestroyChild( unsigned short index )
	{
		static_cast<Ogre::SceneNode*>(_native)->removeAndDestroyChild( index );
	}
	
	void SceneNode::RemoveAndDestroyAllChildren( )
	{
		static_cast<Ogre::SceneNode*>(_native)->removeAndDestroyAllChildren( );
	}
	
	void SceneNode::_addBoundingBoxToQueue( Mogre::RenderQueue^ queue )
	{
		static_cast<Ogre::SceneNode*>(_native)->_addBoundingBoxToQueue( queue );
	}
	
	Mogre::SceneNode^ SceneNode::CreateChildSceneNode( Mogre::Vector3 translate, Mogre::Quaternion rotate )
	{
		return static_cast<Ogre::SceneNode*>(_native)->createChildSceneNode( translate, rotate );
	}
	Mogre::SceneNode^ SceneNode::CreateChildSceneNode( Mogre::Vector3 translate )
	{
		return static_cast<Ogre::SceneNode*>(_native)->createChildSceneNode( translate );
	}
	Mogre::SceneNode^ SceneNode::CreateChildSceneNode( )
	{
		return static_cast<Ogre::SceneNode*>(_native)->createChildSceneNode( );
	}
	
	Mogre::SceneNode^ SceneNode::CreateChildSceneNode( String^ name, Mogre::Vector3 translate, Mogre::Quaternion rotate )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::SceneNode*>(_native)->createChildSceneNode( o_name, translate, rotate );
	}
	Mogre::SceneNode^ SceneNode::CreateChildSceneNode( String^ name, Mogre::Vector3 translate )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::SceneNode*>(_native)->createChildSceneNode( o_name, translate );
	}
	Mogre::SceneNode^ SceneNode::CreateChildSceneNode( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::SceneNode*>(_native)->createChildSceneNode( o_name );
	}
	
	void SceneNode::FindLights( Mogre::LightList^ destList, Mogre::Real radius )
	{
		static_cast<const Ogre::SceneNode*>(_native)->findLights( destList, radius );
	}
	
	void SceneNode::SetFixedYawAxis( bool useFixed, Mogre::Vector3 fixedAxis )
	{
		static_cast<Ogre::SceneNode*>(_native)->setFixedYawAxis( useFixed, fixedAxis );
	}
	void SceneNode::SetFixedYawAxis( bool useFixed )
	{
		static_cast<Ogre::SceneNode*>(_native)->setFixedYawAxis( useFixed );
	}
	
	void SceneNode::Yaw( Mogre::Radian angle, Mogre::Node::TransformSpace relativeTo )
	{
		static_cast<Ogre::SceneNode*>(_native)->yaw( angle, (Ogre::Node::TransformSpace)relativeTo );
	}
	void SceneNode::Yaw( Mogre::Radian angle )
	{
		static_cast<Ogre::SceneNode*>(_native)->yaw( angle );
	}
	
	void SceneNode::SetDirection( Mogre::Real x, Mogre::Real y, Mogre::Real z, Mogre::Node::TransformSpace relativeTo, Mogre::Vector3 localDirectionVector )
	{
		static_cast<Ogre::SceneNode*>(_native)->setDirection( x, y, z, (Ogre::Node::TransformSpace)relativeTo, localDirectionVector );
	}
	void SceneNode::SetDirection( Mogre::Real x, Mogre::Real y, Mogre::Real z, Mogre::Node::TransformSpace relativeTo )
	{
		static_cast<Ogre::SceneNode*>(_native)->setDirection( x, y, z, (Ogre::Node::TransformSpace)relativeTo );
	}
	void SceneNode::SetDirection( Mogre::Real x, Mogre::Real y, Mogre::Real z )
	{
		static_cast<Ogre::SceneNode*>(_native)->setDirection( x, y, z );
	}
	
	void SceneNode::SetDirection( Mogre::Vector3 vec, Mogre::Node::TransformSpace relativeTo, Mogre::Vector3 localDirectionVector )
	{
		static_cast<Ogre::SceneNode*>(_native)->setDirection( vec, (Ogre::Node::TransformSpace)relativeTo, localDirectionVector );
	}
	void SceneNode::SetDirection( Mogre::Vector3 vec, Mogre::Node::TransformSpace relativeTo )
	{
		static_cast<Ogre::SceneNode*>(_native)->setDirection( vec, (Ogre::Node::TransformSpace)relativeTo );
	}
	void SceneNode::SetDirection( Mogre::Vector3 vec )
	{
		static_cast<Ogre::SceneNode*>(_native)->setDirection( vec );
	}
	
	void SceneNode::LookAt( Mogre::Vector3 targetPoint, Mogre::Node::TransformSpace relativeTo, Mogre::Vector3 localDirectionVector )
	{
		static_cast<Ogre::SceneNode*>(_native)->lookAt( targetPoint, (Ogre::Node::TransformSpace)relativeTo, localDirectionVector );
	}
	void SceneNode::LookAt( Mogre::Vector3 targetPoint, Mogre::Node::TransformSpace relativeTo )
	{
		static_cast<Ogre::SceneNode*>(_native)->lookAt( targetPoint, (Ogre::Node::TransformSpace)relativeTo );
	}
	
	void SceneNode::SetAutoTracking( bool enabled, Mogre::SceneNode^ target, Mogre::Vector3 localDirectionVector, Mogre::Vector3 offset )
	{
		static_cast<Ogre::SceneNode*>(_native)->setAutoTracking( enabled, target, localDirectionVector, offset );
	}
	void SceneNode::SetAutoTracking( bool enabled, Mogre::SceneNode^ target, Mogre::Vector3 localDirectionVector )
	{
		static_cast<Ogre::SceneNode*>(_native)->setAutoTracking( enabled, target, localDirectionVector );
	}
	void SceneNode::SetAutoTracking( bool enabled, Mogre::SceneNode^ target )
	{
		static_cast<Ogre::SceneNode*>(_native)->setAutoTracking( enabled, target );
	}
	void SceneNode::SetAutoTracking( bool enabled )
	{
		static_cast<Ogre::SceneNode*>(_native)->setAutoTracking( enabled );
	}
	
	void SceneNode::_autoTrack( )
	{
		static_cast<Ogre::SceneNode*>(_native)->_autoTrack( );
	}
	
	void SceneNode::SetVisible( bool visible, bool cascade )
	{
		static_cast<Ogre::SceneNode*>(_native)->setVisible( visible, cascade );
	}
	void SceneNode::SetVisible( bool visible )
	{
		static_cast<Ogre::SceneNode*>(_native)->setVisible( visible );
	}
	
	void SceneNode::FlipVisibility( bool cascade )
	{
		static_cast<Ogre::SceneNode*>(_native)->flipVisibility( cascade );
	}
	void SceneNode::FlipVisibility( )
	{
		static_cast<Ogre::SceneNode*>(_native)->flipVisibility( );
	}
	
	
	//Protected Declarations
	
	

}
