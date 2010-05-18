/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreResourceManager.h"
#include "MogrePrerequisites.h"
#include "MogreResource.h"
#include "MogreCommon.h"
#include "MogreStringVector.h"

namespace Mogre
{
	//################################################################
	//ResourceManager
	//################################################################
	
	public ref class ResourceManager
	{
		//Nested Types
		public: ref class ResourceCreateOrRetrieveResult;
		public: ref class ResourceMap;
		public: ref class ResourceHandleMap;
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::ResourcePtr^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::ResourcePtr
		public: INC_DECLARE_STLHASHMAP( ResourceMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDKEY Mogre::ResourceHandle
		#define STLDECL_MANAGEDVALUE Mogre::ResourcePtr^
		#define STLDECL_NATIVEKEY Ogre::ResourceHandle
		#define STLDECL_NATIVEVALUE Ogre::ResourcePtr
		public: INC_DECLARE_STLMAP( ResourceHandleMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		public: INC_DECLARE_MAP_ITERATOR( ResourceMapIterator, Ogre::ResourceManager::ResourceMapIterator, Mogre::ResourceManager::ResourceHandleMap, Mogre::ResourcePtr^, Ogre::ResourcePtr, Mogre::ResourceHandle, Ogre::ResourceHandle )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ResourceManager( Ogre::ResourceManager* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~ResourceManager()
		{
			this->!ResourceManager();
		}
		!ResourceManager()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::ResourceManager* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
	
	
		property Mogre::Real LoadingOrder
		{
		public:
			Mogre::Real get();
		}
	
		property size_t MemoryBudget
		{
		public:
			size_t get();
		public:
			void set(size_t bytes);
		}
	
		property size_t MemoryUsage
		{
		public:
			size_t get();
		}
	
		property String^ ResourceType
		{
		public:
			String^ get();
		}
	
		Mogre::ResourcePtr^ Create( String^ name, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader, Mogre::Const_NameValuePairList^ createParams );
		Mogre::ResourcePtr^ Create( String^ name, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader );
		Mogre::ResourcePtr^ Create( String^ name, String^ group, bool isManual );
		Mogre::ResourcePtr^ Create( String^ name, String^ group );
	
		Pair<Mogre::ResourcePtr^, bool> CreateOrRetrieve( String^ name, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader, Mogre::Const_NameValuePairList^ createParams );
		Pair<Mogre::ResourcePtr^, bool> CreateOrRetrieve( String^ name, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader );
		Pair<Mogre::ResourcePtr^, bool> CreateOrRetrieve( String^ name, String^ group, bool isManual );
		Pair<Mogre::ResourcePtr^, bool> CreateOrRetrieve( String^ name, String^ group );
	
		void Unload( String^ name );
	
		void Unload( Mogre::ResourceHandle handle );
	
		void UnloadAll( bool reloadableOnly );
		void UnloadAll( );
	
		void ReloadAll( bool reloadableOnly );
		void ReloadAll( );
	
		void UnloadUnreferencedResources( bool reloadableOnly );
		void UnloadUnreferencedResources( );
	
		void ReloadUnreferencedResources( bool reloadableOnly );
		void ReloadUnreferencedResources( );
	
		void Remove( Mogre::ResourcePtr^ r );
	
		void Remove( String^ name );
	
		void Remove( Mogre::ResourceHandle handle );
	
		void RemoveAll( );
	
		Mogre::ResourcePtr^ GetByName( String^ name );
	
		Mogre::ResourcePtr^ GetByHandle( Mogre::ResourceHandle handle );
	
		bool ResourceExists( String^ name );
	
		bool ResourceExists( Mogre::ResourceHandle handle );
	
		void _notifyResourceTouched( Mogre::Resource^ res );
	
		void _notifyResourceLoaded( Mogre::Resource^ res );
	
		void _notifyResourceUnloaded( Mogre::Resource^ res );
	
		Mogre::ResourcePtr^ Load( String^ name, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader, Mogre::Const_NameValuePairList^ loadParams );
		Mogre::ResourcePtr^ Load( String^ name, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader );
		Mogre::ResourcePtr^ Load( String^ name, String^ group, bool isManual );
		Mogre::ResourcePtr^ Load( String^ name, String^ group );
	
		Mogre::Const_StringVector^ GetScriptPatterns( );
	
		void ParseScript( Mogre::DataStreamPtr^ stream, String^ groupName );
	
		Mogre::ResourceManager::ResourceMapIterator^ GetResourceIterator( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( ResourceManager )
	
		//Protected Declarations
	protected public:
	
	};
	

}
