/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreBone.h"
#include "MogreSkeleton.h"

namespace Mogre
{
	//################################################################
	//Bone
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Bone::Bone( unsigned short handle, Mogre::Skeleton^ creator ) : Node((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::Bone( handle, creator);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	Bone::Bone( String^ name, unsigned short handle, Mogre::Skeleton^ creator ) : Node((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::Bone( o_name, handle, creator);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	unsigned short Bone::Handle::get()
	{
		return static_cast<const Ogre::Bone*>(_native)->getHandle( );
	}
	
	bool Bone::IsManuallyControlled::get()
	{
		return static_cast<const Ogre::Bone*>(_native)->isManuallyControlled( );
	}
	
	Mogre::Bone^ Bone::CreateChild( unsigned short handle, Mogre::Vector3 translate, Mogre::Quaternion rotate )
	{
		return static_cast<Ogre::Bone*>(_native)->createChild( handle, translate, rotate );
	}
	Mogre::Bone^ Bone::CreateChild( unsigned short handle, Mogre::Vector3 translate )
	{
		return static_cast<Ogre::Bone*>(_native)->createChild( handle, translate );
	}
	Mogre::Bone^ Bone::CreateChild( unsigned short handle )
	{
		return static_cast<Ogre::Bone*>(_native)->createChild( handle );
	}
	
	void Bone::SetBindingPose( )
	{
		static_cast<Ogre::Bone*>(_native)->setBindingPose( );
	}
	
	void Bone::Reset( )
	{
		static_cast<Ogre::Bone*>(_native)->reset( );
	}
	
	void Bone::SetManuallyControlled( bool manuallyControlled )
	{
		static_cast<Ogre::Bone*>(_native)->setManuallyControlled( manuallyControlled );
	}
	
	void Bone::_getOffsetTransform( Mogre::Matrix4^ m )
	{
		pin_ptr<Ogre::Matrix4> p_m = interior_ptr<Ogre::Matrix4>(&m->m00);
	
		static_cast<const Ogre::Bone*>(_native)->_getOffsetTransform( *p_m );
	}
	
	Mogre::Vector3 Bone::_getBindingPoseInverseScale( )
	{
		return static_cast<const Ogre::Bone*>(_native)->_getBindingPoseInverseScale( );
	}
	
	Mogre::Vector3 Bone::_getBindingPoseInversePosition( )
	{
		return static_cast<const Ogre::Bone*>(_native)->_getBindingPoseInversePosition( );
	}
	
	Mogre::Quaternion Bone::_getBindingPoseInverseOrientation( )
	{
		return static_cast<const Ogre::Bone*>(_native)->_getBindingPoseInverseOrientation( );
	}
	
	void Bone::NeedUpdate( bool forceParentUpdate )
	{
		static_cast<Ogre::Bone*>(_native)->needUpdate( forceParentUpdate );
	}
	void Bone::NeedUpdate( )
	{
		static_cast<Ogre::Bone*>(_native)->needUpdate( );
	}
	
	
	//Protected Declarations
	
	

}
