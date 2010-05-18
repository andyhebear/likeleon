/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreHardwareIndexBuffer.h"
#include "MogreHardwareBuffer.h"

namespace Mogre
{
	//################################################################
	//HardwareIndexBuffer
	//################################################################
	
	public ref class HardwareIndexBuffer : public HardwareBuffer
	{
		//Nested Types
	
		public: enum class IndexType
		{
			IT_16BIT = Ogre::HardwareIndexBuffer::IT_16BIT,
			IT_32BIT = Ogre::HardwareIndexBuffer::IT_32BIT
		};
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		HardwareIndexBuffer( CLRObject* obj ) : HardwareBuffer(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property size_t IndexSize
		{
		public:
			size_t get();
		}
	
		property size_t NumIndexes
		{
		public:
			size_t get();
		}
	
		property Mogre::HardwareIndexBuffer::IndexType Type
		{
		public:
			Mogre::HardwareIndexBuffer::IndexType get();
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( HardwareIndexBuffer )
	
		//Protected Declarations
	protected public:
	
	};
	
	public ref class HardwareIndexBufferSharedPtr : public HardwareIndexBuffer
	{
	public protected:
			Ogre::HardwareIndexBufferSharedPtr* _sharedPtr;
	
		HardwareIndexBufferSharedPtr(Ogre::HardwareIndexBufferSharedPtr& sharedPtr) : HardwareIndexBuffer( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::HardwareIndexBufferSharedPtr(sharedPtr);
		}
	
		!HardwareIndexBufferSharedPtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~HardwareIndexBufferSharedPtr()
		{
			this->!HardwareIndexBufferSharedPtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( HardwareIndexBufferSharedPtr )
	
		HardwareIndexBufferSharedPtr(HardwareIndexBuffer^ obj) : HardwareIndexBuffer( obj->_native )
		{
			_sharedPtr = new Ogre::HardwareIndexBufferSharedPtr( static_cast<Ogre::HardwareIndexBuffer*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			HardwareIndexBufferSharedPtr^ clr = dynamic_cast<HardwareIndexBufferSharedPtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(HardwareIndexBufferSharedPtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (HardwareIndexBufferSharedPtr^ val1, HardwareIndexBufferSharedPtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (HardwareIndexBufferSharedPtr^ val1, HardwareIndexBufferSharedPtr^ val2)
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
	
		property HardwareIndexBuffer^ Target
		{
			HardwareIndexBuffer^ get()
			{
				return static_cast<Ogre::HardwareIndexBuffer*>(_native);
			}
		}
	};
	
	

}
