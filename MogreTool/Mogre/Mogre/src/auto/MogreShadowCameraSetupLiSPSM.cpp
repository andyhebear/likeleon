/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreShadowCameraSetupLiSPSM.h"
#include "MogreSceneManager.h"
#include "MogreCamera.h"
#include "MogreViewport.h"
#include "MogreLight.h"

namespace Mogre
{
	//################################################################
	//LiSPSMShadowCameraSetup
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	LiSPSMShadowCameraSetup::LiSPSMShadowCameraSetup( ) : FocusedShadowCameraSetup((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::LiSPSMShadowCameraSetup();
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::Real LiSPSMShadowCameraSetup::OptimalAdjustFactor::get()
	{
		return static_cast<const Ogre::LiSPSMShadowCameraSetup*>(_native)->getOptimalAdjustFactor( );
	}
	void LiSPSMShadowCameraSetup::OptimalAdjustFactor::set( Mogre::Real n )
	{
		static_cast<Ogre::LiSPSMShadowCameraSetup*>(_native)->setOptimalAdjustFactor( n );
	}
	
	bool LiSPSMShadowCameraSetup::UseSimpleOptimalAdjust::get()
	{
		return static_cast<const Ogre::LiSPSMShadowCameraSetup*>(_native)->getUseSimpleOptimalAdjust( );
	}
	void LiSPSMShadowCameraSetup::UseSimpleOptimalAdjust::set( bool s )
	{
		static_cast<Ogre::LiSPSMShadowCameraSetup*>(_native)->setUseSimpleOptimalAdjust( s );
	}
	
	void LiSPSMShadowCameraSetup::GetShadowCamera( Mogre::SceneManager^ sm, Mogre::Camera^ cam, Mogre::Viewport^ vp, Mogre::Light^ light, Mogre::Camera^ texCam )
	{
		static_cast<const Ogre::LiSPSMShadowCameraSetup*>(_native)->getShadowCamera( sm, cam, vp, light, texCam );
	}
	
	
	//Protected Declarations
	
	

}
