/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreTexture.h"
#include "MogreImage.h"
#include "MogreDataStream.h"
#include "MogreHardwarePixelBuffer.h"

namespace Mogre
{
	//################################################################
	//Texture
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	size_t Texture::Depth::get()
	{
		return static_cast<const Ogre::Texture*>(_native)->getDepth( );
	}
	void Texture::Depth::set( size_t d )
	{
		static_cast<Ogre::Texture*>(_native)->setDepth( d );
	}
	
	Mogre::ushort Texture::DesiredFloatBitDepth::get()
	{
		return static_cast<const Ogre::Texture*>(_native)->getDesiredFloatBitDepth( );
	}
	void Texture::DesiredFloatBitDepth::set( Mogre::ushort bits )
	{
		static_cast<Ogre::Texture*>(_native)->setDesiredFloatBitDepth( bits );
	}
	
	Mogre::PixelFormat Texture::DesiredFormat::get()
	{
		return (Mogre::PixelFormat)static_cast<const Ogre::Texture*>(_native)->getDesiredFormat( );
	}
	
	Mogre::ushort Texture::DesiredIntegerBitDepth::get()
	{
		return static_cast<const Ogre::Texture*>(_native)->getDesiredIntegerBitDepth( );
	}
	void Texture::DesiredIntegerBitDepth::set( Mogre::ushort bits )
	{
		static_cast<Ogre::Texture*>(_native)->setDesiredIntegerBitDepth( bits );
	}
	
	Mogre::PixelFormat Texture::Format::get()
	{
		return (Mogre::PixelFormat)static_cast<const Ogre::Texture*>(_native)->getFormat( );
	}
	void Texture::Format::set( Mogre::PixelFormat pf )
	{
		static_cast<Ogre::Texture*>(_native)->setFormat( (Ogre::PixelFormat)pf );
	}
	
	float Texture::Gamma::get()
	{
		return static_cast<const Ogre::Texture*>(_native)->getGamma( );
	}
	void Texture::Gamma::set( float g )
	{
		static_cast<Ogre::Texture*>(_native)->setGamma( g );
	}
	
	bool Texture::HasAlpha::get()
	{
		return static_cast<const Ogre::Texture*>(_native)->hasAlpha( );
	}
	
	size_t Texture::Height::get()
	{
		return static_cast<const Ogre::Texture*>(_native)->getHeight( );
	}
	void Texture::Height::set( size_t h )
	{
		static_cast<Ogre::Texture*>(_native)->setHeight( h );
	}
	
	bool Texture::MipmapsHardwareGenerated::get()
	{
		return static_cast<const Ogre::Texture*>(_native)->getMipmapsHardwareGenerated( );
	}
	
	size_t Texture::NumFaces::get()
	{
		return static_cast<const Ogre::Texture*>(_native)->getNumFaces( );
	}
	
	size_t Texture::NumMipmaps::get()
	{
		return static_cast<const Ogre::Texture*>(_native)->getNumMipmaps( );
	}
	void Texture::NumMipmaps::set( size_t num )
	{
		static_cast<Ogre::Texture*>(_native)->setNumMipmaps( num );
	}
	
	size_t Texture::SrcDepth::get()
	{
		return static_cast<const Ogre::Texture*>(_native)->getSrcDepth( );
	}
	
	Mogre::PixelFormat Texture::SrcFormat::get()
	{
		return (Mogre::PixelFormat)static_cast<const Ogre::Texture*>(_native)->getSrcFormat( );
	}
	
	size_t Texture::SrcHeight::get()
	{
		return static_cast<const Ogre::Texture*>(_native)->getSrcHeight( );
	}
	
	size_t Texture::SrcWidth::get()
	{
		return static_cast<const Ogre::Texture*>(_native)->getSrcWidth( );
	}
	
	Mogre::TextureType Texture::TextureType::get()
	{
		return (Mogre::TextureType)static_cast<const Ogre::Texture*>(_native)->getTextureType( );
	}
	void Texture::TextureType::set( Mogre::TextureType ttype )
	{
		static_cast<Ogre::Texture*>(_native)->setTextureType( (Ogre::TextureType)ttype );
	}
	
	bool Texture::TreatLuminanceAsAlpha::get()
	{
		return static_cast<const Ogre::Texture*>(_native)->getTreatLuminanceAsAlpha( );
	}
	void Texture::TreatLuminanceAsAlpha::set( bool asAlpha )
	{
		static_cast<Ogre::Texture*>(_native)->setTreatLuminanceAsAlpha( asAlpha );
	}
	
	int Texture::Usage::get()
	{
		return static_cast<const Ogre::Texture*>(_native)->getUsage( );
	}
	void Texture::Usage::set( int u )
	{
		static_cast<Ogre::Texture*>(_native)->setUsage( u );
	}
	
	size_t Texture::Width::get()
	{
		return static_cast<const Ogre::Texture*>(_native)->getWidth( );
	}
	void Texture::Width::set( size_t w )
	{
		static_cast<Ogre::Texture*>(_native)->setWidth( w );
	}
	
	void Texture::CreateInternalResources( )
	{
		static_cast<Ogre::Texture*>(_native)->createInternalResources( );
	}
	
	void Texture::FreeInternalResources( )
	{
		static_cast<Ogre::Texture*>(_native)->freeInternalResources( );
	}
	
	void Texture::CopyToTexture( Mogre::TexturePtr^ target )
	{
		static_cast<Ogre::Texture*>(_native)->copyToTexture( (Ogre::TexturePtr&)target );
	}
	
	void Texture::LoadImage( Mogre::Image^ img )
	{
		static_cast<Ogre::Texture*>(_native)->loadImage( img );
	}
	
	void Texture::LoadRawData( Mogre::DataStreamPtr^ stream, Mogre::ushort uWidth, Mogre::ushort uHeight, Mogre::PixelFormat eFormat )
	{
		static_cast<Ogre::Texture*>(_native)->loadRawData( (Ogre::DataStreamPtr&)stream, uWidth, uHeight, (Ogre::PixelFormat)eFormat );
	}
	
	void Texture::_loadImages( Mogre::Const_ConstImagePtrList^ images )
	{
		static_cast<Ogre::Texture*>(_native)->_loadImages( images );
	}
	
	void Texture::SetDesiredBitDepths( Mogre::ushort integerBits, Mogre::ushort floatBits )
	{
		static_cast<Ogre::Texture*>(_native)->setDesiredBitDepths( integerBits, floatBits );
	}
	
	Mogre::HardwarePixelBufferSharedPtr^ Texture::GetBuffer( size_t face, size_t mipmap )
	{
		return static_cast<Ogre::Texture*>(_native)->getBuffer( face, mipmap );
	}
	Mogre::HardwarePixelBufferSharedPtr^ Texture::GetBuffer( size_t face )
	{
		return static_cast<Ogre::Texture*>(_native)->getBuffer( face );
	}
	Mogre::HardwarePixelBufferSharedPtr^ Texture::GetBuffer( )
	{
		return static_cast<Ogre::Texture*>(_native)->getBuffer( );
	}
	
	
	//Protected Declarations
	
	

}
