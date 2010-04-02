/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreOverlay.h"
#include "MogreOverlayContainer.h"
#include "MogreSceneNode.h"
#include "MogreCamera.h"
#include "MogreRenderQueue.h"
#include "MogreOverlayElement.h"

namespace Mogre
{
	//################################################################
	//Overlay
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Mogre::OverlayContainer^
	#define STLDECL_NATIVETYPE Ogre::OverlayContainer*
	CPP_DECLARE_STLLIST( Overlay::, OverlayContainerList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	CPP_DECLARE_ITERATOR( Overlay::, Overlay2DElementsIterator, Ogre::Overlay::Overlay2DElementsIterator, Mogre::Overlay::OverlayContainerList, Mogre::OverlayContainer^, Ogre::OverlayContainer*,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Overlay::Overlay( String^ name ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::Overlay( o_name);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	bool Overlay::IsInitialised::get()
	{
		return static_cast<const Ogre::Overlay*>(_native)->isInitialised( );
	}
	
	bool Overlay::IsVisible::get()
	{
		return static_cast<const Ogre::Overlay*>(_native)->isVisible( );
	}
	
	String^ Overlay::Name::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Overlay*>(_native)->getName( ) );
	}
	
	String^ Overlay::Origin::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Overlay*>(_native)->getOrigin( ) );
	}
	
	Mogre::Real Overlay::ScaleX::get()
	{
		return static_cast<const Ogre::Overlay*>(_native)->getScaleX( );
	}
	
	Mogre::Real Overlay::ScaleY::get()
	{
		return static_cast<const Ogre::Overlay*>(_native)->getScaleY( );
	}
	
	Mogre::Real Overlay::ScrollX::get()
	{
		return static_cast<const Ogre::Overlay*>(_native)->getScrollX( );
	}
	
	Mogre::Real Overlay::ScrollY::get()
	{
		return static_cast<const Ogre::Overlay*>(_native)->getScrollY( );
	}
	
	Mogre::Quaternion Overlay::WorldOrientation::get()
	{
		return static_cast<const Ogre::Overlay*>(_native)->getWorldOrientation( );
	}
	
	Mogre::Vector3 Overlay::WorldPosition::get()
	{
		return static_cast<const Ogre::Overlay*>(_native)->getWorldPosition( );
	}
	
	Mogre::ushort Overlay::ZOrder::get()
	{
		return static_cast<const Ogre::Overlay*>(_native)->getZOrder( );
	}
	void Overlay::ZOrder::set( Mogre::ushort zorder )
	{
		static_cast<Ogre::Overlay*>(_native)->setZOrder( zorder );
	}
	
	Mogre::OverlayContainer^ Overlay::GetChild( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::Overlay*>(_native)->getChild( o_name );
	}
	
	void Overlay::Show( )
	{
		static_cast<Ogre::Overlay*>(_native)->show( );
	}
	
	void Overlay::Hide( )
	{
		static_cast<Ogre::Overlay*>(_native)->hide( );
	}
	
	void Overlay::Add2D( Mogre::OverlayContainer^ cont )
	{
		static_cast<Ogre::Overlay*>(_native)->add2D( cont );
	}
	
	void Overlay::Remove2D( Mogre::OverlayContainer^ cont )
	{
		static_cast<Ogre::Overlay*>(_native)->remove2D( cont );
	}
	
	void Overlay::Add3D( Mogre::SceneNode^ node )
	{
		static_cast<Ogre::Overlay*>(_native)->add3D( node );
	}
	
	void Overlay::Remove3D( Mogre::SceneNode^ node )
	{
		static_cast<Ogre::Overlay*>(_native)->remove3D( node );
	}
	
	void Overlay::Clear( )
	{
		static_cast<Ogre::Overlay*>(_native)->clear( );
	}
	
	void Overlay::SetScroll( Mogre::Real x, Mogre::Real y )
	{
		static_cast<Ogre::Overlay*>(_native)->setScroll( x, y );
	}
	
	void Overlay::Scroll( Mogre::Real xoff, Mogre::Real yoff )
	{
		static_cast<Ogre::Overlay*>(_native)->scroll( xoff, yoff );
	}
	
	void Overlay::SetRotate( Mogre::Radian angle )
	{
		static_cast<Ogre::Overlay*>(_native)->setRotate( angle );
	}
	
	Mogre::Radian Overlay::GetRotate( )
	{
		return static_cast<const Ogre::Overlay*>(_native)->getRotate( );
	}
	
	void Overlay::Rotate( Mogre::Radian angle )
	{
		static_cast<Ogre::Overlay*>(_native)->rotate( angle );
	}
	
	void Overlay::SetScale( Mogre::Real x, Mogre::Real y )
	{
		static_cast<Ogre::Overlay*>(_native)->setScale( x, y );
	}
	
	void Overlay::_findVisibleObjects( Mogre::Camera^ cam, Mogre::RenderQueue^ queue )
	{
		static_cast<Ogre::Overlay*>(_native)->_findVisibleObjects( cam, queue );
	}
	
	Mogre::OverlayElement^ Overlay::FindElementAt( Mogre::Real x, Mogre::Real y )
	{
		return static_cast<Ogre::Overlay*>(_native)->findElementAt( x, y );
	}
	
	Mogre::Overlay::Overlay2DElementsIterator^ Overlay::Get2DElementsIterator( )
	{
		return static_cast<Ogre::Overlay*>(_native)->get2DElementsIterator( );
	}
	
	void Overlay::_notifyOrigin( String^ origin )
	{
		DECLARE_NATIVE_STRING( o_origin, origin )
	
		static_cast<Ogre::Overlay*>(_native)->_notifyOrigin( o_origin );
	}
	
	
	//Protected Declarations
	
	

}
