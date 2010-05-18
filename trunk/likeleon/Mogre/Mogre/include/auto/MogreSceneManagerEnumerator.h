/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreSceneManagerEnumerator.h"
#include "MogreSceneManager.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//DefaultSceneManagerFactory
	//################################################################
	
	public ref class DefaultSceneManagerFactory : public SceneManagerFactory
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		DefaultSceneManagerFactory( CLRObject* obj ) : SceneManagerFactory(obj)
		{
		}
	
	
		//Public Declarations
	public:
		DefaultSceneManagerFactory( );
	
	
		static property String^ FACTORY_TYPE_NAME
		{
		public:
			String^ get();
		}
	
		Mogre::SceneManager^ CreateInstance( String^ instanceName );
	
		void DestroyInstance( Mogre::SceneManager^ instance );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( DefaultSceneManagerFactory )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//SceneManagerEnumerator
	//################################################################
	
	public ref class SceneManagerEnumerator
	{
		//Nested Types
		public: ref class Instances;
		public: ref class MetaDataList;
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::SceneManager^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::SceneManager*
		public: INC_DECLARE_STLMAP( Instances, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDTYPE Mogre::SceneManagerMetaData_NativePtr
		#define STLDECL_NATIVETYPE const Ogre::SceneManagerMetaData*
		public: INC_DECLARE_STLVECTOR( MetaDataList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		public: INC_DECLARE_ITERATOR( MetaDataIterator, Ogre::SceneManagerEnumerator::MetaDataIterator, Mogre::SceneManagerEnumerator::MetaDataList, Mogre::SceneManagerMetaData_NativePtr, const Ogre::SceneManagerMetaData* )
	
		public: INC_DECLARE_MAP_ITERATOR( SceneManagerIterator, Ogre::SceneManagerEnumerator::SceneManagerIterator, Mogre::SceneManagerEnumerator::Instances, Mogre::SceneManager^, Ogre::SceneManager*, String^, Ogre::String )
	
		//Private Declarations
	private protected:
		static SceneManagerEnumerator^ _singleton;
		Ogre::SceneManagerEnumerator* _native;
		bool _createdByCLR;
	
		//Internal Declarations
	public protected:
		SceneManagerEnumerator( Ogre::SceneManagerEnumerator* obj ) : _native(obj)
		{
		}
	
	
		//Public Declarations
	public:
		SceneManagerEnumerator( );
	
		static property SceneManagerEnumerator^ Singleton
		{
			SceneManagerEnumerator^ get()
			{
				if (_singleton == CLR_NULL)
				{
					Ogre::SceneManagerEnumerator* ptr = Ogre::SceneManagerEnumerator::getSingletonPtr();
					if ( ptr ) _singleton = gcnew SceneManagerEnumerator( ptr );
				}
				return _singleton;
			}
		}
	
		void AddFactory( Mogre::SceneManagerFactory^ fact );
	
		void RemoveFactory( Mogre::SceneManagerFactory^ fact );
	
		Mogre::SceneManagerMetaData_NativePtr GetMetaData( String^ typeName );
	
		Mogre::SceneManagerEnumerator::MetaDataIterator^ GetMetaDataIterator( );
	
		Mogre::SceneManager^ CreateSceneManager( String^ typeName, String^ instanceName );
		Mogre::SceneManager^ CreateSceneManager( String^ typeName );
	
		Mogre::SceneManager^ CreateSceneManager( Mogre::SceneType typeMask, String^ instanceName );
		Mogre::SceneManager^ CreateSceneManager( Mogre::SceneType typeMask );
	
		void DestroySceneManager( Mogre::SceneManager^ sm );
	
		Mogre::SceneManager^ GetSceneManager( String^ instanceName );
	
		Mogre::SceneManagerEnumerator::SceneManagerIterator^ GetSceneManagerIterator( );
	
		void SetRenderSystem( Mogre::RenderSystem^ rs );
	
		void ShutdownAll( );
	
	
		//Protected Declarations
	protected public:
	
	};
	

}
