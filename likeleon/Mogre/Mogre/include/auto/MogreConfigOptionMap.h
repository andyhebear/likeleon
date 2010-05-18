/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreConfigOptionMap.h"
#include "MogrePrerequisites.h"
#include "MogreStringVector.h"

namespace Mogre
{
	//################################################################
	//ConfigOption_NativePtr
	//################################################################
	
	public value class ConfigOption_NativePtr
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		Ogre::_ConfigOption* _native;
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		property String^ name
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		property String^ currentValue
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		property Mogre::StringVector^ possibleValues
		{
		public:
			Mogre::StringVector^ get();
		public:
			void set(Mogre::StringVector^ value);
		}
	
		property bool immutable
		{
		public:
			bool get();
		public:
			void set(bool value);
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( ConfigOption_NativePtr, Ogre::_ConfigOption )
	
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_native; }
		}
	
		static ConfigOption_NativePtr Create();
	
		void DestroyNativePtr()
		{
			if (_native)  { delete _native; _native = 0; }
		}
	
		property bool IsNull
		{
			bool get() { return (_native == 0); }
		}
	
		//Protected Declarations
	protected public:
	
	};
	
	typedef Mogre::ConfigOption_NativePtr ConfigOption_NativePtr;
	
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::ConfigOption_NativePtr
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::ConfigOption
	INC_DECLARE_STLMAP( ConfigOptionMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public, private )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	

}
