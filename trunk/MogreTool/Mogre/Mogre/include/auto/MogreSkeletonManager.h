/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreSkeletonManager.h"
#include "MogreResourceManager.h"

namespace Mogre
{
	//################################################################
	//SkeletonManager
	//################################################################
	
	public ref class SkeletonManager : public ResourceManager
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		static SkeletonManager^ _singleton;
	
		//Internal Declarations
	public protected:
		SkeletonManager( Ogre::SkeletonManager* obj ) : ResourceManager(obj)
		{
		}
	
	
		//Public Declarations
	public:
		SkeletonManager( );
	
		static property SkeletonManager^ Singleton
		{
			SkeletonManager^ get()
			{
				if (_singleton == CLR_NULL)
				{
					Ogre::SkeletonManager* ptr = Ogre::SkeletonManager::getSingletonPtr();
					if ( ptr ) _singleton = gcnew SkeletonManager( ptr );
				}
				return _singleton;
			}
		}
	
	
		//Protected Declarations
	protected public:
	
	};
	

}
