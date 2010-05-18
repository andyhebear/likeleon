/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreWindowEventUtilities.h"
#include "MogreRenderWindow.h"

namespace Mogre
{
	//################################################################
	//IWindowEventListener
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::WindowEventListener* WindowEventListener::_IWindowEventListener_GetNativePtr()
	{
		return static_cast<Ogre::WindowEventListener*>( static_cast<WindowEventListener_Proxy*>(_native) );
	}
	
	
	//Public Declarations
	WindowEventListener::WindowEventListener() : Wrapper( (CLRObject*)0 )
	{
		_createdByCLR = true;
		Type^ thisType = this->GetType();
		_isOverriden = true;  //it's abstract or interface so it must be overriden
		WindowEventListener_Proxy* proxy = new WindowEventListener_Proxy(this);
		proxy->_overriden = Implementation::SubclassingManager::Instance->GetOverridenMethodsArrayPointer(thisType, WindowEventListener::typeid, 4);
		_native = proxy;
	
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	void WindowEventListener::WindowMoved( Mogre::RenderWindow^ rw )
	{
		static_cast<WindowEventListener_Proxy*>(_native)->WindowEventListener::windowMoved( rw );
	}
	
	void WindowEventListener::WindowResized( Mogre::RenderWindow^ rw )
	{
		static_cast<WindowEventListener_Proxy*>(_native)->WindowEventListener::windowResized( rw );
	}
	
	void WindowEventListener::WindowClosed( Mogre::RenderWindow^ rw )
	{
		static_cast<WindowEventListener_Proxy*>(_native)->WindowEventListener::windowClosed( rw );
	}
	
	void WindowEventListener::WindowFocusChange( Mogre::RenderWindow^ rw )
	{
		static_cast<WindowEventListener_Proxy*>(_native)->WindowEventListener::windowFocusChange( rw );
	}
	
	
	//Protected Declarations
	
	
	
	//################################################################
	//WindowEventUtilities
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDKEY Mogre::RenderWindow^
	#define STLDECL_MANAGEDVALUE Mogre::IWindowEventListener^
	#define STLDECL_NATIVEKEY Ogre::RenderWindow*
	#define STLDECL_NATIVEVALUE Ogre::WindowEventListener*
	CPP_DECLARE_STLMULTIMAP( WindowEventUtilities::, WindowEventListeners, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDTYPE Mogre::RenderWindow^
	#define STLDECL_NATIVETYPE Ogre::RenderWindow*
	CPP_DECLARE_STLVECTOR( WindowEventUtilities::, Windows, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	WindowEventUtilities::WindowEventUtilities()
	{
		_createdByCLR = true;
		_native = new Ogre::WindowEventUtilities();
	}
	
	void WindowEventUtilities::MessagePump( )
	{
		Ogre::WindowEventUtilities::messagePump( );
	}
	
	void WindowEventUtilities::AddWindowEventListener( Mogre::RenderWindow^ window, Mogre::IWindowEventListener^ listener )
	{
		Ogre::WindowEventUtilities::addWindowEventListener( window, listener );
	}
	
	void WindowEventUtilities::RemoveWindowEventListener( Mogre::RenderWindow^ window, Mogre::IWindowEventListener^ listener )
	{
		Ogre::WindowEventUtilities::removeWindowEventListener( window, listener );
	}
	
	void WindowEventUtilities::_addRenderWindow( Mogre::RenderWindow^ window )
	{
		Ogre::WindowEventUtilities::_addRenderWindow( window );
	}
	
	void WindowEventUtilities::_removeRenderWindow( Mogre::RenderWindow^ window )
	{
		Ogre::WindowEventUtilities::_removeRenderWindow( window );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//WindowEventListener_Proxy
	//################################################################
	
	
	
	void WindowEventListener_Proxy::windowMoved( Ogre::RenderWindow* rw )
	{
		if (_overriden[ 0 ])
		{
			_managed->WindowMoved( rw );
		}
		else
			WindowEventListener::windowMoved( rw );
	}
	
	void WindowEventListener_Proxy::windowResized( Ogre::RenderWindow* rw )
	{
		if (_overriden[ 1 ])
		{
			_managed->WindowResized( rw );
		}
		else
			WindowEventListener::windowResized( rw );
	}
	
	void WindowEventListener_Proxy::windowClosed( Ogre::RenderWindow* rw )
	{
		if (_overriden[ 2 ])
		{
			_managed->WindowClosed( rw );
		}
		else
			WindowEventListener::windowClosed( rw );
	}
	
	void WindowEventListener_Proxy::windowFocusChange( Ogre::RenderWindow* rw )
	{
		if (_overriden[ 3 ])
		{
			_managed->WindowFocusChange( rw );
		}
		else
			WindowEventListener::windowFocusChange( rw );
	}

}
