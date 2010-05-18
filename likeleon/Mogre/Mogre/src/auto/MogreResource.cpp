/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreResource.h"
#include "MogreStringInterface.h"
#include "MogreResourceManager.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//Listener
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	void Resource_Listener_Director::backgroundLoadingComplete( Ogre::Resource* param1 )
	{
		if (doCallForBackgroundLoadingComplete)
		{
			_receiver->BackgroundLoadingComplete( param1 );
		}
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//Resource
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::StringInterface* Resource::_IStringInterface_GetNativePtr()
	{
		return static_cast<Ogre::StringInterface*>( static_cast<Ogre::Resource*>(_native) );
	}
	
	
	//Public Declarations
	Mogre::ResourceManager^ Resource::Creator::get()
	{
		return static_cast<Ogre::Resource*>(_native)->getCreator( );
	}
	
	String^ Resource::Group::get()
	{
		return TO_CLR_STRING( static_cast<Ogre::Resource*>(_native)->getGroup( ) );
	}
	
	Mogre::ResourceHandle Resource::Handle::get()
	{
		return static_cast<const Ogre::Resource*>(_native)->getHandle( );
	}
	
	bool Resource::IsBackgroundLoaded::get()
	{
		return static_cast<const Ogre::Resource*>(_native)->isBackgroundLoaded( );
	}
	
	bool Resource::IsLoaded::get()
	{
		return static_cast<const Ogre::Resource*>(_native)->isLoaded( );
	}
	
	bool Resource::IsManuallyLoaded::get()
	{
		return static_cast<const Ogre::Resource*>(_native)->isManuallyLoaded( );
	}
	
	bool Resource::IsReloadable::get()
	{
		return static_cast<const Ogre::Resource*>(_native)->isReloadable( );
	}
	
	String^ Resource::Name::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Resource*>(_native)->getName( ) );
	}
	
	String^ Resource::Origin::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Resource*>(_native)->getOrigin( ) );
	}
	
	size_t Resource::Size::get()
	{
		return static_cast<const Ogre::Resource*>(_native)->getSize( );
	}
	
	void Resource::Load( bool backgroundThread )
	{
		static_cast<Ogre::Resource*>(_native)->load( backgroundThread );
	}
	void Resource::Load( )
	{
		static_cast<Ogre::Resource*>(_native)->load( );
	}
	
	void Resource::Reload( )
	{
		static_cast<Ogre::Resource*>(_native)->reload( );
	}
	
	void Resource::Unload( )
	{
		static_cast<Ogre::Resource*>(_native)->unload( );
	}
	
	void Resource::Touch( )
	{
		static_cast<Ogre::Resource*>(_native)->touch( );
	}
	
	Mogre::Resource::LoadingState Resource::IsLoading( )
	{
		return (Mogre::Resource::LoadingState)static_cast<const Ogre::Resource*>(_native)->isLoading( );
	}
	
	Mogre::Resource::LoadingState Resource::GetLoadingState( )
	{
		return (Mogre::Resource::LoadingState)static_cast<const Ogre::Resource*>(_native)->getLoadingState( );
	}
	
	void Resource::SetBackgroundLoaded( bool bl )
	{
		static_cast<Ogre::Resource*>(_native)->setBackgroundLoaded( bl );
	}
	
	void Resource::EscalateLoading( )
	{
		static_cast<Ogre::Resource*>(_native)->escalateLoading( );
	}
	
	void Resource::ChangeGroupOwnership( String^ newGroup )
	{
		DECLARE_NATIVE_STRING( o_newGroup, newGroup )
	
		static_cast<Ogre::Resource*>(_native)->changeGroupOwnership( o_newGroup );
	}
	
	void Resource::_notifyOrigin( String^ origin )
	{
		DECLARE_NATIVE_STRING( o_origin, origin )
	
		static_cast<Ogre::Resource*>(_native)->_notifyOrigin( o_origin );
	}
	
	void Resource::_fireBackgroundLoadingComplete( )
	{
		static_cast<Ogre::Resource*>(_native)->_fireBackgroundLoadingComplete( );
	}
	
	//------------------------------------------------------------
	// Implementation for IStringInterface
	//------------------------------------------------------------
	
	Mogre::ParamDictionary_NativePtr Resource::ParamDictionary::get()
	{
		return static_cast<Ogre::Resource*>(_native)->getParamDictionary( );
	}
	
	Mogre::Const_ParameterList^ Resource::GetParameters( )
	{
		return static_cast<const Ogre::Resource*>(_native)->getParameters( );
	}
	
	bool Resource::SetParameter( String^ name, String^ value )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_value, value )
	
		return static_cast<Ogre::Resource*>(_native)->setParameter( o_name, o_value );
	}
	
	void Resource::SetParameterList( Mogre::Const_NameValuePairList^ paramList )
	{
		static_cast<Ogre::Resource*>(_native)->setParameterList( paramList );
	}
	
	String^ Resource::GetParameter( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return TO_CLR_STRING( static_cast<const Ogre::Resource*>(_native)->getParameter( o_name ) );
	}
	
	void Resource::CopyParametersTo( Mogre::IStringInterface^ dest )
	{
		static_cast<const Ogre::Resource*>(_native)->copyParametersTo( dest );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//IManualResourceLoader
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::ManualResourceLoader* ManualResourceLoader::_IManualResourceLoader_GetNativePtr()
	{
		return static_cast<Ogre::ManualResourceLoader*>( static_cast<ManualResourceLoader_Proxy*>(_native) );
	}
	
	
	//Public Declarations
	ManualResourceLoader::ManualResourceLoader( ) : Wrapper( (CLRObject*)0 )
	{
		_createdByCLR = true;
		Type^ thisType = this->GetType();
		_isOverriden = true;  //it's abstract or interface so it must be overriden
		ManualResourceLoader_Proxy* proxy = new ManualResourceLoader_Proxy(this);
		proxy->_overriden = Implementation::SubclassingManager::Instance->GetOverridenMethodsArrayPointer(thisType, ManualResourceLoader::typeid, 0);
		_native = proxy;
	
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	
	
	//Protected Declarations
	
	
	
	//################################################################
	//ManualResourceLoader_Proxy
	//################################################################
	
	
	
	void ManualResourceLoader_Proxy::loadResource( Ogre::Resource* resource )
	{
		_managed->LoadResource( resource );
	}

}
