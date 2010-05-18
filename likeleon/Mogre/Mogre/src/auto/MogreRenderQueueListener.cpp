/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreRenderQueueListener.h"

namespace Mogre
{
	//################################################################
	//RenderQueueListener
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	void RenderQueueListener_Director::renderQueueStarted( Ogre::uint8 queueGroupId, const Ogre::String& invocation, bool& skipThisInvocation )
	{
		if (doCallForRenderQueueStarted)
		{
			_receiver->RenderQueueStarted( queueGroupId, TO_CLR_STRING( invocation ), skipThisInvocation );
		}
	}
	
	void RenderQueueListener_Director::renderQueueEnded( Ogre::uint8 queueGroupId, const Ogre::String& invocation, bool& repeatThisInvocation )
	{
		if (doCallForRenderQueueEnded)
		{
			_receiver->RenderQueueEnded( queueGroupId, TO_CLR_STRING( invocation ), repeatThisInvocation );
		}
	}
	
	
	//Protected Declarations
	
	

}
