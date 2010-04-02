/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreViewport.h"
#include "MogreCamera.h"
#include "MogreRenderTarget.h"
#include "MogreRenderQueueInvocation.h"

namespace Mogre
{
	//################################################################
	//Viewport
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Viewport::Viewport( Mogre::Camera^ camera, Mogre::RenderTarget^ target, Mogre::Real left, Mogre::Real top, Mogre::Real width, Mogre::Real height, int ZOrder ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::Viewport( camera, target, left, top, width, height, ZOrder);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	int Viewport::ActualHeight::get()
	{
		return static_cast<const Ogre::Viewport*>(_native)->getActualHeight( );
	}
	
	int Viewport::ActualLeft::get()
	{
		return static_cast<const Ogre::Viewport*>(_native)->getActualLeft( );
	}
	
	int Viewport::ActualTop::get()
	{
		return static_cast<const Ogre::Viewport*>(_native)->getActualTop( );
	}
	
	int Viewport::ActualWidth::get()
	{
		return static_cast<const Ogre::Viewport*>(_native)->getActualWidth( );
	}
	
	Mogre::ColourValue Viewport::BackgroundColour::get()
	{
		return static_cast<const Ogre::Viewport*>(_native)->getBackgroundColour( );
	}
	void Viewport::BackgroundColour::set( Mogre::ColourValue colour )
	{
		static_cast<Ogre::Viewport*>(_native)->setBackgroundColour( colour );
	}
	
	Mogre::Camera^ Viewport::Camera::get()
	{
		return static_cast<const Ogre::Viewport*>(_native)->getCamera( );
	}
	void Viewport::Camera::set( Mogre::Camera^ cam )
	{
		static_cast<Ogre::Viewport*>(_native)->setCamera( cam );
	}
	
	unsigned int Viewport::ClearBuffers::get()
	{
		return static_cast<const Ogre::Viewport*>(_native)->getClearBuffers( );
	}
	
	bool Viewport::ClearEveryFrame::get()
	{
		return static_cast<const Ogre::Viewport*>(_native)->getClearEveryFrame( );
	}
	
	Mogre::Real Viewport::Height::get()
	{
		return static_cast<const Ogre::Viewport*>(_native)->getHeight( );
	}
	
	Mogre::Real Viewport::Left::get()
	{
		return static_cast<const Ogre::Viewport*>(_native)->getLeft( );
	}
	
	String^ Viewport::MaterialScheme::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Viewport*>(_native)->getMaterialScheme( ) );
	}
	void Viewport::MaterialScheme::set( String^ schemeName )
	{
		DECLARE_NATIVE_STRING( o_schemeName, schemeName )
	
		static_cast<Ogre::Viewport*>(_native)->setMaterialScheme( o_schemeName );
	}
	
	bool Viewport::OverlaysEnabled::get()
	{
		return static_cast<const Ogre::Viewport*>(_native)->getOverlaysEnabled( );
	}
	void Viewport::OverlaysEnabled::set( bool enabled )
	{
		static_cast<Ogre::Viewport*>(_native)->setOverlaysEnabled( enabled );
	}
	
	String^ Viewport::RenderQueueInvocationSequenceName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Viewport*>(_native)->getRenderQueueInvocationSequenceName( ) );
	}
	void Viewport::RenderQueueInvocationSequenceName::set( String^ sequenceName )
	{
		DECLARE_NATIVE_STRING( o_sequenceName, sequenceName )
	
		static_cast<Ogre::Viewport*>(_native)->setRenderQueueInvocationSequenceName( o_sequenceName );
	}
	
	bool Viewport::ShadowsEnabled::get()
	{
		return static_cast<const Ogre::Viewport*>(_native)->getShadowsEnabled( );
	}
	void Viewport::ShadowsEnabled::set( bool enabled )
	{
		static_cast<Ogre::Viewport*>(_native)->setShadowsEnabled( enabled );
	}
	
	bool Viewport::SkiesEnabled::get()
	{
		return static_cast<const Ogre::Viewport*>(_native)->getSkiesEnabled( );
	}
	void Viewport::SkiesEnabled::set( bool enabled )
	{
		static_cast<Ogre::Viewport*>(_native)->setSkiesEnabled( enabled );
	}
	
	Mogre::RenderTarget^ Viewport::Target::get()
	{
		return static_cast<const Ogre::Viewport*>(_native)->getTarget( );
	}
	
	Mogre::Real Viewport::Top::get()
	{
		return static_cast<const Ogre::Viewport*>(_native)->getTop( );
	}
	
	Mogre::uint Viewport::VisibilityMask::get()
	{
		return static_cast<const Ogre::Viewport*>(_native)->getVisibilityMask( );
	}
	
	Mogre::Real Viewport::Width::get()
	{
		return static_cast<const Ogre::Viewport*>(_native)->getWidth( );
	}
	
	int Viewport::ZOrder::get()
	{
		return static_cast<const Ogre::Viewport*>(_native)->getZOrder( );
	}
	
	void Viewport::_updateDimensions( )
	{
		static_cast<Ogre::Viewport*>(_native)->_updateDimensions( );
	}
	
	void Viewport::Update( )
	{
		static_cast<Ogre::Viewport*>(_native)->update( );
	}
	
	void Viewport::SetDimensions( Mogre::Real left, Mogre::Real top, Mogre::Real width, Mogre::Real height )
	{
		static_cast<Ogre::Viewport*>(_native)->setDimensions( left, top, width, height );
	}
	
	void Viewport::SetClearEveryFrame( bool clear, unsigned int buffers )
	{
		static_cast<Ogre::Viewport*>(_native)->setClearEveryFrame( clear, buffers );
	}
	void Viewport::SetClearEveryFrame( bool clear )
	{
		static_cast<Ogre::Viewport*>(_native)->setClearEveryFrame( clear );
	}
	
	void Viewport::GetActualDimensions( [Out] int% left, [Out] int% top, [Out] int% width, [Out] int% height )
	{
		pin_ptr<int> p_left = &left;
		pin_ptr<int> p_top = &top;
		pin_ptr<int> p_width = &width;
		pin_ptr<int> p_height = &height;
	
		static_cast<const Ogre::Viewport*>(_native)->getActualDimensions( *p_left, *p_top, *p_width, *p_height );
	}
	
	bool Viewport::_isUpdated( )
	{
		return static_cast<const Ogre::Viewport*>(_native)->_isUpdated( );
	}
	
	void Viewport::_clearUpdatedFlag( )
	{
		static_cast<Ogre::Viewport*>(_native)->_clearUpdatedFlag( );
	}
	
	unsigned int Viewport::_getNumRenderedFaces( )
	{
		return static_cast<const Ogre::Viewport*>(_native)->_getNumRenderedFaces( );
	}
	
	unsigned int Viewport::_getNumRenderedBatches( )
	{
		return static_cast<const Ogre::Viewport*>(_native)->_getNumRenderedBatches( );
	}
	
	void Viewport::SetVisibilityMask( Mogre::uint32 mask )
	{
		static_cast<Ogre::Viewport*>(_native)->setVisibilityMask( mask );
	}
	
	Mogre::RenderQueueInvocationSequence^ Viewport::_getRenderQueueInvocationSequence( )
	{
		return static_cast<Ogre::Viewport*>(_native)->_getRenderQueueInvocationSequence( );
	}
	
	
	//Protected Declarations
	
	

}
