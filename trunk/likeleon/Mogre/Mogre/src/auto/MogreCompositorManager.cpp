/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreCompositorManager.h"
#include "MogreDataStream.h"
#include "MogreCompositorChain.h"
#include "MogreViewport.h"
#include "MogreCompositorInstance.h"
#include "MogreRenderable.h"

namespace Mogre
{
	//################################################################
	//CompositorManager
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	void CompositorManager::Initialise( )
	{
		static_cast<Ogre::CompositorManager*>(_native)->initialise( );
	}
	
	void CompositorManager::ParseScript( Mogre::DataStreamPtr^ stream, String^ groupName )
	{
		DECLARE_NATIVE_STRING( o_groupName, groupName )
	
		static_cast<Ogre::CompositorManager*>(_native)->parseScript( (Ogre::DataStreamPtr&)stream, o_groupName );
	}
	
	Mogre::CompositorChain^ CompositorManager::GetCompositorChain( Mogre::Viewport^ vp )
	{
		return static_cast<Ogre::CompositorManager*>(_native)->getCompositorChain( vp );
	}
	
	bool CompositorManager::HasCompositorChain( Mogre::Viewport^ vp )
	{
		return static_cast<const Ogre::CompositorManager*>(_native)->hasCompositorChain( vp );
	}
	
	void CompositorManager::RemoveCompositorChain( Mogre::Viewport^ vp )
	{
		static_cast<Ogre::CompositorManager*>(_native)->removeCompositorChain( vp );
	}
	
	Mogre::CompositorInstance^ CompositorManager::AddCompositor( Mogre::Viewport^ vp, String^ compositor, int addPosition )
	{
		DECLARE_NATIVE_STRING( o_compositor, compositor )
	
		return static_cast<Ogre::CompositorManager*>(_native)->addCompositor( vp, o_compositor, addPosition );
	}
	Mogre::CompositorInstance^ CompositorManager::AddCompositor( Mogre::Viewport^ vp, String^ compositor )
	{
		DECLARE_NATIVE_STRING( o_compositor, compositor )
	
		return static_cast<Ogre::CompositorManager*>(_native)->addCompositor( vp, o_compositor );
	}
	
	void CompositorManager::RemoveCompositor( Mogre::Viewport^ vp, String^ compositor )
	{
		DECLARE_NATIVE_STRING( o_compositor, compositor )
	
		static_cast<Ogre::CompositorManager*>(_native)->removeCompositor( vp, o_compositor );
	}
	
	void CompositorManager::SetCompositorEnabled( Mogre::Viewport^ vp, String^ compositor, bool value )
	{
		DECLARE_NATIVE_STRING( o_compositor, compositor )
	
		static_cast<Ogre::CompositorManager*>(_native)->setCompositorEnabled( vp, o_compositor, value );
	}
	
	Mogre::IRenderable^ CompositorManager::_getTexturedRectangle2D( )
	{
		return static_cast<Ogre::CompositorManager*>(_native)->_getTexturedRectangle2D( );
	}
	
	void CompositorManager::RemoveAll( )
	{
		static_cast<Ogre::CompositorManager*>(_native)->removeAll( );
	}
	
	void CompositorManager::_reconstructAllCompositorResources( )
	{
		static_cast<Ogre::CompositorManager*>(_native)->_reconstructAllCompositorResources( );
	}
	
	
	//Protected Declarations
	
	

}
