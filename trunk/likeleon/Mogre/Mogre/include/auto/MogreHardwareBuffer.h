/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreHardwareBuffer.h"

namespace Mogre
{
	//################################################################
	//HardwareBuffer
	//################################################################
	
	public ref class HardwareBuffer : public Wrapper
	{
		//Nested Types
	
		public: enum class Usage
		{
			HBU_STATIC = Ogre::HardwareBuffer::HBU_STATIC,
			HBU_DYNAMIC = Ogre::HardwareBuffer::HBU_DYNAMIC,
			HBU_WRITE_ONLY = Ogre::HardwareBuffer::HBU_WRITE_ONLY,
			HBU_DISCARDABLE = Ogre::HardwareBuffer::HBU_DISCARDABLE,
			HBU_STATIC_WRITE_ONLY = Ogre::HardwareBuffer::HBU_STATIC_WRITE_ONLY,
			HBU_DYNAMIC_WRITE_ONLY = Ogre::HardwareBuffer::HBU_DYNAMIC_WRITE_ONLY,
			HBU_DYNAMIC_WRITE_ONLY_DISCARDABLE = Ogre::HardwareBuffer::HBU_DYNAMIC_WRITE_ONLY_DISCARDABLE
		};
	
		public: enum class LockOptions
		{
			HBL_NORMAL = Ogre::HardwareBuffer::HBL_NORMAL,
			HBL_DISCARD = Ogre::HardwareBuffer::HBL_DISCARD,
			HBL_READ_ONLY = Ogre::HardwareBuffer::HBL_READ_ONLY,
			HBL_NO_OVERWRITE = Ogre::HardwareBuffer::HBL_NO_OVERWRITE
		};
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		HardwareBuffer( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property bool HasShadowBuffer
		{
		public:
			bool get();
		}
	
		property bool IsLocked
		{
		public:
			bool get();
		}
	
		property bool IsSystemMemory
		{
		public:
			bool get();
		}
	
		property size_t SizeInBytes
		{
		public:
			size_t get();
		}
	
		void* Lock( size_t offset, size_t length, Mogre::HardwareBuffer::LockOptions options );
	
		void* Lock( Mogre::HardwareBuffer::LockOptions options );
	
		void Unlock( );
	
		void ReadData( size_t offset, size_t length, void* pDest );
	
		void WriteData( size_t offset, size_t length, const void* pSource, bool discardWholeBuffer );
		void WriteData( size_t offset, size_t length, const void* pSource );
	
		void CopyData( Mogre::HardwareBuffer^ srcBuffer, size_t srcOffset, size_t dstOffset, size_t length, bool discardWholeBuffer );
		void CopyData( Mogre::HardwareBuffer^ srcBuffer, size_t srcOffset, size_t dstOffset, size_t length );
	
		void _updateFromShadow( );
	
		Mogre::HardwareBuffer::Usage GetUsage( );
	
		void SuppressHardwareUpdate( bool suppress );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( HardwareBuffer )
	
		//Protected Declarations
	protected public:
	
	};
	

}
