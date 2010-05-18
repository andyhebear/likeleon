/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreStringInterface.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//ParamDictionary_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	void ParamDictionary_NativePtr::AddParameter( Mogre::ParameterDef_NativePtr paramDef, Mogre::ParamCommand^ paramCmd )
	{
		_native->addParameter( paramDef, paramCmd );
	}
	
	Mogre::Const_ParameterList^ ParamDictionary_NativePtr::GetParameters( )
	{
		return _native->getParameters( );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//ParameterDef_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	String^ ParameterDef_NativePtr::name::get()
	{
		return TO_CLR_STRING( _native->name );
	}
	void ParameterDef_NativePtr::name::set( String^ value )
	{
		DECLARE_NATIVE_STRING( o_value, value )
	
		_native->name = o_value;
	}
	
	String^ ParameterDef_NativePtr::description::get()
	{
		return TO_CLR_STRING( _native->description );
	}
	void ParameterDef_NativePtr::description::set( String^ value )
	{
		DECLARE_NATIVE_STRING( o_value, value )
	
		_native->description = o_value;
	}
	
	Mogre::ParameterType ParameterDef_NativePtr::paramType::get()
	{
		return (Mogre::ParameterType)_native->paramType;
	}
	void ParameterDef_NativePtr::paramType::set( Mogre::ParameterType value )
	{
		_native->paramType = (Ogre::ParameterType)value;
	}
	
	
	Mogre::ParameterDef_NativePtr ParameterDef_NativePtr::Create( String^ newName, String^ newDescription, Mogre::ParameterType newType )
	{
		DECLARE_NATIVE_STRING( o_newName, newName )
		DECLARE_NATIVE_STRING( o_newDescription, newDescription )
	
		ParameterDef_NativePtr ptr;
		ptr._native = new Ogre::ParameterDef( o_newName, o_newDescription, (Ogre::ParameterType)newType);
		return ptr;
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//IStringInterface
	//################################################################
	
	//Nested Types
	//Private Declarations
	static StringInterface::StringInterface()
	{
		_msDictionary = Mogre::StringInterface_ProtectedTypesProxy::msDictionary;
	}
	
	
	//Internal Declarations
	Ogre::StringInterface* StringInterface::_IStringInterface_GetNativePtr()
	{
		return static_cast<Ogre::StringInterface*>( static_cast<StringInterface_Proxy*>(_native) );
	}
	
	
	//Public Declarations
	StringInterface::StringInterface() : Wrapper( (CLRObject*)0 )
	{
		_createdByCLR = true;
		Type^ thisType = this->GetType();
		_isOverriden = true;  //it's abstract or interface so it must be overriden
		StringInterface_Proxy* proxy = new StringInterface_Proxy(this);
		proxy->_overriden = Implementation::SubclassingManager::Instance->GetOverridenMethodsArrayPointer(thisType, StringInterface::typeid, 4);
		_native = proxy;
	
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::ParamDictionary_NativePtr StringInterface::ParamDictionary::get()
	{
		return static_cast<StringInterface_Proxy*>(_native)->StringInterface::getParamDictionary( );
	}
	
	Mogre::Const_ParameterList^ StringInterface::GetParameters( )
	{
		return static_cast<StringInterface_Proxy*>(_native)->StringInterface::getParameters( );
	}
	
	bool StringInterface::SetParameter( String^ name, String^ value )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_value, value )
	
		return static_cast<StringInterface_Proxy*>(_native)->StringInterface::setParameter( o_name, o_value );
	}
	
	void StringInterface::SetParameterList( Mogre::Const_NameValuePairList^ paramList )
	{
		static_cast<StringInterface_Proxy*>(_native)->StringInterface::setParameterList( paramList );
	}
	
	String^ StringInterface::GetParameter( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return TO_CLR_STRING( static_cast<StringInterface_Proxy*>(_native)->StringInterface::getParameter( o_name ) );
	}
	
	void StringInterface::CopyParametersTo( Mogre::IStringInterface^ dest )
	{
		static_cast<StringInterface_Proxy*>(_native)->StringInterface::copyParametersTo( dest );
	}
	
	void StringInterface::CleanupDictionary( )
	{
		Ogre::StringInterface::cleanupDictionary( );
	}
	
	
	//Protected Declarations
	String^ StringInterface::mParamDictName::get()
	{
		return TO_CLR_STRING( static_cast<StringInterface_Proxy*>(_native)->Ogre::StringInterface::mParamDictName );
	}
	void StringInterface::mParamDictName::set( String^ value )
	{
		DECLARE_NATIVE_STRING( o_value, value )
	
		static_cast<StringInterface_Proxy*>(_native)->Ogre::StringInterface::mParamDictName = o_value;
	}
	
	Mogre::ParamDictionaryMap^ StringInterface::msDictionary::get()
	{
		return _msDictionary;
	}
	
	bool StringInterface::CreateParamDictionary( String^ className )
	{
		DECLARE_NATIVE_STRING( o_className, className )
	
		return static_cast<StringInterface_Proxy*>(_native)->StringInterface::createParamDictionary( o_className );
	}
	
	
	
	
	#define STLDECL_MANAGEDTYPE Mogre::ParameterDef_NativePtr
	#define STLDECL_NATIVETYPE Ogre::ParameterDef
	CPP_DECLARE_STLVECTOR( , ParameterList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::ParamDictionary_NativePtr
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::ParamDictionary
	CPP_DECLARE_STLMAP( , ParamDictionaryMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	//################################################################
	//StringInterface_Proxy
	//################################################################
	
	
	
	bool StringInterface_Proxy::setParameter( const Ogre::String& name, const Ogre::String& value )
	{
		if (_overriden[ 0 ])
		{
			bool mp_return = _managed->SetParameter( TO_CLR_STRING( name ), TO_CLR_STRING( value ) );
			return mp_return;
		}
		else
			return StringInterface::setParameter( name, value );
	}
	
	void StringInterface_Proxy::setParameterList( const Ogre::NameValuePairList& paramList )
	{
		if (_overriden[ 1 ])
		{
			_managed->SetParameterList( paramList );
		}
		else
			StringInterface::setParameterList( paramList );
	}
	
	Ogre::String StringInterface_Proxy::getParameter( const Ogre::String& name ) const
	{
		if (_overriden[ 2 ])
		{
			String^ mp_return = _managed->GetParameter( TO_CLR_STRING( name ) );
			SET_NATIVE_STRING( Mogre::Implementation::cachedReturnString, mp_return )
			return Mogre::Implementation::cachedReturnString;
		}
		else
			return StringInterface::getParameter( name );
	}
	
	void StringInterface_Proxy::copyParametersTo( Ogre::StringInterface* dest ) const
	{
		if (_overriden[ 3 ])
		{
			_managed->CopyParametersTo( dest );
		}
		else
			StringInterface::copyParametersTo( dest );
	}

}
