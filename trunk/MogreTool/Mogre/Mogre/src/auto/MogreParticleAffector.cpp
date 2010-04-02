/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreParticleAffector.h"
#include "MogreStringInterface.h"
#include "MogreParticle.h"
#include "MogreParticleSystem.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//ParticleAffector
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::StringInterface* ParticleAffector::_IStringInterface_GetNativePtr()
	{
		return static_cast<Ogre::StringInterface*>( static_cast<Ogre::ParticleAffector*>(_native) );
	}
	
	
	//Public Declarations
	String^ ParticleAffector::Type::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ParticleAffector*>(_native)->getType( ) );
	}
	
	void ParticleAffector::_initParticle( Mogre::Particle^ pParticle )
	{
		static_cast<Ogre::ParticleAffector*>(_native)->_initParticle( pParticle );
	}
	
	void ParticleAffector::_affectParticles( Mogre::ParticleSystem^ pSystem, Mogre::Real timeElapsed )
	{
		static_cast<Ogre::ParticleAffector*>(_native)->_affectParticles( pSystem, timeElapsed );
	}
	
	//------------------------------------------------------------
	// Implementation for IStringInterface
	//------------------------------------------------------------
	
	Mogre::ParamDictionary_NativePtr ParticleAffector::ParamDictionary::get()
	{
		return static_cast<Ogre::ParticleAffector*>(_native)->getParamDictionary( );
	}
	
	Mogre::Const_ParameterList^ ParticleAffector::GetParameters( )
	{
		return static_cast<const Ogre::ParticleAffector*>(_native)->getParameters( );
	}
	
	bool ParticleAffector::SetParameter( String^ name, String^ value )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_value, value )
	
		return static_cast<Ogre::ParticleAffector*>(_native)->setParameter( o_name, o_value );
	}
	
	void ParticleAffector::SetParameterList( Mogre::Const_NameValuePairList^ paramList )
	{
		static_cast<Ogre::ParticleAffector*>(_native)->setParameterList( paramList );
	}
	
	String^ ParticleAffector::GetParameter( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return TO_CLR_STRING( static_cast<const Ogre::ParticleAffector*>(_native)->getParameter( o_name ) );
	}
	
	void ParticleAffector::CopyParametersTo( Mogre::IStringInterface^ dest )
	{
		static_cast<const Ogre::ParticleAffector*>(_native)->copyParametersTo( dest );
	}
	
	
	//Protected Declarations
	
	

}
