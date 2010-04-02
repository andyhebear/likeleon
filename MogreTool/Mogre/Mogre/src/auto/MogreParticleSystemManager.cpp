/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreParticleSystemManager.h"
#include "MogreParticleSystem.h"
#include "MogreParticleAffectorFactory.h"
#include "MogreParticleEmitterFactory.h"
#include "MogreParticleEmitter.h"
#include "MogreParticleAffector.h"
#include "MogreParticleSystemRenderer.h"
#include "MogreStringVector.h"
#include "MogreDataStream.h"
#include "MogreMovableObject.h"

namespace Mogre
{
	//################################################################
	//ParticleSystemManager
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::ParticleSystem^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::ParticleSystem*
	CPP_DECLARE_STLMAP( ParticleSystemManager::, ParticleTemplateMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::ParticleAffectorFactory^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::ParticleAffectorFactory*
	CPP_DECLARE_STLMAP( ParticleSystemManager::, ParticleAffectorFactoryMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::ParticleEmitterFactory^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::ParticleEmitterFactory*
	CPP_DECLARE_STLMAP( ParticleSystemManager::, ParticleEmitterFactoryMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	CPP_DECLARE_MAP_ITERATOR( ParticleSystemManager::, ParticleAffectorFactoryIterator, Ogre::ParticleSystemManager::ParticleAffectorFactoryIterator, Mogre::ParticleSystemManager::ParticleAffectorFactoryMap, Mogre::ParticleAffectorFactory^, Ogre::ParticleAffectorFactory*, String^, Ogre::String,  )
	
	CPP_DECLARE_MAP_ITERATOR( ParticleSystemManager::, ParticleEmitterFactoryIterator, Ogre::ParticleSystemManager::ParticleEmitterFactoryIterator, Mogre::ParticleSystemManager::ParticleEmitterFactoryMap, Mogre::ParticleEmitterFactory^, Ogre::ParticleEmitterFactory*, String^, Ogre::String,  )
	
	CPP_DECLARE_MAP_ITERATOR( ParticleSystemManager::, ParticleSystemTemplateIterator, Ogre::ParticleSystemManager::ParticleSystemTemplateIterator, Mogre::ParticleSystemManager::ParticleTemplateMap, Mogre::ParticleSystem^, Ogre::ParticleSystem*, String^, Ogre::String,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	ParticleSystemManager::ParticleSystemManager( )
	{
		_createdByCLR = true;
		_native = new Ogre::ParticleSystemManager();
	}
	
	Mogre::Real ParticleSystemManager::LoadingOrder::get()
	{
		return static_cast<const Ogre::ParticleSystemManager*>(_native)->getLoadingOrder( );
	}
	
	void ParticleSystemManager::AddEmitterFactory( Mogre::ParticleEmitterFactory^ factory )
	{
		static_cast<Ogre::ParticleSystemManager*>(_native)->addEmitterFactory( factory );
	}
	
	void ParticleSystemManager::AddAffectorFactory( Mogre::ParticleAffectorFactory^ factory )
	{
		static_cast<Ogre::ParticleSystemManager*>(_native)->addAffectorFactory( factory );
	}
	
	void ParticleSystemManager::AddTemplate( String^ name, Mogre::ParticleSystem^ sysTemplate )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::ParticleSystemManager*>(_native)->addTemplate( o_name, sysTemplate );
	}
	
	void ParticleSystemManager::RemoveTemplate( String^ name, bool deleteTemplate )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::ParticleSystemManager*>(_native)->removeTemplate( o_name, deleteTemplate );
	}
	void ParticleSystemManager::RemoveTemplate( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::ParticleSystemManager*>(_native)->removeTemplate( o_name );
	}
	
	void ParticleSystemManager::RemoveAllTemplates( bool deleteTemplate )
	{
		static_cast<Ogre::ParticleSystemManager*>(_native)->removeAllTemplates( deleteTemplate );
	}
	void ParticleSystemManager::RemoveAllTemplates( )
	{
		static_cast<Ogre::ParticleSystemManager*>(_native)->removeAllTemplates( );
	}
	
	Mogre::ParticleSystem^ ParticleSystemManager::CreateTemplate( String^ name, String^ resourceGroup )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_resourceGroup, resourceGroup )
	
		return static_cast<Ogre::ParticleSystemManager*>(_native)->createTemplate( o_name, o_resourceGroup );
	}
	
	Mogre::ParticleSystem^ ParticleSystemManager::GetTemplate( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::ParticleSystemManager*>(_native)->getTemplate( o_name );
	}
	
