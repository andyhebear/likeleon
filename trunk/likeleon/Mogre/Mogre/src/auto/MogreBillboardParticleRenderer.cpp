/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreBillboardParticleRenderer.h"
#include "MogreBillboardSet.h"
#include "MogreMaterial.h"
#include "MogreCamera.h"
#include "MogreNode.h"

namespace Mogre
{
	//################################################################
	//BillboardParticleRenderer
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	BillboardParticleRenderer::BillboardParticleRenderer( ) : ParticleSystemRenderer((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::BillboardParticleRenderer();
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::BillboardOrigin BillboardParticleRenderer::BillboardOrigin::get()
	{
		return (Mogre::BillboardOrigin)static_cast<const Ogre::BillboardParticleRenderer*>(_native)->getBillboardOrigin( );
	}
	void BillboardParticleRenderer::BillboardOrigin::set( Mogre::BillboardOrigin origin )
	{
		static_cast<Ogre::BillboardParticleRenderer*>(_native)->setBillboardOrigin( (Ogre::BillboardOrigin)origin );
	}
	
	Mogre::BillboardRotationType BillboardParticleRenderer::BillboardRotationType::get()
	{
		return (Mogre::BillboardRotationType)static_cast<const Ogre::BillboardParticleRenderer*>(_native)->getBillboardRotationType( );
	}
	void BillboardParticleRenderer::BillboardRotationType::set( Mogre::BillboardRotationType rotationType )
	{
		static_cast<Ogre::BillboardParticleRenderer*>(_native)->setBillboardRotationType( (Ogre::BillboardRotationType)rotationType );
	}
	
	Mogre::BillboardSet^ BillboardParticleRenderer::BillboardSet::get()
	{
		return static_cast<const Ogre::BillboardParticleRenderer*>(_native)->getBillboardSet( );
	}
	
	Mogre::BillboardType BillboardParticleRenderer::BillboardType::get()
	{
		return (Mogre::BillboardType)static_cast<const Ogre::BillboardParticleRenderer*>(_native)->getBillboardType( );
	}
	void BillboardParticleRenderer::BillboardType::set( Mogre::BillboardType bbt )
	{
		static_cast<Ogre::BillboardParticleRenderer*>(_native)->setBillboardType( (Ogre::BillboardType)bbt );
	}
	
	Mogre::Vector3 BillboardParticleRenderer::CommonDirection::get()
	{
		return static_cast<const Ogre::BillboardParticleRenderer*>(_native)->getCommonDirection( );
	}
	void BillboardParticleRenderer::CommonDirection::set( Mogre::Vector3 vec )
	{
		static_cast<Ogre::BillboardParticleRenderer*>(_native)->setCommonDirection( vec );
	}
	
	Mogre::Vector3 BillboardParticleRenderer::CommonUpVector::get()
	{
		return static_cast<const Ogre::BillboardParticleRenderer*>(_native)->getCommonUpVector( );
	}
	void BillboardParticleRenderer::CommonUpVector::set( Mogre::Vector3 vec )
	{
		static_cast<Ogre::BillboardParticleRenderer*>(_native)->setCommonUpVector( vec );
	}
	
	bool BillboardParticleRenderer::IsPointRenderingEnabled::get()
	{
		return static_cast<const Ogre::BillboardParticleRenderer*>(_native)->isPointRenderingEnabled( );
	}
	
	String^ BillboardParticleRenderer::Type::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::BillboardParticleRenderer*>(_native)->getType( ) );
	}
	
	bool BillboardParticleRenderer::UseAccurateFacing::get()
	{
		return static_cast<const Ogre::BillboardParticleRenderer*>(_native)->getUseAccurateFacing( );
	}
	void BillboardParticleRenderer::UseAccurateFacing::set( bool acc )
	{
		static_cast<Ogre::BillboardParticleRenderer*>(_native)->setUseAccurateFacing( acc );
	}
	
	void BillboardParticleRenderer::SetPointRenderingEnabled( bool enabled )
	{
		static_cast<Ogre::BillboardParticleRenderer*>(_native)->setPointRenderingEnabled( enabled );
	}
	
	void BillboardParticleRenderer::_setMaterial( Mogre::MaterialPtr^ mat )
	{
		static_cast<Ogre::BillboardParticleRenderer*>(_native)->_setMaterial( (Ogre::MaterialPtr&)mat );
	}
	
	void BillboardParticleRenderer::_notifyCurrentCamera( Mogre::Camera^ cam )
	{
		static_cast<Ogre::BillboardParticleRenderer*>(_native)->_notifyCurrentCamera( cam );
	}
	
	void BillboardParticleRenderer::_notifyParticleRotated( )
	{
		static_cast<Ogre::BillboardParticleRenderer*>(_native)->_notifyParticleRotated( );
	}
	
	void BillboardParticleRenderer::_notifyParticleResized( )
	{
		static_cast<Ogre::BillboardParticleRenderer*>(_native)->_notifyParticleResized( );
	}
	
	void BillboardParticleRenderer::_notifyParticleQuota( size_t quota )
	{
		static_cast<Ogre::BillboardParticleRenderer*>(_native)->_notifyParticleQuota( quota );
	}
	
	void BillboardParticleRenderer::_notifyAttached( Mogre::Node^ parent, bool isTagPoint )
	{
		static_cast<Ogre::BillboardParticleRenderer*>(_native)->_notifyAttached( parent, isTagPoint );
	}
	void BillboardParticleRenderer::_notifyAttached( Mogre::Node^ parent )
	{
		static_cast<Ogre::BillboardParticleRenderer*>(_native)->_notifyAttached( parent );
	}
	
	void BillboardParticleRenderer::_notifyDefaultDimensions( Mogre::Real width, Mogre::Real height )
	{
		static_cast<Ogre::BillboardParticleRenderer*>(_native)->_notifyDefaultDimensions( width, height );
	}
	
	void BillboardParticleRenderer::SetRenderQueueGroup( Mogre::uint8 queueID )
	{
		static_cast<Ogre::BillboardParticleRenderer*>(_native)->setRenderQueueGroup( queueID );
	}
	
	void BillboardParticleRenderer::SetKeepParticlesInLocalSpace( bool keepLocal )
	{
		static_cast<Ogre::BillboardParticleRenderer*>(_native)->setKeepParticlesInLocalSpace( keepLocal );
	}
	
	Mogre::SortMode BillboardParticleRenderer::_getSortMode( )
	{
		return (Mogre::SortMode)static_cast<const Ogre::BillboardParticleRenderer*>(_native)->_getSortMode( );
	}
	
	
	//Protected Declarations
	
	

}
