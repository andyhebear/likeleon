/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreHardwareIndexBuffer.h"

namespace Mogre
{
	//################################################################
	//HardwareIndexBuffer
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	size_t HardwareIndexBuffer::IndexSize::get()
	{
		return static_cast<const Ogre::HardwareIndexBuffer*>(_native)->getIndexSize( );
	}
	
	size_t HardwareIndexBuffer::NumIndexes::get()
	{
		return static_cast<const Ogre::HardwareIndexBuffer*>(_native)->getNumIndexes( );
	}
	
	Mogre::HardwareIndexBuffer::IndexType HardwareIndexBuffer::Type::get()
	{
		return (Mogre::HardwareIndexBuffer::IndexType)static_cast<const Ogre::HardwareIndexBuffer*>(_native)->getType( );
	}
	
	
	//Protected Declarations
	
	

}
