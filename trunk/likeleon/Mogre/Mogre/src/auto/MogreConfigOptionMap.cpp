/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreConfigOptionMap.h"
#include "MogreStringVector.h"

namespace Mogre
{
	//################################################################
	//ConfigOption_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	String^ ConfigOption_NativePtr::name::get()
	{
		return TO_CLR_STRING( _native->name );
	}
	void ConfigOption_NativePtr::name::set( String^ value )
	{
		DECLARE_NATIVE_STRING( o_value, value )
	
		_native->name = o_value;
	}
	
	String^ ConfigOption_NativePtr::currentValue::get()
	{
		return TO_CLR_STRING( _native->currentValue );
	}
	void ConfigOption_NativePtr::currentValue::set( String^ value )
	{
		DECLARE_NATIVE_STRING( o_value, value )
	
		_native->currentValue = o_value;
	}
	
	Mogre::StringVector^ ConfigOption_NativePtr::possibleValues::get()
	{
		return Mogre::StringVector::ByValue( _native->possibleValues );
	}
	void ConfigOption_NativePtr::possibleValues::set( Mogre::StringVector^ value )
	{
		_native->possibleValues = value;
	}
	
	bool ConfigOption_NativePtr::immutable::get()
	{
		return _native->immutable;
	}
	void ConfigOption_NativePtr::immutable::set( bool value )
	{
		_native->immutable = value;
	}
	
	
	Mogre::ConfigOption_NativePtr ConfigOption_NativePtr::Create()
	{
		ConfigOption_NativePtr ptr;
		ptr._native = new Ogre::_ConfigOption();
		return ptr;
	}
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::ConfigOption_NativePtr
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::ConfigOption
	CPP_DECLARE_STLMAP( , ConfigOptionMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	

}
