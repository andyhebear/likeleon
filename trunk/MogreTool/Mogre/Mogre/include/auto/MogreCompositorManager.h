/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreCompositorManager.h"
#include "MogreResourceManager.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//CompositorManager
	//################################################################
	
	public ref class CompositorManager : public ResourceManager
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		static CompositorManager^ _singleton;
	
		//Internal Declarations
	public protected:
		CompositorManager( Ogre::CompositorManager* obj ) : ResourceManager(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
		static property CompositorManager^ Singleton
		{
			CompositorManager^ get()
			{
				if (_singleton == CLR_NULL)
				{
					Ogre::CompositorManager* ptr = Ogre::CompositorManager::getSingletonPtr();
					if ( ptr ) _singleton = gcnew CompositorManager( ptr );
				}
				return _singleton;
			}
		}
	
		void Initialise( );
	
		void ParseScript( Mogre::DataStreamPtr^ stream, String^ groupName );
	
		Mogre::CompositorChain^ GetCompositorChain( Mogre::Viewport^ vp );
	
		bool HasCompositorChain( Mogre::Viewport^ vp );
	
		void RemoveCompositorChain( Mogre::Viewport^ vp );
	
		Mogre::CompositorInstance^ AddCompositor( Mogre::Viewport^ vp, String^ compositor, int addPosition );
		Mogre::CompositorInstance^ AddCompositor( Mogre::Viewport^ vp, String^ compositor );
	
		void RemoveCompositor( Mogre::Viewport^ vp, String^ compositor );
	
		void SetCompositorEnabled( Mogre::Viewport^ vp, String^ compositor, bool value );
	
		Mogre::IRenderable^ _getTexturedRectangle2D( );
	
		void RemoveAll( );
	
		void _reconstructAllCompositorResources( );
	
	
		//Protected Declarations
	protected public:
	
	};
	

}
