/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreRenderTexture.h"

namespace Mogre
{
	//################################################################
	//RenderTexture
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	void RenderTexture::WriteContentsToFile( String^ filename )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
	
		static_cast<Ogre::RenderTexture*>(_native)->writeContentsToFile( o_filename );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//MultiRenderTarget
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	void MultiRenderTarget::BindSurface( size_t attachment, Mogre::RenderTexture^ target )
	{
		static_cast<Ogre::MultiRenderTarget*>(_native)->bindSurface( attachment, target );
	}
	
	void MultiRenderTarget::UnbindSurface( size_t attachment )
	{
		static_cast<Ogre::MultiRenderTarget*>(_native)->unbindSurface( attachment );
	}
	
	void MultiRenderTarget::WriteContentsToFile( String^ filename )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
	
		static_cast<Ogre::MultiRenderTarget*>(_native)->writeContentsToFile( o_filename );
	}
	
	
	//Protected Declarations
	
	

}
