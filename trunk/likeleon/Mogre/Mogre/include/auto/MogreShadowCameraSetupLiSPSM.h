/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreShadowCameraSetupLiSPSM.h"
#include "MogreShadowCameraSetupFocused.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//LiSPSMShadowCameraSetup
	//################################################################
	
	public ref class LiSPSMShadowCameraSetup : public FocusedShadowCameraSetup
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		LiSPSMShadowCameraSetup( CLRObject* obj ) : FocusedShadowCameraSetup(obj)
		{
		}
	
	
		//Public Declarations
	public:
		LiSPSMShadowCameraSetup( );
	
	
		property Mogre::Real OptimalAdjustFactor
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real n);
		}
	
		property bool UseSimpleOptimalAdjust
		{
		public:
			bool get();
		public:
			void set(bool s);
		}
	
		void GetShadowCamera( Mogre::SceneManager^ sm, Mogre::Camera^ cam, Mogre::Viewport^ vp, Mogre::Light^ light, Mogre::Camera^ texCam );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( LiSPSMShadowCameraSetup )
	
		//Protected Declarations
	protected public:
	
	};
	

}
