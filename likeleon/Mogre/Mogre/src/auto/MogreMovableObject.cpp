/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreMovableObject.h"
#include "MogreAnimable.h"
#include "MogreCamera.h"
#include "MogreCommon.h"
#include "MogreEdgeListBuilder.h"
#include "MogreNode.h"
#include "MogreSceneNode.h"
#include "MogreSceneManager.h"
#include "MogreRenderQueue.h"
#include "MogreLight.h"
#include "MogreHardwareIndexBuffer.h"
#include "MogreStringVector.h"

namespace Mogre
{
	//################################################################
	//MovableObject
	//################################################################
	
	//Nested Types
	//################################################################
	//IListener
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::MovableObject::Listener* MovableObject::Listener::_IListener_GetNativePtr()
	{
		return static_cast<Ogre::MovableObject::Listener*>( static_cast<MovableObject_Listener_Proxy*>(_native) );
	}
	
	
	//Public Declarations
	MovableObject::Listener::Listener( ) : Wrapper( (CLRObject*)0 )
	{
		_createdByCLR = true;
		Type^ thisType = this->GetType();
		_isOverriden = true;  //it's abstract or interface so it must be overriden
		MovableObject_Listener_Proxy* proxy = new MovableObject_Listener_Proxy(this);
		proxy->_overriden = Implementation::SubclassingManager::Instance->GetOverridenMethodsArrayPointer(thisType, Listener::typeid, 6);
		_native = proxy;
	
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	void MovableObject::Listener::ObjectDestroyed( Mogre::MovableObject^ param1 )
	{
		static_cast<MovableObject_Listener_Proxy*>(_native)->Listener::objectDestroyed( param1 );
	}
	
	void MovableObject::Listener::ObjectAttached( Mogre::MovableObject^ param1 )
	{
		static_cast<MovableObject_Listener_Proxy*>(_native)->Listener::objectAttached( param1 );
	}
	
	void MovableObject::Listener::ObjectDetached( Mogre::MovableObject^ param1 )
	{
		static_cast<MovableObject_Listener_Proxy*>(_native)->Listener::objectDetached( param1 );
	}
	
	void MovableObject::Listener::ObjectMoved( Mogre::MovableObject^ param1 )
	{
		static_cast<MovableObject_Listener_Proxy*>(_native)->Listener::objectMoved( param1 );
	}
	
	bool MovableObject::Listener::ObjectRendering( Mogre::MovableObject^ param1, Mogre::Camera^ param2 )
	{
		return static_cast<MovableObject_Listener_Proxy*>(_native)->Listener::objectRendering( param1, param2 );
	}
	
	Mogre::Const_LightList^ MovableObject::Listener::ObjectQueryLights( Mogre::MovableObject^ param1 )
	{
		return static_cast<MovableObject_Listener_Proxy*>(_native)->Listener::objectQueryLights( param1 );
	}
	
	
	//Protected Declarations
	
	
	
	//Private Declarations
	
	//Internal Declarations
	Ogre::AnimableObject* MovableObject::_IAnimableObject_GetNativePtr()
	{
		return static_cast<Ogre::AnimableObject*>( static_cast<Ogre::MovableObject*>(_native) );
	}
	
	
	//Public Declarations
	Mogre::AxisAlignedBox^ MovableObject::BoundingBox::get()
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getBoundingBox( );
	}
	
