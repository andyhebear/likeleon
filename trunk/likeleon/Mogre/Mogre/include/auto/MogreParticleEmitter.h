/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreParticleEmitter.h"
#include "MogreStringInterface.h"
#include "MogrePrerequisites.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//ParticleEmitter
	//################################################################
	
	public ref class ParticleEmitter : public Wrapper, public IStringInterface
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ParticleEmitter( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::StringInterface* _IStringInterface_GetNativePtr() = IStringInterface::_GetNativePtr;
	
	
		//Public Declarations
	public:
	
	
		property Mogre::Radian Angle
		{
		public:
			Mogre::Radian get();
		public:
			void set(Mogre::Radian angle);
		}
	
		property Mogre::ColourValue Colour
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue colour);
		}
	
		property Mogre::ColourValue ColourRangeEnd
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue colour);
		}
	
		property Mogre::ColourValue ColourRangeStart
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue colour);
		}
	
		property Mogre::Vector3 Direction
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 direction);
		}
	
		property Mogre::Real Duration
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real duration);
		}
	
		property Mogre::Real EmissionRate
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real particlesPerSecond);
		}
	
		property String^ EmittedEmitter
		{
		public:
			String^ get();
		public:
			void set(String^ emittedEmitter);
		}
	
		property bool Enabled
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property bool IsEmitted
		{
		public:
			bool get();
		}
	
		property Mogre::Real MaxDuration
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real max);
		}
	
		property Mogre::Real MaxParticleVelocity
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real max);
		}
	
		property Mogre::Real MaxRepeatDelay
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real max);
		}
	
		property Mogre::Real MaxTimeToLive
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real max);
		}
	
		property Mogre::Real MinDuration
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real min);
		}
	
		property Mogre::Real MinParticleVelocity
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real min);
		}
	
		property Mogre::Real MinRepeatDelay
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real min);
		}
	
		property Mogre::Real MinTimeToLive
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real min);
		}
	
		property String^ Name
		{
		public:
			String^ get();
		public:
			void set(String^ newName);
		}
	
		property Mogre::Real ParticleVelocity
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real speed);
		}
	
		property Mogre::Vector3 Position
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 pos);
		}
	
		property Mogre::Real RepeatDelay
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real duration);
		}
	
		property Mogre::Real StartTime
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real startTime);
		}
	
		property Mogre::Real TimeToLive
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real ttl);
		}
	
		property String^ Type
		{
		public:
			String^ get();
		}
	
		void SetParticleVelocity( Mogre::Real min, Mogre::Real max );
	
		void SetTimeToLive( Mogre::Real minTtl, Mogre::Real maxTtl );
	
		void SetColour( Mogre::ColourValue colourStart, Mogre::ColourValue colourEnd );
	
		unsigned short _getEmissionCount( Mogre::Real timeElapsed );
	
		void _initParticle( Mogre::Particle^ pParticle );
	
		void SetDuration( Mogre::Real min, Mogre::Real max );
	
		void SetRepeatDelay( Mogre::Real min, Mogre::Real max );
	
		void SetEmitted( bool emitted );
	
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
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( ParticleEmitter )
	
		//Protected Declarations
	protected public:
	
	};
	

}
