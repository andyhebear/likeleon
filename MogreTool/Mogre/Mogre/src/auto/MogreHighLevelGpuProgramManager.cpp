/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreHighLevelGpuProgramManager.h"
#include "MogreHighLevelGpuProgram.h"

namespace Mogre
{
	//################################################################
	//HighLevelGpuProgramManager
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	HighLevelGpuProgramManager::HighLevelGpuProgramManager( ) : ResourceManager((Ogre::ResourceManager*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::HighLevelGpuProgramManager();
	}
	
	Mogre::HighLevelGpuProgramPtr^ HighLevelGpuProgramManager::CreateProgram( String^ name, String^ groupName, String^ language, Mogre::GpuProgramType gptype )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_groupName, groupName )
		DECLARE_NATIVE_STRING( o_language, language )
	
		return static_cast<Ogre::HighLevelGpuProgramManager*>(_native)->createProgram( o_name, o_groupName, o_language, (Ogre::GpuProgramType)gptype );
	}
	
	
	//Protected Declarations
	
	

}
