/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreCompositorChain.h"
#include "MogreCompositorInstance.h"
#include "MogreViewport.h"
#include "MogreCompositor.h"

namespace Mogre
{
	//################################################################
	//CompositorChain
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Mogre::CompositorInstance^
	#define STLDECL_NATIVETYPE Ogre::CompositorInstance*
	CPP_DECLARE_STLVECTOR( CompositorChain::, Instances, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	CPP_DECLARE_ITERATOR( CompositorChain::, InstanceIterator, Ogre::CompositorChain::InstanceIterator, Mogre::CompositorChain::Instances, Mogre::CompositorInstance^, Ogre::CompositorInstance*,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	CompositorChain::CompositorChain( Mogre::Viewport^ vp ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::CompositorChain( vp);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	size_t CompositorChain::LAST::get()
	{
		return Ogre::CompositorChain::LAST;
	}
	
	size_t CompositorChain::BEST::get()
	{
		return Ogre::CompositorChain::BEST;
	}
	
	size_t CompositorChain::NumCompositors::get()
	{
		return static_cast<Ogre::CompositorChain*>(_native)->getNumCompositors( );
	}
	
	Mogre::Viewport^ CompositorChain::Viewport::get()
	{
		return static_cast<Ogre::CompositorChain*>(_native)->getViewport( );
	}
	
	Mogre::CompositorInstance^ CompositorChain::AddCompositor( Mogre::CompositorPtr^ filter, size_t addPosition, size_t technique )
	{
		return static_cast<Ogre::CompositorChain*>(_native)->addCompositor( (Ogre::CompositorPtr)filter, addPosition, technique );
	}
	Mogre::CompositorInstance^ CompositorChain::AddCompositor( Mogre::CompositorPtr^ filter, size_t addPosition )
	{
		return static_cast<Ogre::CompositorChain*>(_native)->addCompositor( (Ogre::CompositorPtr)filter, addPosition );
	}
	Mogre::CompositorInstance^ CompositorChain::AddCompositor( Mogre::CompositorPtr^ filter )
	{
		return static_cast<Ogre::CompositorChain*>(_native)->addCompositor( (Ogre::CompositorPtr)filter );
	}
	
	void CompositorChain::RemoveCompositor( size_t position )
	{
		static_cast<Ogre::CompositorChain*>(_native)->removeCompositor( position );
	}
	void CompositorChain::RemoveCompositor( )
	{
		static_cast<Ogre::CompositorChain*>(_native)->removeCompositor( );
	}
	
	void CompositorChain::RemoveAllCompositors( )
	{
		static_cast<Ogre::CompositorChain*>(_native)->removeAllCompositors( );
	}
	
	Mogre::CompositorInstance^ CompositorChain::GetCompositor( size_t index )
	{
		return static_cast<Ogre::CompositorChain*>(_native)->getCompositor( index );
	}
	
	Mogre::CompositorInstance^ CompositorChain::_getOriginalSceneCompositor( )
	{
		return static_cast<Ogre::CompositorChain*>(_native)->_getOriginalSceneCompositor( );
	}
	
	Mogre::CompositorChain::InstanceIterator^ CompositorChain::GetCompositors( )
	{
		return static_cast<Ogre::CompositorChain*>(_native)->getCompositors( );
	}
	
	void CompositorChain::SetCompositorEnabled( size_t position, bool state )
	{
		static_cast<Ogre::CompositorChain*>(_native)->setCompositorEnabled( position, state );
	}
	
	void CompositorChain::PreRenderTargetUpdate( Mogre::RenderTargetEvent_NativePtr evt )
	{
		static_cast<Ogre::CompositorChain*>(_native)->preRenderTargetUpdate( evt );
	}
	
	void CompositorChain::PreViewportUpdate( Mogre::RenderTargetViewportEvent_NativePtr evt )
	{
		static_cast<Ogre::CompositorChain*>(_native)->preViewportUpdate( evt );
	}
	
	void CompositorChain::PostViewportUpdate( Mogre::RenderTargetViewportEvent_NativePtr evt )
	{
		static_cast<Ogre::CompositorChain*>(_native)->postViewportUpdate( evt );
	}
	
	void CompositorChain::ViewportRemoved( Mogre::RenderTargetViewportEvent_NativePtr evt )
	{
		static_cast<Ogre::CompositorChain*>(_native)->viewportRemoved( evt );
	}
	
	void CompositorChain::_markDirty( )
	{
		static_cast<Ogre::CompositorChain*>(_native)->_markDirty( );
	}
	
	void CompositorChain::_notifyViewport( Mogre::Viewport^ vp )
	{
		static_cast<Ogre::CompositorChain*>(_native)->_notifyViewport( vp );
	}
	
	void CompositorChain::_removeInstance( Mogre::CompositorInstance^ i )
	{
		static_cast<Ogre::CompositorChain*>(_native)->_removeInstance( i );
	}
	
	void CompositorChain::_compile( )
	{
		static_cast<Ogre::CompositorChain*>(_native)->_compile( );
	}
	
	
	//Protected Declarations
	
	

}
