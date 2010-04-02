/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreMovablePlane.h"
#include "MogreCamera.h"
#include "MogreRenderQueue.h"

namespace Mogre
{
	//################################################################
	//MovablePlane
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	MovablePlane::MovablePlane( String^ name ) : MovableObject((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::MovablePlane( o_name);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	MovablePlane::MovablePlane( Mogre::Plane rhs ) : MovableObject((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::MovablePlane( rhs);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	MovablePlane::MovablePlane( Mogre::Vector3 rkNormal, Mogre::Real fConstant ) : MovableObject((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::MovablePlane( rkNormal, fConstant);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	MovablePlane::MovablePlane( Mogre::Vector3 rkNormal, Mogre::Vector3 rkPoint ) : MovableObject((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::MovablePlane( rkNormal, rkPoint);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	MovablePlane::MovablePlane( Mogre::Vector3 rkPoint0, Mogre::Vector3 rkPoint1, Mogre::Vector3 rkPoint2 ) : MovableObject((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::MovablePlane( rkPoint0, rkPoint1, rkPoint2);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::AxisAlignedBox^ MovablePlane::BoundingBox::get()
	{
		return static_cast<const Ogre::MovablePlane*>(_native)->getBoundingBox( );
	}
	
	Mogre::Real MovablePlane::BoundingRadius::get()
	{
		return static_cast<const Ogre::MovablePlane*>(_native)->getBoundingRadius( );
	}
	
	String^ MovablePlane::MovableType::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::MovablePlane*>(_native)->getMovableType( ) );
	}
	
	void MovablePlane::_notifyCurrentCamera( Mogre::Camera^ param1 )
	{
		static_cast<Ogre::MovablePlane*>(_native)->_notifyCurrentCamera( param1 );
	}
	
	void MovablePlane::_updateRenderQueue( Mogre::RenderQueue^ param1 )
	{
		static_cast<Ogre::MovablePlane*>(_native)->_updateRenderQueue( param1 );
	}
	
	Mogre::Plane MovablePlane::_getDerivedPlane( )
	{
		return static_cast<const Ogre::MovablePlane*>(_native)->_getDerivedPlane( );
	}
	
	
	//Protected Declarations
	
	

}
