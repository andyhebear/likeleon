/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreParticle.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//Particle
	//################################################################
	
	public ref class Particle : public INativePointer
	{
		//Nested Types
	
		public: enum class ParticleType
		{
			Visual = Ogre::Particle::Visual,
			Emitter = Ogre::Particle::Emitter
		};
	
		//Private Declarations
	private protected:
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		Particle( Ogre::Particle* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~Particle()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::Particle* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		Particle( );
	
	
		property bool mOwnDimensions
		{
		public:
			bool get();
		public:
			void set(bool value);
		}
	
		property Mogre::Real mWidth
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		property Mogre::Real mHeight
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		property Mogre::Radian rotation
		{
		public:
			Mogre::Radian get();
		public:
			void set(Mogre::Radian value);
		}
	
		property Mogre::Vector3 position
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 value);
		}
	
		property Mogre::Vector3 direction
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 value);
		}
	
		property Mogre::ColourValue colour
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue value);
		}
	
		property Mogre::Real timeToLive
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		property Mogre::Real totalTimeToLive
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		property Mogre::Radian rotationSpeed
		{
		public:
			Mogre::Radian get();
		public:
			void set(Mogre::Radian value);
		}
	
		property Mogre::Particle::ParticleType particleType
		{
		public:
			Mogre::Particle::ParticleType get();
		public:
			void set(Mogre::Particle::ParticleType value);
		}
	
		property bool HasOwnDimensions
		{
		public:
			bool get();
		}
	
		property Mogre::Real OwnHeight
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real OwnWidth
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Radian Rotation
		{
		public:
			Mogre::Radian get();
		public:
			void set(Mogre::Radian rad);
		}
	
		void SetDimensions( Mogre::Real width, Mogre::Real height );
	
		void _notifyOwner( Mogre::ParticleSystem^ owner );
	
		void ResetDimensions( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( Particle )
	
		//Protected Declarations
	protected public:
	
	};
	

}
