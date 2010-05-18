/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreBorderPanelOverlayElement.h"
#include "MogreRenderQueue.h"
#include "MogreRenderable.h"
#include "MogreMaterial.h"
#include "MogreRenderOperation.h"
#include "MogreCamera.h"
#include "MogreCommon.h"
#include "MogreTechnique.h"
#include "MogrePlane.h"
#include "MogreGpuProgram.h"

namespace Mogre
{
	//################################################################
	//BorderPanelOverlayElement
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	BorderPanelOverlayElement::BorderPanelOverlayElement( String^ name ) : PanelOverlayElement((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::BorderPanelOverlayElement( o_name);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	String^ BorderPanelOverlayElement::BorderMaterialName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::BorderPanelOverlayElement*>(_native)->getBorderMaterialName( ) );
	}
	void BorderPanelOverlayElement::BorderMaterialName::set( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::BorderPanelOverlayElement*>(_native)->setBorderMaterialName( o_name );
	}
	
	Mogre::Real BorderPanelOverlayElement::BottomBorderSize::get()
	{
		return static_cast<const Ogre::BorderPanelOverlayElement*>(_native)->getBottomBorderSize( );
	}
	
	String^ BorderPanelOverlayElement::BottomBorderUVString::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::BorderPanelOverlayElement*>(_native)->getBottomBorderUVString( ) );
	}
	
	String^ BorderPanelOverlayElement::BottomLeftBorderUVString::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::BorderPanelOverlayElement*>(_native)->getBottomLeftBorderUVString( ) );
	}
	
	String^ BorderPanelOverlayElement::BottomRightBorderUVString::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::BorderPanelOverlayElement*>(_native)->getBottomRightBorderUVString( ) );
	}
	
	Mogre::Real BorderPanelOverlayElement::LeftBorderSize::get()
	{
		return static_cast<const Ogre::BorderPanelOverlayElement*>(_native)->getLeftBorderSize( );
	}
	
	String^ BorderPanelOverlayElement::LeftBorderUVString::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::BorderPanelOverlayElement*>(_native)->getLeftBorderUVString( ) );
	}
	
	Mogre::GuiMetricsMode BorderPanelOverlayElement::MetricsMode::get()
	{
		return (Mogre::GuiMetricsMode)static_cast<const Ogre::BorderPanelOverlayElement*>(_native)->getMetricsMode( );
	}
	void BorderPanelOverlayElement::MetricsMode::set( Mogre::GuiMetricsMode gmm )
	{
		static_cast<Ogre::BorderPanelOverlayElement*>(_native)->setMetricsMode( (Ogre::GuiMetricsMode)gmm );
	}
	
	Mogre::Real BorderPanelOverlayElement::RightBorderSize::get()
	{
		return static_cast<const Ogre::BorderPanelOverlayElement*>(_native)->getRightBorderSize( );
	}
	
	String^ BorderPanelOverlayElement::RightBorderUVString::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::BorderPanelOverlayElement*>(_native)->getRightBorderUVString( ) );
	}
	
	Mogre::Real BorderPanelOverlayElement::TopBorderSize::get()
	{
		return static_cast<const Ogre::BorderPanelOverlayElement*>(_native)->getTopBorderSize( );
	}
	
	String^ BorderPanelOverlayElement::TopBorderUVString::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::BorderPanelOverlayElement*>(_native)->getTopBorderUVString( ) );
	}
	
	String^ BorderPanelOverlayElement::TopLeftBorderUVString::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::BorderPanelOverlayElement*>(_native)->getTopLeftBorderUVString( ) );
	}
	
	String^ BorderPanelOverlayElement::TopRightBorderUVString::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::BorderPanelOverlayElement*>(_native)->getTopRightBorderUVString( ) );
	}
	
	String^ BorderPanelOverlayElement::TypeName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::BorderPanelOverlayElement*>(_native)->getTypeName( ) );
	}
	
	void BorderPanelOverlayElement::Initialise( )
	{
		static_cast<Ogre::BorderPanelOverlayElement*>(_native)->initialise( );
	}
	
	void BorderPanelOverlayElement::SetBorderSize( Mogre::Real size )
	{
		static_cast<Ogre::BorderPanelOverlayElement*>(_native)->setBorderSize( size );
	}
	
	void BorderPanelOverlayElement::SetBorderSize( Mogre::Real sides, Mogre::Real topAndBottom )
	{
		static_cast<Ogre::BorderPanelOverlayElement*>(_native)->setBorderSize( sides, topAndBottom );
	}
	
	void BorderPanelOverlayElement::SetBorderSize( Mogre::Real left, Mogre::Real right, Mogre::Real top, Mogre::Real bottom )
	{
		static_cast<Ogre::BorderPanelOverlayElement*>(_native)->setBorderSize( left, right, top, bottom );
	}
	
	void BorderPanelOverlayElement::SetLeftBorderUV( Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2 )
	{
		static_cast<Ogre::BorderPanelOverlayElement*>(_native)->setLeftBorderUV( u1, v1, u2, v2 );
	}
	
	void BorderPanelOverlayElement::SetRightBorderUV( Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2 )
	{
		static_cast<Ogre::BorderPanelOverlayElement*>(_native)->setRightBorderUV( u1, v1, u2, v2 );
	}
	
	void BorderPanelOverlayElement::SetTopBorderUV( Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2 )
	{
		static_cast<Ogre::BorderPanelOverlayElement*>(_native)->setTopBorderUV( u1, v1, u2, v2 );
	}
	
	void BorderPanelOverlayElement::SetBottomBorderUV( Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2 )
	{
		static_cast<Ogre::BorderPanelOverlayElement*>(_native)->setBottomBorderUV( u1, v1, u2, v2 );
	}
	
	void BorderPanelOverlayElement::SetTopLeftBorderUV( Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2 )
	{
		static_cast<Ogre::BorderPanelOverlayElement*>(_native)->setTopLeftBorderUV( u1, v1, u2, v2 );
	}
	
	void BorderPanelOverlayElement::SetTopRightBorderUV( Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2 )
	{
		static_cast<Ogre::BorderPanelOverlayElement*>(_native)->setTopRightBorderUV( u1, v1, u2, v2 );
	}
	
	void BorderPanelOverlayElement::SetBottomLeftBorderUV( Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2 )
	{
		static_cast<Ogre::BorderPanelOverlayElement*>(_native)->setBottomLeftBorderUV( u1, v1, u2, v2 );
	}
	
	void BorderPanelOverlayElement::SetBottomRightBorderUV( Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2 )
	{
		static_cast<Ogre::BorderPanelOverlayElement*>(_native)->setBottomRightBorderUV( u1, v1, u2, v2 );
	}
	
	void BorderPanelOverlayElement::_updateRenderQueue( Mogre::RenderQueue^ queue )
	{
		static_cast<Ogre::BorderPanelOverlayElement*>(_native)->_updateRenderQueue( queue );
	}
	
	void BorderPanelOverlayElement::_update( )
	{
		static_cast<Ogre::BorderPanelOverlayElement*>(_native)->_update( );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//BorderRenderable
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::Renderable* BorderRenderable::_IRenderable_GetNativePtr()
	{
		return static_cast<Ogre::Renderable*>( static_cast<Ogre::BorderRenderable*>(_native) );
	}
	
	
	//Public Declarations
	BorderRenderable::BorderRenderable( Mogre::BorderPanelOverlayElement^ parent ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::BorderRenderable( parent);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	unsigned short BorderRenderable::NumWorldTransforms::get()
	{
		return static_cast<const Ogre::BorderRenderable*>(_native)->getNumWorldTransforms( );
	}
	
	bool BorderRenderable::PolygonModeOverrideable::get()
	{
		return static_cast<const Ogre::BorderRenderable*>(_native)->getPolygonModeOverrideable( );
	}
	void BorderRenderable::PolygonModeOverrideable::set( bool override )
	{
		static_cast<Ogre::BorderRenderable*>(_native)->setPolygonModeOverrideable( override );
	}
	
	Mogre::Quaternion BorderRenderable::WorldOrientation::get()
	{
		return static_cast<const Ogre::BorderRenderable*>(_native)->getWorldOrientation( );
	}
	
	Mogre::Vector3 BorderRenderable::WorldPosition::get()
	{
		return static_cast<const Ogre::BorderRenderable*>(_native)->getWorldPosition( );
	}
	
	Mogre::MaterialPtr^ BorderRenderable::GetMaterial( )
	{
		return static_cast<const Ogre::BorderRenderable*>(_native)->getMaterial( );
	}
	
	void BorderRenderable::GetRenderOperation( Mogre::RenderOperation^ op )
	{
		static_cast<Ogre::BorderRenderable*>(_native)->getRenderOperation( op );
	}
	
	void BorderRenderable::GetWorldTransforms( Mogre::Matrix4::NativeValue* xform )
	{
		Ogre::Matrix4* o_xform = reinterpret_cast<Ogre::Matrix4*>(xform);
	
		static_cast<const Ogre::BorderRenderable*>(_native)->getWorldTransforms( o_xform );
	}
	
	Mogre::Real BorderRenderable::GetSquaredViewDepth( Mogre::Camera^ cam )
	{
		return static_cast<const Ogre::BorderRenderable*>(_native)->getSquaredViewDepth( cam );
	}
	
	Mogre::Const_LightList^ BorderRenderable::GetLights( )
	{
		return static_cast<const Ogre::BorderRenderable*>(_native)->getLights( );
	}
	
	//------------------------------------------------------------
	// Implementation for IRenderable
	//------------------------------------------------------------
	
	bool BorderRenderable::CastsShadows::get()
	{
		return static_cast<const Ogre::BorderRenderable*>(_native)->getCastsShadows( );
	}
	
	bool BorderRenderable::NormaliseNormals::get()
	{
		return static_cast<const Ogre::BorderRenderable*>(_native)->getNormaliseNormals( );
	}
	
	Mogre::Technique^ BorderRenderable::Technique::get()
	{
		return static_cast<const Ogre::BorderRenderable*>(_native)->getTechnique( );
	}
	
	bool BorderRenderable::UseIdentityProjection::get()
	{
		return static_cast<const Ogre::BorderRenderable*>(_native)->getUseIdentityProjection( );
	}
	void BorderRenderable::UseIdentityProjection::set( bool useIdentityProjection )
	{
		static_cast<Ogre::BorderRenderable*>(_native)->setUseIdentityProjection( useIdentityProjection );
	}
	
	bool BorderRenderable::UseIdentityView::get()
	{
		return static_cast<const Ogre::BorderRenderable*>(_native)->getUseIdentityView( );
	}
	void BorderRenderable::UseIdentityView::set( bool useIdentityView )
	{
		static_cast<Ogre::BorderRenderable*>(_native)->setUseIdentityView( useIdentityView );
	}
	
	Mogre::Const_PlaneList^ BorderRenderable::GetClipPlanes( )
	{
		return static_cast<const Ogre::BorderRenderable*>(_native)->getClipPlanes( );
	}
	
	void BorderRenderable::SetCustomParameter( size_t index, Mogre::Vector4 value )
	{
		static_cast<Ogre::BorderRenderable*>(_native)->setCustomParameter( index, value );
	}
	
	Mogre::Vector4 BorderRenderable::GetCustomParameter( size_t index )
	{
		return static_cast<const Ogre::BorderRenderable*>(_native)->getCustomParameter( index );
	}
	
	void BorderRenderable::_updateCustomGpuParameter( Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params )
	{
		static_cast<const Ogre::BorderRenderable*>(_native)->_updateCustomGpuParameter( constantEntry, params );
	}
	
	
	//Protected Declarations
	
	

}
