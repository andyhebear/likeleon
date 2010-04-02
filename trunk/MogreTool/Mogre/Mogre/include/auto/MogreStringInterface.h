/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreStringInterface.h"
#include "MogrePrerequisites.h"
#include "MogreCommon.h"

namespace Mogre
{
	class StringInterface_ProtectedTypesProxy : public Ogre::StringInterface
	{
	public:
		friend ref class Mogre::StringInterface;
	};
	
	public enum class ParameterType
	{
		PT_BOOL = Ogre::PT_BOOL,
		PT_REAL = Ogre::PT_REAL,
		PT_INT = Ogre::PT_INT,
		PT_UNSIGNED_INT = Ogre::PT_UNSIGNED_INT,
		PT_SHORT = Ogre::PT_SHORT,
		PT_UNSIGNED_SHORT = Ogre::PT_UNSIGNED_SHORT,
		PT_LONG = Ogre::PT_LONG,
		PT_UNSIGNED_LONG = Ogre::PT_UNSIGNED_LONG,
		PT_STRING = Ogre::PT_STRING,
		PT_VECTOR3 = Ogre::PT_VECTOR3,
		PT_MATRIX3 = Ogre::PT_MATRIX3,
		PT_MATRIX4 = Ogre::PT_MATRIX4,
		PT_QUATERNION = Ogre::PT_QUATERNION,
		PT_COLOURVALUE = Ogre::PT_COLOURVALUE
	};
	
	//################################################################
	//ParamDictionary_NativePtr
	//################################################################
	
	public value class ParamDictionary_NativePtr
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		Ogre::ParamDictionary* _native;
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		void AddParameter( Mogre::ParameterDef_NativePtr paramDef, Mogre::ParamCommand^ paramCmd );
	
		Mogre::Const_ParameterList^ GetParameters( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( ParamDictionary_NativePtr, Ogre::ParamDictionary )
	
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_native; }
		}
	
		property bool IsNull
		{
			bool get() { return (_native == 0); }
		}
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//ParameterDef_NativePtr
	//################################################################
	
	public value class ParameterDef_NativePtr
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		Ogre::ParameterDef* _native;
	
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
	
		property String^ description
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		property Mogre::ParameterType paramType
		{
		public:
			Mogre::ParameterType get();
		public:
			void set(Mogre::ParameterType value);
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( ParameterDef_NativePtr, Ogre::ParameterDef )
	
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_native; }
		}
	
		static ParameterDef_NativePtr Create( String^ newName, String^ newDescription, Mogre::ParameterType newType );
	
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
	
	//################################################################
	//IStringInterface
	//################################################################
	
	public interface class IStringInterface
	{
		//Nested Types
	
		//Private Declarations
	
		//Internal Declarations
	
		//Public Declarations
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IStringInterface, Ogre::StringInterface )
	
		virtual Ogre::StringInterface* _GetNativePtr();
	
	public:
	
	
	
	
		virtual bool SetParameter( String^ name, String^ value );
	
		virtual void SetParameterList( Mogre::Const_NameValuePairList^ paramList );
	
		virtual String^ GetParameter( String^ name );
	
		virtual void CopyParametersTo( Mogre::IStringInterface^ dest );
	
	
	
		//Protected Declarations
	
	};
	
	//################################################################
	//IStringInterface
	//################################################################
	
	public ref class StringInterface : public Wrapper, public IStringInterface
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		static StringInterface();
	
		//Cached fields
		static Mogre::ParamDictionaryMap^ _msDictionary;
	
		//Internal Declarations
	public protected:
		StringInterface( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::StringInterface* _IStringInterface_GetNativePtr() = IStringInterface::_GetNativePtr;
	
	
		//Public Declarations
	public:
		StringInterface();
	
	
		property Mogre::ParamDictionary_NativePtr ParamDictionary
		{
		public:
			Mogre::ParamDictionary_NativePtr get();
		}
	
		Mogre::Const_ParameterList^ GetParameters( );
	
		[Implementation::MethodIndex( 0 )]
		virtual bool SetParameter( String^ name, String^ value );
	
		[Implementation::MethodIndex( 1 )]
		virtual void SetParameterList( Mogre::Const_NameValuePairList^ paramList );
	
		[Implementation::MethodIndex( 2 )]
		virtual String^ GetParameter( String^ name );
	
		[Implementation::MethodIndex( 3 )]
		virtual void CopyParametersTo( Mogre::IStringInterface^ dest );
	
		static void CleanupDictionary( );
	
	
		//Protected Declarations
	protected public:
		property String^ mParamDictName
		{
		protected public:
			String^ get();
		protected public:
			void set(String^ value);
		}
	
		static property Mogre::ParamDictionaryMap^ msDictionary
		{
		protected public:
			Mogre::ParamDictionaryMap^ get();
		}
	
		bool CreateParamDictionary( String^ className );
	
	
	};
	
	
	#define STLDECL_MANAGEDTYPE Mogre::ParameterDef_NativePtr
	#define STLDECL_NATIVETYPE Ogre::ParameterDef
	INC_DECLARE_STLVECTOR( ParameterList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::ParamDictionary_NativePtr
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::ParamDictionary
	INC_DECLARE_STLMAP( ParamDictionaryMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public, private )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	class StringInterface_ProtectedStaticsProxy : public Ogre::StringInterface
	{
	public:
		friend ref class Mogre::StringInterface;
		friend ref class Mogre::StringInterface::mParamDictName;
		friend ref class Mogre::StringInterface::msDictionary;
	};
	
	//################################################################
	//StringInterface_Proxy
	//################################################################
	
	class StringInterface_Proxy : public Ogre::StringInterface, public CLRObject
	{
	public:
		friend ref class Mogre::StringInterface;
		friend ref class Mogre::StringInterface::mParamDictName;
	
		bool* _overriden;
	
		gcroot<Mogre::StringInterface^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		StringInterface_Proxy( Mogre::StringInterface^ managedObj ) :
			_managed(managedObj)
		{
		}
	
		virtual bool setParameter( const Ogre::String& name, const Ogre::String& value ) override;
	
		virtual void setParameterList( const Ogre::NameValuePairList& paramList ) override;
	
		virtual Ogre::String getParameter( const Ogre::String& name ) const override;
	
		virtual void copyParametersTo( Ogre::StringInterface* dest ) const override;
	};
	

}