	Mogre::ParticleEmitter^ ParticleSystemManager::_createEmitter( String^ emitterType, Mogre::ParticleSystem^ psys )
	{
		DECLARE_NATIVE_STRING( o_emitterType, emitterType )
	
		return static_cast<Ogre::ParticleSystemManager*>(_native)->_createEmitter( o_emitterType, psys );
	}
	
	void ParticleSystemManager::_destroyEmitter( Mogre::ParticleEmitter^ emitter )
	{
		static_cast<Ogre::ParticleSystemManager*>(_native)->_destroyEmitter( emitter );
	}
	
	Mogre::ParticleAffector^ ParticleSystemManager::_createAffector( String^ affectorType, Mogre::ParticleSystem^ psys )
	{
		DECLARE_NATIVE_STRING( o_affectorType, affectorType )
	
		return static_cast<Ogre::ParticleSystemManager*>(_native)->_createAffector( o_affectorType, psys );
	}
	
	void ParticleSystemManager::_destroyAffector( Mogre::ParticleAffector^ affector )
	{
		static_cast<Ogre::ParticleSystemManager*>(_native)->_destroyAffector( affector );
	}
	
	Mogre::ParticleSystemRenderer^ ParticleSystemManager::_createRenderer( String^ rendererType )
	{
		DECLARE_NATIVE_STRING( o_rendererType, rendererType )
	
		return static_cast<Ogre::ParticleSystemManager*>(_native)->_createRenderer( o_rendererType );
	}
	
	void ParticleSystemManager::_destroyRenderer( Mogre::ParticleSystemRenderer^ renderer )
	{
		static_cast<Ogre::ParticleSystemManager*>(_native)->_destroyRenderer( renderer );
	}
	
	void ParticleSystemManager::_initialise( )
	{
		static_cast<Ogre::ParticleSystemManager*>(_native)->_initialise( );
	}
	
	Mogre::Const_StringVector^ ParticleSystemManager::GetScriptPatterns( )
	{
		return static_cast<const Ogre::ParticleSystemManager*>(_native)->getScriptPatterns( );
	}
	
	void ParticleSystemManager::ParseScript( Mogre::DataStreamPtr^ stream, String^ groupName )
	{
		DECLARE_NATIVE_STRING( o_groupName, groupName )
	
		static_cast<Ogre::ParticleSystemManager*>(_native)->parseScript( (Ogre::DataStreamPtr&)stream, o_groupName );
	}
	
	Mogre::ParticleSystemManager::ParticleAffectorFactoryIterator^ ParticleSystemManager::GetAffectorFactoryIterator( )
	{
		return static_cast<Ogre::ParticleSystemManager*>(_native)->getAffectorFactoryIterator( );
	}
	
	Mogre::ParticleSystemManager::ParticleEmitterFactoryIterator^ ParticleSystemManager::GetEmitterFactoryIterator( )
	{
		return static_cast<Ogre::ParticleSystemManager*>(_native)->getEmitterFactoryIterator( );
	}
	
	Mogre::ParticleSystemManager::ParticleSystemTemplateIterator^ ParticleSystemManager::GetTemplateIterator( )
	{
		return static_cast<Ogre::ParticleSystemManager*>(_native)->getTemplateIterator( );
	}
	
	Mogre::ParticleSystemFactory^ ParticleSystemManager::_getFactory( )
	{
		return static_cast<Ogre::ParticleSystemManager*>(_native)->_getFactory( );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//ParticleSystemFactory
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	ParticleSystemFactory::ParticleSystemFactory( ) : MovableObjectFactory((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::ParticleSystemFactory();
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	String^ ParticleSystemFactory::FACTORY_TYPE_NAME::get()
	{
		return TO_CLR_STRING( Ogre::ParticleSystemFactory::FACTORY_TYPE_NAME );
	}
	void ParticleSystemFactory::FACTORY_TYPE_NAME::set( String^ value )
	{
		DECLARE_NATIVE_STRING( o_value, value )
	
		Ogre::ParticleSystemFactory::FACTORY_TYPE_NAME = o_value;
	}
	
	String^ ParticleSystemFactory::Type::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ParticleSystemFactory*>(_native)->getType( ) );
	}
	
	void ParticleSystemFactory::DestroyInstance( Mogre::MovableObject^ obj )
	{
		static_cast<Ogre::ParticleSystemFactory*>(_native)->destroyInstance( obj );
	}
	
	
	//Protected Declarations
	
	

}
