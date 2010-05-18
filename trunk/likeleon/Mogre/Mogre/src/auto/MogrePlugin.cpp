/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogrePlugin.h"

namespace Mogre
{
	//################################################################
	//IPlugin
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::Plugin* Plugin::_IPlugin_GetNativePtr()
	{
		return static_cast<Ogre::Plugin*>( static_cast<Plugin_Proxy*>(_native) );
	}
	
	
	//Public Declarations
	Plugin::Plugin( ) : Wrapper( (CLRObject*)0 )
	{
		_createdByCLR = true;
		Type^ thisType = this->GetType();
		_isOverriden = true;  //it's abstract or interface so it must be overriden
		Plugin_Proxy* proxy = new Plugin_Proxy(this);
		proxy->_overriden = Implementation::SubclassingManager::Instance->GetOverridenMethodsArrayPointer(thisType, Plugin::typeid, 0);
		_native = proxy;
	
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	
	
	
	
	
	
	//Protected Declarations
	
	
	
	//################################################################
	//Plugin_Proxy
	//################################################################
	
	
	
	const Ogre::String& Plugin_Proxy::getName( ) const
	{
		String^ mp_return = _managed->Name;
		SET_NATIVE_STRING( Mogre::Implementation::cachedReturnString, mp_return )
		return Mogre::Implementation::cachedReturnString;
	}
	
	void Plugin_Proxy::install( )
	{
		_managed->Install( );
	}
	
	void Plugin_Proxy::initialise( )
	{
		_managed->Initialise( );
	}
	
	void Plugin_Proxy::shutdown( )
	{
		_managed->Shutdown( );
	}
	
	void Plugin_Proxy::uninstall( )
	{
		_managed->Uninstall( );
	}

}
