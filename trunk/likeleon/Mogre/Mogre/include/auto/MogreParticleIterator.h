/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreParticleIterator.h"

namespace Mogre
{
	//################################################################
	//ParticleIterator
	//################################################################
	
	public ref class ParticleIterator
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ParticleIterator( Ogre::ParticleIterator* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~ParticleIterator()
		{
			this->!ParticleIterator();
		}
		!ParticleIterator()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::ParticleIterator* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
	
	
		property Mogre::Particle^ Next
		{
		public:
			Mogre::Particle^ get();
		}
	
		bool End( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( ParticleIterator )
	
		//Protected Declarations
	protected public:
	
	};
	

}
