/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreParticleAffectorFactory.h"
#include "MogreParticleAffector.h"
#include "MogreParticleSystem.h"

namespace Mogre
{
	//################################################################
	//ParticleAffectorFactory
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	String^ ParticleAffectorFactory::Name::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ParticleAffectorFactory*>(_native)->getName( ) );
	}
	
	Mogre::ParticleAffector^ ParticleAffectorFactory::CreateAffector( Mogre::ParticleSystem^ psys )
	{
		return static_cast<Ogre::ParticleAffectorFactory*>(_native)->createAffector( psys );
	}
	
	void ParticleAffectorFactory::DestroyAffector( Mogre::ParticleAffector^ e )
	{
		static_cast<Ogre::ParticleAffectorFactory*>(_native)->destroyAffector( e );
	}
	
	
	//Protected Declarations
	
	

}
