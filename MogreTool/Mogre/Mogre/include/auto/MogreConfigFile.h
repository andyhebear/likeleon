/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreConfigFile.h"
#include "MogrePrerequisites.h"
#include "MogreStringVector.h"

namespace Mogre
{
	//################################################################
	//ConfigFile
	//################################################################
	
	public ref class ConfigFile
	{
		//Nested Types
		public: ref class SettingsMultiMap;
		public: ref class SettingsBySection;
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE String^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::String
		public: INC_DECLARE_STLMULTIMAP( SettingsMultiMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::ConfigFile::SettingsMultiMap^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::ConfigFile::SettingsMultiMap*
		public: INC_DECLARE_STLMAP( SettingsBySection, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		public: INC_DECLARE_MAP_ITERATOR( SettingsIterator, Ogre::ConfigFile::SettingsIterator, Mogre::ConfigFile::SettingsMultiMap, String^, Ogre::String, String^, Ogre::String )
	
		public: INC_DECLARE_MAP_ITERATOR( SectionIterator, Ogre::ConfigFile::SectionIterator, Mogre::ConfigFile::SettingsBySection, Mogre::ConfigFile::SettingsMultiMap^, Ogre::ConfigFile::SettingsMultiMap*, String^, Ogre::String )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ConfigFile( Ogre::ConfigFile* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~ConfigFile()
		{
			this->!ConfigFile();
		}
		!ConfigFile()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::ConfigFile* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		ConfigFile( );
	
	
		void Load( String^ filename, String^ separators, bool trimWhitespace );
	
		void Load( String^ filename, String^ resourceGroup, String^ separators, bool trimWhitespace );
	
		void Load( Mogre::DataStreamPtr^ stream, String^ separators, bool trimWhitespace );
	
		void LoadDirect( String^ filename, String^ separators, bool trimWhitespace );
		void LoadDirect( String^ filename, String^ separators );
		void LoadDirect( String^ filename );
	
		void LoadFromResourceSystem( String^ filename, String^ resourceGroup, String^ separators, bool trimWhitespace );
		void LoadFromResourceSystem( String^ filename, String^ resourceGroup, String^ separators );
		void LoadFromResourceSystem( String^ filename, String^ resourceGroup );
	
		String^ GetSetting( String^ key, String^ section );
		String^ GetSetting( String^ key );
	
		Mogre::StringVector^ GetMultiSetting( String^ key, String^ section );
		Mogre::StringVector^ GetMultiSetting( String^ key );
	
		Mogre::ConfigFile::SectionIterator^ GetSectionIterator( );
	
		Mogre::ConfigFile::SettingsIterator^ GetSettingsIterator( String^ section );
		Mogre::ConfigFile::SettingsIterator^ GetSettingsIterator( );
	
		void Clear( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( ConfigFile )
	
		//Protected Declarations
	protected public:
	
	};
	

}
