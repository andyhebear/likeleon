/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreSceneManagerEnumerator.h"
#include "MogreSceneManager.h"
#include "MogreRenderSystem.h"

namespace Mogre
{
	//################################################################
	//DefaultSceneManagerFactory
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	DefaultSceneManagerFactory::DefaultSceneManagerFactory( ) : SceneManagerFactory((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::DefaultSceneManagerFactory();
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	String^ DefaultSceneManagerFactory::FACTORY_TYPE_NAME::get()
	{
		return TO_CLR_STRING( Ogre::DefaultSceneManagerFactory::FACTORY_TYPE_NAME );
	}
	
	Mogre::SceneManager^ DefaultSceneManagerFactory::CreateInstance( String^ instanceName )
	{
		DECLARE_NATIVE_STRING( o_instanceName, instanceName )
	
		return static_cast<Ogre::DefaultSceneManagerFactory*>(_native)->createInstance( o_instanceName );
	}
	
	void DefaultSceneManagerFactory::DestroyInstance( Mogre::SceneManager^ instance )
	{
		static_cast<Ogre::DefaultSceneManagerFactory*>(_native)->destroyInstance( instance );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//SceneManagerEnumerator
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::SceneManager^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::SceneManager*
	CPP_DECLARE_STLMAP( SceneManagerEnumerator::, Instances, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDTYPE Mogre::SceneManagerMetaData_NativePtr
	#define STLDECL_NATIVETYPE const Ogre::SceneManagerMetaData*
	CPP_DECLARE_STLVECTOR( SceneManagerEnumerator::, MetaDataList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	CPP_DECLARE_ITERATOR( SceneManagerEnumerator::, MetaDataIterator, Ogre::SceneManagerEnumerator::MetaDataIterator, Mogre::SceneManagerEnumerator::MetaDataList, Mogre::SceneManagerMetaData_NativePtr, const Ogre::SceneManagerMetaData*,  )
	
	CPP_DECLARE_MAP_ITERATOR( SceneManagerEnumerator::, SceneManagerIterator, Ogre::SceneManagerEnumerator::SceneManagerIterator, Mogre::SceneManagerEnumerator::Instances, Mogre::SceneManager^, Ogre::SceneManager*, String^, Ogre::String,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	SceneManagerEnumerator::SceneManagerEnumerator( )
	{
		_createdByCLR = true;
		_native = new Ogre::SceneManagerEnumerator();
	}
	
	void SceneManagerEnumerator::AddFactory( Mogre::SceneManagerFactory^ fact )
	{
		static_cast<Ogre::SceneManagerEnumerator*>(_native)->addFactory( fact );
	}
	
	void SceneManagerEnumerator::RemoveFactory( Mogre::SceneManagerFactory^ fact )
	{
		static_cast<Ogre::SceneManagerEnumerator*>(_native)->removeFactory( fact );
	}
	
	Mogre::SceneManagerMetaData_NativePtr SceneManagerEnumerator::GetMetaData( String^ typeName )
	{
		DECLARE_NATIVE_STRING( o_typeName, typeName )
	
		return static_cast<const Ogre::SceneManagerEnumerator*>(_native)->getMetaData( o_typeName );
	}
	
	Mogre::SceneManagerEnumerator::MetaDataIterator^ SceneManagerEnumerator::GetMetaDataIterator( )
	{
		return static_cast<const Ogre::SceneManagerEnumerator*>(_native)->getMetaDataIterator( );
	}
	
	Mogre::SceneManager^ SceneManagerEnumerator::CreateSceneManager( String^ typeName, String^ instanceName )
	{
		DECLARE_NATIVE_STRING( o_typeName, typeName )
		DECLARE_NATIVE_STRING( o_instanceName, instanceName )
	
		return static_cast<Ogre::SceneManagerEnumerator*>(_native)->createSceneManager( o_typeName, o_instanceName );
	}
	Mogre::SceneManager^ SceneManagerEnumerator::CreateSceneManager( String^ typeName )
	{
		DECLARE_NATIVE_STRING( o_typeName, typeName )
	
		return static_cast<Ogre::SceneManagerEnumerator*>(_native)->createSceneManager( o_typeName );
	}
	
	Mogre::SceneManager^ SceneManagerEnumerator::CreateSceneManager( Mogre::SceneType typeMask, String^ instanceName )
	{
		DECLARE_NATIVE_STRING( o_instanceName, instanceName )
	
		return static_cast<Ogre::SceneManagerEnumerator*>(_native)->createSceneManager( (Ogre::SceneType)typeMask, o_instanceName );
	}
	Mogre::SceneManager^ SceneManagerEnumerator::CreateSceneManager( Mogre::SceneType typeMask )
	{
		return static_cast<Ogre::SceneManagerEnumerator*>(_native)->createSceneManager( (Ogre::SceneType)typeMask );
	}
	
	void SceneManagerEnumerator::DestroySceneManager( Mogre::SceneManager^ sm )
	{
		static_cast<Ogre::SceneManagerEnumerator*>(_native)->destroySceneManager( sm );
	}
	
	Mogre::SceneManager^ SceneManagerEnumerator::GetSceneManager( String^ instanceName )
	{
		DECLARE_NATIVE_STRING( o_instanceName, instanceName )
	
		return static_cast<const Ogre::SceneManagerEnumerator*>(_native)->getSceneManager( o_instanceName );
	}
	
	Mogre::SceneManagerEnumerator::SceneManagerIterator^ SceneManagerEnumerator::GetSceneManagerIterator( )
	{
		return static_cast<Ogre::SceneManagerEnumerator*>(_native)->getSceneManagerIterator( );
	}
	
	void SceneManagerEnumerator::SetRenderSystem( Mogre::RenderSystem^ rs )
	{
		static_cast<Ogre::SceneManagerEnumerator*>(_native)->setRenderSystem( rs );
	}
	
	void SceneManagerEnumerator::ShutdownAll( )
	{
		static_cast<Ogre::SceneManagerEnumerator*>(_native)->shutdownAll( );
	}
	
	
	//Protected Declarations
	
	

}
