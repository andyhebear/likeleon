/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreHighLevelGpuProgram.h"
#include "MogreGpuProgram.h"

namespace Mogre
{
	//################################################################
	//HighLevelGpuProgram
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Mogre::GpuNamedConstants_NativePtr HighLevelGpuProgram::ConstantDefinitions::get()
	{
		return static_cast<const Ogre::HighLevelGpuProgram*>(_native)->getConstantDefinitions( );
	}
	
	Mogre::GpuProgramParametersSharedPtr^ HighLevelGpuProgram::CreateParameters( )
	{
		return static_cast<Ogre::HighLevelGpuProgram*>(_native)->createParameters( );
	}
	
	Mogre::GpuProgram^ HighLevelGpuProgram::_getBindingDelegate( )
	{
		return static_cast<Ogre::HighLevelGpuProgram*>(_native)->_getBindingDelegate( );
	}
	
	
	//Protected Declarations
	
	

}
