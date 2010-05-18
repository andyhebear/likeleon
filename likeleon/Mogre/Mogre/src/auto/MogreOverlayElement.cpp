/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreOverlayElement.h"
#include "MogreStringInterface.h"
#include "MogreRenderable.h"
#include "MogreOverlayContainer.h"
#include "MogreMaterial.h"
#include "MogreOverlay.h"
#include "MogreRenderQueue.h"
#include "MogreCamera.h"
#include "MogreCommon.h"
#include "MogreTechnique.h"
#include "MogreRenderOperation.h"
#include "MogrePlane.h"
#include "MogreGpuProgram.h"

namespace Mogre
{
	//################################################################
	//OverlayElement
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::StringInterface* OverlayElement::_IStringInterface_GetNativePtr()
	{
		return static_cast<Ogre::StringInterface*>( static_cast<Ogre::OverlayElement*>(_native) );
	}
	
	Ogre::Renderable* OverlayElement::_IRenderable_GetNativePtr()
	{
		return static_cast<Ogre::Renderable*>( static_cast<Ogre::OverlayElement*>(_native) );
	}
	
	
	//Public Declarations
	String^ OverlayElement::Caption::get()
	{
		#ifdef OGRE_UNICODE_SUPPORT
			return UTF_TO_CLR_STRING( static_cast<const Ogre::OverlayElement*>(_native)->getCaption( ) );
		#else
			return TO_CLR_STRING( static_cast<const Ogre::OverlayElement*>(_native)->getCaption( ) );		
		#endif
	}

	void OverlayElement::Caption::set( String^ text )
	{	
		#ifdef OGRE_UNICODE_SUPPORT
			DECLARE_NATIVE_UTFSTRING( o_text, text )
		#else
			DECLARE_NATIVE_STRING( o_text, text )
		#endif
		
		static_cast<Ogre::OverlayElement*>(_native)->setCaption( o_text );
	}
	
