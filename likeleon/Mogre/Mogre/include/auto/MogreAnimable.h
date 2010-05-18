/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreAnimable.h"
#include "MogrePrerequisites.h"
#include "MogreStringVector.h"

namespace Mogre
{
	class AnimableObject_ProtectedTypesProxy : public Ogre::AnimableObject
	{
	public:
		friend ref class Mogre::AnimableObject;
		typedef Ogre::AnimableObject::AnimableDictionaryMap AnimableDictionaryMap;
	};
	
	//################################################################
	//AnimableValue
	//################################################################
	
	public ref class AnimableValue : public Wrapper
	{
		//Nested Types
	
		public: enum class ValueType
		{
			INT = Ogre::AnimableValue::INT,
			REAL = Ogre::AnimableValue::REAL,
			VECTOR2 = Ogre::AnimableValue::VECTOR2,
			VECTOR3 = Ogre::AnimableValue::VECTOR3,
			VECTOR4 = Ogre::AnimableValue::VECTOR4,
			QUATERNION = Ogre::AnimableValue::QUATERNION,
			COLOUR = Ogre::AnimableValue::COLOUR
		};
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		AnimableValue( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property Mogre::AnimableValue::ValueType Type
		{
		public:
			Mogre::AnimableValue::ValueType get();
		}
	
		void SetCurrentStateAsBaseValue( );
	
		void SetValue( int param1 );
	
		void SetValue( Mogre::Real param1 );
	
		void SetValue( Mogre::Vector2 param1 );
	
		void SetValue( Mogre::Vector3 param1 );
	
		void SetValue( Mogre::Vector4 param1 );
	
		void SetValue( Mogre::Quaternion param1 );
	
		void SetValue( Mogre::ColourValue param1 );
	
		void ResetToBaseValue( );
	
		void ApplyDeltaValue( int param1 );
	
		void ApplyDeltaValue( Mogre::Real param1 );
	
		void ApplyDeltaValue( Mogre::Vector2 param1 );
	
		void ApplyDeltaValue( Mogre::Vector3 param1 );
	
		void ApplyDeltaValue( Mogre::Vector4 param1 );
	
		void ApplyDeltaValue( Mogre::Quaternion param1 );
	
		void ApplyDeltaValue( Mogre::ColourValue param1 );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( AnimableValue )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//IAnimableObject
	//################################################################
	
	public interface class IAnimableObject
	{
		//Nested Types
	
		//Private Declarations
	
		//Internal Declarations
	
		//Public Declarations
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IAnimableObject, Ogre::AnimableObject )
	
		virtual Ogre::AnimableObject* _GetNativePtr();
	
	public:
	
	
	
		virtual Mogre::AnimableValuePtr^ CreateAnimableValue( String^ valueName );
	
	
		//Protected Declarations
	
	};
	
	//################################################################
	//IAnimableObject
	//################################################################
	
	public ref class AnimableObject : public Wrapper, public IAnimableObject
	{
		//Nested Types
		protected public: ref class AnimableDictionaryMap;
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::StringVector^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::StringVector
		protected public: INC_DECLARE_STLMAP( AnimableDictionaryMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, protected public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		//Private Declarations
	private protected:
		static AnimableObject();
	
		//Cached fields
		static Mogre::AnimableObject::AnimableDictionaryMap^ _msAnimableDictionary;
	
		//Internal Declarations
	public protected:
		AnimableObject( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::AnimableObject* _IAnimableObject_GetNativePtr() = IAnimableObject::_GetNativePtr;
	
	
		//Public Declarations
	public:
		AnimableObject( );
	
	
		property String^ AnimableDictionaryName
		{
		protected public:
			[Implementation::MethodIndex( 1 )]
			virtual String^ get();
		}
	
		Mogre::Const_StringVector^ GetAnimableValueNames( );
	
		[Implementation::MethodIndex( 0 )]
		virtual Mogre::AnimableValuePtr^ CreateAnimableValue( String^ valueName );
	
	
		//Protected Declarations
	protected public:
		static property Mogre::AnimableObject::AnimableDictionaryMap^ msAnimableDictionary
		{
		protected public:
			Mogre::AnimableObject::AnimableDictionaryMap^ get();
		}
	
		void CreateAnimableDictionary( );
	
		Mogre::StringVector^ _getAnimableValueNames( );
	
		[Implementation::MethodIndex( 2 )]
		virtual void InitialiseAnimableDictionary( Mogre::StringVector^ param1 );
	
	
	};
	
	
	public ref class AnimableValuePtr : public AnimableValue
	{
	public protected:
			Ogre::AnimableValuePtr* _sharedPtr;
	
		AnimableValuePtr(Ogre::AnimableValuePtr& sharedPtr) : AnimableValue( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::AnimableValuePtr(sharedPtr);
		}
	
		!AnimableValuePtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~AnimableValuePtr()
		{
			this->!AnimableValuePtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( AnimableValuePtr )
	
		AnimableValuePtr(AnimableValue^ obj) : AnimableValue( obj->_native )
		{
			_sharedPtr = new Ogre::AnimableValuePtr( static_cast<Ogre::AnimableValue*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			AnimableValuePtr^ clr = dynamic_cast<AnimableValuePtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(AnimableValuePtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (AnimableValuePtr^ val1, AnimableValuePtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (AnimableValuePtr^ val1, AnimableValuePtr^ val2)
		{
			return !(val1 == val2);
		}
	
		virtual int GetHashCode() override
		{
			return reinterpret_cast<int>( _native );
		}
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_sharedPtr; }
		}
	
		property bool Unique
		{
			bool get()
			{
				return (*_sharedPtr).unique();
			}
		}
	
		property int UseCount
		{
			int get()
			{
				return (*_sharedPtr).useCount();
			}
		}
	
		property AnimableValue^ Target
		{
			AnimableValue^ get()
			{
				return static_cast<Ogre::AnimableValue*>(_native);
			}
		}
	};
	
	
	class AnimableObject_ProtectedStaticsProxy : public Ogre::AnimableObject
	{
	public:
		friend ref class Mogre::AnimableObject;
		friend ref class Mogre::AnimableObject::msAnimableDictionary;
	};
	
	//################################################################
	//AnimableObject_Proxy
	//################################################################
	
	class AnimableObject_Proxy : public Ogre::AnimableObject, public CLRObject
	{
	public:
		friend ref class Mogre::AnimableObject;
		friend ref class Mogre::AnimableObject::AnimableDictionaryName;
	
		bool* _overriden;
	
		gcroot<Mogre::AnimableObject^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		AnimableObject_Proxy( Mogre::AnimableObject^ managedObj ) :
			Ogre::AnimableObject( ),
			_managed(managedObj)
		{
		}
	
		virtual Ogre::AnimableValuePtr createAnimableValue( const Ogre::String& valueName ) override;
	
		virtual const Ogre::String& getAnimableDictionaryName( ) const override;
	
		virtual void initialiseAnimableDictionary( Ogre::StringVector& param1 ) const override;
	};
	

}
