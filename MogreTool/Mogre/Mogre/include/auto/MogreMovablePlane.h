/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreMovablePlane.h"
#include "MogreMovableObject.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//MovablePlane
	//################################################################
	
	public ref class MovablePlane : public MovableObject
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		MovablePlane( CLRObject* obj ) : MovableObject(obj)
		{
		}
	
	
		//Public Declarations
	public:
		MovablePlane( String^ name );
		MovablePlane( Mogre::Plane rhs );
		MovablePlane( Mogre::Vector3 rkNormal, Mogre::Real fConstant );
		MovablePlane( Mogre::Vector3 rkNormal, Mogre::Vector3 rkPoint );
		MovablePlane( Mogre::Vector3 rkPoint0, Mogre::Vector3 rkPoint1, Mogre::Vector3 rkPoint2 );
	
	
		property Mogre::AxisAlignedBox^ BoundingBox
		{
		public:
			Mogre::AxisAlignedBox^ get();
		}
	
		property Mogre::Real BoundingRadius
		{
		public:
			Mogre::Real get();
		}
	
		property String^ MovableType
		{
		public:
			String^ get();
		}
	
		void _notifyCurrentCamera( Mogre::Camera^ param1 );
	
		void _updateRenderQueue( Mogre::RenderQueue^ param1 );
	
		Mogre::Plane _getDerivedPlane( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( MovablePlane )
	
		//Protected Declarations
	protected public:
	
	};
	

}
