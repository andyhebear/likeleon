/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreResourceBackgroundQueue.h"
#include "MogreResource.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//ResourceBackgroundQueue
	//################################################################
	
	//Nested Types
	//################################################################
	//IListener
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::ResourceBackgroundQueue::Listener* ResourceBackgroundQueue::Listener::_IListener_GetNativePtr()
	{
		return static_cast<Ogre::ResourceBackgroundQueue::Listener*>( static_cast<ResourceBackgroundQueue_Listener_Proxy*>(_native) );
	}
	
	
	//Public Declarations
	ResourceBackgroundQueue::Listener::Listener() : Wrapper( (CLRObject*)0 )
	{
		_createdByCLR = true;
		Type^ thisType = this->GetType();
		_isOverriden = true;  //it's abstract or interface so it must be overriden
		ResourceBackgroundQueue_Listener_Proxy* proxy = new ResourceBackgroundQueue_Listener_Proxy(this);
		proxy->_overriden = Implementation::SubclassingManager::Instance->GetOverridenMethodsArrayPointer(thisType, Listener::typeid, 1);
		_native = proxy;
	
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	
	void ResourceBackgroundQueue::Listener::OperationCompletedInThread( Mogre::BackgroundProcessTicket ticket )
	{
		static_cast<ResourceBackgroundQueue_Listener_Proxy*>(_native)->Listener::operationCompletedInThread( ticket );
	}
	
	
	//Protected Declarations
	
	
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	ResourceBackgroundQueue::ResourceBackgroundQueue( )
	{
		_createdByCLR = true;
		_native = new Ogre::ResourceBackgroundQueue();
	}
	
	bool ResourceBackgroundQueue::StartBackgroundThread::get()
	{
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->getStartBackgroundThread( );
	}
	void ResourceBackgroundQueue::StartBackgroundThread::set( bool startThread )
	{
		static_cast<Ogre::ResourceBackgroundQueue*>(_native)->setStartBackgroundThread( startThread );
	}
	
	void ResourceBackgroundQueue::Initialise( )
	{
		static_cast<Ogre::ResourceBackgroundQueue*>(_native)->initialise( );
	}
	
	void ResourceBackgroundQueue::Shutdown( )
	{
		static_cast<Ogre::ResourceBackgroundQueue*>(_native)->shutdown( );
	}
	
	Mogre::BackgroundProcessTicket ResourceBackgroundQueue::InitialiseResourceGroup( String^ name, Mogre::ResourceBackgroundQueue::IListener^ listener )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->initialiseResourceGroup( o_name, listener );
	}
	Mogre::BackgroundProcessTicket ResourceBackgroundQueue::InitialiseResourceGroup( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->initialiseResourceGroup( o_name );
	}
	
	Mogre::BackgroundProcessTicket ResourceBackgroundQueue::InitialiseAllResourceGroups( Mogre::ResourceBackgroundQueue::IListener^ listener )
	{
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->initialiseAllResourceGroups( listener );
	}
	Mogre::BackgroundProcessTicket ResourceBackgroundQueue::InitialiseAllResourceGroups( )
	{
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->initialiseAllResourceGroups( );
	}
	
	Mogre::BackgroundProcessTicket ResourceBackgroundQueue::LoadResourceGroup( String^ name, Mogre::ResourceBackgroundQueue::IListener^ listener )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->loadResourceGroup( o_name, listener );
	}
	Mogre::BackgroundProcessTicket ResourceBackgroundQueue::LoadResourceGroup( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->loadResourceGroup( o_name );
	}
	
	Mogre::BackgroundProcessTicket ResourceBackgroundQueue::Unload( String^ resType, String^ name, Mogre::ResourceBackgroundQueue::IListener^ listener )
	{
		DECLARE_NATIVE_STRING( o_resType, resType )
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->unload( o_resType, o_name, listener );
	}
	Mogre::BackgroundProcessTicket ResourceBackgroundQueue::Unload( String^ resType, String^ name )
	{
		DECLARE_NATIVE_STRING( o_resType, resType )
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->unload( o_resType, o_name );
	}
	
	Mogre::BackgroundProcessTicket ResourceBackgroundQueue::Unload( String^ resType, Mogre::ResourceHandle handle, Mogre::ResourceBackgroundQueue::IListener^ listener )
	{
		DECLARE_NATIVE_STRING( o_resType, resType )
	
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->unload( o_resType, handle, listener );
	}
	Mogre::BackgroundProcessTicket ResourceBackgroundQueue::Unload( String^ resType, Mogre::ResourceHandle handle )
	{
		DECLARE_NATIVE_STRING( o_resType, resType )
	
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->unload( o_resType, handle );
	}
	
	Mogre::BackgroundProcessTicket ResourceBackgroundQueue::UnloadResourceGroup( String^ name, Mogre::ResourceBackgroundQueue::IListener^ listener )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->unloadResourceGroup( o_name, listener );
	}
	Mogre::BackgroundProcessTicket ResourceBackgroundQueue::UnloadResourceGroup( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->unloadResourceGroup( o_name );
	}
	
	Mogre::BackgroundProcessTicket ResourceBackgroundQueue::Load( String^ resType, String^ name, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader, Mogre::Const_NameValuePairList^ loadParams, Mogre::ResourceBackgroundQueue::IListener^ listener )
	{
		DECLARE_NATIVE_STRING( o_resType, resType )
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->load( o_resType, o_name, o_group, isManual, loader, loadParams, listener );
	}
	Mogre::BackgroundProcessTicket ResourceBackgroundQueue::Load( String^ resType, String^ name, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader, Mogre::Const_NameValuePairList^ loadParams )
	{
		DECLARE_NATIVE_STRING( o_resType, resType )
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->load( o_resType, o_name, o_group, isManual, loader, loadParams );
	}
	Mogre::BackgroundProcessTicket ResourceBackgroundQueue::Load( String^ resType, String^ name, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader )
	{
		DECLARE_NATIVE_STRING( o_resType, resType )
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->load( o_resType, o_name, o_group, isManual, loader );
	}
	Mogre::BackgroundProcessTicket ResourceBackgroundQueue::Load( String^ resType, String^ name, String^ group, bool isManual )
	{
		DECLARE_NATIVE_STRING( o_resType, resType )
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->load( o_resType, o_name, o_group, isManual );
	}
	Mogre::BackgroundProcessTicket ResourceBackgroundQueue::Load( String^ resType, String^ name, String^ group )
	{
		DECLARE_NATIVE_STRING( o_resType, resType )
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->load( o_resType, o_name, o_group );
	}
	
	bool ResourceBackgroundQueue::IsProcessComplete( Mogre::BackgroundProcessTicket ticket )
	{
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->isProcessComplete( ticket );
	}
	
	bool ResourceBackgroundQueue::_doNextQueuedBackgroundProcess( )
	{
		return static_cast<Ogre::ResourceBackgroundQueue*>(_native)->_doNextQueuedBackgroundProcess( );
	}
	
	void ResourceBackgroundQueue::_initThread( )
	{
		static_cast<Ogre::ResourceBackgroundQueue*>(_native)->_initThread( );
	}
	
	void ResourceBackgroundQueue::_fireBackgroundLoadingComplete( )
	{
		static_cast<Ogre::ResourceBackgroundQueue*>(_native)->_fireBackgroundLoadingComplete( );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//ResourceBackgroundQueue_Listener_Proxy
	//################################################################
	
	
	
	void ResourceBackgroundQueue_Listener_Proxy::operationCompleted( Ogre::BackgroundProcessTicket ticket )
	{
		_managed->OperationCompleted( ticket );
	}
	
	void ResourceBackgroundQueue_Listener_Proxy::operationCompletedInThread( Ogre::BackgroundProcessTicket ticket )
	{
		if (_overriden[ 0 ])
		{
			_managed->OperationCompletedInThread( ticket );
		}
		else
			Listener::operationCompletedInThread( ticket );
	}

}
