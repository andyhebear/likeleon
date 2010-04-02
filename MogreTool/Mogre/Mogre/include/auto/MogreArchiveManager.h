/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreArchiveManager.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//ArchiveManager
	//################################################################
	
	public ref class ArchiveManager
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		static ArchiveManager^ _singleton;
		Ogre::ArchiveManager* _native;
		bool _createdByCLR;
	
		//Internal Declarations
	public protected:
		ArchiveManager( Ogre::ArchiveManager* obj ) : _native(obj)
		{
		}
	
	
		//Public Declarations
	public:
		ArchiveManager( );
	
		static property ArchiveManager^ Singleton
		{
			ArchiveManager^ get()
			{
				if (_singleton == CLR_NULL)
				{
					Ogre::ArchiveManager* ptr = Ogre::ArchiveManager::getSingletonPtr();
					if ( ptr ) _singleton = gcnew ArchiveManager( ptr );
				}
				return _singleton;
			}
		}
	
		Mogre::Archive^ Load( String^ filename, String^ archiveType );
	
		void Unload( Mogre::Archive^ arch );
	
		void Unload( String^ filename );
	
	
		//Protected Declarations
	protected public:
	
	};
	

}
