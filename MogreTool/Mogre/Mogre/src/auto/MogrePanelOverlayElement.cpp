/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogrePanelOverlayElement.h"
#include "MogreRenderOperation.h"
#include "MogreRenderQueue.h"

namespace Mogre
{
	//################################################################
	//PanelOverlayElement
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	PanelOverlayElement::PanelOverlayElement( String^ name ) : OverlayContainer((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::PanelOverlayElement( o_name);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	bool PanelOverlayElement::IsTransparent::get()
	{
		return static_cast<const Ogre::PanelOverlayElement*>(_native)->isTransparent( );
	}
	
	String^ PanelOverlayElement::MaterialName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::PanelOverlayElement*>(_native)->getMaterialName( ) );
	}
	void PanelOverlayElement::MaterialName::set( String^ matName )
	{
		DECLARE_NATIVE_STRING( o_matName, matName )
	
		static_cast<Ogre::PanelOverlayElement*>(_native)->setMaterialName( o_matName );
	}
	
	String^ PanelOverlayElement::TypeName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::PanelOverlayElement*>(_native)->getTypeName( ) );
	}
	
	void PanelOverlayElement::Initialise( )
	{
		static_cast<Ogre::PanelOverlayElement*>(_native)->initialise( );
	}
	
	void PanelOverlayElement::SetTiling( Mogre::Real x, Mogre::Real y, Mogre::ushort layer )
	{
		static_cast<Ogre::PanelOverlayElement*>(_native)->setTiling( x, y, layer );
	}
	void PanelOverlayElement::SetTiling( Mogre::Real x, Mogre::Real y )
	{
		static_cast<Ogre::PanelOverlayElement*>(_native)->setTiling( x, y );
	}
	
	Mogre::Real PanelOverlayElement::GetTileX( Mogre::ushort layer )
	{
		return static_cast<const Ogre::PanelOverlayElement*>(_native)->getTileX( layer );
	}
	Mogre::Real PanelOverlayElement::GetTileX( )
	{
		return static_cast<const Ogre::PanelOverlayElement*>(_native)->getTileX( );
	}
	
	Mogre::Real PanelOverlayElement::GetTileY( Mogre::ushort layer )
	{
		return static_cast<const Ogre::PanelOverlayElement*>(_native)->getTileY( layer );
	}
	Mogre::Real PanelOverlayElement::GetTileY( )
	{
		return static_cast<const Ogre::PanelOverlayElement*>(_native)->getTileY( );
	}
	
	void PanelOverlayElement::SetUV( Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2 )
	{
		static_cast<Ogre::PanelOverlayElement*>(_native)->setUV( u1, v1, u2, v2 );
	}
	
	void PanelOverlayElement::GetUV( [Out] Mogre::Real% u1, [Out] Mogre::Real% v1, [Out] Mogre::Real% u2, [Out] Mogre::Real% v2 )
	{
		pin_ptr<Mogre::Real> p_u1 = &u1;
		pin_ptr<Mogre::Real> p_v1 = &v1;
		pin_ptr<Mogre::Real> p_u2 = &u2;
		pin_ptr<Mogre::Real> p_v2 = &v2;
	
		static_cast<const Ogre::PanelOverlayElement*>(_native)->getUV( *p_u1, *p_v1, *p_u2, *p_v2 );
	}
	
	void PanelOverlayElement::SetTransparent( bool isTransparent )
	{
		static_cast<Ogre::PanelOverlayElement*>(_native)->setTransparent( isTransparent );
	}
	
	void PanelOverlayElement::GetRenderOperation( Mogre::RenderOperation^ op )
	{
		static_cast<Ogre::PanelOverlayElement*>(_native)->getRenderOperation( op );
	}
	
	void PanelOverlayElement::_updateRenderQueue( Mogre::RenderQueue^ queue )
	{
		static_cast<Ogre::PanelOverlayElement*>(_native)->_updateRenderQueue( queue );
	}
	
	
	//Protected Declarations
	
	

}
