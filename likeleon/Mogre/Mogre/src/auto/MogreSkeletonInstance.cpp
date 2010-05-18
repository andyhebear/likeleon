/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreSkeletonInstance.h"
#include "MogreSkeleton.h"
#include "MogreAnimation.h"
#include "MogreTagPoint.h"
#include "MogreBone.h"
#include "MogreAnimationState.h"

namespace Mogre
{
	//################################################################
	//SkeletonInstance
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	SkeletonInstance::SkeletonInstance( Mogre::SkeletonPtr^ masterCopy ) : Skeleton((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::SkeletonInstance( (const Ogre::SkeletonPtr&)masterCopy);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	String^ SkeletonInstance::Group::get()
	{
		return TO_CLR_STRING( static_cast<Ogre::SkeletonInstance*>(_native)->getGroup( ) );
	}
	
	Mogre::ResourceHandle SkeletonInstance::Handle::get()
	{
		return static_cast<const Ogre::SkeletonInstance*>(_native)->getHandle( );
	}
	
	String^ SkeletonInstance::Name::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::SkeletonInstance*>(_native)->getName( ) );
	}
	
	unsigned short SkeletonInstance::NumAnimations::get()
	{
		return static_cast<const Ogre::SkeletonInstance*>(_native)->getNumAnimations( );
	}
	
	Mogre::Animation^ SkeletonInstance::GetAnimation( unsigned short index )
	{
		return static_cast<const Ogre::SkeletonInstance*>(_native)->getAnimation( index );
	}
	
	Mogre::Animation^ SkeletonInstance::_getAnimationImpl( String^ name, [Out] Mogre::LinkedSkeletonAnimationSource_NativePtr% linker )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		const Ogre::LinkedSkeletonAnimationSource* out_linker;
	
		Mogre::Animation^ retres = static_cast<const Ogre::SkeletonInstance*>(_native)->_getAnimationImpl( o_name, &out_linker );
		linker = out_linker;
	
		return retres;
	}
	Mogre::Animation^ SkeletonInstance::_getAnimationImpl( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SkeletonInstance*>(_native)->_getAnimationImpl( o_name );
	}
	
	Mogre::Animation^ SkeletonInstance::CreateAnimation( String^ name, Mogre::Real length )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::SkeletonInstance*>(_native)->createAnimation( o_name, length );
	}
	
	Mogre::Animation^ SkeletonInstance::GetAnimation( String^ name, [Out] Mogre::LinkedSkeletonAnimationSource_NativePtr% linker )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		const Ogre::LinkedSkeletonAnimationSource* out_linker;
	
		Mogre::Animation^ retres = static_cast<const Ogre::SkeletonInstance*>(_native)->getAnimation( o_name, &out_linker );
		linker = out_linker;
	
		return retres;
	}
	Mogre::Animation^ SkeletonInstance::GetAnimation( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::SkeletonInstance*>(_native)->getAnimation( o_name );
	}
	
	void SkeletonInstance::RemoveAnimation( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::SkeletonInstance*>(_native)->removeAnimation( o_name );
	}
	
	Mogre::TagPoint^ SkeletonInstance::CreateTagPointOnBone( Mogre::Bone^ bone, Mogre::Quaternion offsetOrientation, Mogre::Vector3 offsetPosition )
	{
		return static_cast<Ogre::SkeletonInstance*>(_native)->createTagPointOnBone( bone, offsetOrientation, offsetPosition );
	}
	Mogre::TagPoint^ SkeletonInstance::CreateTagPointOnBone( Mogre::Bone^ bone, Mogre::Quaternion offsetOrientation )
	{
		return static_cast<Ogre::SkeletonInstance*>(_native)->createTagPointOnBone( bone, offsetOrientation );
	}
	Mogre::TagPoint^ SkeletonInstance::CreateTagPointOnBone( Mogre::Bone^ bone )
	{
		return static_cast<Ogre::SkeletonInstance*>(_native)->createTagPointOnBone( bone );
	}
	
	void SkeletonInstance::FreeTagPoint( Mogre::TagPoint^ tagPoint )
	{
		static_cast<Ogre::SkeletonInstance*>(_native)->freeTagPoint( tagPoint );
	}
	
	void SkeletonInstance::AddLinkedSkeletonAnimationSource( String^ skelName, Mogre::Real scale )
	{
		DECLARE_NATIVE_STRING( o_skelName, skelName )
	
		static_cast<Ogre::SkeletonInstance*>(_native)->addLinkedSkeletonAnimationSource( o_skelName, scale );
	}
	void SkeletonInstance::AddLinkedSkeletonAnimationSource( String^ skelName )
	{
		DECLARE_NATIVE_STRING( o_skelName, skelName )
	
		static_cast<Ogre::SkeletonInstance*>(_native)->addLinkedSkeletonAnimationSource( o_skelName );
	}
	
	void SkeletonInstance::RemoveAllLinkedSkeletonAnimationSources( )
	{
		static_cast<Ogre::SkeletonInstance*>(_native)->removeAllLinkedSkeletonAnimationSources( );
	}
	
	Mogre::Skeleton::LinkedSkeletonAnimSourceIterator^ SkeletonInstance::GetLinkedSkeletonAnimationSourceIterator( )
	{
		return static_cast<const Ogre::SkeletonInstance*>(_native)->getLinkedSkeletonAnimationSourceIterator( );
	}
	
	void SkeletonInstance::_initAnimationState( Mogre::AnimationStateSet^ animSet )
	{
		static_cast<Ogre::SkeletonInstance*>(_native)->_initAnimationState( animSet );
	}
	
	void SkeletonInstance::_refreshAnimationState( Mogre::AnimationStateSet^ animSet )
	{
		static_cast<Ogre::SkeletonInstance*>(_native)->_refreshAnimationState( animSet );
	}
	
	
	//Protected Declarations
	
	

}
