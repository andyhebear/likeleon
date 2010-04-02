/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreCompositorSerializer.h"
#include "MogreDataStream.h"

namespace Mogre
{
	//################################################################
	//CompositorSerializer
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	CompositorSerializer::CompositorSerializer( )
	{
		_createdByCLR = true;
		_native = new Ogre::CompositorSerializer();
	}
	
	void CompositorSerializer::ParseScript( Mogre::DataStreamPtr^ stream, String^ groupName )
	{
		DECLARE_NATIVE_STRING( o_groupName, groupName )
	
		static_cast<Ogre::CompositorSerializer*>(_native)->parseScript( (Ogre::DataStreamPtr&)stream, o_groupName );
	}
	
	
	//Protected Declarations
	
	

}