	Mogre::ColourValue OverlayElement::Colour::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getColour( );
	}
	void OverlayElement::Colour::set( Mogre::ColourValue col )
	{
		static_cast<Ogre::OverlayElement*>(_native)->setColour( col );
	}
	
	Mogre::Real OverlayElement::Height::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getHeight( );
	}
	void OverlayElement::Height::set( Mogre::Real height )
	{
		static_cast<Ogre::OverlayElement*>(_native)->setHeight( height );
	}
	
	Mogre::GuiHorizontalAlignment OverlayElement::HorizontalAlignment::get()
	{
		return (Mogre::GuiHorizontalAlignment)static_cast<const Ogre::OverlayElement*>(_native)->getHorizontalAlignment( );
	}
	void OverlayElement::HorizontalAlignment::set( Mogre::GuiHorizontalAlignment gha )
	{
		static_cast<Ogre::OverlayElement*>(_native)->setHorizontalAlignment( (Ogre::GuiHorizontalAlignment)gha );
	}
	
	bool OverlayElement::IsCloneable::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->isCloneable( );
	}
	
	bool OverlayElement::IsContainer::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->isContainer( );
	}
	
	bool OverlayElement::IsEnabled::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->isEnabled( );
	}
	
	bool OverlayElement::IsKeyEnabled::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->isKeyEnabled( );
	}
	
	bool OverlayElement::IsVisible::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->isVisible( );
	}
	
	Mogre::Real OverlayElement::Left::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getLeft( );
	}
	void OverlayElement::Left::set( Mogre::Real left )
	{
		static_cast<Ogre::OverlayElement*>(_native)->setLeft( left );
	}
	
	String^ OverlayElement::MaterialName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::OverlayElement*>(_native)->getMaterialName( ) );
	}
	void OverlayElement::MaterialName::set( String^ matName )
	{
		DECLARE_NATIVE_STRING( o_matName, matName )
	
		static_cast<Ogre::OverlayElement*>(_native)->setMaterialName( o_matName );
	}
	
	Mogre::GuiMetricsMode OverlayElement::MetricsMode::get()
	{
		return (Mogre::GuiMetricsMode)static_cast<const Ogre::OverlayElement*>(_native)->getMetricsMode( );
	}
	void OverlayElement::MetricsMode::set( Mogre::GuiMetricsMode gmm )
	{
		static_cast<Ogre::OverlayElement*>(_native)->setMetricsMode( (Ogre::GuiMetricsMode)gmm );
	}
	
	String^ OverlayElement::Name::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::OverlayElement*>(_native)->getName( ) );
	}
	
	Mogre::OverlayContainer^ OverlayElement::Parent::get()
	{
		return static_cast<Ogre::OverlayElement*>(_native)->getParent( );
	}
	
	Mogre::OverlayElement^ OverlayElement::SourceTemplate::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getSourceTemplate( );
	}
	
	Mogre::Real OverlayElement::Top::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getTop( );
	}
	void OverlayElement::Top::set( Mogre::Real Top )
	{
		static_cast<Ogre::OverlayElement*>(_native)->setTop( Top );
	}
	
	String^ OverlayElement::TypeName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::OverlayElement*>(_native)->getTypeName( ) );
	}
	
	Mogre::GuiVerticalAlignment OverlayElement::VerticalAlignment::get()
	{
		return (Mogre::GuiVerticalAlignment)static_cast<const Ogre::OverlayElement*>(_native)->getVerticalAlignment( );
	}
	void OverlayElement::VerticalAlignment::set( Mogre::GuiVerticalAlignment gva )
	{
		static_cast<Ogre::OverlayElement*>(_native)->setVerticalAlignment( (Ogre::GuiVerticalAlignment)gva );
	}
	
	Mogre::Real OverlayElement::Width::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getWidth( );
	}
	void OverlayElement::Width::set( Mogre::Real width )
	{
		static_cast<Ogre::OverlayElement*>(_native)->setWidth( width );
	}
	
	Mogre::Quaternion OverlayElement::WorldOrientation::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getWorldOrientation( );
	}
	
	Mogre::Vector3 OverlayElement::WorldPosition::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getWorldPosition( );
	}
	
	Mogre::ushort OverlayElement::ZOrder::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getZOrder( );
	}
	
	void OverlayElement::Initialise( )
	{
		static_cast<Ogre::OverlayElement*>(_native)->initialise( );
	}
	
	void OverlayElement::Show( )
	{
		static_cast<Ogre::OverlayElement*>(_native)->show( );
	}
	
	void OverlayElement::Hide( )
	{
		static_cast<Ogre::OverlayElement*>(_native)->hide( );
	}
	
	void OverlayElement::SetEnabled( bool b )
	{
		static_cast<Ogre::OverlayElement*>(_native)->setEnabled( b );
	}
	
	void OverlayElement::SetDimensions( Mogre::Real width, Mogre::Real height )
	{
		static_cast<Ogre::OverlayElement*>(_native)->setDimensions( width, height );
	}
	
	void OverlayElement::SetPosition( Mogre::Real left, Mogre::Real top )
	{
		static_cast<Ogre::OverlayElement*>(_native)->setPosition( left, top );
	}
	
	Mogre::Real OverlayElement::_getLeft( )
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->_getLeft( );
	}
	
	Mogre::Real OverlayElement::_getTop( )
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->_getTop( );
	}
	
	Mogre::Real OverlayElement::_getWidth( )
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->_getWidth( );
	}
	
	Mogre::Real OverlayElement::_getHeight( )
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->_getHeight( );
	}
	
	void OverlayElement::_setLeft( Mogre::Real left )
	{
		static_cast<Ogre::OverlayElement*>(_native)->_setLeft( left );
	}
	
	void OverlayElement::_setTop( Mogre::Real top )
	{
		static_cast<Ogre::OverlayElement*>(_native)->_setTop( top );
	}
	
	void OverlayElement::_setWidth( Mogre::Real width )
	{
		static_cast<Ogre::OverlayElement*>(_native)->_setWidth( width );
	}
	
	void OverlayElement::_setHeight( Mogre::Real height )
	{
		static_cast<Ogre::OverlayElement*>(_native)->_setHeight( height );
	}
	
	void OverlayElement::_setPosition( Mogre::Real left, Mogre::Real top )
	{
		static_cast<Ogre::OverlayElement*>(_native)->_setPosition( left, top );
	}
	
	void OverlayElement::_setDimensions( Mogre::Real width, Mogre::Real height )
	{
		static_cast<Ogre::OverlayElement*>(_native)->_setDimensions( width, height );
	}
	
	Mogre::MaterialPtr^ OverlayElement::GetMaterial( )
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getMaterial( );
	}
	
	void OverlayElement::GetWorldTransforms( Mogre::Matrix4::NativeValue* xform )
	{
		Ogre::Matrix4* o_xform = reinterpret_cast<Ogre::Matrix4*>(xform);
	
		static_cast<const Ogre::OverlayElement*>(_native)->getWorldTransforms( o_xform );
	}
	
	void OverlayElement::_positionsOutOfDate( )
	{
		static_cast<Ogre::OverlayElement*>(_native)->_positionsOutOfDate( );
	}
	
	void OverlayElement::_update( )
	{
		static_cast<Ogre::OverlayElement*>(_native)->_update( );
	}
	
	void OverlayElement::_updateFromParent( )
	{
		static_cast<Ogre::OverlayElement*>(_native)->_updateFromParent( );
	}
	
	void OverlayElement::_notifyParent( Mogre::OverlayContainer^ parent, Mogre::Overlay^ overlay )
	{
		static_cast<Ogre::OverlayElement*>(_native)->_notifyParent( parent, overlay );
	}
	
	Mogre::Real OverlayElement::_getDerivedLeft( )
	{
		return static_cast<Ogre::OverlayElement*>(_native)->_getDerivedLeft( );
	}
	
	Mogre::Real OverlayElement::_getDerivedTop( )
	{
		return static_cast<Ogre::OverlayElement*>(_native)->_getDerivedTop( );
	}
	
	Mogre::Real OverlayElement::_getRelativeWidth( )
	{
		return static_cast<Ogre::OverlayElement*>(_native)->_getRelativeWidth( );
	}
	
	Mogre::Real OverlayElement::_getRelativeHeight( )
	{
		return static_cast<Ogre::OverlayElement*>(_native)->_getRelativeHeight( );
	}
	
	void OverlayElement::_getClippingRegion( Mogre::Rectangle clippingRegion )
	{
		static_cast<Ogre::OverlayElement*>(_native)->_getClippingRegion( clippingRegion );
	}
	
	void OverlayElement::_notifyZOrder( Mogre::ushort newZOrder )
	{
		static_cast<Ogre::OverlayElement*>(_native)->_notifyZOrder( newZOrder );
	}
	
	void OverlayElement::_notifyWorldTransforms( Mogre::Matrix4^ xform )
	{
		pin_ptr<Ogre::Matrix4> p_xform = interior_ptr<Ogre::Matrix4>(&xform->m00);
	
		static_cast<Ogre::OverlayElement*>(_native)->_notifyWorldTransforms( *p_xform );
	}
	
	void OverlayElement::_notifyViewport( )
	{
		static_cast<Ogre::OverlayElement*>(_native)->_notifyViewport( );
	}
	
	void OverlayElement::_updateRenderQueue( Mogre::RenderQueue^ queue )
	{
		static_cast<Ogre::OverlayElement*>(_native)->_updateRenderQueue( queue );
	}
	
	bool OverlayElement::Contains( Mogre::Real x, Mogre::Real y )
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->contains( x, y );
	}
	
	Mogre::OverlayElement^ OverlayElement::FindElementAt( Mogre::Real x, Mogre::Real y )
	{
		return static_cast<Ogre::OverlayElement*>(_native)->findElementAt( x, y );
	}
	
	void OverlayElement::SetCloneable( bool c )
	{
		static_cast<Ogre::OverlayElement*>(_native)->setCloneable( c );
	}
	
	void OverlayElement::_setParent( Mogre::OverlayContainer^ parent )
	{
		static_cast<Ogre::OverlayElement*>(_native)->_setParent( parent );
	}
	
	Mogre::Real OverlayElement::GetSquaredViewDepth( Mogre::Camera^ cam )
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getSquaredViewDepth( cam );
	}
	
	Mogre::Const_LightList^ OverlayElement::GetLights( )
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getLights( );
	}
	
	void OverlayElement::CopyFromTemplate( Mogre::OverlayElement^ templateOverlay )
	{
		static_cast<Ogre::OverlayElement*>(_native)->copyFromTemplate( templateOverlay );
	}
	
	Mogre::OverlayElement^ OverlayElement::Clone( String^ instanceName )
	{
		DECLARE_NATIVE_STRING( o_instanceName, instanceName )
	
		return static_cast<Ogre::OverlayElement*>(_native)->clone( o_instanceName );
	}
	
	//------------------------------------------------------------
	// Implementation for IStringInterface
	//------------------------------------------------------------
	
	Mogre::ParamDictionary_NativePtr OverlayElement::ParamDictionary::get()
	{
		return static_cast<Ogre::OverlayElement*>(_native)->getParamDictionary( );
	}
	
	Mogre::Const_ParameterList^ OverlayElement::GetParameters( )
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getParameters( );
	}
	
	bool OverlayElement::SetParameter( String^ name, String^ value )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_value, value )
	
		return static_cast<Ogre::OverlayElement*>(_native)->setParameter( o_name, o_value );
	}
	
	void OverlayElement::SetParameterList( Mogre::Const_NameValuePairList^ paramList )
	{
		static_cast<Ogre::OverlayElement*>(_native)->setParameterList( paramList );
	}
	
	String^ OverlayElement::GetParameter( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return TO_CLR_STRING( static_cast<const Ogre::OverlayElement*>(_native)->getParameter( o_name ) );
	}
	
	void OverlayElement::CopyParametersTo( Mogre::IStringInterface^ dest )
	{
		static_cast<const Ogre::OverlayElement*>(_native)->copyParametersTo( dest );
	}
	
	//------------------------------------------------------------
	// Implementation for IRenderable
	//------------------------------------------------------------
	
	bool OverlayElement::CastsShadows::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getCastsShadows( );
	}
	
	bool OverlayElement::NormaliseNormals::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getNormaliseNormals( );
	}
	
	unsigned short OverlayElement::NumWorldTransforms::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getNumWorldTransforms( );
	}
	
	bool OverlayElement::PolygonModeOverrideable::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getPolygonModeOverrideable( );
	}
	void OverlayElement::PolygonModeOverrideable::set( bool override )
	{
		static_cast<Ogre::OverlayElement*>(_native)->setPolygonModeOverrideable( override );
	}
	
	Mogre::Technique^ OverlayElement::Technique::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getTechnique( );
	}
	
	bool OverlayElement::UseIdentityProjection::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getUseIdentityProjection( );
	}
	void OverlayElement::UseIdentityProjection::set( bool useIdentityProjection )
	{
		static_cast<Ogre::OverlayElement*>(_native)->setUseIdentityProjection( useIdentityProjection );
	}
	
	bool OverlayElement::UseIdentityView::get()
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getUseIdentityView( );
	}
	void OverlayElement::UseIdentityView::set( bool useIdentityView )
	{
		static_cast<Ogre::OverlayElement*>(_native)->setUseIdentityView( useIdentityView );
	}
	
	void OverlayElement::GetRenderOperation( Mogre::RenderOperation^ op )
	{
		static_cast<Ogre::OverlayElement*>(_native)->getRenderOperation( op );
	}
	
	Mogre::Const_PlaneList^ OverlayElement::GetClipPlanes( )
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getClipPlanes( );
	}
	
	void OverlayElement::SetCustomParameter( size_t index, Mogre::Vector4 value )
	{
		static_cast<Ogre::OverlayElement*>(_native)->setCustomParameter( index, value );
	}
	
	Mogre::Vector4 OverlayElement::GetCustomParameter( size_t index )
	{
		return static_cast<const Ogre::OverlayElement*>(_native)->getCustomParameter( index );
	}
	
	void OverlayElement::_updateCustomGpuParameter( Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params )
	{
		static_cast<const Ogre::OverlayElement*>(_native)->_updateCustomGpuParameter( constantEntry, params );
	}
	
	
	//Protected Declarations
	
	

}
