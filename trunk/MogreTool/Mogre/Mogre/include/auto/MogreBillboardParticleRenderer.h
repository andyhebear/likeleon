/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreBillboardParticleRenderer.h"
#include "MogreParticleSystemRenderer.h"
#include "MogreBillboardSet.h"
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//BillboardParticleRenderer
	//################################################################
	
	public ref class BillboardParticleRenderer : public ParticleSystemRenderer
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		BillboardParticleRenderer( CLRObject* obj ) : ParticleSystemRenderer(obj)
		{
		}
	
	
		//Public Declarations
	public:
		BillboardParticleRenderer( );
	
	
		property Mogre::BillboardOrigin BillboardOrigin
		{
		public:
			Mogre::BillboardOrigin get();
		public:
			void set(Mogre::BillboardOrigin origin);
		}
	
		property Mogre::BillboardRotationType BillboardRotationType
		{
		public:
			Mogre::BillboardRotationType get();
		public:
			void set(Mogre::BillboardRotationType rotationType);
		}
	
		property Mogre::BillboardSet^ BillboardSet
		{
		public:
			Mogre::BillboardSet^ get();
		}
	
		property Mogre::BillboardType BillboardType
		{
		public:
			Mogre::BillboardType get();
		public:
			void set(Mogre::BillboardType bbt);
		}
	
		property Mogre::Vector3 CommonDirection
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 vec);
		}
	
		property Mogre::Vector3 CommonUpVector
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 vec);
		}
	
		property bool IsPointRenderingEnabled
		{
		public:
			bool get();
		}
	
		property String^ Type
		{
		public:
			String^ get();
		}
	
		property bool UseAccurateFacing
		{
		public:
			bool get();
		public:
			void set(bool acc);
		}
	
		void SetPointRenderingEnabled( bool enabled );
	
		void _setMaterial( Mogre::MaterialPtr^ mat );
	
		void _notifyCurrentCamera( Mogre::Camera^ cam );
	
		void _notifyParticleRotated( );
	
		void _notifyParticleResized( );
	
		void _notifyParticleQuota( size_t quota );
	
		void _notifyAttached( Mogre::Node^ parent, bool isTagPoint );
		void _notifyAttached( Mogre::Node^ parent );
	
		void _notifyDefaultDimensions( Mogre::Real width, Mogre::Real height );
	
		void SetRenderQueueGroup( Mogre::uint8 queueID );
	
		void SetKeepParticlesInLocalSpace( bool keepLocal );
	
		Mogre::SortMode _getSortMode( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( BillboardParticleRenderer )
	
		//Protected Declarations
	protected public:
	
	};
	

}
