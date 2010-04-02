/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreResourceManager.h"
#include "MogreResource.h"
#include "MogreCommon.h"
#include "MogreStringVector.h"
#include "MogreDataStream.h"

namespace Mogre
{
	//################################################################
	//ResourceManager
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::ResourcePtr^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::ResourcePtr
	CPP_DECLARE_STLHASHMAP( ResourceManager::, ResourceMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDKEY Mogre::ResourceHandle
	#define STLDECL_MANAGEDVALUE Mogre::ResourcePtr^
	#define STLDECL_NATIVEKEY Ogre::ResourceHandle
	#define STLDECL_NATIVEVALUE Ogre::ResourcePtr
	CPP_DECLARE_STLMAP( ResourceManager::, ResourceHandleMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	CPP_DECLARE_MAP_ITERATOR( ResourceManager::, ResourceMapIterator, Ogre::ResourceManager::ResourceMapIterator, Mogre::ResourceManager::ResourceHandleMap, Mogre::ResourcePtr^, Ogre::ResourcePtr, Mogre::ResourceHandle, Ogre::ResourceHandle,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Mogre::Real ResourceManager::LoadingOrder::get()
	{
		return static_cast<const Ogre::ResourceManager*>(_native)->getLoadingOrder( );
	}
	
	size_t ResourceManager::MemoryBudget::get()
	{
		return static_cast<const Ogre::ResourceManager*>(_native)->getMemoryBudget( );
	}
	void ResourceManager::MemoryBudget::set( size_t bytes )
	{
		static_cast<Ogre::ResourceManager*>(_native)->setMemoryBudget( bytes );
	}
	
	size_t ResourceManager::MemoryUsage::get()
	{
		return static_cast<const Ogre::ResourceManager*>(_native)->getMemoryUsage( );
	}
	
	String^ ResourceManager::ResourceType::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ResourceManager*>(_native)->getResourceType( ) );
	}
	
	Mogre::ResourcePtr^ ResourceManager::Create( String^ name, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader, Mogre::Const_NameValuePairList^ createParams )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		return static_cast<Ogre::ResourceManager*>(_native)->create( o_name, o_group, isManual, loader, createParams );
	}
	Mogre::ResourcePtr^ ResourceManager::Create( String^ name, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		return static_cast<Ogre::ResourceManager*>(_native)->create( o_name, o_group, isManual, loader );
	}
	Mogre::ResourcePtr^ ResourceManager::Create( String^ name, String^ group, bool isManual )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		return static_cast<Ogre::ResourceManager*>(_native)->create( o_name, o_group, isManual );
	}
	Mogre::ResourcePtr^ ResourceManager::Create( String^ name, String^ group )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		return static_cast<Ogre::ResourceManager*>(_native)->create( o_name, o_group );
	}
	
	Pair<Mogre::ResourcePtr^, bool> ResourceManager::CreateOrRetrieve( String^ name, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader, Mogre::Const_NameValuePairList^ createParams )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		return ToManaged<Pair<Mogre::ResourcePtr^, bool>, Ogre::ResourceManager::ResourceCreateOrRetrieveResult>( static_cast<Ogre::ResourceManager*>(_native)->createOrRetrieve( o_name, o_group, isManual, loader, createParams ) );
	}
	Pair<Mogre::ResourcePtr^, bool> ResourceManager::CreateOrRetrieve( String^ name, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		return ToManaged<Pair<Mogre::ResourcePtr^, bool>, Ogre::ResourceManager::ResourceCreateOrRetrieveResult>( static_cast<Ogre::ResourceManager*>(_native)->createOrRetrieve( o_name, o_group, isManual, loader ) );
	}
	Pair<Mogre::ResourcePtr^, bool> ResourceManager::CreateOrRetrieve( String^ name, String^ group, bool isManual )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		return ToManaged<Pair<Mogre::ResourcePtr^, bool>, Ogre::ResourceManager::ResourceCreateOrRetrieveResult>( static_cast<Ogre::ResourceManager*>(_native)->createOrRetrieve( o_name, o_group, isManual ) );
	}
	Pair<Mogre::ResourcePtr^, bool> ResourceManager::CreateOrRetrieve( String^ name, String^ group )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		return ToManaged<Pair<Mogre::ResourcePtr^, bool>, Ogre::ResourceManager::ResourceCreateOrRetrieveResult>( static_cast<Ogre::ResourceManager*>(_native)->createOrRetrieve( o_name, o_group ) );
	}
	
	void ResourceManager::Unload( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::ResourceManager*>(_native)->unload( o_name );
	}
	
	void ResourceManager::Unload( Mogre::ResourceHandle handle )
	{
		static_cast<Ogre::ResourceManager*>(_native)->unload( handle );
	}
	
	void ResourceManager::UnloadAll( bool reloadableOnly )
	{
		static_cast<Ogre::ResourceManager*>(_native)->unloadAll( reloadableOnly );
	}
	void ResourceManager::UnloadAll( )
	{
		static_cast<Ogre::ResourceManager*>(_native)->unloadAll( );
	}
	
	void ResourceManager::ReloadAll( bool reloadableOnly )
	{
		static_cast<Ogre::ResourceManager*>(_native)->reloadAll( reloadableOnly );
	}
	void ResourceManager::ReloadAll( )
	{
		static_cast<Ogre::ResourceManager*>(_native)->reloadAll( );
	}
	
	void ResourceManager::UnloadUnreferencedResources( bool reloadableOnly )
	{
		static_cast<Ogre::ResourceManager*>(_native)->unloadUnreferencedResources( reloadableOnly );
	}
	void ResourceManager::UnloadUnreferencedResources( )
	{
		static_cast<Ogre::ResourceManager*>(_native)->unloadUnreferencedResources( );
	}
	
	void ResourceManager::ReloadUnreferencedResources( bool reloadableOnly )
	{
		static_cast<Ogre::ResourceManager*>(_native)->reloadUnreferencedResources( reloadableOnly );
	}
	void ResourceManager::ReloadUnreferencedResources( )
	{
		static_cast<Ogre::ResourceManager*>(_native)->reloadUnreferencedResources( );
	}
	
	void ResourceManager::Remove( Mogre::ResourcePtr^ r )
	{
		static_cast<Ogre::ResourceManager*>(_native)->remove( (Ogre::ResourcePtr&)r );
	}
	
	void ResourceManager::Remove( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::ResourceManager*>(_native)->remove( o_name );
	}
	
	void ResourceManager::Remove( Mogre::ResourceHandle handle )
	{
		static_cast<Ogre::ResourceManager*>(_native)->remove( handle );
	}
	
	void ResourceManager::RemoveAll( )
	{
		static_cast<Ogre::ResourceManager*>(_native)->removeAll( );
	}
	
	Mogre::ResourcePtr^ ResourceManager::GetByName( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::ResourceManager*>(_native)->getByName( o_name );
	}
	
	Mogre::ResourcePtr^ ResourceManager::GetByHandle( Mogre::ResourceHandle handle )
	{
		return static_cast<Ogre::ResourceManager*>(_native)->getByHandle( handle );
	}
	
	bool ResourceManager::ResourceExists( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::ResourceManager*>(_native)->resourceExists( o_name );
	}
	
	bool ResourceManager::ResourceExists( Mogre::ResourceHandle handle )
	{
		return static_cast<Ogre::ResourceManager*>(_native)->resourceExists( handle );
	}
	
	void ResourceManager::_notifyResourceTouched( Mogre::Resource^ res )
	{
		static_cast<Ogre::ResourceManager*>(_native)->_notifyResourceTouched( res );
	}
	
	void ResourceManager::_notifyResourceLoaded( Mogre::Resource^ res )
	{
		static_cast<Ogre::ResourceManager*>(_native)->_notifyResourceLoaded( res );
	}
	
	void ResourceManager::_notifyResourceUnloaded( Mogre::Resource^ res )
	{
		static_cast<Ogre::ResourceManager*>(_native)->_notifyResourceUnloaded( res );
	}
	
	Mogre::ResourcePtr^ ResourceManager::Load( String^ name, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader, Mogre::Const_NameValuePairList^ loadParams )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		return static_cast<Ogre::ResourceManager*>(_native)->load( o_name, o_group, isManual, loader, loadParams );
	}
	Mogre::ResourcePtr^ ResourceManager::Load( String^ name, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		return static_cast<Ogre::ResourceManager*>(_native)->load( o_name, o_group, isManual, loader );
	}
	Mogre::ResourcePtr^ ResourceManager::Load( String^ name, String^ group, bool isManual )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		return static_cast<Ogre::ResourceManager*>(_native)->load( o_name, o_group, isManual );
	}
	Mogre::ResourcePtr^ ResourceManager::Load( String^ name, String^ group )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		return static_cast<Ogre::ResourceManager*>(_native)->load( o_name, o_group );
	}
	
	Mogre::Const_StringVector^ ResourceManager::GetScriptPatterns( )
	{
		return static_cast<const Ogre::ResourceManager*>(_native)->getScriptPatterns( );
	}
	
	void ResourceManager::ParseScript( Mogre::DataStreamPtr^ stream, String^ groupName )
	{
		DECLARE_NATIVE_STRING( o_groupName, groupName )
	
		static_cast<Ogre::ResourceManager*>(_native)->parseScript( (Ogre::DataStreamPtr&)stream, o_groupName );
	}
	
	Mogre::ResourceManager::ResourceMapIterator^ ResourceManager::GetResourceIterator( )
	{
		return static_cast<Ogre::ResourceManager*>(_native)->getResourceIterator( );
	}
	
	
	//Protected Declarations
	
	

}
