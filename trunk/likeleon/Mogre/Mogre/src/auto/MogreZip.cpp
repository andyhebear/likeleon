/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreZip.h"
#include "MogreDataStream.h"
#include "MogreStringVector.h"
#include "MogreArchive.h"

namespace Mogre
{
	//################################################################
	//ZipArchive
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	ZipArchive::ZipArchive( String^ name, String^ archType ) : Archive((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_archType, archType )
	
		_native = new Ogre::ZipArchive( o_name, o_archType);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	bool ZipArchive::IsCaseSensitive::get()
	{
		return static_cast<const Ogre::ZipArchive*>(_native)->isCaseSensitive( );
	}
	
	void ZipArchive::Load( )
	{
		static_cast<Ogre::ZipArchive*>(_native)->load( );
	}
	
	void ZipArchive::Unload( )
	{
		static_cast<Ogre::ZipArchive*>(_native)->unload( );
	}
	
	Mogre::DataStreamPtr^ ZipArchive::Open( String^ filename )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
	
		return static_cast<const Ogre::ZipArchive*>(_native)->open( o_filename );
	}
	
	Mogre::StringVectorPtr^ ZipArchive::List( bool recursive, bool dirs )
	{
		return static_cast<Ogre::ZipArchive*>(_native)->list( recursive, dirs );
	}
	Mogre::StringVectorPtr^ ZipArchive::List( bool recursive )
	{
		return static_cast<Ogre::ZipArchive*>(_native)->list( recursive );
	}
	Mogre::StringVectorPtr^ ZipArchive::List( )
	{
		return static_cast<Ogre::ZipArchive*>(_native)->list( );
	}
	
	Mogre::FileInfoListPtr^ ZipArchive::ListFileInfo( bool recursive, bool dirs )
	{
		return static_cast<Ogre::ZipArchive*>(_native)->listFileInfo( recursive, dirs );
	}
	Mogre::FileInfoListPtr^ ZipArchive::ListFileInfo( bool recursive )
	{
		return static_cast<Ogre::ZipArchive*>(_native)->listFileInfo( recursive );
	}
	Mogre::FileInfoListPtr^ ZipArchive::ListFileInfo( )
	{
		return static_cast<Ogre::ZipArchive*>(_native)->listFileInfo( );
	}
	
	Mogre::StringVectorPtr^ ZipArchive::Find( String^ pattern, bool recursive, bool dirs )
	{
		DECLARE_NATIVE_STRING( o_pattern, pattern )
	
		return static_cast<Ogre::ZipArchive*>(_native)->find( o_pattern, recursive, dirs );
	}
	Mogre::StringVectorPtr^ ZipArchive::Find( String^ pattern, bool recursive )
	{
		DECLARE_NATIVE_STRING( o_pattern, pattern )
	
		return static_cast<Ogre::ZipArchive*>(_native)->find( o_pattern, recursive );
	}
	Mogre::StringVectorPtr^ ZipArchive::Find( String^ pattern )
	{
		DECLARE_NATIVE_STRING( o_pattern, pattern )
	
		return static_cast<Ogre::ZipArchive*>(_native)->find( o_pattern );
	}
	
	Mogre::FileInfoListPtr^ ZipArchive::FindFileInfo( String^ pattern, bool recursive, bool dirs )
	{
		DECLARE_NATIVE_STRING( o_pattern, pattern )
	
		return static_cast<Ogre::ZipArchive*>(_native)->findFileInfo( o_pattern, recursive, dirs );
	}
	Mogre::FileInfoListPtr^ ZipArchive::FindFileInfo( String^ pattern, bool recursive )
	{
		DECLARE_NATIVE_STRING( o_pattern, pattern )
	
		return static_cast<Ogre::ZipArchive*>(_native)->findFileInfo( o_pattern, recursive );
	}
	Mogre::FileInfoListPtr^ ZipArchive::FindFileInfo( String^ pattern )
	{
		DECLARE_NATIVE_STRING( o_pattern, pattern )
	
		return static_cast<Ogre::ZipArchive*>(_native)->findFileInfo( o_pattern );
	}
	
	bool ZipArchive::Exists( String^ filename )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
	
		return static_cast<Ogre::ZipArchive*>(_native)->exists( o_filename );
	}
	
	
	//Protected Declarations
	
	

}
