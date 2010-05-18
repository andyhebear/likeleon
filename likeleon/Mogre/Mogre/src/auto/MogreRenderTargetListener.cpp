/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreRenderTargetListener.h"
#include "MogreViewport.h"
#include "MogreRenderTarget.h"

namespace Mogre
{
	//################################################################
	//RenderTargetViewportEvent_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	Mogre::Viewport^ RenderTargetViewportEvent_NativePtr::source::get()
	{
		return _native->source;
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//RenderTargetEvent_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	Mogre::RenderTarget^ RenderTargetEvent_NativePtr::source::get()
	{
		return _native->source;
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//RenderTargetListener
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	void RenderTargetListener_Director::preRenderTargetUpdate( const Ogre::RenderTargetEvent& evt )
	{
		if (doCallForPreRenderTargetUpdate)
		{
			_receiver->PreRenderTargetUpdate( evt );
		}
	}
	
	void RenderTargetListener_Director::postRenderTargetUpdate( const Ogre::RenderTargetEvent& evt )
	{
		if (doCallForPostRenderTargetUpdate)
		{
			_receiver->PostRenderTargetUpdate( evt );
		}
	}
	
	void RenderTargetListener_Director::preViewportUpdate( const Ogre::RenderTargetViewportEvent& evt )
	{
		if (doCallForPreViewportUpdate)
		{
			_receiver->PreViewportUpdate( evt );
		}
	}
	
	void RenderTargetListener_Director::postViewportUpdate( const Ogre::RenderTargetViewportEvent& evt )
	{
		if (doCallForPostViewportUpdate)
		{
			_receiver->PostViewportUpdate( evt );
		}
	}
	
	void RenderTargetListener_Director::viewportAdded( const Ogre::RenderTargetViewportEvent& evt )
	{
		if (doCallForViewportAdded)
		{
			_receiver->ViewportAdded( evt );
		}
	}
	
	void RenderTargetListener_Director::viewportRemoved( const Ogre::RenderTargetViewportEvent& evt )
	{
		if (doCallForViewportRemoved)
		{
			_receiver->ViewportRemoved( evt );
		}
	}
	
	
	//Protected Declarations
	
	

}
