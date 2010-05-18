/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreParticleSystem.h"
#include "MogreStringInterface.h"
#include "MogreParticleSystemRenderer.h"
#include "MogreParticleEmitter.h"
#include "MogreParticleAffector.h"
#include "MogreParticle.h"
#include "MogreParticleIterator.h"
#include "MogreCamera.h"
#include "MogreNode.h"
#include "MogreRenderQueue.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//ParticleSystem
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::StringInterface* ParticleSystem::_IStringInterface_GetNativePtr()
	{
		return static_cast<Ogre::StringInterface*>( static_cast<Ogre::ParticleSystem*>(_native) );
	}
	
	
	//Public Declarations
	ParticleSystem::ParticleSystem( ) : MovableObject((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::ParticleSystem();
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	ParticleSystem::ParticleSystem( String^ name, String^ resourceGroupName ) : MovableObject((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_resourceGroupName, resourceGroupName )
	
		_native = new Ogre::ParticleSystem( o_name, o_resourceGroupName);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::AxisAlignedBox^ ParticleSystem::BoundingBox::get()
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getBoundingBox( );
	}
	
	Mogre::Real ParticleSystem::BoundingRadius::get()
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getBoundingRadius( );
	}
	
	bool ParticleSystem::CullIndividually::get()
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getCullIndividually( );
	}
	void ParticleSystem::CullIndividually::set( bool cullIndividual )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->setCullIndividually( cullIndividual );
	}
	
	Mogre::Real ParticleSystem::DefaultHeight::get()
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getDefaultHeight( );
	}
	void ParticleSystem::DefaultHeight::set( Mogre::Real height )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->setDefaultHeight( height );
	}
	
	Mogre::Real ParticleSystem::DefaultIterationInterval::get()
	{
		return Ogre::ParticleSystem::getDefaultIterationInterval( );
	}
	void ParticleSystem::DefaultIterationInterval::set( Mogre::Real iterationInterval )
	{
		Ogre::ParticleSystem::setDefaultIterationInterval( iterationInterval );
	}
	
	Mogre::Real ParticleSystem::DefaultNonVisibleUpdateTimeout::get()
	{
		return Ogre::ParticleSystem::getDefaultNonVisibleUpdateTimeout( );
	}
	void ParticleSystem::DefaultNonVisibleUpdateTimeout::set( Mogre::Real timeout )
	{
		Ogre::ParticleSystem::setDefaultNonVisibleUpdateTimeout( timeout );
	}
	
	Mogre::Real ParticleSystem::DefaultWidth::get()
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getDefaultWidth( );
	}
	void ParticleSystem::DefaultWidth::set( Mogre::Real width )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->setDefaultWidth( width );
	}
	
	size_t ParticleSystem::EmittedEmitterQuota::get()
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getEmittedEmitterQuota( );
	}
	void ParticleSystem::EmittedEmitterQuota::set( size_t quota )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->setEmittedEmitterQuota( quota );
	}
	
	Mogre::Real ParticleSystem::IterationInterval::get()
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getIterationInterval( );
	}
	void ParticleSystem::IterationInterval::set( Mogre::Real iterationInterval )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->setIterationInterval( iterationInterval );
	}
	
	bool ParticleSystem::KeepParticlesInLocalSpace::get()
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getKeepParticlesInLocalSpace( );
	}
	void ParticleSystem::KeepParticlesInLocalSpace::set( bool keepLocal )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->setKeepParticlesInLocalSpace( keepLocal );
	}
	
	String^ ParticleSystem::MaterialName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ParticleSystem*>(_native)->getMaterialName( ) );
	}
	void ParticleSystem::MaterialName::set( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::ParticleSystem*>(_native)->setMaterialName( o_name );
	}
	
	String^ ParticleSystem::MovableType::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ParticleSystem*>(_native)->getMovableType( ) );
	}
	
	Mogre::Real ParticleSystem::NonVisibleUpdateTimeout::get()
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getNonVisibleUpdateTimeout( );
	}
	void ParticleSystem::NonVisibleUpdateTimeout::set( Mogre::Real timeout )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->setNonVisibleUpdateTimeout( timeout );
	}
	
	unsigned short ParticleSystem::NumAffectors::get()
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getNumAffectors( );
	}
	
	unsigned short ParticleSystem::NumEmitters::get()
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getNumEmitters( );
	}
	
	size_t ParticleSystem::NumParticles::get()
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getNumParticles( );
	}
	
	String^ ParticleSystem::Origin::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ParticleSystem*>(_native)->getOrigin( ) );
	}
	
	size_t ParticleSystem::ParticleQuota::get()
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getParticleQuota( );
	}
	void ParticleSystem::ParticleQuota::set( size_t quota )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->setParticleQuota( quota );
	}
	
	Mogre::ParticleSystemRenderer^ ParticleSystem::Renderer::get()
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getRenderer( );
	}
	
	String^ ParticleSystem::RendererName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ParticleSystem*>(_native)->getRendererName( ) );
	}
	
	Mogre::uint8 ParticleSystem::RenderQueueGroup::get()
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getRenderQueueGroup( );
	}
	void ParticleSystem::RenderQueueGroup::set( Mogre::uint8 queueID )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->setRenderQueueGroup( queueID );
	}
	
	String^ ParticleSystem::ResourceGroupName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ParticleSystem*>(_native)->getResourceGroupName( ) );
	}
	
	bool ParticleSystem::SortingEnabled::get()
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getSortingEnabled( );
	}
	void ParticleSystem::SortingEnabled::set( bool enabled )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->setSortingEnabled( enabled );
	}
	
	Mogre::Real ParticleSystem::SpeedFactor::get()
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getSpeedFactor( );
	}
	void ParticleSystem::SpeedFactor::set( Mogre::Real speedFactor )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->setSpeedFactor( speedFactor );
	}
	
	Mogre::uint32 ParticleSystem::TypeFlags::get()
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getTypeFlags( );
	}
	
	void ParticleSystem::SetRenderer( String^ typeName )
	{
		DECLARE_NATIVE_STRING( o_typeName, typeName )
	
		static_cast<Ogre::ParticleSystem*>(_native)->setRenderer( o_typeName );
	}
	
	Mogre::ParticleEmitter^ ParticleSystem::AddEmitter( String^ emitterType )
	{
		DECLARE_NATIVE_STRING( o_emitterType, emitterType )
	
		return static_cast<Ogre::ParticleSystem*>(_native)->addEmitter( o_emitterType );
	}
	
	Mogre::ParticleEmitter^ ParticleSystem::GetEmitter( unsigned short index )
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getEmitter( index );
	}
	
	void ParticleSystem::RemoveEmitter( unsigned short index )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->removeEmitter( index );
	}
	
	void ParticleSystem::RemoveAllEmitters( )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->removeAllEmitters( );
	}
	
	Mogre::ParticleAffector^ ParticleSystem::AddAffector( String^ affectorType )
	{
		DECLARE_NATIVE_STRING( o_affectorType, affectorType )
	
		return static_cast<Ogre::ParticleSystem*>(_native)->addAffector( o_affectorType );
	}
	
	Mogre::ParticleAffector^ ParticleSystem::GetAffector( unsigned short index )
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getAffector( index );
	}
	
	void ParticleSystem::RemoveAffector( unsigned short index )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->removeAffector( index );
	}
	
	void ParticleSystem::RemoveAllAffectors( )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->removeAllAffectors( );
	}
	
	void ParticleSystem::Clear( )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->clear( );
	}
	
	Mogre::Particle^ ParticleSystem::CreateParticle( )
	{
		return static_cast<Ogre::ParticleSystem*>(_native)->createParticle( );
	}
	
	Mogre::Particle^ ParticleSystem::CreateEmitterParticle( String^ emitterName )
	{
		DECLARE_NATIVE_STRING( o_emitterName, emitterName )
	
		return static_cast<Ogre::ParticleSystem*>(_native)->createEmitterParticle( o_emitterName );
	}
	
	Mogre::Particle^ ParticleSystem::GetParticle( size_t index )
	{
		return static_cast<Ogre::ParticleSystem*>(_native)->getParticle( index );
	}
	
	
	void ParticleSystem::_update( Mogre::Real timeElapsed )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->_update( timeElapsed );
	}
	
	Mogre::ParticleIterator^ ParticleSystem::_getIterator( )
	{
		return static_cast<Ogre::ParticleSystem*>(_native)->_getIterator( );
	}
	
	void ParticleSystem::_notifyCurrentCamera( Mogre::Camera^ cam )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->_notifyCurrentCamera( cam );
	}
	
	void ParticleSystem::_notifyAttached( Mogre::Node^ parent, bool isTagPoint )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->_notifyAttached( parent, isTagPoint );
	}
	void ParticleSystem::_notifyAttached( Mogre::Node^ parent )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->_notifyAttached( parent );
	}
	
	void ParticleSystem::_updateRenderQueue( Mogre::RenderQueue^ queue )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->_updateRenderQueue( queue );
	}
	
	void ParticleSystem::FastForward( Mogre::Real time, Mogre::Real interval )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->fastForward( time, interval );
	}
	void ParticleSystem::FastForward( Mogre::Real time )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->fastForward( time );
	}
	
	void ParticleSystem::_notifyParticleResized( )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->_notifyParticleResized( );
	}
	
	void ParticleSystem::_notifyParticleRotated( )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->_notifyParticleRotated( );
	}
	
	void ParticleSystem::SetDefaultDimensions( Mogre::Real width, Mogre::Real height )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->setDefaultDimensions( width, height );
	}
	
	void ParticleSystem::_notifyOrigin( String^ origin )
	{
		DECLARE_NATIVE_STRING( o_origin, origin )
	
		static_cast<Ogre::ParticleSystem*>(_native)->_notifyOrigin( o_origin );
	}
	
	void ParticleSystem::SetBounds( Mogre::AxisAlignedBox^ aabb )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->setBounds( (Ogre::AxisAlignedBox)aabb );
	}
	
	void ParticleSystem::SetBoundsAutoUpdated( bool autoUpdate, Mogre::Real stopIn )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->setBoundsAutoUpdated( autoUpdate, stopIn );
	}
	void ParticleSystem::SetBoundsAutoUpdated( bool autoUpdate )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->setBoundsAutoUpdated( autoUpdate );
	}
	
	void ParticleSystem::_updateBounds( )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->_updateBounds( );
	}
	
	//------------------------------------------------------------
	// Implementation for IStringInterface
	//------------------------------------------------------------
	
	Mogre::ParamDictionary_NativePtr ParticleSystem::ParamDictionary::get()
	{
		return static_cast<Ogre::ParticleSystem*>(_native)->getParamDictionary( );
	}
	
	Mogre::Const_ParameterList^ ParticleSystem::GetParameters( )
	{
		return static_cast<const Ogre::ParticleSystem*>(_native)->getParameters( );
	}
	
	bool ParticleSystem::SetParameter( String^ name, String^ value )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_value, value )
	
		return static_cast<Ogre::ParticleSystem*>(_native)->setParameter( o_name, o_value );
	}
	
	void ParticleSystem::SetParameterList( Mogre::Const_NameValuePairList^ paramList )
	{
		static_cast<Ogre::ParticleSystem*>(_native)->setParameterList( paramList );
	}
	
	String^ ParticleSystem::GetParameter( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return TO_CLR_STRING( static_cast<const Ogre::ParticleSystem*>(_native)->getParameter( o_name ) );
	}
	
	void ParticleSystem::CopyParametersTo( Mogre::IStringInterface^ dest )
	{
		static_cast<const Ogre::ParticleSystem*>(_native)->copyParametersTo( dest );
	}
	
	
	//Protected Declarations
	
	

}
