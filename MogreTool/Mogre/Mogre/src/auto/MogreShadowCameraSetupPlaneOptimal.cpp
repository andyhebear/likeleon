/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreShadowCameraSetupPlaneOptimal.h"
#include "MogreMovablePlane.h"
#include "MogreSceneManager.h"
#include "MogreCamera.h"
#include "MogreViewport.h"
#include "MogreLight.h"

namespace Mogre
{
	//################################################################
	//PlaneOptimalShadowCameraSetup
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	PlaneOptimalShadowCameraSetup::PlaneOptimalShadowCameraSetup( Mogre::MovablePlane^ plane ) : ShadowCameraSetup((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::PlaneOptimalShadowCameraSetup( plane);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	void PlaneOptimalShadowCameraSetup::GetShadowCamera( Mogre::SceneManager^ sm, Mogre::Camera^ cam, Mogre::Viewport^ vp, Mogre::Light^ light, Mogre::Camera^ texCam )
	{
		static_cast<const Ogre::PlaneOptimalShadowCameraSetup*>(_native)->getShadowCamera( sm, cam, vp, light, texCam );
	}
	
	
	//Protected Declarations
	
	

}
