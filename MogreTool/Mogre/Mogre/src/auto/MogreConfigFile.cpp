/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreConfigFile.h"
#include "MogreDataStream.h"
#include "MogreStringVector.h"

namespace Mogre
{
	//################################################################
	//ConfigFile
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE String^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::String
	CPP_DECLARE_STLMULTIMAP( ConfigFile::, SettingsMultiMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::ConfigFile::SettingsMultiMap^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::ConfigFile::SettingsMultiMap*
	CPP_DECLARE_STLMAP( ConfigFile::, SettingsBySection, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	CPP_DECLARE_MAP_ITERATOR( ConfigFile::, SettingsIterator, Ogre::ConfigFile::SettingsIterator, Mogre::ConfigFile::SettingsMultiMap, String^, Ogre::String, String^, Ogre::String,  )
	
	CPP_DECLARE_MAP_ITERATOR( ConfigFile::, SectionIterator, Ogre::ConfigFile::SectionIterator, Mogre::ConfigFile::SettingsBySection, Mogre::ConfigFile::SettingsMultiMap^, Ogre::ConfigFile::SettingsMultiMap*, String^, Ogre::String,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	ConfigFile::ConfigFile( )
	{
		_createdByCLR = true;
		_native = new Ogre::ConfigFile();
	}
	
	void ConfigFile::Load( String^ filename, String^ separators, bool trimWhitespace )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
		DECLARE_NATIVE_STRING( o_separators, separators )
	
		static_cast<Ogre::ConfigFile*>(_native)->load( o_filename, o_separators, trimWhitespace );
	}
	
	void ConfigFile::Load( String^ filename, String^ resourceGroup, String^ separators, bool trimWhitespace )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
		DECLARE_NATIVE_STRING( o_resourceGroup, resourceGroup )
		DECLARE_NATIVE_STRING( o_separators, separators )
	
		static_cast<Ogre::ConfigFile*>(_native)->load( o_filename, o_resourceGroup, o_separators, trimWhitespace );
	}
	
	void ConfigFile::Load( Mogre::DataStreamPtr^ stream, String^ separators, bool trimWhitespace )
	{
		DECLARE_NATIVE_STRING( o_separators, separators )
	
		static_cast<Ogre::ConfigFile*>(_native)->load( (const Ogre::DataStreamPtr&)stream, o_separators, trimWhitespace );
	}
	
	void ConfigFile::LoadDirect( String^ filename, String^ separators, bool trimWhitespace )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
		DECLARE_NATIVE_STRING( o_separators, separators )
	
		static_cast<Ogre::ConfigFile*>(_native)->loadDirect( o_filename, o_separators, trimWhitespace );
	}
	void ConfigFile::LoadDirect( String^ filename, String^ separators )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
		DECLARE_NATIVE_STRING( o_separators, separators )
	
		static_cast<Ogre::ConfigFile*>(_native)->loadDirect( o_filename, o_separators );
	}
	void ConfigFile::LoadDirect( String^ filename )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
	
		static_cast<Ogre::ConfigFile*>(_native)->loadDirect( o_filename );
	}
	
	void ConfigFile::LoadFromResourceSystem( String^ filename, String^ resourceGroup, String^ separators, bool trimWhitespace )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
		DECLARE_NATIVE_STRING( o_resourceGroup, resourceGroup )
		DECLARE_NATIVE_STRING( o_separators, separators )
	
		static_cast<Ogre::ConfigFile*>(_native)->loadFromResourceSystem( o_filename, o_resourceGroup, o_separators, trimWhitespace );
	}
	void ConfigFile::LoadFromResourceSystem( String^ filename, String^ resourceGroup, String^ separators )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
		DECLARE_NATIVE_STRING( o_resourceGroup, resourceGroup )
		DECLARE_NATIVE_STRING( o_separators, separators )
	
		static_cast<Ogre::ConfigFile*>(_native)->loadFromResourceSystem( o_filename, o_resourceGroup, o_separators );
	}
	void ConfigFile::LoadFromResourceSystem( String^ filename, String^ resourceGroup )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
		DECLARE_NATIVE_STRING( o_resourceGroup, resourceGroup )
	
		static_cast<Ogre::ConfigFile*>(_native)->loadFromResourceSystem( o_filename, o_resourceGroup );
	}
	
	String^ ConfigFile::GetSetting( String^ key, String^ section )
	{
		DECLARE_NATIVE_STRING( o_key, key )
		DECLARE_NATIVE_STRING( o_section, section )
	
		return TO_CLR_STRING( static_cast<const Ogre::ConfigFile*>(_native)->getSetting( o_key, o_section ) );
	}
	String^ ConfigFile::GetSetting( String^ key )
	{
		DECLARE_NATIVE_STRING( o_key, key )
	
		return TO_CLR_STRING( static_cast<const Ogre::ConfigFile*>(_native)->getSetting( o_key ) );
	}
	
	Mogre::StringVector^ ConfigFile::GetMultiSetting( String^ key, String^ section )
	{
		DECLARE_NATIVE_STRING( o_key, key )
		DECLARE_NATIVE_STRING( o_section, section )
	
		return Mogre::StringVector::ByValue( static_cast<const Ogre::ConfigFile*>(_native)->getMultiSetting( o_key, o_section ) );
	}
	Mogre::StringVector^ ConfigFile::GetMultiSetting( String^ key )
	{
		DECLARE_NATIVE_STRING( o_key, key )
	
		return Mogre::StringVector::ByValue( static_cast<const Ogre::ConfigFile*>(_native)->getMultiSetting( o_key ) );
	}
	
	Mogre::ConfigFile::SectionIterator^ ConfigFile::GetSectionIterator( )
	{
		return static_cast<Ogre::ConfigFile*>(_native)->getSectionIterator( );
	}
	
	Mogre::ConfigFile::SettingsIterator^ ConfigFile::GetSettingsIterator( String^ section )
	{
		DECLARE_NATIVE_STRING( o_section, section )
	
		return static_cast<Ogre::ConfigFile*>(_native)->getSettingsIterator( o_section );
	}
	Mogre::ConfigFile::SettingsIterator^ ConfigFile::GetSettingsIterator( )
	{
		return static_cast<Ogre::ConfigFile*>(_native)->getSettingsIterator( );
	}
	
	void ConfigFile::Clear( )
	{
		static_cast<Ogre::ConfigFile*>(_native)->clear( );
	}
	
	
	//Protected Declarations
	
	

}
