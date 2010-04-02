/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreRectangle2D.h"
#include "MogreCamera.h"

namespace Mogre
{
	//################################################################
	//Rectangle2D
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Rectangle2D::Rectangle2D( bool includeTextureCoordinates ) : SimpleRenderable((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::Rectangle2D( includeTextureCoordinates);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	Rectangle2D::Rectangle2D( ) : SimpleRenderable((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::Rectangle2D();
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::Real Rectangle2D::BoundingRadius::get()
	{
		return static_cast<const Ogre::Rectangle2D*>(_native)->getBoundingRadius( );
	}
	
	void Rectangle2D::SetCorners( Mogre::Real left, Mogre::Real top, Mogre::Real right, Mogre::Real bottom )
	{
		static_cast<Ogre::Rectangle2D*>(_native)->setCorners( left, top, right, bottom );
	}
	
	Mogre::Real Rectangle2D::GetSquaredViewDepth( Mogre::Camera^ cam )
	{
		return static_cast<const Ogre::Rectangle2D*>(_native)->getSquaredViewDepth( cam );
	}
	
	
	//Protected Declarations
	
	

}
