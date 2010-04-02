/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreShadowCameraSetupFocused.h"
#include "MogreSceneManager.h"
#include "MogreCamera.h"
#include "MogreViewport.h"
#include "MogreLight.h"

namespace Mogre
{
	//################################################################
	//FocusedShadowCameraSetup
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	FocusedShadowCameraSetup::FocusedShadowCameraSetup( ) : ShadowCameraSetup((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::FocusedShadowCameraSetup();
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	bool FocusedShadowCameraSetup::UseAggressiveFocusRegion::get()
	{
		return static_cast<const Ogre::FocusedShadowCameraSetup*>(_native)->getUseAggressiveFocusRegion( );
	}
	void FocusedShadowCameraSetup::UseAggressiveFocusRegion::set( bool aggressive )
	{
		static_cast<Ogre::FocusedShadowCameraSetup*>(_native)->setUseAggressiveFocusRegion( aggressive );
	}
	
	void FocusedShadowCameraSetup::GetShadowCamera( Mogre::SceneManager^ sm, Mogre::Camera^ cam, Mogre::Viewport^ vp, Mogre::Light^ light, Mogre::Camera^ texCam )
	{
		static_cast<const Ogre::FocusedShadowCameraSetup*>(_native)->getShadowCamera( sm, cam, vp, light, texCam );
	}
	
	
	//Protected Declarations
	
	

}
