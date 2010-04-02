/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreParticleSystemRenderer.h"
#include "MogreStringInterface.h"
#include "MogreMaterial.h"
#include "MogreCamera.h"
#include "MogreNode.h"
#include "MogreParticle.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//ParticleSystemRenderer
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::StringInterface* ParticleSystemRenderer::_IStringInterface_GetNativePtr()
	{
		return static_cast<Ogre::StringInterface*>( static_cast<Ogre::ParticleSystemRenderer*>(_native) );
	}
	
	
	//Public Declarations
	String^ ParticleSystemRenderer::Type::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ParticleSystemRenderer*>(_native)->getType( ) );
	}
	
	void ParticleSystemRenderer::_setMaterial( Mogre::MaterialPtr^ mat )
	{
		static_cast<Ogre::ParticleSystemRenderer*>(_native)->_setMaterial( (Ogre::MaterialPtr&)mat );
	}
	
	void ParticleSystemRenderer::_notifyCurrentCamera( Mogre::Camera^ cam )
	{
		static_cast<Ogre::ParticleSystemRenderer*>(_native)->_notifyCurrentCamera( cam );
	}
	
	void ParticleSystemRenderer::_notifyAttached( Mogre::Node^ parent, bool isTagPoint )
	{
		static_cast<Ogre::ParticleSystemRenderer*>(_native)->_notifyAttached( parent, isTagPoint );
	}
	void ParticleSystemRenderer::_notifyAttached( Mogre::Node^ parent )
	{
		static_cast<Ogre::ParticleSystemRenderer*>(_native)->_notifyAttached( parent );
	}
	
	void ParticleSystemRenderer::_notifyParticleRotated( )
	{
		static_cast<Ogre::ParticleSystemRenderer*>(_native)->_notifyParticleRotated( );
	}
	
	void ParticleSystemRenderer::_notifyParticleResized( )
	{
		static_cast<Ogre::ParticleSystemRenderer*>(_native)->_notifyParticleResized( );
	}
	
	void ParticleSystemRenderer::_notifyParticleQuota( size_t quota )
	{
		static_cast<Ogre::ParticleSystemRenderer*>(_native)->_notifyParticleQuota( quota );
	}
	
	void ParticleSystemRenderer::_notifyDefaultDimensions( Mogre::Real width, Mogre::Real height )
	{
		static_cast<Ogre::ParticleSystemRenderer*>(_native)->_notifyDefaultDimensions( width, height );
	}
	
	void ParticleSystemRenderer::_notifyParticleEmitted( Mogre::Particle^ particle )
	{
		static_cast<Ogre::ParticleSystemRenderer*>(_native)->_notifyParticleEmitted( particle );
	}
	
	void ParticleSystemRenderer::_notifyParticleExpired( Mogre::Particle^ particle )
	{
		static_cast<Ogre::ParticleSystemRenderer*>(_native)->_notifyParticleExpired( particle );
	}
	
	void ParticleSystemRenderer::SetRenderQueueGroup( Mogre::uint8 queueID )
	{
		static_cast<Ogre::ParticleSystemRenderer*>(_native)->setRenderQueueGroup( queueID );
	}
	
	void ParticleSystemRenderer::SetKeepParticlesInLocalSpace( bool keepLocal )
	{
		static_cast<Ogre::ParticleSystemRenderer*>(_native)->setKeepParticlesInLocalSpace( keepLocal );
	}
	
	Mogre::SortMode ParticleSystemRenderer::_getSortMode( )
	{
		return (Mogre::SortMode)static_cast<const Ogre::ParticleSystemRenderer*>(_native)->_getSortMode( );
	}
	
	//------------------------------------------------------------
	// Implementation for IStringInterface
	//------------------------------------------------------------
	
	Mogre::ParamDictionary_NativePtr ParticleSystemRenderer::ParamDictionary::get()
	{
		return static_cast<Ogre::ParticleSystemRenderer*>(_native)->getParamDictionary( );
	}
	
	Mogre::Const_ParameterList^ ParticleSystemRenderer::GetParameters( )
	{
		return static_cast<const Ogre::ParticleSystemRenderer*>(_native)->getParameters( );
	}
	
	bool ParticleSystemRenderer::SetParameter( String^ name, String^ value )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_value, value )
	
		return static_cast<Ogre::ParticleSystemRenderer*>(_native)->setParameter( o_name, o_value );
	}
	
	void ParticleSystemRenderer::SetParameterList( Mogre::Const_NameValuePairList^ paramList )
	{
		static_cast<Ogre::ParticleSystemRenderer*>(_native)->setParameterList( paramList );
	}
	
	String^ ParticleSystemRenderer::GetParameter( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return TO_CLR_STRING( static_cast<const Ogre::ParticleSystemRenderer*>(_native)->getParameter( o_name ) );
	}
	
	void ParticleSystemRenderer::CopyParametersTo( Mogre::IStringInterface^ dest )
	{
		static_cast<const Ogre::ParticleSystemRenderer*>(_native)->copyParametersTo( dest );
	}
	
	
	//Protected Declarations
	
	

}
