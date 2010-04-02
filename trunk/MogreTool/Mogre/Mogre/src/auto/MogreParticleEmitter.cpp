/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreParticleEmitter.h"
#include "MogreStringInterface.h"
#include "MogreParticle.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//ParticleEmitter
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::StringInterface* ParticleEmitter::_IStringInterface_GetNativePtr()
	{
		return static_cast<Ogre::StringInterface*>( static_cast<Ogre::ParticleEmitter*>(_native) );
	}
	
	
	//Public Declarations
	Mogre::Radian ParticleEmitter::Angle::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getAngle( );
	}
	void ParticleEmitter::Angle::set( Mogre::Radian angle )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setAngle( angle );
	}
	
	Mogre::ColourValue ParticleEmitter::Colour::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getColour( );
	}
	void ParticleEmitter::Colour::set( Mogre::ColourValue colour )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setColour( colour );
	}
	
	Mogre::ColourValue ParticleEmitter::ColourRangeEnd::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getColourRangeEnd( );
	}
	void ParticleEmitter::ColourRangeEnd::set( Mogre::ColourValue colour )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setColourRangeEnd( colour );
	}
	
	Mogre::ColourValue ParticleEmitter::ColourRangeStart::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getColourRangeStart( );
	}
	void ParticleEmitter::ColourRangeStart::set( Mogre::ColourValue colour )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setColourRangeStart( colour );
	}
	
	Mogre::Vector3 ParticleEmitter::Direction::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getDirection( );
	}
	void ParticleEmitter::Direction::set( Mogre::Vector3 direction )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setDirection( direction );
	}
	
	Mogre::Real ParticleEmitter::Duration::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getDuration( );
	}
	void ParticleEmitter::Duration::set( Mogre::Real duration )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setDuration( duration );
	}
	
	Mogre::Real ParticleEmitter::EmissionRate::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getEmissionRate( );
	}
	void ParticleEmitter::EmissionRate::set( Mogre::Real particlesPerSecond )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setEmissionRate( particlesPerSecond );
	}
	
	String^ ParticleEmitter::EmittedEmitter::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ParticleEmitter*>(_native)->getEmittedEmitter( ) );
	}
	void ParticleEmitter::EmittedEmitter::set( String^ emittedEmitter )
	{
		DECLARE_NATIVE_STRING( o_emittedEmitter, emittedEmitter )
	
		static_cast<Ogre::ParticleEmitter*>(_native)->setEmittedEmitter( o_emittedEmitter );
	}
	
	bool ParticleEmitter::Enabled::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getEnabled( );
	}
	void ParticleEmitter::Enabled::set( bool enabled )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setEnabled( enabled );
	}
	
	bool ParticleEmitter::IsEmitted::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->isEmitted( );
	}
	
	Mogre::Real ParticleEmitter::MaxDuration::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getMaxDuration( );
	}
	void ParticleEmitter::MaxDuration::set( Mogre::Real max )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setMaxDuration( max );
	}
	
	Mogre::Real ParticleEmitter::MaxParticleVelocity::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getMaxParticleVelocity( );
	}
	void ParticleEmitter::MaxParticleVelocity::set( Mogre::Real max )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setMaxParticleVelocity( max );
	}
	
	Mogre::Real ParticleEmitter::MaxRepeatDelay::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getMaxRepeatDelay( );
	}
	void ParticleEmitter::MaxRepeatDelay::set( Mogre::Real max )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setMaxRepeatDelay( max );
	}
	
	Mogre::Real ParticleEmitter::MaxTimeToLive::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getMaxTimeToLive( );
	}
	void ParticleEmitter::MaxTimeToLive::set( Mogre::Real max )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setMaxTimeToLive( max );
	}
	
	Mogre::Real ParticleEmitter::MinDuration::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getMinDuration( );
	}
	void ParticleEmitter::MinDuration::set( Mogre::Real min )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setMinDuration( min );
	}
	
	Mogre::Real ParticleEmitter::MinParticleVelocity::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getMinParticleVelocity( );
	}
	void ParticleEmitter::MinParticleVelocity::set( Mogre::Real min )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setMinParticleVelocity( min );
	}
	
	Mogre::Real ParticleEmitter::MinRepeatDelay::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getMinRepeatDelay( );
	}
	void ParticleEmitter::MinRepeatDelay::set( Mogre::Real min )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setMinRepeatDelay( min );
	}
	
	Mogre::Real ParticleEmitter::MinTimeToLive::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getMinTimeToLive( );
	}
	void ParticleEmitter::MinTimeToLive::set( Mogre::Real min )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setMinTimeToLive( min );
	}
	
	String^ ParticleEmitter::Name::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ParticleEmitter*>(_native)->getName( ) );
	}
	void ParticleEmitter::Name::set( String^ newName )
	{
		DECLARE_NATIVE_STRING( o_newName, newName )
	
		static_cast<Ogre::ParticleEmitter*>(_native)->setName( o_newName );
	}
	
	Mogre::Real ParticleEmitter::ParticleVelocity::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getParticleVelocity( );
	}
	void ParticleEmitter::ParticleVelocity::set( Mogre::Real speed )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setParticleVelocity( speed );
	}
	
	Mogre::Vector3 ParticleEmitter::Position::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getPosition( );
	}
	void ParticleEmitter::Position::set( Mogre::Vector3 pos )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setPosition( pos );
	}
	
	Mogre::Real ParticleEmitter::RepeatDelay::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getRepeatDelay( );
	}
	void ParticleEmitter::RepeatDelay::set( Mogre::Real duration )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setRepeatDelay( duration );
	}
	
	Mogre::Real ParticleEmitter::StartTime::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getStartTime( );
	}
	void ParticleEmitter::StartTime::set( Mogre::Real startTime )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setStartTime( startTime );
	}
	
	Mogre::Real ParticleEmitter::TimeToLive::get()
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getTimeToLive( );
	}
	void ParticleEmitter::TimeToLive::set( Mogre::Real ttl )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setTimeToLive( ttl );
	}
	
	String^ ParticleEmitter::Type::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ParticleEmitter*>(_native)->getType( ) );
	}
	
	void ParticleEmitter::SetParticleVelocity( Mogre::Real min, Mogre::Real max )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setParticleVelocity( min, max );
	}
	
	void ParticleEmitter::SetTimeToLive( Mogre::Real minTtl, Mogre::Real maxTtl )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setTimeToLive( minTtl, maxTtl );
	}
	
	void ParticleEmitter::SetColour( Mogre::ColourValue colourStart, Mogre::ColourValue colourEnd )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setColour( colourStart, colourEnd );
	}
	
	unsigned short ParticleEmitter::_getEmissionCount( Mogre::Real timeElapsed )
	{
		return static_cast<Ogre::ParticleEmitter*>(_native)->_getEmissionCount( timeElapsed );
	}
	
	void ParticleEmitter::_initParticle( Mogre::Particle^ pParticle )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->_initParticle( pParticle );
	}
	
	void ParticleEmitter::SetDuration( Mogre::Real min, Mogre::Real max )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setDuration( min, max );
	}
	
	void ParticleEmitter::SetRepeatDelay( Mogre::Real min, Mogre::Real max )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setRepeatDelay( min, max );
	}
	
	void ParticleEmitter::SetEmitted( bool emitted )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setEmitted( emitted );
	}
	
	//------------------------------------------------------------
	// Implementation for IStringInterface
	//------------------------------------------------------------
	
	Mogre::ParamDictionary_NativePtr ParticleEmitter::ParamDictionary::get()
	{
		return static_cast<Ogre::ParticleEmitter*>(_native)->getParamDictionary( );
	}
	
	Mogre::Const_ParameterList^ ParticleEmitter::GetParameters( )
	{
		return static_cast<const Ogre::ParticleEmitter*>(_native)->getParameters( );
	}
	
	bool ParticleEmitter::SetParameter( String^ name, String^ value )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_value, value )
	
		return static_cast<Ogre::ParticleEmitter*>(_native)->setParameter( o_name, o_value );
	}
	
	void ParticleEmitter::SetParameterList( Mogre::Const_NameValuePairList^ paramList )
	{
		static_cast<Ogre::ParticleEmitter*>(_native)->setParameterList( paramList );
	}
	
	String^ ParticleEmitter::GetParameter( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return TO_CLR_STRING( static_cast<const Ogre::ParticleEmitter*>(_native)->getParameter( o_name ) );
	}
	
	void ParticleEmitter::CopyParametersTo( Mogre::IStringInterface^ dest )
	{
		static_cast<const Ogre::ParticleEmitter*>(_native)->copyParametersTo( dest );
	}
	
	
	//Protected Declarations
	
	

}
