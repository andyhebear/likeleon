/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreParticleSystemManager.h"
#include "MogrePrerequisites.h"
#include "MogreStringVector.h"
#include "MogreMovableObject.h"

namespace Mogre
{
	//################################################################
	//ParticleSystemManager
	//################################################################
	
	public ref class ParticleSystemManager
	{
		//Nested Types
		public: ref class ParticleTemplateMap;
		public: ref class ParticleAffectorFactoryMap;
		public: ref class ParticleEmitterFactoryMap;
		public: ref class ParticleSystemRendererFactoryMap;
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::ParticleSystem^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::ParticleSystem*
		public: INC_DECLARE_STLMAP( ParticleTemplateMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::ParticleAffectorFactory^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::ParticleAffectorFactory*
		public: INC_DECLARE_STLMAP( ParticleAffectorFactoryMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::ParticleEmitterFactory^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::ParticleEmitterFactory*
		public: INC_DECLARE_STLMAP( ParticleEmitterFactoryMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		public: INC_DECLARE_MAP_ITERATOR( ParticleAffectorFactoryIterator, Ogre::ParticleSystemManager::ParticleAffectorFactoryIterator, Mogre::ParticleSystemManager::ParticleAffectorFactoryMap, Mogre::ParticleAffectorFactory^, Ogre::ParticleAffectorFactory*, String^, Ogre::String )
	
		public: INC_DECLARE_MAP_ITERATOR( ParticleEmitterFactoryIterator, Ogre::ParticleSystemManager::ParticleEmitterFactoryIterator, Mogre::ParticleSystemManager::ParticleEmitterFactoryMap, Mogre::ParticleEmitterFactory^, Ogre::ParticleEmitterFactory*, String^, Ogre::String )
	
		public: INC_DECLARE_MAP_ITERATOR( ParticleSystemTemplateIterator, Ogre::ParticleSystemManager::ParticleSystemTemplateIterator, Mogre::ParticleSystemManager::ParticleTemplateMap, Mogre::ParticleSystem^, Ogre::ParticleSystem*, String^, Ogre::String )
	
		//Private Declarations
	private protected:
		static ParticleSystemManager^ _singleton;
		Ogre::ParticleSystemManager* _native;
		bool _createdByCLR;
	
		//Internal Declarations
	public protected:
		ParticleSystemManager( Ogre::ParticleSystemManager* obj ) : _native(obj)
		{
		}
	
	
		//Public Declarations
	public:
		ParticleSystemManager( );
	
		static property ParticleSystemManager^ Singleton
		{
			ParticleSystemManager^ get()
			{
				if (_singleton == CLR_NULL)
				{
					Ogre::ParticleSystemManager* ptr = Ogre::ParticleSystemManager::getSingletonPtr();
					if ( ptr ) _singleton = gcnew ParticleSystemManager( ptr );
				}
				return _singleton;
			}
		}
	
		property Mogre::Real LoadingOrder
		{
		public:
			Mogre::Real get();
		}
	
		void AddEmitterFactory( Mogre::ParticleEmitterFactory^ factory );
	
		void AddAffectorFactory( Mogre::ParticleAffectorFactory^ factory );
	
		void AddTemplate( String^ name, Mogre::ParticleSystem^ sysTemplate );
	
		void RemoveTemplate( String^ name, bool deleteTemplate );
		void RemoveTemplate( String^ name );
	
		void RemoveAllTemplates( bool deleteTemplate );
		void RemoveAllTemplates( );
	
		Mogre::ParticleSystem^ CreateTemplate( String^ name, String^ resourceGroup );
	
		Mogre::ParticleSystem^ GetTemplate( String^ name );
	
		Mogre::ParticleEmitter^ _createEmitter( String^ emitterType, Mogre::ParticleSystem^ psys );
	
		void _destroyEmitter( Mogre::ParticleEmitter^ emitter );
	
		Mogre::ParticleAffector^ _createAffector( String^ affectorType, Mogre::ParticleSystem^ psys );
	
		void _destroyAffector( Mogre::ParticleAffector^ affector );
	
		Mogre::ParticleSystemRenderer^ _createRenderer( String^ rendererType );
	
		void _destroyRenderer( Mogre::ParticleSystemRenderer^ renderer );
	
		void _initialise( );
	
		Mogre::Const_StringVector^ GetScriptPatterns( );
	
		void ParseScript( Mogre::DataStreamPtr^ stream, String^ groupName );
	
		Mogre::ParticleSystemManager::ParticleAffectorFactoryIterator^ GetAffectorFactoryIterator( );
	
		Mogre::ParticleSystemManager::ParticleEmitterFactoryIterator^ GetEmitterFactoryIterator( );
	
		Mogre::ParticleSystemManager::ParticleSystemTemplateIterator^ GetTemplateIterator( );
	
		Mogre::ParticleSystemFactory^ _getFactory( );
	
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//ParticleSystemFactory
	//################################################################
	
	public ref class ParticleSystemFactory : public MovableObjectFactory
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ParticleSystemFactory( CLRObject* obj ) : MovableObjectFactory(obj)
		{
		}
	
	
		//Public Declarations
	public:
		ParticleSystemFactory( );
	
	
		static property String^ FACTORY_TYPE_NAME
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		property String^ Type
		{
		public:
			String^ get();
		}
	
		void DestroyInstance( Mogre::MovableObject^ obj );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( ParticleSystemFactory )
	
		//Protected Declarations
	protected public:
	
	};
	

}
