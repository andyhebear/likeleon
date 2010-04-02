/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreArchive.h"
#include "MogreDataStream.h"
#include "MogreStringVector.h"

namespace Mogre
{
	//################################################################
	//FileInfo_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	Mogre::Archive^ FileInfo_NativePtr::archive::get()
	{
		return _native->archive;
	}
	void FileInfo_NativePtr::archive::set( Mogre::Archive^ value )
	{
		_native->archive = value;
	}
	
	String^ FileInfo_NativePtr::filename::get()
	{
		return TO_CLR_STRING( _native->filename );
	}
	void FileInfo_NativePtr::filename::set( String^ value )
	{
		DECLARE_NATIVE_STRING( o_value, value )
	
		_native->filename = o_value;
	}
	
	String^ FileInfo_NativePtr::path::get()
	{
		return TO_CLR_STRING( _native->path );
	}
	void FileInfo_NativePtr::path::set( String^ value )
	{
		DECLARE_NATIVE_STRING( o_value, value )
	
		_native->path = o_value;
	}
	
	String^ FileInfo_NativePtr::basename::get()
	{
		return TO_CLR_STRING( _native->basename );
	}
	void FileInfo_NativePtr::basename::set( String^ value )
	{
		DECLARE_NATIVE_STRING( o_value, value )
	
		_native->basename = o_value;
	}
	
	size_t FileInfo_NativePtr::compressedSize::get()
	{
		return _native->compressedSize;
	}
	void FileInfo_NativePtr::compressedSize::set( size_t value )
	{
		_native->compressedSize = value;
	}
	
	size_t FileInfo_NativePtr::uncompressedSize::get()
	{
		return _native->uncompressedSize;
	}
	void FileInfo_NativePtr::uncompressedSize::set( size_t value )
	{
		_native->uncompressedSize = value;
	}
	
	
	Mogre::FileInfo_NativePtr FileInfo_NativePtr::Create()
	{
		FileInfo_NativePtr ptr;
		ptr._native = new Ogre::FileInfo();
		return ptr;
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//Archive
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	bool Archive::IsCaseSensitive::get()
	{
		return static_cast<const Ogre::Archive*>(_native)->isCaseSensitive( );
	}
	
	String^ Archive::Name::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Archive*>(_native)->getName( ) );
	}
	
	String^ Archive::Type::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Archive*>(_native)->getType( ) );
	}
	
	void Archive::Load( )
	{
		static_cast<Ogre::Archive*>(_native)->load( );
	}
	
	void Archive::Unload( )
	{
		static_cast<Ogre::Archive*>(_native)->unload( );
	}
	
	Mogre::DataStreamPtr^ Archive::Open( String^ filename )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
	
		return static_cast<const Ogre::Archive*>(_native)->open( o_filename );
	}
	
	Mogre::StringVectorPtr^ Archive::List( bool recursive, bool dirs )
	{
		return static_cast<Ogre::Archive*>(_native)->list( recursive, dirs );
	}
	Mogre::StringVectorPtr^ Archive::List( bool recursive )
	{
		return static_cast<Ogre::Archive*>(_native)->list( recursive );
	}
	Mogre::StringVectorPtr^ Archive::List( )
	{
		return static_cast<Ogre::Archive*>(_native)->list( );
	}
	
	Mogre::FileInfoListPtr^ Archive::ListFileInfo( bool recursive, bool dirs )
	{
		return static_cast<Ogre::Archive*>(_native)->listFileInfo( recursive, dirs );
	}
	Mogre::FileInfoListPtr^ Archive::ListFileInfo( bool recursive )
	{
		return static_cast<Ogre::Archive*>(_native)->listFileInfo( recursive );
	}
	Mogre::FileInfoListPtr^ Archive::ListFileInfo( )
	{
		return static_cast<Ogre::Archive*>(_native)->listFileInfo( );
	}
	
	Mogre::StringVectorPtr^ Archive::Find( String^ pattern, bool recursive, bool dirs )
	{
		DECLARE_NATIVE_STRING( o_pattern, pattern )
	
		return static_cast<Ogre::Archive*>(_native)->find( o_pattern, recursive, dirs );
	}
	Mogre::StringVectorPtr^ Archive::Find( String^ pattern, bool recursive )
	{
		DECLARE_NATIVE_STRING( o_pattern, pattern )
	
		return static_cast<Ogre::Archive*>(_native)->find( o_pattern, recursive );
	}
	Mogre::StringVectorPtr^ Archive::Find( String^ pattern )
	{
		DECLARE_NATIVE_STRING( o_pattern, pattern )
	
		return static_cast<Ogre::Archive*>(_native)->find( o_pattern );
	}
	
	bool Archive::Exists( String^ filename )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
	
		return static_cast<Ogre::Archive*>(_native)->exists( o_filename );
	}
	
	Mogre::FileInfoListPtr^ Archive::FindFileInfo( String^ pattern, bool recursive, bool dirs )
	{
		DECLARE_NATIVE_STRING( o_pattern, pattern )
	
		return static_cast<Ogre::Archive*>(_native)->findFileInfo( o_pattern, recursive, dirs );
	}
	Mogre::FileInfoListPtr^ Archive::FindFileInfo( String^ pattern, bool recursive )
	{
		DECLARE_NATIVE_STRING( o_pattern, pattern )
	
		return static_cast<Ogre::Archive*>(_native)->findFileInfo( o_pattern, recursive );
	}
	Mogre::FileInfoListPtr^ Archive::FindFileInfo( String^ pattern )
	{
		DECLARE_NATIVE_STRING( o_pattern, pattern )
	
		return static_cast<Ogre::Archive*>(_native)->findFileInfo( o_pattern );
	}
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDTYPE Mogre::FileInfo_NativePtr
	#define STLDECL_NATIVETYPE Ogre::FileInfo
	CPP_DECLARE_STLVECTOR( , FileInfoList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	

}
