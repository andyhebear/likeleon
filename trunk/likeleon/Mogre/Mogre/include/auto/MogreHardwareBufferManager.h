/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreHardwareBufferManager.h"
#include "MogreHardwareBuffer.h"
#include "MogreHardwareIndexBuffer.h"

namespace Mogre
{
	//################################################################
	//HardwareBufferManager
	//################################################################
	
	public ref class HardwareBufferManager
	{
		//Nested Types
	
		public: enum class BufferLicenseType
		{
			BLT_MANUAL_RELEASE = Ogre::HardwareBufferManager::BLT_MANUAL_RELEASE,
			BLT_AUTOMATIC_RELEASE = Ogre::HardwareBufferManager::BLT_AUTOMATIC_RELEASE
		};
	
		//Private Declarations
	private protected:
		static HardwareBufferManager^ _singleton;
		Ogre::HardwareBufferManager* _native;
		bool _createdByCLR;
	
		//Internal Declarations
	public protected:
		HardwareBufferManager( Ogre::HardwareBufferManager* obj ) : _native(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
		static property HardwareBufferManager^ Singleton
		{
			HardwareBufferManager^ get()
			{
				if (_singleton == CLR_NULL)
				{
					Ogre::HardwareBufferManager* ptr = Ogre::HardwareBufferManager::getSingletonPtr();
					if ( ptr ) _singleton = gcnew HardwareBufferManager( ptr );
				}
				return _singleton;
			}
		}
	
		Mogre::HardwareVertexBufferSharedPtr^ CreateVertexBuffer( size_t vertexSize, size_t numVerts, Mogre::HardwareBuffer::Usage usage, bool useShadowBuffer );
		Mogre::HardwareVertexBufferSharedPtr^ CreateVertexBuffer( size_t vertexSize, size_t numVerts, Mogre::HardwareBuffer::Usage usage );
	
		Mogre::HardwareIndexBufferSharedPtr^ CreateIndexBuffer( Mogre::HardwareIndexBuffer::IndexType itype, size_t numIndexes, Mogre::HardwareBuffer::Usage usage, bool useShadowBuffer );
		Mogre::HardwareIndexBufferSharedPtr^ CreateIndexBuffer( Mogre::HardwareIndexBuffer::IndexType itype, size_t numIndexes, Mogre::HardwareBuffer::Usage usage );
	
		Mogre::VertexDeclaration^ CreateVertexDeclaration( );
	
		void DestroyVertexDeclaration( Mogre::VertexDeclaration^ decl );
	
		Mogre::VertexBufferBinding^ CreateVertexBufferBinding( );
	
		void DestroyVertexBufferBinding( Mogre::VertexBufferBinding^ binding );
	
		void RegisterVertexBufferSourceAndCopy( Mogre::HardwareVertexBufferSharedPtr^ sourceBuffer, Mogre::HardwareVertexBufferSharedPtr^ copy );
	
		void ReleaseVertexBufferCopy( Mogre::HardwareVertexBufferSharedPtr^ bufferCopy );
	
		void TouchVertexBufferCopy( Mogre::HardwareVertexBufferSharedPtr^ bufferCopy );
	
		void _freeUnusedBufferCopies( );
	
		void _releaseBufferCopies( bool forceFreeUnused );
		void _releaseBufferCopies( );
	
		void _notifyVertexBufferDestroyed( Mogre::HardwareVertexBuffer^ buf );
	
		void _notifyIndexBufferDestroyed( Mogre::HardwareIndexBuffer^ buf );
	
	
		//Protected Declarations
	protected public:
	
	};
	

}
