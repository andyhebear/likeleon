/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreShadowCameraSetup.h"

namespace Mogre
{
	//################################################################
	//ShadowCameraSetup
	//################################################################
	
	public ref class ShadowCameraSetup : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ShadowCameraSetup( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		void GetShadowCamera( Mogre::SceneManager^ sm, Mogre::Camera^ cam, Mogre::Viewport^ vp, Mogre::Light^ light, Mogre::Camera^ texCam );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( ShadowCameraSetup )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//DefaultShadowCameraSetup
	//################################################################
	
	public ref class DefaultShadowCameraSetup : public ShadowCameraSetup
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		DefaultShadowCameraSetup( CLRObject* obj ) : ShadowCameraSetup(obj)
		{
		}
	
	
		//Public Declarations
	public:
		DefaultShadowCameraSetup( );
	
	
		void GetShadowCamera( Mogre::SceneManager^ sm, Mogre::Camera^ cam, Mogre::Viewport^ vp, Mogre::Light^ light, Mogre::Camera^ texCam );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( DefaultShadowCameraSetup )
	
		//Protected Declarations
	protected public:
	
	};
	
	public ref class ShadowCameraSetupPtr : public ShadowCameraSetup
	{
	public protected:
			Ogre::ShadowCameraSetupPtr* _sharedPtr;
	
		ShadowCameraSetupPtr(Ogre::ShadowCameraSetupPtr& sharedPtr) : ShadowCameraSetup( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::ShadowCameraSetupPtr(sharedPtr);
		}
	
		!ShadowCameraSetupPtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~ShadowCameraSetupPtr()
		{
			this->!ShadowCameraSetupPtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( ShadowCameraSetupPtr )
	
		ShadowCameraSetupPtr(ShadowCameraSetup^ obj) : ShadowCameraSetup( obj->_native )
		{
			_sharedPtr = new Ogre::ShadowCameraSetupPtr( static_cast<Ogre::ShadowCameraSetup*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			ShadowCameraSetupPtr^ clr = dynamic_cast<ShadowCameraSetupPtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(ShadowCameraSetupPtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (ShadowCameraSetupPtr^ val1, ShadowCameraSetupPtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (ShadowCameraSetupPtr^ val1, ShadowCameraSetupPtr^ val2)
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
	
		property ShadowCameraSetup^ Target
		{
			ShadowCameraSetup^ get()
			{
				return static_cast<Ogre::ShadowCameraSetup*>(_native);
			}
		}
	};
	
	

}
