/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogrePlaneBoundedVolume.h"

namespace Mogre
{
	//################################################################
	//PlaneBoundedVolume
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Mogre::Plane
	#define STLDECL_NATIVETYPE Ogre::Plane
	CPP_DECLARE_STLVECTOR( PlaneBoundedVolume::, PlaneList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	PlaneBoundedVolume::PlaneBoundedVolume( )
	{
		_createdByCLR = true;
		_native = new Ogre::PlaneBoundedVolume();
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	PlaneBoundedVolume::PlaneBoundedVolume( Mogre::Plane::Side theOutside )
	{
		_createdByCLR = true;
		_native = new Ogre::PlaneBoundedVolume( (Ogre::Plane::Side)theOutside);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::PlaneBoundedVolume::PlaneList^ PlaneBoundedVolume::planes::get()
	{
		return ( CLR_NULL == _planes ) ? (_planes = static_cast<Ogre::PlaneBoundedVolume*>(_native)->planes) : _planes;
	}
	
	Mogre::Plane::Side PlaneBoundedVolume::outside::get()
	{
		return (Mogre::Plane::Side)static_cast<Ogre::PlaneBoundedVolume*>(_native)->outside;
	}
	void PlaneBoundedVolume::outside::set( Mogre::Plane::Side value )
	{
		static_cast<Ogre::PlaneBoundedVolume*>(_native)->outside = (Ogre::Plane::Side)value;
	}
	
	bool PlaneBoundedVolume::Intersects( Mogre::AxisAlignedBox^ box )
	{
		return static_cast<const Ogre::PlaneBoundedVolume*>(_native)->intersects( (Ogre::AxisAlignedBox)box );
	}
	
	bool PlaneBoundedVolume::Intersects( Mogre::Sphere sphere )
	{
		return static_cast<const Ogre::PlaneBoundedVolume*>(_native)->intersects( sphere );
	}
	
	Pair<bool, Mogre::Real> PlaneBoundedVolume::Intersects( Mogre::Ray ray )
	{
		return ToManaged<Pair<bool, Mogre::Real>, std::pair<bool,Ogre::Real>>( static_cast<Ogre::PlaneBoundedVolume*>(_native)->intersects( ray ) );
	}
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDTYPE Mogre::PlaneBoundedVolume^
	#define STLDECL_NATIVETYPE Ogre::PlaneBoundedVolume
	CPP_DECLARE_STLVECTOR( , PlaneBoundedVolumeList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	

}
