/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreFileSystem.h"
#include "MogreDataStream.h"
#include "MogreStringVector.h"
#include "MogreArchive.h"

namespace Mogre
{
	//################################################################
	//FileSystemArchive
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	FileSystemArchive::FileSystemArchive( String^ name, String^ archType ) : Archive((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_archType, archType )
	
		_native = new Ogre::FileSystemArchive( o_name, o_archType);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	bool FileSystemArchive::IsCaseSensitive::get()
	{
		return static_cast<const Ogre::FileSystemArchive*>(_native)->isCaseSensitive( );
	}
	
	void FileSystemArchive::Load( )
	{
		static_cast<Ogre::FileSystemArchive*>(_native)->load( );
	}
	
	void FileSystemArchive::Unload( )
	{
		static_cast<Ogre::FileSystemArchive*>(_native)->unload( );
	}
	
	Mogre::DataStreamPtr^ FileSystemArchive::Open( String^ filename )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
	
		return static_cast<const Ogre::FileSystemArchive*>(_native)->open( o_filename );
	}
	
	Mogre::StringVectorPtr^ FileSystemArchive::List( bool recursive, bool dirs )
	{
		return static_cast<Ogre::FileSystemArchive*>(_native)->list( recursive, dirs );
	}
	Mogre::StringVectorPtr^ FileSystemArchive::List( bool recursive )
	{
		return static_cast<Ogre::FileSystemArchive*>(_native)->list( recursive );
	}
	Mogre::StringVectorPtr^ FileSystemArchive::List( )
	{
		return static_cast<Ogre::FileSystemArchive*>(_native)->list( );
	}
	
	Mogre::FileInfoListPtr^ FileSystemArchive::ListFileInfo( bool recursive, bool dirs )
	{
		return static_cast<Ogre::FileSystemArchive*>(_native)->listFileInfo( recursive, dirs );
	}
	Mogre::FileInfoListPtr^ FileSystemArchive::ListFileInfo( bool recursive )
	{
		return static_cast<Ogre::FileSystemArchive*>(_native)->listFileInfo( recursive );
	}
	Mogre::FileInfoListPtr^ FileSystemArchive::ListFileInfo( )
	{
		return static_cast<Ogre::FileSystemArchive*>(_native)->listFileInfo( );
	}
	
	Mogre::StringVectorPtr^ FileSystemArchive::Find( String^ pattern, bool recursive, bool dirs )
	{
		DECLARE_NATIVE_STRING( o_pattern, pattern )
	
		return static_cast<Ogre::FileSystemArchive*>(_native)->find( o_pattern, recursive, dirs );
	}
	Mogre::StringVectorPtr^ FileSystemArchive::Find( String^ pattern, bool recursive )
	{
		DECLARE_NATIVE_STRING( o_pattern, pattern )
	
		return static_cast<Ogre::FileSystemArchive*>(_native)->find( o_pattern, recursive );
	}
	Mogre::StringVectorPtr^ FileSystemArchive::Find( String^ pattern )
	{
		DECLARE_NATIVE_STRING( o_pattern, pattern )
	
		return static_cast<Ogre::FileSystemArchive*>(_native)->find( o_pattern );
	}
	
	Mogre::FileInfoListPtr^ FileSystemArchive::FindFileInfo( String^ pattern, bool recursive, bool dirs )
	{
		DECLARE_NATIVE_STRING( o_pattern, pattern )
	
		return static_cast<Ogre::FileSystemArchive*>(_native)->findFileInfo( o_pattern, recursive, dirs );
	}
	Mogre::FileInfoListPtr^ FileSystemArchive::FindFileInfo( String^ pattern, bool recursive )
	{
		DECLARE_NATIVE_STRING( o_pattern, pattern )
	
		return static_cast<Ogre::FileSystemArchive*>(_native)->findFileInfo( o_pattern, recursive );
	}
	Mogre::FileInfoListPtr^ FileSystemArchive::FindFileInfo( String^ pattern )
	{
		DECLARE_NATIVE_STRING( o_pattern, pattern )
	
		return static_cast<Ogre::FileSystemArchive*>(_native)->findFileInfo( o_pattern );
	}
	
	bool FileSystemArchive::Exists( String^ filename )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
	
		return static_cast<Ogre::FileSystemArchive*>(_native)->exists( o_filename );
	}
	
	
	//Protected Declarations
	
	

}
