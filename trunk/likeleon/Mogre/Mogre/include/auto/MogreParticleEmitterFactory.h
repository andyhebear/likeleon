/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreParticleEmitterFactory.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//ParticleEmitterFactory
	//################################################################
	
	public ref class ParticleEmitterFactory : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ParticleEmitterFactory( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		Mogre::ParticleEmitter^ CreateEmitter( Mogre::ParticleSystem^ psys );
	
		void DestroyEmitter( Mogre::ParticleEmitter^ e );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( ParticleEmitterFactory )
	
		//Protected Declarations
	protected public:
	
	};
	

}
