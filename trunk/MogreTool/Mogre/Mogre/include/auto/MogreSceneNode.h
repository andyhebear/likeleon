/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreSceneNode.h"
#include "MogreNode.h"
#include "MogrePrerequisites.h"
#include "MogreSceneManager.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//SceneNode
	//################################################################
	
	public ref class SceneNode : public Node
	{
		//Nested Types
		public: ref class ObjectMap;
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::MovableObject^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::MovableObject*
		public: INC_DECLARE_STLHASHMAP( ObjectMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		public: INC_DECLARE_MAP_ITERATOR( ObjectIterator, Ogre::SceneNode::ObjectIterator, Mogre::SceneNode::ObjectMap, Mogre::MovableObject^, Ogre::MovableObject*, String^, Ogre::String )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		SceneNode( CLRObject* obj ) : Node(obj)
		{
		}
	
	
		//Public Declarations
	public:
		SceneNode( Mogre::SceneManager^ creator );
		SceneNode( Mogre::SceneManager^ creator, String^ name );
	
	
		property Mogre::Vector3 AutoTrackLocalDirection
		{
		public:
			Mogre::Vector3 get();
		}
	
		property Mogre::Vector3 AutoTrackOffset
		{
		public:
			Mogre::Vector3 get();
		}
	
		property Mogre::SceneNode^ AutoTrackTarget
		{
		public:
			Mogre::SceneNode^ get();
		}
	
		property Mogre::SceneManager^ Creator
		{
		public:
			Mogre::SceneManager^ get();
		}
	
		property bool IsInSceneGraph
		{
		public:
			bool get();
		}
	
		property Mogre::SceneNode^ ParentSceneNode
		{
		public:
			Mogre::SceneNode^ get();
		}
	
		property bool ShowBoundingBox
		{
		public:
			bool get();
		public:
			void set(bool bShow);
		}
	
		void AttachObject( Mogre::MovableObject^ obj );
	
		unsigned short NumAttachedObjects( );
	
		Mogre::MovableObject^ GetAttachedObject( unsigned short index );
	
		Mogre::MovableObject^ GetAttachedObject( String^ name );
	
		Mogre::MovableObject^ DetachObject( unsigned short index );
	
		void DetachObject( Mogre::MovableObject^ obj );
	
		Mogre::MovableObject^ DetachObject( String^ name );
	
		void DetachAllObjects( );
	
		void _notifyRootNode( );
	
		void _update( bool updateChildren, bool parentHasChanged );
	
		void _updateBounds( );
	
		void _findVisibleObjects( Mogre::Camera^ cam, Mogre::RenderQueue^ queue, Mogre::VisibleObjectsBoundsInfo_NativePtr visibleBounds, bool includeChildren, bool displayNodes, bool onlyShadowCasters );
		void _findVisibleObjects( Mogre::Camera^ cam, Mogre::RenderQueue^ queue, Mogre::VisibleObjectsBoundsInfo_NativePtr visibleBounds, bool includeChildren, bool displayNodes );
		void _findVisibleObjects( Mogre::Camera^ cam, Mogre::RenderQueue^ queue, Mogre::VisibleObjectsBoundsInfo_NativePtr visibleBounds, bool includeChildren );
		void _findVisibleObjects( Mogre::Camera^ cam, Mogre::RenderQueue^ queue, Mogre::VisibleObjectsBoundsInfo_NativePtr visibleBounds );
	
		Mogre::AxisAlignedBox^ _getWorldAABB( );
	
		Mogre::SceneNode::ObjectIterator^ GetAttachedObjectIterator( );
	
		void RemoveAndDestroyChild( String^ name );
	
		void RemoveAndDestroyChild( unsigned short index );
	
		void RemoveAndDestroyAllChildren( );
	
		void _addBoundingBoxToQueue( Mogre::RenderQueue^ queue );
	
		Mogre::SceneNode^ CreateChildSceneNode( Mogre::Vector3 translate, Mogre::Quaternion rotate );
		Mogre::SceneNode^ CreateChildSceneNode( Mogre::Vector3 translate );
		Mogre::SceneNode^ CreateChildSceneNode( );
	
		Mogre::SceneNode^ CreateChildSceneNode( String^ name, Mogre::Vector3 translate, Mogre::Quaternion rotate );
		Mogre::SceneNode^ CreateChildSceneNode( String^ name, Mogre::Vector3 translate );
		Mogre::SceneNode^ CreateChildSceneNode( String^ name );
	
		void FindLights( Mogre::LightList^ destList, Mogre::Real radius );
	
		void SetFixedYawAxis( bool useFixed, Mogre::Vector3 fixedAxis );
		void SetFixedYawAxis( bool useFixed );
	
		void Yaw( Mogre::Radian angle, Mogre::Node::TransformSpace relativeTo );
		void Yaw( Mogre::Radian angle );
	
		void SetDirection( Mogre::Real x, Mogre::Real y, Mogre::Real z, Mogre::Node::TransformSpace relativeTo, Mogre::Vector3 localDirectionVector );
		void SetDirection( Mogre::Real x, Mogre::Real y, Mogre::Real z, Mogre::Node::TransformSpace relativeTo );
		void SetDirection( Mogre::Real x, Mogre::Real y, Mogre::Real z );
	
		void SetDirection( Mogre::Vector3 vec, Mogre::Node::TransformSpace relativeTo, Mogre::Vector3 localDirectionVector );
		void SetDirection( Mogre::Vector3 vec, Mogre::Node::TransformSpace relativeTo );
		void SetDirection( Mogre::Vector3 vec );
	
		void LookAt( Mogre::Vector3 targetPoint, Mogre::Node::TransformSpace relativeTo, Mogre::Vector3 localDirectionVector );
		void LookAt( Mogre::Vector3 targetPoint, Mogre::Node::TransformSpace relativeTo );
	
		void SetAutoTracking( bool enabled, Mogre::SceneNode^ target, Mogre::Vector3 localDirectionVector, Mogre::Vector3 offset );
		void SetAutoTracking( bool enabled, Mogre::SceneNode^ target, Mogre::Vector3 localDirectionVector );
		void SetAutoTracking( bool enabled, Mogre::SceneNode^ target );
		void SetAutoTracking( bool enabled );
	
		void _autoTrack( );
	
		void SetVisible( bool visible, bool cascade );
		void SetVisible( bool visible );
	
		void FlipVisibility( bool cascade );
		void FlipVisibility( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( SceneNode )
	
		//Protected Declarations
	protected public:
	
	};
	

}
