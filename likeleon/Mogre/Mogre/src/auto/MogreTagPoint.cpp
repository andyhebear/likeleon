/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreTagPoint.h"
#include "MogreSkeleton.h"
#include "MogreMovableObject.h"
#include "MogreEntity.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//TagPoint
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	TagPoint::TagPoint( unsigned short handle, Mogre::Skeleton^ creator ) : Bone((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::TagPoint( handle, creator);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::MovableObject^ TagPoint::ChildObject::get()
	{
		return static_cast<const Ogre::TagPoint*>(_native)->getChildObject( );
	}
	void TagPoint::ChildObject::set( Mogre::MovableObject^ pObject )
	{
		static_cast<Ogre::TagPoint*>(_native)->setChildObject( pObject );
	}
	
	bool TagPoint::InheritParentEntityOrientation::get()
	{
		return static_cast<const Ogre::TagPoint*>(_native)->getInheritParentEntityOrientation( );
	}
	void TagPoint::InheritParentEntityOrientation::set( bool inherit )
	{
		static_cast<Ogre::TagPoint*>(_native)->setInheritParentEntityOrientation( inherit );
	}
	
	bool TagPoint::InheritParentEntityScale::get()
	{
		return static_cast<const Ogre::TagPoint*>(_native)->getInheritParentEntityScale( );
	}
	void TagPoint::InheritParentEntityScale::set( bool inherit )
	{
		static_cast<Ogre::TagPoint*>(_native)->setInheritParentEntityScale( inherit );
	}
	
	Mogre::Entity^ TagPoint::ParentEntity::get()
	{
		return static_cast<const Ogre::TagPoint*>(_native)->getParentEntity( );
	}
	void TagPoint::ParentEntity::set( Mogre::Entity^ pEntity )
	{
		static_cast<Ogre::TagPoint*>(_native)->setParentEntity( pEntity );
	}
	
	Mogre::Matrix4^ TagPoint::ParentEntityTransform::get()
	{
		return static_cast<const Ogre::TagPoint*>(_native)->getParentEntityTransform( );
	}
	
	Mogre::Matrix4^ TagPoint::_getFullLocalTransform( )
	{
		return static_cast<const Ogre::TagPoint*>(_native)->_getFullLocalTransform( );
	}
	
	void TagPoint::NeedUpdate( bool forceParentUpdate )
	{
		static_cast<Ogre::TagPoint*>(_native)->needUpdate( forceParentUpdate );
	}
	void TagPoint::NeedUpdate( )
	{
		static_cast<Ogre::TagPoint*>(_native)->needUpdate( );
	}
	
	void TagPoint::UpdateFromParentImpl( )
	{
		static_cast<const Ogre::TagPoint*>(_native)->updateFromParentImpl( );
	}
	
	Mogre::Const_LightList^ TagPoint::GetLights( )
	{
		return static_cast<const Ogre::TagPoint*>(_native)->getLights( );
	}
	
	
	//Protected Declarations
	
	

}
