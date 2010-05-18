/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreParticleIterator.h"
#include "MogreParticle.h"

namespace Mogre
{
	//################################################################
	//ParticleIterator
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	Mogre::Particle^ ParticleIterator::Next::get()
	{
		return static_cast<Ogre::ParticleIterator*>(_native)->getNext( );
	}
	
	bool ParticleIterator::End( )
	{
		return static_cast<Ogre::ParticleIterator*>(_native)->end( );
	}
	
	
	//Protected Declarations
	
	

}
