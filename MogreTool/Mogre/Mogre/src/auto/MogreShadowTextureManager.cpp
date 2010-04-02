/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreShadowTextureManager.h"
#include "MogreTexture.h"

namespace Mogre
{
	//################################################################
	//ShadowTextureManager
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	ShadowTextureManager::ShadowTextureManager( )
	{
		_createdByCLR = true;
		_native = new Ogre::ShadowTextureManager();
	}
	
	void ShadowTextureManager::GetShadowTextures( Mogre::Const_ShadowTextureConfigList^ config, Mogre::ShadowTextureList^ listToPopulate )
	{
		static_cast<Ogre::ShadowTextureManager*>(_native)->getShadowTextures( config, listToPopulate );
	}
	
	Mogre::TexturePtr^ ShadowTextureManager::GetNullShadowTexture( Mogre::PixelFormat format )
	{
		return static_cast<Ogre::ShadowTextureManager*>(_native)->getNullShadowTexture( (Ogre::PixelFormat)format );
	}
	
	void ShadowTextureManager::ClearUnused( )
	{
		static_cast<Ogre::ShadowTextureManager*>(_native)->clearUnused( );
	}
	
	void ShadowTextureManager::Clear( )
	{
		static_cast<Ogre::ShadowTextureManager*>(_native)->clear( );
	}
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDTYPE Mogre::TexturePtr^
	#define STLDECL_NATIVETYPE Ogre::TexturePtr
	CPP_DECLARE_STLVECTOR( , ShadowTextureList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE Mogre::ShadowTextureConfig
	#define STLDECL_NATIVETYPE Ogre::ShadowTextureConfig
	CPP_DECLARE_STLVECTOR( , ShadowTextureConfigList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	CPP_DECLARE_ITERATOR( , ConstShadowTextureConfigIterator, Ogre::ConstShadowTextureConfigIterator, Mogre::ShadowTextureConfigList, Mogre::ShadowTextureConfig, Ogre::ShadowTextureConfig, const )
	

}
