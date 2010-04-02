/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreParticleSystem.h"
#include "MogreStringInterface.h"
#include "MogreMovableObject.h"
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//ParticleSystem
	//################################################################
	
	public ref class ParticleSystem : public MovableObject, public IStringInterface
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ParticleSystem( CLRObject* obj ) : MovableObject(obj)
		{
		}
	
		virtual Ogre::StringInterface* _IStringInterface_GetNativePtr() = IStringInterface::_GetNativePtr;
	
	
		//Public Declarations
	public:
		ParticleSystem( );
		ParticleSystem( String^ name, String^ resourceGroupName );
	
	
		property Mogre::AxisAlignedBox^ BoundingBox
		{
		public:
			Mogre::AxisAlignedBox^ get();
		}
	
		property Mogre::Real BoundingRadius
		{
		public:
			Mogre::Real get();
		}
	
		property bool CullIndividually
		{
		public:
			bool get();
		public:
			void set(bool cullIndividual);
		}
	
		property Mogre::Real DefaultHeight
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real height);
		}
	
		property Mogre::Real DefaultIterationInterval
		{
		public:
			static Mogre::Real get();
		public:
			static void set(Mogre::Real iterationInterval);
		}
	
		property Mogre::Real DefaultNonVisibleUpdateTimeout
		{
		public:
			static Mogre::Real get();
		public:
			static void set(Mogre::Real timeout);
		}
	
		property Mogre::Real DefaultWidth
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real width);
		}
	
		property size_t EmittedEmitterQuota
		{
		public:
			size_t get();
		public:
			void set(size_t quota);
		}
	
		property Mogre::Real IterationInterval
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real iterationInterval);
		}
	
		property bool KeepParticlesInLocalSpace
		{
		public:
			bool get();
		public:
			void set(bool keepLocal);
		}
	
		property String^ MaterialName
		{
		public:
			String^ get();
		public:
			void set(String^ name);
		}
	
		property String^ MovableType
		{
		public:
			String^ get();
		}
	
		property Mogre::Real NonVisibleUpdateTimeout
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real timeout);
		}
	
		property unsigned short NumAffectors
		{
		public:
			unsigned short get();
		}
	
		property unsigned short NumEmitters
		{
		public:
			unsigned short get();
		}
	
		property size_t NumParticles
		{
		public:
			size_t get();
		}
	
		property String^ Origin
		{
		public:
			String^ get();
		}
	
		property size_t ParticleQuota
		{
		public:
			size_t get();
		public:
			void set(size_t quota);
		}
	
		property Mogre::ParticleSystemRenderer^ Renderer
		{
		public:
			Mogre::ParticleSystemRenderer^ get();
		}
	
		property String^ RendererName
		{
		public:
			String^ get();
		}
	
		property Mogre::uint8 RenderQueueGroup
		{
		public:
			Mogre::uint8 get();
		public:
			void set(Mogre::uint8 queueID);
		}
	
		property String^ ResourceGroupName
		{
		public:
			String^ get();
		}
	
		property bool SortingEnabled
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property Mogre::Real SpeedFactor
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real speedFactor);
		}
	
		property Mogre::uint32 TypeFlags
		{
		public:
			Mogre::uint32 get();
		}
	
		void SetRenderer( String^ typeName );
	
		Mogre::ParticleEmitter^ AddEmitter( String^ emitterType );
	
		Mogre::ParticleEmitter^ GetEmitter( unsigned short index );
	
		void RemoveEmitter( unsigned short index );
	
		void RemoveAllEmitters( );
	
		Mogre::ParticleAffector^ AddAffector( String^ affectorType );
	
		Mogre::ParticleAffector^ GetAffector( unsigned short index );
	
		void RemoveAffector( unsigned short index );
	
		void RemoveAllAffectors( );
	
		void Clear( );
	
		Mogre::Particle^ CreateParticle( );
	
		Mogre::Particle^ CreateEmitterParticle( String^ emitterName );
	
		Mogre::Particle^ GetParticle( size_t index );
	
		void CopyTo(ParticleSystem^ dest)
		{
			if (_native == NULL) throw gcnew Exception("The underlying native object for the caller is null.");
			if (dest->_native == NULL) throw gcnew ArgumentException("The underlying native object for parameter 'dest' is null.");
	
			*(dest->_native) = *_native;
		}
	
		void _update( Mogre::Real timeElapsed );
	
		Mogre::ParticleIterator^ _getIterator( );
	
		void _notifyCurrentCamera( Mogre::Camera^ cam );
	
		void _notifyAttached( Mogre::Node^ parent, bool isTagPoint );
		void _notifyAttached( Mogre::Node^ parent );
	
		void _updateRenderQueue( Mogre::RenderQueue^ queue );
	
		void FastForward( Mogre::Real time, Mogre::Real interval );
		void FastForward( Mogre::Real time );
	
		void _notifyParticleResized( );
	
		void _notifyParticleRotated( );
	
		void SetDefaultDimensions( Mogre::Real width, Mogre::Real height );
	
		void _notifyOrigin( String^ origin );
	
		void SetBounds( Mogre::AxisAlignedBox^ aabb );
	
		void SetBoundsAutoUpdated( bool autoUpdate, Mogre::Real stopIn );
		void SetBoundsAutoUpdated( bool autoUpdate );
	
		void _updateBounds( );
	
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
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( ParticleSystem )
	
		//Protected Declarations
	protected public:
	
	};
	

}
