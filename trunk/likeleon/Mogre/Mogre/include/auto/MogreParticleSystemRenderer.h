/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreParticleSystemRenderer.h"
#include "MogreStringInterface.h"
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//ParticleSystemRenderer
	//################################################################
	
	public ref class ParticleSystemRenderer : public Wrapper, public IStringInterface
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ParticleSystemRenderer( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::StringInterface* _IStringInterface_GetNativePtr() = IStringInterface::_GetNativePtr;
	
	
		//Public Declarations
	public:
	
	
		property String^ Type
		{
		public:
			String^ get();
		}
	
		void _setMaterial( Mogre::MaterialPtr^ mat );
	
		void _notifyCurrentCamera( Mogre::Camera^ cam );
	
		void _notifyAttached( Mogre::Node^ parent, bool isTagPoint );
		void _notifyAttached( Mogre::Node^ parent );
	
		void _notifyParticleRotated( );
	
		void _notifyParticleResized( );
	
		void _notifyParticleQuota( size_t quota );
	
		void _notifyDefaultDimensions( Mogre::Real width, Mogre::Real height );
	
		void _notifyParticleEmitted( Mogre::Particle^ particle );
	
		void _notifyParticleExpired( Mogre::Particle^ particle );
	
		void SetRenderQueueGroup( Mogre::uint8 queueID );
	
		void SetKeepParticlesInLocalSpace( bool keepLocal );
	
		Mogre::SortMode _getSortMode( );
	
		//------------------------------------------------------------
		// Implementation for IStringInterface
		//------------------------------------------------------------
	
		property Mogre::ParamDictionary_NativePtr ParamDictionary
		{
		public:
			Mogre::ParamDictionary_NativePtr get();
		}
	
	public:
		Mogre::Const_ParameterList^ GetParameters( );
	
	public:
		virtual bool SetParameter( String^ name, String^ value );
	
	public:
		virtual void SetParameterList( Mogre::Const_NameValuePairList^ paramList );
	
	public:
		virtual String^ GetParameter( String^ name );
	
	public:
		virtual void CopyParametersTo( Mogre::IStringInterface^ dest );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( ParticleSystemRenderer )
	
		//Protected Declarations
	protected public:
	
	};
	

}
