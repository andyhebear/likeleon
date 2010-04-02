/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreSkeletonInstance.h"
#include "MogreSkeleton.h"
#include "MogrePrerequisites.h"
#include "MogreResource.h"

namespace Mogre
{
	//################################################################
	//SkeletonInstance
	//################################################################
	
	public ref class SkeletonInstance : public Skeleton
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		SkeletonInstance( CLRObject* obj ) : Skeleton(obj)
		{
		}
	
	
		//Public Declarations
	public:
		SkeletonInstance( Mogre::SkeletonPtr^ masterCopy );
	
	
		property String^ Group
		{
		public:
			String^ get();
		}
	
		property Mogre::ResourceHandle Handle
		{
		public:
			Mogre::ResourceHandle get();
		}
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		property unsigned short NumAnimations
		{
		public:
			unsigned short get();
		}
	
		Mogre::Animation^ GetAnimation( unsigned short index );
	
		Mogre::Animation^ _getAnimationImpl( String^ name, [Out] Mogre::LinkedSkeletonAnimationSource_NativePtr% linker );
		Mogre::Animation^ _getAnimationImpl( String^ name );
	
		Mogre::Animation^ CreateAnimation( String^ name, Mogre::Real length );
	
		Mogre::Animation^ GetAnimation( String^ name, [Out] Mogre::LinkedSkeletonAnimationSource_NativePtr% linker );
		Mogre::Animation^ GetAnimation( String^ name );
	
		void RemoveAnimation( String^ name );
	
		Mogre::TagPoint^ CreateTagPointOnBone( Mogre::Bone^ bone, Mogre::Quaternion offsetOrientation, Mogre::Vector3 offsetPosition );
		Mogre::TagPoint^ CreateTagPointOnBone( Mogre::Bone^ bone, Mogre::Quaternion offsetOrientation );
		Mogre::TagPoint^ CreateTagPointOnBone( Mogre::Bone^ bone );
	
		void FreeTagPoint( Mogre::TagPoint^ tagPoint );
	
		void AddLinkedSkeletonAnimationSource( String^ skelName, Mogre::Real scale );
		void AddLinkedSkeletonAnimationSource( String^ skelName );
	
		void RemoveAllLinkedSkeletonAnimationSources( );
	
		Mogre::Skeleton::LinkedSkeletonAnimSourceIterator^ GetLinkedSkeletonAnimationSourceIterator( );
	
		void _initAnimationState( Mogre::AnimationStateSet^ animSet );
	
		void _refreshAnimationState( Mogre::AnimationStateSet^ animSet );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( SkeletonInstance )
	
		//Protected Declarations
	protected public:
	
	};
	

}
