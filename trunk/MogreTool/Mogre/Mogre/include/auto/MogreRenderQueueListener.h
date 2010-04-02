/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreRenderQueueListener.h"
#include "MogrePlatform.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	interface class IRenderQueueListener_Receiver
	{
		void RenderQueueStarted( Mogre::uint8 queueGroupId, String^ invocation, [Out] bool% skipThisInvocation );
	
		void RenderQueueEnded( Mogre::uint8 queueGroupId, String^ invocation, [Out] bool% repeatThisInvocation );
	
	};
	
	public ref class RenderQueueListener abstract sealed
	{
	public:
		delegate static void RenderQueueStartedHandler( Mogre::uint8 queueGroupId, String^ invocation, [Out] bool% skipThisInvocation );
		delegate static void RenderQueueEndedHandler( Mogre::uint8 queueGroupId, String^ invocation, [Out] bool% repeatThisInvocation );
	};
	
	//################################################################
	//RenderQueueListener
	//################################################################
	
	class RenderQueueListener_Director : public Ogre::RenderQueueListener
	{
		//Nested Types
	
		//Private Declarations
	private:
		gcroot<IRenderQueueListener_Receiver^> _receiver;
	
		//Internal Declarations
	
		//Public Declarations
	public:
		RenderQueueListener_Director( IRenderQueueListener_Receiver^ recv )
			: _receiver(recv), doCallForRenderQueueStarted(false), doCallForRenderQueueEnded(false)
		{
		}
	
		bool doCallForRenderQueueStarted;
		bool doCallForRenderQueueEnded;
	
		virtual void renderQueueStarted( Ogre::uint8 queueGroupId, const Ogre::String& invocation, bool& skipThisInvocation ) override;
	
		virtual void renderQueueEnded( Ogre::uint8 queueGroupId, const Ogre::String& invocation, bool& repeatThisInvocation ) override;
	
	
		//Protected Declarations
	
	};
	

}
