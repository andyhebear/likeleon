/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreImage.h"
#include "MogreDataStream.h"

namespace Mogre
{
	//################################################################
	//Image
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Image::Image( )
	{
		_createdByCLR = true;
		_native = new Ogre::Image();
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	Image::Image( Mogre::Image^ img )
	{
		_createdByCLR = true;
		_native = new Ogre::Image( img);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::uchar Image::BPP::get()
	{
		return static_cast<const Ogre::Image*>(_native)->getBPP( );
	}
	
	Mogre::uchar* Image::Data::get()
	{
		return static_cast<Ogre::Image*>(_native)->getData( );
	}
	
	size_t Image::Depth::get()
	{
		return static_cast<const Ogre::Image*>(_native)->getDepth( );
	}
	
	Mogre::PixelFormat Image::Format::get()
	{
		return (Mogre::PixelFormat)static_cast<const Ogre::Image*>(_native)->getFormat( );
	}
	
	bool Image::HasAlpha::get()
	{
		return static_cast<const Ogre::Image*>(_native)->getHasAlpha( );
	}
	
	size_t Image::Height::get()
	{
		return static_cast<const Ogre::Image*>(_native)->getHeight( );
	}
	
	size_t Image::NumFaces::get()
	{
		return static_cast<const Ogre::Image*>(_native)->getNumFaces( );
	}
	
	size_t Image::NumMipmaps::get()
	{
		return static_cast<const Ogre::Image*>(_native)->getNumMipmaps( );
	}
	
	size_t Image::RowSpan::get()
	{
		return static_cast<const Ogre::Image*>(_native)->getRowSpan( );
	}
	
	size_t Image::Size::get()
	{
		return static_cast<const Ogre::Image*>(_native)->getSize( );
	}
	
	size_t Image::Width::get()
	{
		return static_cast<const Ogre::Image*>(_native)->getWidth( );
	}
	
	
	Mogre::Image^ Image::FlipAroundY( )
	{
		return static_cast<Ogre::Image*>(_native)->flipAroundY( );
	}
	
	Mogre::Image^ Image::FlipAroundX( )
	{
		return static_cast<Ogre::Image*>(_native)->flipAroundX( );
	}
	
	Mogre::Image^ Image::LoadDynamicImage( Mogre::uchar* pData, size_t uWidth, size_t uHeight, size_t depth, Mogre::PixelFormat eFormat, bool autoDelete, size_t numFaces, size_t numMipMaps )
	{
		return static_cast<Ogre::Image*>(_native)->loadDynamicImage( pData, uWidth, uHeight, depth, (Ogre::PixelFormat)eFormat, autoDelete, numFaces, numMipMaps );
	}
	Mogre::Image^ Image::LoadDynamicImage( Mogre::uchar* pData, size_t uWidth, size_t uHeight, size_t depth, Mogre::PixelFormat eFormat, bool autoDelete, size_t numFaces )
	{
		return static_cast<Ogre::Image*>(_native)->loadDynamicImage( pData, uWidth, uHeight, depth, (Ogre::PixelFormat)eFormat, autoDelete, numFaces );
	}
	Mogre::Image^ Image::LoadDynamicImage( Mogre::uchar* pData, size_t uWidth, size_t uHeight, size_t depth, Mogre::PixelFormat eFormat, bool autoDelete )
	{
		return static_cast<Ogre::Image*>(_native)->loadDynamicImage( pData, uWidth, uHeight, depth, (Ogre::PixelFormat)eFormat, autoDelete );
	}
	Mogre::Image^ Image::LoadDynamicImage( Mogre::uchar* pData, size_t uWidth, size_t uHeight, size_t depth, Mogre::PixelFormat eFormat )
	{
		return static_cast<Ogre::Image*>(_native)->loadDynamicImage( pData, uWidth, uHeight, depth, (Ogre::PixelFormat)eFormat );
	}
	
	Mogre::Image^ Image::LoadDynamicImage( Mogre::uchar* pData, size_t uWidth, size_t uHeight, Mogre::PixelFormat eFormat )
	{
		return static_cast<Ogre::Image*>(_native)->loadDynamicImage( pData, uWidth, uHeight, (Ogre::PixelFormat)eFormat );
	}
	
	Mogre::Image^ Image::LoadRawData( Mogre::DataStreamPtr^ stream, size_t uWidth, size_t uHeight, size_t uDepth, Mogre::PixelFormat eFormat, size_t numFaces, size_t numMipMaps )
	{
		return static_cast<Ogre::Image*>(_native)->loadRawData( (Ogre::DataStreamPtr&)stream, uWidth, uHeight, uDepth, (Ogre::PixelFormat)eFormat, numFaces, numMipMaps );
	}
	Mogre::Image^ Image::LoadRawData( Mogre::DataStreamPtr^ stream, size_t uWidth, size_t uHeight, size_t uDepth, Mogre::PixelFormat eFormat, size_t numFaces )
	{
		return static_cast<Ogre::Image*>(_native)->loadRawData( (Ogre::DataStreamPtr&)stream, uWidth, uHeight, uDepth, (Ogre::PixelFormat)eFormat, numFaces );
	}
	Mogre::Image^ Image::LoadRawData( Mogre::DataStreamPtr^ stream, size_t uWidth, size_t uHeight, size_t uDepth, Mogre::PixelFormat eFormat )
	{
		return static_cast<Ogre::Image*>(_native)->loadRawData( (Ogre::DataStreamPtr&)stream, uWidth, uHeight, uDepth, (Ogre::PixelFormat)eFormat );
	}
	
	Mogre::Image^ Image::LoadRawData( Mogre::DataStreamPtr^ stream, size_t uWidth, size_t uHeight, Mogre::PixelFormat eFormat )
	{
		return static_cast<Ogre::Image*>(_native)->loadRawData( (Ogre::DataStreamPtr&)stream, uWidth, uHeight, (Ogre::PixelFormat)eFormat );
	}
	
	Mogre::Image^ Image::Load( String^ strFileName, String^ groupName )
	{
		DECLARE_NATIVE_STRING( o_strFileName, strFileName )
		DECLARE_NATIVE_STRING( o_groupName, groupName )
	
		return static_cast<Ogre::Image*>(_native)->load( o_strFileName, o_groupName );
	}
	
	Mogre::Image^ Image::Load( Mogre::DataStreamPtr^ stream, String^ type )
	{
		DECLARE_NATIVE_STRING( o_type, type )
	
		return static_cast<Ogre::Image*>(_native)->load( (Ogre::DataStreamPtr&)stream, o_type );
	}
	
	void Image::Save( String^ filename )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
	
		static_cast<Ogre::Image*>(_native)->save( o_filename );
	}
	
	bool Image::HasFlag( Mogre::ImageFlags imgFlag )
	{
		return static_cast<const Ogre::Image*>(_native)->hasFlag( (Ogre::ImageFlags)imgFlag );
	}
	
	Mogre::ColourValue Image::GetColourAt( int x, int y, int z )
	{
		return static_cast<Ogre::Image*>(_native)->getColourAt( x, y, z );
	}
	
	Mogre::PixelBox Image::GetPixelBox( size_t face, size_t mipmap )
	{
		return static_cast<const Ogre::Image*>(_native)->getPixelBox( face, mipmap );
	}
	Mogre::PixelBox Image::GetPixelBox( size_t face )
	{
		return static_cast<const Ogre::Image*>(_native)->getPixelBox( face );
	}
	Mogre::PixelBox Image::GetPixelBox( )
	{
		return static_cast<const Ogre::Image*>(_native)->getPixelBox( );
	}
	
	void Image::Resize( Mogre::ushort width, Mogre::ushort height, Mogre::Image::Filter filter )
	{
		static_cast<Ogre::Image*>(_native)->resize( width, height, (Ogre::Image::Filter)filter );
	}
	void Image::Resize( Mogre::ushort width, Mogre::ushort height )
	{
		static_cast<Ogre::Image*>(_native)->resize( width, height );
	}
	
	void Image::ApplyGamma( [Out] Mogre::uchar% buffer, Mogre::Real gamma, size_t size, Mogre::uchar bpp )
	{
		pin_ptr<Mogre::uchar> p_buffer = &buffer;
	
		Ogre::Image::applyGamma( p_buffer, gamma, size, bpp );
	}
	
	void Image::Scale( Mogre::PixelBox src, Mogre::PixelBox dst, Mogre::Image::Filter filter )
	{
		Ogre::Image::scale( src, dst, (Ogre::Image::Filter)filter );
	}
	void Image::Scale( Mogre::PixelBox src, Mogre::PixelBox dst )
	{
		Ogre::Image::scale( src, dst );
	}
	
	size_t Image::CalculateSize( size_t mipmaps, size_t faces, size_t width, size_t height, size_t depth, Mogre::PixelFormat format )
	{
		return Ogre::Image::calculateSize( mipmaps, faces, width, height, depth, (Ogre::PixelFormat)format );
	}
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDTYPE Mogre::Image^
	#define STLDECL_NATIVETYPE Ogre::Image*
	CPP_DECLARE_STLVECTOR( , ImagePtrList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE Mogre::Image^
	#define STLDECL_NATIVETYPE const Ogre::Image*
	CPP_DECLARE_STLVECTOR( , ConstImagePtrList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	

}
