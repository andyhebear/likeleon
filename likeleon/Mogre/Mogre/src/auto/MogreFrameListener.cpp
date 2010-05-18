/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreFrameListener.h"

namespace Mogre
{
	//################################################################
	//FrameListener
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	bool FrameListener_Director::frameStarted( const Ogre::FrameEvent& evt )
	{
		if (doCallForFrameStarted)
		{
			bool mp_return = _receiver->FrameStarted( evt );
			return mp_return;
		}
		else
			return true;
	}
	
	bool FrameListener_Director::frameEnded( const Ogre::FrameEvent& evt )
	{
		if (doCallForFrameEnded)
		{
			bool mp_return = _receiver->FrameEnded( evt );
			return mp_return;
		}
		else
			return true;
	}
	
	
	//Protected Declarations
	
	

}
