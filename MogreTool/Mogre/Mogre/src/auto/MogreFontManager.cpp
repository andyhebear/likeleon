/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreFontManager.h"
#include "MogreDataStream.h"

namespace Mogre
{
	//################################################################
	//FontManager
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	FontManager::FontManager( ) : ResourceManager((Ogre::ResourceManager*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::FontManager();
	}
	
	void FontManager::ParseScript( Mogre::DataStreamPtr^ stream, String^ groupName )
	{
		DECLARE_NATIVE_STRING( o_groupName, groupName )
	
		static_cast<Ogre::FontManager*>(_native)->parseScript( (Ogre::DataStreamPtr&)stream, o_groupName );
	}
	
	
	//Protected Declarations
	
	

}
