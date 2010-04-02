/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreHardwarePixelBuffer.h"
#include "MogreRenderTexture.h"

namespace Mogre
{
	//################################################################
	//HardwarePixelBuffer
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Mogre::PixelBox HardwarePixelBuffer::CurrentLock::get()
	{
		return static_cast<Ogre::HardwarePixelBuffer*>(_native)->getCurrentLock( );
	}
	
	size_t HardwarePixelBuffer::Depth::get()
	{
		return static_cast<const Ogre::HardwarePixelBuffer*>(_native)->getDepth( );
	}
	
	Mogre::PixelFormat HardwarePixelBuffer::Format::get()
	{
		return (Mogre::PixelFormat)static_cast<const Ogre::HardwarePixelBuffer*>(_native)->getFormat( );
	}
	
	size_t HardwarePixelBuffer::Height::get()
	{
		return static_cast<const Ogre::HardwarePixelBuffer*>(_native)->getHeight( );
	}
	
	size_t HardwarePixelBuffer::Width::get()
	{
		return static_cast<const Ogre::HardwarePixelBuffer*>(_native)->getWidth( );
	}
	
	Mogre::PixelBox HardwarePixelBuffer::Lock( Mogre::Image::Box lockBox, Mogre::HardwareBuffer::LockOptions options )
	{
		return static_cast<Ogre::HardwarePixelBuffer*>(_native)->lock( lockBox, (Ogre::HardwareBuffer::LockOptions)options );
	}
	
	void* HardwarePixelBuffer::Lock( size_t offset, size_t length, Mogre::HardwareBuffer::LockOptions options )
	{
		return static_cast<Ogre::HardwarePixelBuffer*>(_native)->lock( offset, length, (Ogre::HardwareBuffer::LockOptions)options );
	}
	
	void HardwarePixelBuffer::ReadData( size_t offset, size_t length, void* pDest )
	{
		static_cast<Ogre::HardwarePixelBuffer*>(_native)->readData( offset, length, pDest );
	}
	
	void HardwarePixelBuffer::WriteData( size_t offset, size_t length, const void* pSource, bool discardWholeBuffer )
	{
		static_cast<Ogre::HardwarePixelBuffer*>(_native)->writeData( offset, length, pSource, discardWholeBuffer );
	}
	void HardwarePixelBuffer::WriteData( size_t offset, size_t length, const void* pSource )
	{
		static_cast<Ogre::HardwarePixelBuffer*>(_native)->writeData( offset, length, pSource );
	}
	
	void HardwarePixelBuffer::Blit( Mogre::HardwarePixelBufferSharedPtr^ src, Mogre::Image::Box srcBox, Mogre::Image::Box dstBox )
	{
		static_cast<Ogre::HardwarePixelBuffer*>(_native)->blit( (const Ogre::HardwarePixelBufferSharedPtr&)src, srcBox, dstBox );
	}
	
	void HardwarePixelBuffer::Blit( Mogre::HardwarePixelBufferSharedPtr^ src )
	{
		static_cast<Ogre::HardwarePixelBuffer*>(_native)->blit( (const Ogre::HardwarePixelBufferSharedPtr&)src );
	}
	
	void HardwarePixelBuffer::BlitFromMemory( Mogre::PixelBox src, Mogre::Image::Box dstBox )
	{
		static_cast<Ogre::HardwarePixelBuffer*>(_native)->blitFromMemory( src, dstBox );
	}
	
	void HardwarePixelBuffer::BlitFromMemory( Mogre::PixelBox src )
	{
		static_cast<Ogre::HardwarePixelBuffer*>(_native)->blitFromMemory( src );
	}
	
	void HardwarePixelBuffer::BlitToMemory( Mogre::Image::Box srcBox, Mogre::PixelBox dst )
	{
		static_cast<Ogre::HardwarePixelBuffer*>(_native)->blitToMemory( srcBox, dst );
	}
	
	void HardwarePixelBuffer::BlitToMemory( Mogre::PixelBox dst )
	{
		static_cast<Ogre::HardwarePixelBuffer*>(_native)->blitToMemory( dst );
	}
	
	Mogre::RenderTexture^ HardwarePixelBuffer::GetRenderTarget( size_t slice )
	{
		return static_cast<Ogre::HardwarePixelBuffer*>(_native)->getRenderTarget( slice );
	}
	Mogre::RenderTexture^ HardwarePixelBuffer::GetRenderTarget( )
	{
		return static_cast<Ogre::HardwarePixelBuffer*>(_native)->getRenderTarget( );
	}
	
	
	//Protected Declarations
	
	

}
