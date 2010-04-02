/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreShadowCameraSetupPlaneOptimal.h"
#include "MogreShadowCameraSetup.h"

namespace Mogre
{
	//################################################################
	//PlaneOptimalShadowCameraSetup
	//################################################################
	
	public ref class PlaneOptimalShadowCameraSetup : public ShadowCameraSetup
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PlaneOptimalShadowCameraSetup( CLRObject* obj ) : ShadowCameraSetup(obj)
		{
		}
	
	
		//Public Declarations
	public:
		PlaneOptimalShadowCameraSetup( Mogre::MovablePlane^ plane );
	
	
		void GetShadowCamera( Mogre::SceneManager^ sm, Mogre::Camera^ cam, Mogre::Viewport^ vp, Mogre::Light^ light, Mogre::Camera^ texCam );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( PlaneOptimalShadowCameraSetup )
	
		//Protected Declarations
	protected public:
	
	};
	

}
