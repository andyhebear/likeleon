/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreWireBoundingBox.h"
#include "MogreCamera.h"

namespace Mogre
{
	//################################################################
	//WireBoundingBox
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	WireBoundingBox::WireBoundingBox( ) : SimpleRenderable((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::WireBoundingBox();
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::Real WireBoundingBox::BoundingRadius::get()
	{
		return static_cast<const Ogre::WireBoundingBox*>(_native)->getBoundingRadius( );
	}
	
	void WireBoundingBox::SetupBoundingBox( Mogre::AxisAlignedBox^ aabb )
	{
		static_cast<Ogre::WireBoundingBox*>(_native)->setupBoundingBox( (Ogre::AxisAlignedBox)aabb );
	}
	
	Mogre::Real WireBoundingBox::GetSquaredViewDepth( Mogre::Camera^ cam )
	{
		return static_cast<const Ogre::WireBoundingBox*>(_native)->getSquaredViewDepth( cam );
	}
	
	
	//Protected Declarations
	
	

}
