/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreShadowCameraSetupFocused.h"
#include "MogreShadowCameraSetup.h"

namespace Mogre
{
	//################################################################
	//FocusedShadowCameraSetup
	//################################################################
	
	public ref class FocusedShadowCameraSetup : public ShadowCameraSetup
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		FocusedShadowCameraSetup( CLRObject* obj ) : ShadowCameraSetup(obj)
		{
		}
	
	
		//Public Declarations
	public:
		FocusedShadowCameraSetup( );
	
	
		property bool UseAggressiveFocusRegion
		{
		public:
			bool get();
		public:
			void set(bool aggressive);
		}
	
		void GetShadowCamera( Mogre::SceneManager^ sm, Mogre::Camera^ cam, Mogre::Viewport^ vp, Mogre::Light^ light, Mogre::Camera^ texCam );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( FocusedShadowCameraSetup )
	
		//Protected Declarations
	protected public:
	
	};
	

}
