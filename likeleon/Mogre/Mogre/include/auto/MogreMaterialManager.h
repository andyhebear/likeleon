/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreMaterialManager.h"
#include "MogreResourceManager.h"
#include "MogrePrerequisites.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//MaterialManager
	//################################################################
	
	public ref class MaterialManager : public ResourceManager
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		static MaterialManager^ _singleton;
	
		//Internal Declarations
	public protected:
		MaterialManager( Ogre::MaterialManager* obj ) : ResourceManager(obj)
		{
		}
	
	
		//Public Declarations
	public:
		MaterialManager( );
	
		static property MaterialManager^ Singleton
		{
			MaterialManager^ get()
			{
				if (_singleton == CLR_NULL)
				{
					Ogre::MaterialManager* ptr = Ogre::MaterialManager::getSingletonPtr();
					if ( ptr ) _singleton = gcnew MaterialManager( ptr );
				}
				return _singleton;
			}
		}
	
		static property String^ DEFAULT_SCHEME_NAME
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		property String^ ActiveScheme
		{
		public:
			String^ get();
		public:
			void set(String^ schemeName);
		}
	
		property unsigned int DefaultAnisotropy
		{
		public:
			unsigned int get();
		public:
			void set(unsigned int maxAniso);
		}
	
		void Initialise( );
	
		void ParseScript( Mogre::DataStreamPtr^ stream, String^ groupName );
	
		void SetDefaultTextureFiltering( Mogre::TextureFilterOptions fo );
	
		void SetDefaultTextureFiltering( Mogre::FilterType ftype, Mogre::FilterOptions opts );
	
		void SetDefaultTextureFiltering( Mogre::FilterOptions minFilter, Mogre::FilterOptions magFilter, Mogre::FilterOptions mipFilter );
	
		Mogre::FilterOptions GetDefaultTextureFiltering( Mogre::FilterType ftype );
	
		Mogre::MaterialPtr^ GetDefaultSettings( );
	
		unsigned short _getSchemeIndex( String^ name );
	
		String^ _getSchemeName( unsigned short index );
	
		unsigned short _getActiveSchemeIndex( );
	
	
		//Protected Declarations
	protected public:
	
	};
	

}
