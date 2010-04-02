/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreImageCodec.h"

namespace Mogre
{
	//################################################################
	//ImageCodec
	//################################################################
	
	//Nested Types
	//################################################################
	//ImageData
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	ImageCodec::ImageData::ImageData( ) : CodecData((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::ImageCodec::ImageData();
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	size_t ImageCodec::ImageData::height::get()
	{
		return static_cast<Ogre::ImageCodec::ImageData*>(_native)->height;
	}
	void ImageCodec::ImageData::height::set( size_t value )
	{
		static_cast<Ogre::ImageCodec::ImageData*>(_native)->height = value;
	}
	
	size_t ImageCodec::ImageData::width::get()
	{
		return static_cast<Ogre::ImageCodec::ImageData*>(_native)->width;
	}
	void ImageCodec::ImageData::width::set( size_t value )
	{
		static_cast<Ogre::ImageCodec::ImageData*>(_native)->width = value;
	}
	
	size_t ImageCodec::ImageData::depth::get()
	{
		return static_cast<Ogre::ImageCodec::ImageData*>(_native)->depth;
	}
	void ImageCodec::ImageData::depth::set( size_t value )
	{
		static_cast<Ogre::ImageCodec::ImageData*>(_native)->depth = value;
	}
	
	size_t ImageCodec::ImageData::size::get()
	{
		return static_cast<Ogre::ImageCodec::ImageData*>(_native)->size;
	}
	void ImageCodec::ImageData::size::set( size_t value )
	{
		static_cast<Ogre::ImageCodec::ImageData*>(_native)->size = value;
	}
	
	Mogre::ushort ImageCodec::ImageData::num_mipmaps::get()
	{
		return static_cast<Ogre::ImageCodec::ImageData*>(_native)->num_mipmaps;
	}
	void ImageCodec::ImageData::num_mipmaps::set( Mogre::ushort value )
	{
		static_cast<Ogre::ImageCodec::ImageData*>(_native)->num_mipmaps = value;
	}
	
	Mogre::uint ImageCodec::ImageData::flags::get()
	{
		return static_cast<Ogre::ImageCodec::ImageData*>(_native)->flags;
	}
	void ImageCodec::ImageData::flags::set( Mogre::uint value )
	{
		static_cast<Ogre::ImageCodec::ImageData*>(_native)->flags = value;
	}
	
	Mogre::PixelFormat ImageCodec::ImageData::format::get()
	{
		return (Mogre::PixelFormat)static_cast<Ogre::ImageCodec::ImageData*>(_native)->format;
	}
	void ImageCodec::ImageData::format::set( Mogre::PixelFormat value )
	{
		static_cast<Ogre::ImageCodec::ImageData*>(_native)->format = (Ogre::PixelFormat)value;
	}
	
	String^ ImageCodec::ImageData::DataType( )
	{
		return TO_CLR_STRING( static_cast<const Ogre::ImageCodec::ImageData*>(_native)->dataType( ) );
	}
	
	
	//Protected Declarations
	
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	String^ ImageCodec::DataType::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ImageCodec*>(_native)->getDataType( ) );
	}
	
	
	//Protected Declarations
	
	

}
