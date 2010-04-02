/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreHardwarePixelBuffer.h"
#include "MogreHardwareBuffer.h"
#include "MogrePixelFormat.h"
#include "MogreImage.h"

namespace Mogre
{
	//################################################################
	//HardwarePixelBuffer
	//################################################################
	
	public ref class HardwarePixelBuffer : public HardwareBuffer
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		HardwarePixelBuffer( CLRObject* obj ) : HardwareBuffer(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property Mogre::PixelBox CurrentLock
		{
		public:
			Mogre::PixelBox get();
		}
	
		property size_t Depth
		{
		public:
			size_t get();
		}
	
		property Mogre::PixelFormat Format
		{
		public:
			Mogre::PixelFormat get();
		}
	
		property size_t Height
		{
		public:
			size_t get();
		}
	
		property size_t Width
		{
		public:
			size_t get();
		}
	
		Mogre::PixelBox Lock( Mogre::Image::Box lockBox, Mogre::HardwareBuffer::LockOptions options );
	
		void* Lock( size_t offset, size_t length, Mogre::HardwareBuffer::LockOptions options );
	
		void ReadData( size_t offset, size_t length, void* pDest );
	
		void WriteData( size_t offset, size_t length, const void* pSource, bool discardWholeBuffer );
		void WriteData( size_t offset, size_t length, const void* pSource );
	
		void Blit( Mogre::HardwarePixelBufferSharedPtr^ src, Mogre::Image::Box srcBox, Mogre::Image::Box dstBox );
	
		void Blit( Mogre::HardwarePixelBufferSharedPtr^ src );
	
		void BlitFromMemory( Mogre::PixelBox src, Mogre::Image::Box dstBox );
	
		void BlitFromMemory( Mogre::PixelBox src );
	
		void BlitToMemory( Mogre::Image::Box srcBox, Mogre::PixelBox dst );
	
		void BlitToMemory( Mogre::PixelBox dst );
	
		Mogre::RenderTexture^ GetRenderTarget( size_t slice );
		Mogre::RenderTexture^ GetRenderTarget( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( HardwarePixelBuffer )
	
		//Protected Declarations
	protected public:
	
	};
	
	public ref class HardwarePixelBufferSharedPtr : public HardwarePixelBuffer
	{
	public protected:
			Ogre::HardwarePixelBufferSharedPtr* _sharedPtr;
	
		HardwarePixelBufferSharedPtr(Ogre::HardwarePixelBufferSharedPtr& sharedPtr) : HardwarePixelBuffer( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::HardwarePixelBufferSharedPtr(sharedPtr);
		}
	
		!HardwarePixelBufferSharedPtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~HardwarePixelBufferSharedPtr()
		{
			this->!HardwarePixelBufferSharedPtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( HardwarePixelBufferSharedPtr )
	
		HardwarePixelBufferSharedPtr(HardwarePixelBuffer^ obj) : HardwarePixelBuffer( obj->_native )
		{
			_sharedPtr = new Ogre::HardwarePixelBufferSharedPtr( static_cast<Ogre::HardwarePixelBuffer*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			HardwarePixelBufferSharedPtr^ clr = dynamic_cast<HardwarePixelBufferSharedPtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(HardwarePixelBufferSharedPtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (HardwarePixelBufferSharedPtr^ val1, HardwarePixelBufferSharedPtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (HardwarePixelBufferSharedPtr^ val1, HardwarePixelBufferSharedPtr^ val2)
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
	
		property HardwarePixelBuffer^ Target
		{
			HardwarePixelBuffer^ get()
			{
				return static_cast<Ogre::HardwarePixelBuffer*>(_native);
			}
		}
	};
	
	

}
