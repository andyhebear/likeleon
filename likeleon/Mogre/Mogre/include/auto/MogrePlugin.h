/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgrePlugin.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//IPlugin
	//################################################################
	
	public interface class IPlugin
	{
		//Nested Types
	
		//Private Declarations
	
		//Internal Declarations
	
		//Public Declarations
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IPlugin, Ogre::Plugin )
	
		virtual Ogre::Plugin* _GetNativePtr();
	
	public:
	
	
		property String^ Name
		{
		public:
			virtual String^ get();
		}
	
		virtual void Install( );
	
		virtual void Initialise( );
	
		virtual void Shutdown( );
	
		virtual void Uninstall( );
	
	
		//Protected Declarations
	
	};
	
	//################################################################
	//IPlugin
	//################################################################
	
	public ref class Plugin abstract : public Wrapper, public IPlugin
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Plugin( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::Plugin* _IPlugin_GetNativePtr() = IPlugin::_GetNativePtr;
	
	
		//Public Declarations
	public:
		Plugin( );
	
	
		property String^ Name
		{
		public:
			virtual String^ get() abstract;
		}
	
		virtual void Install( ) abstract;
	
		virtual void Initialise( ) abstract;
	
		virtual void Shutdown( ) abstract;
	
		virtual void Uninstall( ) abstract;
	
	
		//Protected Declarations
	protected public:
	
	};
	
	
	//################################################################
	//Plugin_Proxy
	//################################################################
	
	class Plugin_Proxy : public Ogre::Plugin, public CLRObject
	{
	public:
		friend ref class Mogre::Plugin;
	
		bool* _overriden;
	
		gcroot<Mogre::Plugin^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		Plugin_Proxy( Mogre::Plugin^ managedObj ) :
			Ogre::Plugin( ),
			_managed(managedObj)
		{
		}
	
		virtual const Ogre::String& getName( ) const override;
	
		virtual void install( ) override;
	
		virtual void initialise( ) override;
	
		virtual void shutdown( ) override;
	
		virtual void uninstall( ) override;
	};
	

}
