/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreTextAreaOverlayElement.h"
#include "MogreRenderOperation.h"

namespace Mogre
{
	//################################################################
	//TextAreaOverlayElement
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	TextAreaOverlayElement::TextAreaOverlayElement( String^ name ) : OverlayElement((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::TextAreaOverlayElement( o_name);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	
	String^ TextAreaOverlayElement::Caption::get()
	{
		#ifdef OGRE_UNICODE_SUPPORT
			return UTF_TO_CLR_STRING( static_cast<const Ogre::TextAreaOverlayElement*>(_native)->getCaption( ) );
		#else
			return TO_CLR_STRING( static_cast<const Ogre::TextAreaOverlayElement*>(_native)->getCaption( ) );
		#endif
	}

	void TextAreaOverlayElement::Caption::set( String^ text )
	{
		#ifdef OGRE_UNICODE_SUPPORT
			DECLARE_NATIVE_UTFSTRING( o_text, text )
		#else
			DECLARE_NATIVE_STRING( o_text, text )
		#endif				
			
		static_cast<Ogre::TextAreaOverlayElement*>(_native)->setCaption( o_text);	
	}
	
	Mogre::Real TextAreaOverlayElement::CharHeight::get()
	{
		return static_cast<const Ogre::TextAreaOverlayElement*>(_native)->getCharHeight( );
	}
	void TextAreaOverlayElement::CharHeight::set( Mogre::Real height )
	{
		static_cast<Ogre::TextAreaOverlayElement*>(_native)->setCharHeight( height );
	}
	
	Mogre::ColourValue TextAreaOverlayElement::Colour::get()
	{
		return static_cast<const Ogre::TextAreaOverlayElement*>(_native)->getColour( );
	}
	void TextAreaOverlayElement::Colour::set( Mogre::ColourValue col )
	{
		static_cast<Ogre::TextAreaOverlayElement*>(_native)->setColour( col );
	}
	
	Mogre::ColourValue TextAreaOverlayElement::ColourBottom::get()
	{
		return static_cast<const Ogre::TextAreaOverlayElement*>(_native)->getColourBottom( );
	}
	void TextAreaOverlayElement::ColourBottom::set( Mogre::ColourValue col )
	{
		static_cast<Ogre::TextAreaOverlayElement*>(_native)->setColourBottom( col );
	}
	
	Mogre::ColourValue TextAreaOverlayElement::ColourTop::get()
	{
		return static_cast<const Ogre::TextAreaOverlayElement*>(_native)->getColourTop( );
	}
	void TextAreaOverlayElement::ColourTop::set( Mogre::ColourValue col )
	{
		static_cast<Ogre::TextAreaOverlayElement*>(_native)->setColourTop( col );
	}
	
	String^ TextAreaOverlayElement::FontName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::TextAreaOverlayElement*>(_native)->getFontName( ) );
	}
	void TextAreaOverlayElement::FontName::set( String^ font )
	{
		DECLARE_NATIVE_STRING( o_font, font )
	
		static_cast<Ogre::TextAreaOverlayElement*>(_native)->setFontName( o_font );
	}
	
	String^ TextAreaOverlayElement::MaterialName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::TextAreaOverlayElement*>(_native)->getMaterialName( ) );
	}
	void TextAreaOverlayElement::MaterialName::set( String^ matName )
	{
		DECLARE_NATIVE_STRING( o_matName, matName )
	
		static_cast<Ogre::TextAreaOverlayElement*>(_native)->setMaterialName( o_matName );
	}
	
	Mogre::GuiMetricsMode TextAreaOverlayElement::MetricsMode::get()
	{
		return (Mogre::GuiMetricsMode)static_cast<const Ogre::TextAreaOverlayElement*>(_native)->getMetricsMode( );
	}
	void TextAreaOverlayElement::MetricsMode::set( Mogre::GuiMetricsMode gmm )
	{
		static_cast<Ogre::TextAreaOverlayElement*>(_native)->setMetricsMode( (Ogre::GuiMetricsMode)gmm );
	}
	
	Mogre::Real TextAreaOverlayElement::SpaceWidth::get()
	{
		return static_cast<const Ogre::TextAreaOverlayElement*>(_native)->getSpaceWidth( );
	}
	void TextAreaOverlayElement::SpaceWidth::set( Mogre::Real width )
	{
		static_cast<Ogre::TextAreaOverlayElement*>(_native)->setSpaceWidth( width );
	}
	
	String^ TextAreaOverlayElement::TypeName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::TextAreaOverlayElement*>(_native)->getTypeName( ) );
	}
	
	void TextAreaOverlayElement::Initialise( )
	{
		static_cast<Ogre::TextAreaOverlayElement*>(_native)->initialise( );
	}
	
	void TextAreaOverlayElement::GetRenderOperation( Mogre::RenderOperation^ op )
	{
		static_cast<Ogre::TextAreaOverlayElement*>(_native)->getRenderOperation( op );
	}
	
	void TextAreaOverlayElement::SetAlignment( Mogre::TextAreaOverlayElement::Alignment a )
	{
		static_cast<Ogre::TextAreaOverlayElement*>(_native)->setAlignment( (Ogre::TextAreaOverlayElement::Alignment)a );
	}
	
	Mogre::TextAreaOverlayElement::Alignment TextAreaOverlayElement::GetAlignment( )
	{
		return (Mogre::TextAreaOverlayElement::Alignment)static_cast<const Ogre::TextAreaOverlayElement*>(_native)->getAlignment( );
	}
	
	void TextAreaOverlayElement::_update( )
	{
		static_cast<Ogre::TextAreaOverlayElement*>(_native)->_update( );
	}
	
	
	//Protected Declarations
	
	

}
