/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreWindowEventUtilities.h"

namespace Mogre
{
	//################################################################
	//IWindowEventListener
	//################################################################
	
	public interface class IWindowEventListener
	{
		//Nested Types
	
		//Private Declarations
	
		//Internal Declarations
	
		//Public Declarations
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IWindowEventListener, Ogre::WindowEventListener )
	
		virtual Ogre::WindowEventListener* _GetNativePtr();
	
	public:
	
	
		virtual void WindowMoved( Mogre::RenderWindow^ rw );
	
		virtual void WindowResized( Mogre::RenderWindow^ rw );
	
		virtual void WindowClosed( Mogre::RenderWindow^ rw );
	
		virtual void WindowFocusChange( Mogre::RenderWindow^ rw );
	
	
		//Protected Declarations
	
	};
	
	//################################################################
	//IWindowEventListener
	//################################################################
	
	public ref class WindowEventListener : public Wrapper, public IWindowEventListener
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		WindowEventListener( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::WindowEventListener* _IWindowEventListener_GetNativePtr() = IWindowEventListener::_GetNativePtr;
	
	
		//Public Declarations
	public:
		WindowEventListener();
	
	
		[Implementation::MethodIndex( 0 )]
		virtual void WindowMoved( Mogre::RenderWindow^ rw );
	
		[Implementation::MethodIndex( 1 )]
		virtual void WindowResized( Mogre::RenderWindow^ rw );
	
		[Implementation::MethodIndex( 2 )]
		virtual void WindowClosed( Mogre::RenderWindow^ rw );
	
		[Implementation::MethodIndex( 3 )]
		virtual void WindowFocusChange( Mogre::RenderWindow^ rw );
	
	
		//Protected Declarations
	protected public:
	
	};
	
	
	//################################################################
	//WindowEventUtilities
	//################################################################
	
	public ref class WindowEventUtilities
	{
		//Nested Types
		public: ref class WindowEventListeners;
		public: ref class Windows;
	
		#define STLDECL_MANAGEDKEY Mogre::RenderWindow^
		#define STLDECL_MANAGEDVALUE Mogre::IWindowEventListener^
		#define STLDECL_NATIVEKEY Ogre::RenderWindow*
		#define STLDECL_NATIVEVALUE Ogre::WindowEventListener*
		public: INC_DECLARE_STLMULTIMAP( WindowEventListeners, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDTYPE Mogre::RenderWindow^
		#define STLDECL_NATIVETYPE Ogre::RenderWindow*
		public: INC_DECLARE_STLVECTOR( Windows, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		WindowEventUtilities( Ogre::WindowEventUtilities* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~WindowEventUtilities()
		{
			this->!WindowEventUtilities();
		}
		!WindowEventUtilities()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::WindowEventUtilities* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		WindowEventUtilities();
	
	
		static void MessagePump( );
	
		static void AddWindowEventListener( Mogre::RenderWindow^ window, Mogre::IWindowEventListener^ listener );
	
		static void RemoveWindowEventListener( Mogre::RenderWindow^ window, Mogre::IWindowEventListener^ listener );
	
		static void _addRenderWindow( Mogre::RenderWindow^ window );
	
		static void _removeRenderWindow( Mogre::RenderWindow^ window );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( WindowEventUtilities )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//WindowEventListener_Proxy
	//################################################################
	
	class WindowEventListener_Proxy : public Ogre::WindowEventListener, public CLRObject
	{
	public:
		friend ref class Mogre::WindowEventListener;
	
		bool* _overriden;
	
		gcroot<Mogre::WindowEventListener^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		WindowEventListener_Proxy( Mogre::WindowEventListener^ managedObj ) :
			_managed(managedObj)
		{
		}
	
		virtual void windowMoved( Ogre::RenderWindow* rw ) override;
	
		virtual void windowResized( Ogre::RenderWindow* rw ) override;
	
		virtual void windowClosed( Ogre::RenderWindow* rw ) override;
	
		virtual void windowFocusChange( Ogre::RenderWindow* rw ) override;
	};
	

}
