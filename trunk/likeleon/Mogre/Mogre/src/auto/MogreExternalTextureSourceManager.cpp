/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreExternalTextureSourceManager.h"
#include "MogreExternalTextureSource.h"

namespace Mogre
{
	//################################################################
	//ExternalTextureSourceManager
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	ExternalTextureSourceManager::ExternalTextureSourceManager( )
	{
		_createdByCLR = true;
		_native = new Ogre::ExternalTextureSourceManager();
	}
	
	Mogre::ExternalTextureSource^ ExternalTextureSourceManager::CurrentPlugIn::get()
	{
		return static_cast<const Ogre::ExternalTextureSourceManager*>(_native)->getCurrentPlugIn( );
	}
	
	void ExternalTextureSourceManager::SetCurrentPlugIn( String^ sTexturePlugInType )
	{
		DECLARE_NATIVE_STRING( o_sTexturePlugInType, sTexturePlugInType )
	
		static_cast<Ogre::ExternalTextureSourceManager*>(_native)->setCurrentPlugIn( o_sTexturePlugInType );
	}
	
	void ExternalTextureSourceManager::DestroyAdvancedTexture( String^ sTextureName, String^ groupName )
	{
		DECLARE_NATIVE_STRING( o_sTextureName, sTextureName )
		DECLARE_NATIVE_STRING( o_groupName, groupName )
	
		static_cast<Ogre::ExternalTextureSourceManager*>(_native)->destroyAdvancedTexture( o_sTextureName, o_groupName );
	}
	void ExternalTextureSourceManager::DestroyAdvancedTexture( String^ sTextureName )
	{
		DECLARE_NATIVE_STRING( o_sTextureName, sTextureName )
	
		static_cast<Ogre::ExternalTextureSourceManager*>(_native)->destroyAdvancedTexture( o_sTextureName );
	}
	
	Mogre::ExternalTextureSource^ ExternalTextureSourceManager::GetExternalTextureSource( String^ sTexturePlugInType )
	{
		DECLARE_NATIVE_STRING( o_sTexturePlugInType, sTexturePlugInType )
	
		return static_cast<Ogre::ExternalTextureSourceManager*>(_native)->getExternalTextureSource( o_sTexturePlugInType );
	}
	
	void ExternalTextureSourceManager::SetExternalTextureSource( String^ sTexturePlugInType, Mogre::ExternalTextureSource^ pTextureSystem )
	{
		DECLARE_NATIVE_STRING( o_sTexturePlugInType, sTexturePlugInType )
	
		static_cast<Ogre::ExternalTextureSourceManager*>(_native)->setExternalTextureSource( o_sTexturePlugInType, pTextureSystem );
	}
	
	
	//Protected Declarations
	
	

}