	Mogre::Real MovableObject::BoundingRadius::get()
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getBoundingRadius( );
	}
	
	bool MovableObject::CastShadows::get()
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getCastShadows( );
	}
	void MovableObject::CastShadows::set( bool enabled )
	{
		static_cast<Ogre::MovableObject*>(_native)->setCastShadows( enabled );
	}
	
	Mogre::uint32 MovableObject::DefaultQueryFlags::get()
	{
		return Ogre::MovableObject::getDefaultQueryFlags( );
	}
	void MovableObject::DefaultQueryFlags::set( Mogre::uint32 flags )
	{
		Ogre::MovableObject::setDefaultQueryFlags( flags );
	}
	
	Mogre::uint32 MovableObject::DefaultVisibilityFlags::get()
	{
		return Ogre::MovableObject::getDefaultVisibilityFlags( );
	}
	void MovableObject::DefaultVisibilityFlags::set( Mogre::uint32 flags )
	{
		Ogre::MovableObject::setDefaultVisibilityFlags( flags );
	}
	
	Mogre::EdgeData^ MovableObject::EdgeList::get()
	{
		return static_cast<Ogre::MovableObject*>(_native)->getEdgeList( );
	}
	
	bool MovableObject::HasEdgeList::get()
	{
		return static_cast<Ogre::MovableObject*>(_native)->hasEdgeList( );
	}
	
	bool MovableObject::IsAttached::get()
	{
		return static_cast<const Ogre::MovableObject*>(_native)->isAttached( );
	}
	
	bool MovableObject::IsInScene::get()
	{
		return static_cast<const Ogre::MovableObject*>(_native)->isInScene( );
	}
	
	Mogre::AxisAlignedBox^ MovableObject::LightCapBounds::get()
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getLightCapBounds( );
	}
	
	String^ MovableObject::MovableType::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::MovableObject*>(_native)->getMovableType( ) );
	}
	
	String^ MovableObject::Name::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::MovableObject*>(_native)->getName( ) );
	}
	
	Mogre::Node^ MovableObject::ParentNode::get()
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getParentNode( );
	}
	
	Mogre::SceneNode^ MovableObject::ParentSceneNode::get()
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getParentSceneNode( );
	}
	
	Mogre::uint32 MovableObject::QueryFlags::get()
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getQueryFlags( );
	}
	void MovableObject::QueryFlags::set( Mogre::uint32 flags )
	{
		static_cast<Ogre::MovableObject*>(_native)->setQueryFlags( flags );
	}
	
	Mogre::Real MovableObject::RenderingDistance::get()
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getRenderingDistance( );
	}
	void MovableObject::RenderingDistance::set( Mogre::Real dist )
	{
		static_cast<Ogre::MovableObject*>(_native)->setRenderingDistance( dist );
	}
	
	Mogre::uint8 MovableObject::RenderQueueGroup::get()
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getRenderQueueGroup( );
	}
	void MovableObject::RenderQueueGroup::set( Mogre::uint8 queueID )
	{
		static_cast<Ogre::MovableObject*>(_native)->setRenderQueueGroup( queueID );
	}
	
	Mogre::uint32 MovableObject::TypeFlags::get()
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getTypeFlags( );
	}
	
	Mogre::uint32 MovableObject::VisibilityFlags::get()
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getVisibilityFlags( );
	}
	void MovableObject::VisibilityFlags::set( Mogre::uint32 flags )
	{
		static_cast<Ogre::MovableObject*>(_native)->setVisibilityFlags( flags );
	}
	
	bool MovableObject::Visible::get()
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getVisible( );
	}
	void MovableObject::Visible::set( bool visible )
	{
		static_cast<Ogre::MovableObject*>(_native)->setVisible( visible );
	}
	
	void MovableObject::_notifyCreator( Mogre::MovableObjectFactory^ fact )
	{
		static_cast<Ogre::MovableObject*>(_native)->_notifyCreator( fact );
	}
	
	Mogre::MovableObjectFactory^ MovableObject::_getCreator( )
	{
		return static_cast<const Ogre::MovableObject*>(_native)->_getCreator( );
	}
	
	void MovableObject::_notifyManager( Mogre::SceneManager^ man )
	{
		static_cast<Ogre::MovableObject*>(_native)->_notifyManager( man );
	}
	
	Mogre::SceneManager^ MovableObject::_getManager( )
	{
		return static_cast<const Ogre::MovableObject*>(_native)->_getManager( );
	}
	
	void MovableObject::_notifyAttached( Mogre::Node^ parent, bool isTagPoint )
	{
		static_cast<Ogre::MovableObject*>(_native)->_notifyAttached( parent, isTagPoint );
	}
	void MovableObject::_notifyAttached( Mogre::Node^ parent )
	{
		static_cast<Ogre::MovableObject*>(_native)->_notifyAttached( parent );
	}
	
	void MovableObject::_notifyMoved( )
	{
		static_cast<Ogre::MovableObject*>(_native)->_notifyMoved( );
	}
	
	void MovableObject::_notifyCurrentCamera( Mogre::Camera^ cam )
	{
		static_cast<Ogre::MovableObject*>(_native)->_notifyCurrentCamera( cam );
	}
	
	Mogre::AxisAlignedBox^ MovableObject::GetWorldBoundingBox( bool derive )
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getWorldBoundingBox( derive );
	}
	Mogre::AxisAlignedBox^ MovableObject::GetWorldBoundingBox( )
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getWorldBoundingBox( );
	}
	
	Mogre::Sphere MovableObject::GetWorldBoundingSphere( bool derive )
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getWorldBoundingSphere( derive );
	}
	Mogre::Sphere MovableObject::GetWorldBoundingSphere( )
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getWorldBoundingSphere( );
	}
	
	void MovableObject::_updateRenderQueue( Mogre::RenderQueue^ queue )
	{
		static_cast<Ogre::MovableObject*>(_native)->_updateRenderQueue( queue );
	}
	
	bool MovableObject::IsVisible( )
	{
		return static_cast<const Ogre::MovableObject*>(_native)->isVisible( );
	}
	
	Mogre::Matrix4^ MovableObject::_getParentNodeFullTransform( )
	{
		return static_cast<const Ogre::MovableObject*>(_native)->_getParentNodeFullTransform( );
	}
	
	void MovableObject::AddQueryFlags( Mogre::uint32 flags )
	{
		static_cast<Ogre::MovableObject*>(_native)->addQueryFlags( flags );
	}
	
	void MovableObject::RemoveQueryFlags( unsigned long flags )
	{
		static_cast<Ogre::MovableObject*>(_native)->removeQueryFlags( flags );
	}
	
	void MovableObject::AddVisibilityFlags( Mogre::uint32 flags )
	{
		static_cast<Ogre::MovableObject*>(_native)->addVisibilityFlags( flags );
	}
	
	void MovableObject::RemoveVisibilityFlags( Mogre::uint32 flags )
	{
		static_cast<Ogre::MovableObject*>(_native)->removeVisibilityFlags( flags );
	}
	
	void MovableObject::SetListener( Mogre::MovableObject::IListener^ listener )
	{
		static_cast<Ogre::MovableObject*>(_native)->setListener( listener );
	}
	
	Mogre::MovableObject::IListener^ MovableObject::GetListener( )
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getListener( );
	}
	
	Mogre::Const_LightList^ MovableObject::QueryLights( )
	{
		return static_cast<const Ogre::MovableObject*>(_native)->queryLights( );
	}
	
	Mogre::ShadowCaster::ShadowRenderableListIterator^ MovableObject::GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDist, unsigned long flags )
	{
		return static_cast<Ogre::MovableObject*>(_native)->getShadowVolumeRenderableIterator( (Ogre::ShadowTechnique)shadowTechnique, light, (Ogre::HardwareIndexBufferSharedPtr*)indexBuffer, extrudeVertices, extrusionDist, flags );
	}
	Mogre::ShadowCaster::ShadowRenderableListIterator^ MovableObject::GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDist )
	{
		return static_cast<Ogre::MovableObject*>(_native)->getShadowVolumeRenderableIterator( (Ogre::ShadowTechnique)shadowTechnique, light, (Ogre::HardwareIndexBufferSharedPtr*)indexBuffer, extrudeVertices, extrusionDist );
	}
	
	Mogre::AxisAlignedBox^ MovableObject::GetDarkCapBounds( Mogre::Light^ light, Mogre::Real dirLightExtrusionDist )
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getDarkCapBounds( light, dirLightExtrusionDist );
	}
	
	Mogre::Real MovableObject::GetPointExtrusionDistance( Mogre::Light^ l )
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getPointExtrusionDistance( l );
	}
	
	//------------------------------------------------------------
	// Implementation for IAnimableObject
	//------------------------------------------------------------
	
	Mogre::Const_StringVector^ MovableObject::GetAnimableValueNames( )
	{
		return static_cast<const Ogre::MovableObject*>(_native)->getAnimableValueNames( );
	}
	
	Mogre::AnimableValuePtr^ MovableObject::CreateAnimableValue( String^ valueName )
	{
		DECLARE_NATIVE_STRING( o_valueName, valueName )
	
		return static_cast<Ogre::MovableObject*>(_native)->createAnimableValue( o_valueName );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//MovableObjectFactory
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	String^ MovableObjectFactory::Type::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::MovableObjectFactory*>(_native)->getType( ) );
	}
	
	unsigned long MovableObjectFactory::TypeFlags::get()
	{
		return static_cast<const Ogre::MovableObjectFactory*>(_native)->getTypeFlags( );
	}
	
	Mogre::MovableObject^ MovableObjectFactory::CreateInstance( String^ name, Mogre::SceneManager^ manager, Mogre::Const_NameValuePairList^ params )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::MovableObjectFactory*>(_native)->createInstance( o_name, manager, params );
	}
	Mogre::MovableObject^ MovableObjectFactory::CreateInstance( String^ name, Mogre::SceneManager^ manager )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::MovableObjectFactory*>(_native)->createInstance( o_name, manager );
	}
	
	void MovableObjectFactory::DestroyInstance( Mogre::MovableObject^ obj )
	{
		static_cast<Ogre::MovableObjectFactory*>(_native)->destroyInstance( obj );
	}
	
	bool MovableObjectFactory::RequestTypeFlags( )
	{
		return static_cast<const Ogre::MovableObjectFactory*>(_native)->requestTypeFlags( );
	}
	
	void MovableObjectFactory::_notifyTypeFlags( unsigned long flag )
	{
		static_cast<Ogre::MovableObjectFactory*>(_native)->_notifyTypeFlags( flag );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//MovableObject_Listener_Proxy
	//################################################################
	
	
	
	void MovableObject_Listener_Proxy::objectDestroyed( Ogre::MovableObject* param1 )
	{
		if (_overriden[ 0 ])
		{
			_managed->ObjectDestroyed( param1 );
		}
		else
			Listener::objectDestroyed( param1 );
	}
	
	void MovableObject_Listener_Proxy::objectAttached( Ogre::MovableObject* param1 )
	{
		if (_overriden[ 1 ])
		{
			_managed->ObjectAttached( param1 );
		}
		else
			Listener::objectAttached( param1 );
	}
	
	void MovableObject_Listener_Proxy::objectDetached( Ogre::MovableObject* param1 )
	{
		if (_overriden[ 2 ])
		{
			_managed->ObjectDetached( param1 );
		}
		else
			Listener::objectDetached( param1 );
	}
	
	void MovableObject_Listener_Proxy::objectMoved( Ogre::MovableObject* param1 )
	{
		if (_overriden[ 3 ])
		{
			_managed->ObjectMoved( param1 );
		}
		else
			Listener::objectMoved( param1 );
	}
	
	bool MovableObject_Listener_Proxy::objectRendering( const Ogre::MovableObject* param1, const Ogre::Camera* param2 )
	{
		if (_overriden[ 4 ])
		{
			bool mp_return = _managed->ObjectRendering( param1, param2 );
			return mp_return;
		}
		else
			return Listener::objectRendering( param1, param2 );
	}
	
	const Ogre::LightList* MovableObject_Listener_Proxy::objectQueryLights( const Ogre::MovableObject* param1 )
	{
		if (_overriden[ 5 ])
		{
			Mogre::Const_LightList^ mp_return = _managed->ObjectQueryLights( param1 );
			return mp_return;
		}
		else
			return Listener::objectQueryLights( param1 );
	}

}
