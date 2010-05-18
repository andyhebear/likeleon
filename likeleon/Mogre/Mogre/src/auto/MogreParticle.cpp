/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreParticle.h"
#include "MogreParticleSystem.h"

namespace Mogre
{
	//################################################################
	//Particle
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Particle::Particle( )
	{
		_createdByCLR = true;
		_native = new Ogre::Particle();
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	bool Particle::mOwnDimensions::get()
	{
		return static_cast<Ogre::Particle*>(_native)->mOwnDimensions;
	}
	void Particle::mOwnDimensions::set( bool value )
	{
		static_cast<Ogre::Particle*>(_native)->mOwnDimensions = value;
	}
	
	Mogre::Real Particle::mWidth::get()
	{
		return static_cast<Ogre::Particle*>(_native)->mWidth;
	}
	void Particle::mWidth::set( Mogre::Real value )
	{
		static_cast<Ogre::Particle*>(_native)->mWidth = value;
	}
	
	Mogre::Real Particle::mHeight::get()
	{
		return static_cast<Ogre::Particle*>(_native)->mHeight;
	}
	void Particle::mHeight::set( Mogre::Real value )
	{
		static_cast<Ogre::Particle*>(_native)->mHeight = value;
	}
	
	Mogre::Radian Particle::rotation::get()
	{
		return static_cast<Ogre::Particle*>(_native)->rotation;
	}
	void Particle::rotation::set( Mogre::Radian value )
	{
		static_cast<Ogre::Particle*>(_native)->rotation = value;
	}
	
	Mogre::Vector3 Particle::position::get()
	{
		return static_cast<Ogre::Particle*>(_native)->position;
	}
	void Particle::position::set( Mogre::Vector3 value )
	{
		static_cast<Ogre::Particle*>(_native)->position = value;
	}
	
	Mogre::Vector3 Particle::direction::get()
	{
		return static_cast<Ogre::Particle*>(_native)->direction;
	}
	void Particle::direction::set( Mogre::Vector3 value )
	{
		static_cast<Ogre::Particle*>(_native)->direction = value;
	}
	
	Mogre::ColourValue Particle::colour::get()
	{
		return static_cast<Ogre::Particle*>(_native)->colour;
	}
	void Particle::colour::set( Mogre::ColourValue value )
	{
		static_cast<Ogre::Particle*>(_native)->colour = value;
	}
	
	Mogre::Real Particle::timeToLive::get()
	{
		return static_cast<Ogre::Particle*>(_native)->timeToLive;
	}
	void Particle::timeToLive::set( Mogre::Real value )
	{
		static_cast<Ogre::Particle*>(_native)->timeToLive = value;
	}
	
	Mogre::Real Particle::totalTimeToLive::get()
	{
		return static_cast<Ogre::Particle*>(_native)->totalTimeToLive;
	}
	void Particle::totalTimeToLive::set( Mogre::Real value )
	{
		static_cast<Ogre::Particle*>(_native)->totalTimeToLive = value;
	}
	
	Mogre::Radian Particle::rotationSpeed::get()
	{
		return static_cast<Ogre::Particle*>(_native)->rotationSpeed;
	}
	void Particle::rotationSpeed::set( Mogre::Radian value )
	{
		static_cast<Ogre::Particle*>(_native)->rotationSpeed = value;
	}
	
	Mogre::Particle::ParticleType Particle::particleType::get()
	{
		return (Mogre::Particle::ParticleType)static_cast<Ogre::Particle*>(_native)->particleType;
	}
	void Particle::particleType::set( Mogre::Particle::ParticleType value )
	{
		static_cast<Ogre::Particle*>(_native)->particleType = (Ogre::Particle::ParticleType)value;
	}
	
	bool Particle::HasOwnDimensions::get()
	{
		return static_cast<const Ogre::Particle*>(_native)->hasOwnDimensions( );
	}
	
	Mogre::Real Particle::OwnHeight::get()
	{
		return static_cast<const Ogre::Particle*>(_native)->getOwnHeight( );
	}
	
	Mogre::Real Particle::OwnWidth::get()
	{
		return static_cast<const Ogre::Particle*>(_native)->getOwnWidth( );
	}
	
	Mogre::Radian Particle::Rotation::get()
	{
		return static_cast<const Ogre::Particle*>(_native)->getRotation( );
	}
	void Particle::Rotation::set( Mogre::Radian rad )
	{
		static_cast<Ogre::Particle*>(_native)->setRotation( rad );
	}
	
	void Particle::SetDimensions( Mogre::Real width, Mogre::Real height )
	{
		static_cast<Ogre::Particle*>(_native)->setDimensions( width, height );
	}
	
	void Particle::_notifyOwner( Mogre::ParticleSystem^ owner )
	{
		static_cast<Ogre::Particle*>(_native)->_notifyOwner( owner );
	}
	
	void Particle::ResetDimensions( )
	{
		static_cast<Ogre::Particle*>(_native)->resetDimensions( );
	}
	
	
	//Protected Declarations
	
	

}
