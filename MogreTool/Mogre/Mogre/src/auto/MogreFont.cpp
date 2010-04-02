/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreFont.h"
#include "MogreResource.h"
#include "MogreResourceManager.h"
#include "MogreMaterial.h"

namespace Mogre
{
	//################################################################
	//Font
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Pair<Mogre::Font::CodePoint, Mogre::Font::CodePoint>
	#define STLDECL_NATIVETYPE Ogre::Font::CodePointRange
	CPP_DECLARE_STLVECTOR( Font::, CodePointRangeList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	//Private Declarations
	
	//Internal Declarations
	Ogre::ManualResourceLoader* Font::_IManualResourceLoader_GetNativePtr()
	{
		return static_cast<Ogre::ManualResourceLoader*>( static_cast<Ogre::Font*>(_native) );
	}
	
	
	//Public Declarations
	Font::Font( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader ) : Resource((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		_native = new Ogre::Font( creator, o_name, handle, o_group, isManual, loader);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	Font::Font( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual ) : Resource((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		_native = new Ogre::Font( creator, o_name, handle, o_group, isManual);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	Font::Font( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group ) : Resource((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		_native = new Ogre::Font( creator, o_name, handle, o_group);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	bool Font::AntialiasColour::get()
	{
		return static_cast<const Ogre::Font*>(_native)->getAntialiasColour( );
	}
	void Font::AntialiasColour::set( bool enabled )
	{
		static_cast<Ogre::Font*>(_native)->setAntialiasColour( enabled );
	}
	
	String^ Font::Source::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Font*>(_native)->getSource( ) );
	}
	void Font::Source::set( String^ source )
	{
		DECLARE_NATIVE_STRING( o_source, source )
	
		static_cast<Ogre::Font*>(_native)->setSource( o_source );
	}
	
	Mogre::uint Font::TrueTypeResolution::get()
	{
		return static_cast<const Ogre::Font*>(_native)->getTrueTypeResolution( );
	}
	void Font::TrueTypeResolution::set( Mogre::uint ttfResolution )
	{
		static_cast<Ogre::Font*>(_native)->setTrueTypeResolution( ttfResolution );
	}
	
	Mogre::Real Font::TrueTypeSize::get()
	{
		return static_cast<const Ogre::Font*>(_native)->getTrueTypeSize( );
	}
	void Font::TrueTypeSize::set( Mogre::Real ttfSize )
	{
		static_cast<Ogre::Font*>(_native)->setTrueTypeSize( ttfSize );
	}
	
	Mogre::FontType Font::Type::get()
	{
		return (Mogre::FontType)static_cast<const Ogre::Font*>(_native)->getType( );
	}
	void Font::Type::set( Mogre::FontType ftype )
	{
		static_cast<Ogre::Font*>(_native)->setType( (Ogre::FontType)ftype );
	}
	
	Mogre::Font::UVRect Font::GetGlyphTexCoords( Mogre::Font::CodePoint id )
	{
		return static_cast<const Ogre::Font*>(_native)->getGlyphTexCoords( id );
	}
	
	void Font::SetGlyphTexCoords( Mogre::Font::CodePoint id, Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2, Mogre::Real textureAspect )
	{
		static_cast<Ogre::Font*>(_native)->setGlyphTexCoords( id, u1, v1, u2, v2, textureAspect );
	}
	
	Mogre::Real Font::GetGlyphAspectRatio( Mogre::Font::CodePoint id )
	{
		return static_cast<const Ogre::Font*>(_native)->getGlyphAspectRatio( id );
	}
	
	void Font::SetGlyphAspectRatio( Mogre::Font::CodePoint id, Mogre::Real ratio )
	{
		static_cast<Ogre::Font*>(_native)->setGlyphAspectRatio( id, ratio );
	}
	
	Mogre::Font::GlyphInfo Font::GetGlyphInfo( Mogre::Font::CodePoint id )
	{
		return static_cast<const Ogre::Font*>(_native)->getGlyphInfo( id );
	}
	
	void Font::AddCodePointRange( Pair<Mogre::Font::CodePoint, Mogre::Font::CodePoint> range )
	{
		static_cast<Ogre::Font*>(_native)->addCodePointRange( ToNative<Pair<Mogre::Font::CodePoint, Mogre::Font::CodePoint>, Ogre::Font::CodePointRange>( range) );
	}
	
	void Font::ClearCodePointRanges( )
	{
		static_cast<Ogre::Font*>(_native)->clearCodePointRanges( );
	}
	
	Mogre::Font::Const_CodePointRangeList^ Font::GetCodePointRangeList( )
	{
		return static_cast<const Ogre::Font*>(_native)->getCodePointRangeList( );
	}
	
	Mogre::MaterialPtr^ Font::GetMaterial( )
	{
		return static_cast<Ogre::Font*>(_native)->getMaterial( );
	}
	
	void Font::LoadResource( Mogre::Resource^ resource )
	{
		static_cast<Ogre::Font*>(_native)->loadResource( resource );
	}
	
	//------------------------------------------------------------
	// Implementation for IManualResourceLoader
	//------------------------------------------------------------
	
	
	//Protected Declarations
	
	

}
