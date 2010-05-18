/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreHardwareBufferManager.h"
#include "MogreHardwareVertexBuffer.h"
#include "MogreHardwareIndexBuffer.h"

namespace Mogre
{
	//################################################################
	//HardwareBufferManager
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Mogre::HardwareVertexBufferSharedPtr^ HardwareBufferManager::CreateVertexBuffer( size_t vertexSize, size_t numVerts, Mogre::HardwareBuffer::Usage usage, bool useShadowBuffer )
	{
		return static_cast<Ogre::HardwareBufferManager*>(_native)->createVertexBuffer( vertexSize, numVerts, (Ogre::HardwareBuffer::Usage)usage, useShadowBuffer );
	}
	Mogre::HardwareVertexBufferSharedPtr^ HardwareBufferManager::CreateVertexBuffer( size_t vertexSize, size_t numVerts, Mogre::HardwareBuffer::Usage usage )
	{
		return static_cast<Ogre::HardwareBufferManager*>(_native)->createVertexBuffer( vertexSize, numVerts, (Ogre::HardwareBuffer::Usage)usage );
	}
	
	Mogre::HardwareIndexBufferSharedPtr^ HardwareBufferManager::CreateIndexBuffer( Mogre::HardwareIndexBuffer::IndexType itype, size_t numIndexes, Mogre::HardwareBuffer::Usage usage, bool useShadowBuffer )
	{
		return static_cast<Ogre::HardwareBufferManager*>(_native)->createIndexBuffer( (Ogre::HardwareIndexBuffer::IndexType)itype, numIndexes, (Ogre::HardwareBuffer::Usage)usage, useShadowBuffer );
	}
	Mogre::HardwareIndexBufferSharedPtr^ HardwareBufferManager::CreateIndexBuffer( Mogre::HardwareIndexBuffer::IndexType itype, size_t numIndexes, Mogre::HardwareBuffer::Usage usage )
	{
		return static_cast<Ogre::HardwareBufferManager*>(_native)->createIndexBuffer( (Ogre::HardwareIndexBuffer::IndexType)itype, numIndexes, (Ogre::HardwareBuffer::Usage)usage );
	}
	
	Mogre::VertexDeclaration^ HardwareBufferManager::CreateVertexDeclaration( )
	{
		return static_cast<Ogre::HardwareBufferManager*>(_native)->createVertexDeclaration( );
	}
	
	void HardwareBufferManager::DestroyVertexDeclaration( Mogre::VertexDeclaration^ decl )
	{
		static_cast<Ogre::HardwareBufferManager*>(_native)->destroyVertexDeclaration( decl );
	}
	
	Mogre::VertexBufferBinding^ HardwareBufferManager::CreateVertexBufferBinding( )
	{
		return static_cast<Ogre::HardwareBufferManager*>(_native)->createVertexBufferBinding( );
	}
	
	void HardwareBufferManager::DestroyVertexBufferBinding( Mogre::VertexBufferBinding^ binding )
	{
		static_cast<Ogre::HardwareBufferManager*>(_native)->destroyVertexBufferBinding( binding );
	}
	
	void HardwareBufferManager::RegisterVertexBufferSourceAndCopy( Mogre::HardwareVertexBufferSharedPtr^ sourceBuffer, Mogre::HardwareVertexBufferSharedPtr^ copy )
	{
		static_cast<Ogre::HardwareBufferManager*>(_native)->registerVertexBufferSourceAndCopy( (const Ogre::HardwareVertexBufferSharedPtr&)sourceBuffer, (const Ogre::HardwareVertexBufferSharedPtr&)copy );
	}
	
	void HardwareBufferManager::ReleaseVertexBufferCopy( Mogre::HardwareVertexBufferSharedPtr^ bufferCopy )
	{
		static_cast<Ogre::HardwareBufferManager*>(_native)->releaseVertexBufferCopy( (const Ogre::HardwareVertexBufferSharedPtr&)bufferCopy );
	}
	
	void HardwareBufferManager::TouchVertexBufferCopy( Mogre::HardwareVertexBufferSharedPtr^ bufferCopy )
	{
		static_cast<Ogre::HardwareBufferManager*>(_native)->touchVertexBufferCopy( (const Ogre::HardwareVertexBufferSharedPtr&)bufferCopy );
	}
	
	void HardwareBufferManager::_freeUnusedBufferCopies( )
	{
		static_cast<Ogre::HardwareBufferManager*>(_native)->_freeUnusedBufferCopies( );
	}
	
	void HardwareBufferManager::_releaseBufferCopies( bool forceFreeUnused )
	{
		static_cast<Ogre::HardwareBufferManager*>(_native)->_releaseBufferCopies( forceFreeUnused );
	}
	void HardwareBufferManager::_releaseBufferCopies( )
	{
		static_cast<Ogre::HardwareBufferManager*>(_native)->_releaseBufferCopies( );
	}
	
	void HardwareBufferManager::_notifyVertexBufferDestroyed( Mogre::HardwareVertexBuffer^ buf )
	{
		static_cast<Ogre::HardwareBufferManager*>(_native)->_notifyVertexBufferDestroyed( buf );
	}
	
	void HardwareBufferManager::_notifyIndexBufferDestroyed( Mogre::HardwareIndexBuffer^ buf )
	{
		static_cast<Ogre::HardwareBufferManager*>(_native)->_notifyIndexBufferDestroyed( buf );
	}
	
	
	//Protected Declarations
	
	

}
