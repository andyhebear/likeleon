/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreAnimable.h"
#include "MogreStringVector.h"

namespace Mogre
{
	//################################################################
	//AnimableValue
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Mogre::AnimableValue::ValueType AnimableValue::Type::get()
	{
		return (Mogre::AnimableValue::ValueType)static_cast<const Ogre::AnimableValue*>(_native)->getType( );
	}
	
	void AnimableValue::SetCurrentStateAsBaseValue( )
	{
		static_cast<Ogre::AnimableValue*>(_native)->setCurrentStateAsBaseValue( );
	}
	
	void AnimableValue::SetValue( int param1 )
	{
		static_cast<Ogre::AnimableValue*>(_native)->setValue( param1 );
	}
	
	void AnimableValue::SetValue( Mogre::Real param1 )
	{
		static_cast<Ogre::AnimableValue*>(_native)->setValue( param1 );
	}
	
	void AnimableValue::SetValue( Mogre::Vector2 param1 )
	{
		static_cast<Ogre::AnimableValue*>(_native)->setValue( param1 );
	}
	
	void AnimableValue::SetValue( Mogre::Vector3 param1 )
	{
		static_cast<Ogre::AnimableValue*>(_native)->setValue( param1 );
	}
	
	void AnimableValue::SetValue( Mogre::Vector4 param1 )
	{
		static_cast<Ogre::AnimableValue*>(_native)->setValue( param1 );
	}
	
	void AnimableValue::SetValue( Mogre::Quaternion param1 )
	{
		static_cast<Ogre::AnimableValue*>(_native)->setValue( param1 );
	}
	
	void AnimableValue::SetValue( Mogre::ColourValue param1 )
	{
		static_cast<Ogre::AnimableValue*>(_native)->setValue( param1 );
	}
	
	void AnimableValue::ResetToBaseValue( )
	{
		static_cast<Ogre::AnimableValue*>(_native)->resetToBaseValue( );
	}
	
	void AnimableValue::ApplyDeltaValue( int param1 )
	{
		static_cast<Ogre::AnimableValue*>(_native)->applyDeltaValue( param1 );
	}
	
	void AnimableValue::ApplyDeltaValue( Mogre::Real param1 )
	{
		static_cast<Ogre::AnimableValue*>(_native)->applyDeltaValue( param1 );
	}
	
	void AnimableValue::ApplyDeltaValue( Mogre::Vector2 param1 )
	{
		static_cast<Ogre::AnimableValue*>(_native)->applyDeltaValue( param1 );
	}
	
	void AnimableValue::ApplyDeltaValue( Mogre::Vector3 param1 )
	{
		static_cast<Ogre::AnimableValue*>(_native)->applyDeltaValue( param1 );
	}
	
	void AnimableValue::ApplyDeltaValue( Mogre::Vector4 param1 )
	{
		static_cast<Ogre::AnimableValue*>(_native)->applyDeltaValue( param1 );
	}
	
	void AnimableValue::ApplyDeltaValue( Mogre::Quaternion param1 )
	{
		static_cast<Ogre::AnimableValue*>(_native)->applyDeltaValue( param1 );
	}
	
	void AnimableValue::ApplyDeltaValue( Mogre::ColourValue param1 )
	{
		static_cast<Ogre::AnimableValue*>(_native)->applyDeltaValue( param1 );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//IAnimableObject
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::StringVector^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::StringVector
	CPP_DECLARE_STLMAP( AnimableObject::, AnimableDictionaryMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	//Private Declarations
	static AnimableObject::AnimableObject()
	{
		_msAnimableDictionary = Mogre::AnimableObject_ProtectedTypesProxy::msAnimableDictionary;
	}
	
	
	//Internal Declarations
	Ogre::AnimableObject* AnimableObject::_IAnimableObject_GetNativePtr()
	{
		return static_cast<Ogre::AnimableObject*>( static_cast<AnimableObject_Proxy*>(_native) );
	}
	
	
	//Public Declarations
	AnimableObject::AnimableObject( ) : Wrapper( (CLRObject*)0 )
	{
		_createdByCLR = true;
		Type^ thisType = this->GetType();
		_isOverriden = true;  //it's abstract or interface so it must be overriden
		AnimableObject_Proxy* proxy = new AnimableObject_Proxy(this);
		proxy->_overriden = Implementation::SubclassingManager::Instance->GetOverridenMethodsArrayPointer(thisType, AnimableObject::typeid, 3);
		_native = proxy;
	
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	String^ AnimableObject::AnimableDictionaryName::get()
	{
		return TO_CLR_STRING( static_cast<AnimableObject_Proxy*>(_native)->AnimableObject::getAnimableDictionaryName( ) );
	}
	
	Mogre::Const_StringVector^ AnimableObject::GetAnimableValueNames( )
	{
		return static_cast<AnimableObject_Proxy*>(_native)->AnimableObject::getAnimableValueNames( );
	}
	
	Mogre::AnimableValuePtr^ AnimableObject::CreateAnimableValue( String^ valueName )
	{
		DECLARE_NATIVE_STRING( o_valueName, valueName )
	
		return static_cast<AnimableObject_Proxy*>(_native)->AnimableObject::createAnimableValue( o_valueName );
	}
	
	
	//Protected Declarations
	Mogre::AnimableObject::AnimableDictionaryMap^ AnimableObject::msAnimableDictionary::get()
	{
		return _msAnimableDictionary;
	}
	
	void AnimableObject::CreateAnimableDictionary( )
	{
		static_cast<AnimableObject_Proxy*>(_native)->AnimableObject::createAnimableDictionary( );
	}
	
	Mogre::StringVector^ AnimableObject::_getAnimableValueNames( )
	{
		return static_cast<AnimableObject_Proxy*>(_native)->AnimableObject::_getAnimableValueNames( );
	}
	
	void AnimableObject::InitialiseAnimableDictionary( Mogre::StringVector^ param1 )
	{
		static_cast<AnimableObject_Proxy*>(_native)->AnimableObject::initialiseAnimableDictionary( param1 );
	}
	
	
	
	
	//################################################################
	//AnimableObject_Proxy
	//################################################################
	
	
	
	Ogre::AnimableValuePtr AnimableObject_Proxy::createAnimableValue( const Ogre::String& valueName )
	{
		if (_overriden[ 0 ])
		{
			Mogre::AnimableValuePtr^ mp_return = _managed->CreateAnimableValue( TO_CLR_STRING( valueName ) );
			return (Ogre::AnimableValuePtr)mp_return;
		}
		else
			return AnimableObject::createAnimableValue( valueName );
	}
	
	const Ogre::String& AnimableObject_Proxy::getAnimableDictionaryName( ) const
	{
		if (_overriden[ 1 ])
		{
			String^ mp_return = _managed->AnimableDictionaryName;
			SET_NATIVE_STRING( Mogre::Implementation::cachedReturnString, mp_return )
			return Mogre::Implementation::cachedReturnString;
		}
		else
			return AnimableObject::getAnimableDictionaryName( );
	}
	
	void AnimableObject_Proxy::initialiseAnimableDictionary( Ogre::StringVector& param1 ) const
	{
		if (_overriden[ 2 ])
		{
			_managed->InitialiseAnimableDictionary( param1 );
		}
		else
			AnimableObject::initialiseAnimableDictionary( param1 );
	}

}
