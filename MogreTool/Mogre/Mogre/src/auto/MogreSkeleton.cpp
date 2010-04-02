/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreSkeleton.h"
#include "MogreBone.h"
#include "MogreResourceManager.h"
#include "MogreResource.h"
#include "MogreAnimation.h"
#include "MogreAnimationState.h"
#include "MogreStringVector.h"

namespace Mogre
{
	//################################################################
	//LinkedSkeletonAnimationSource_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	String^ LinkedSkeletonAnimationSource_NativePtr::skeletonName::get()
	{
		return TO_CLR_STRING( _native->skeletonName );
	}
	
	Mogre::SkeletonPtr^ LinkedSkeletonAnimationSource_NativePtr::pSkeleton::get()
	{
		return _native->pSkeleton;
	}
	
	Mogre::Real LinkedSkeletonAnimationSource_NativePtr::scale::get()
	{
		return _native->scale;
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//Skeleton
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Mogre::Bone^
	#define STLDECL_NATIVETYPE Ogre::Bone*
	CPP_DECLARE_STLVECTOR( Skeleton::, BoneList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE Mogre::LinkedSkeletonAnimationSource_NativePtr
	#define STLDECL_NATIVETYPE Ogre::LinkedSkeletonAnimationSource
	CPP_DECLARE_STLVECTOR( Skeleton::, LinkedSkeletonAnimSourceList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE Mogre::ushort
	#define STLDECL_NATIVETYPE Ogre::ushort
	CPP_DECLARE_STLVECTOR( Skeleton::, BoneHandleMap, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	CPP_DECLARE_ITERATOR( Skeleton::, BoneIterator, Ogre::Skeleton::BoneIterator, Mogre::Skeleton::BoneList, Mogre::Bone^, Ogre::Bone*,  )
	
	CPP_DECLARE_ITERATOR( Skeleton::, LinkedSkeletonAnimSourceIterator, Ogre::Skeleton::LinkedSkeletonAnimSourceIterator, Mogre::Skeleton::LinkedSkeletonAnimSourceList, Mogre::LinkedSkeletonAnimationSource_NativePtr, Ogre::LinkedSkeletonAnimationSource,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Skeleton::Skeleton( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader ) : Resource((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		_native = new Ogre::Skeleton( creator, o_name, handle, o_group, isManual, loader);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	Skeleton::Skeleton( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual ) : Resource((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		_native = new Ogre::Skeleton( creator, o_name, handle, o_group, isManual);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	Skeleton::Skeleton( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group ) : Resource((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		_native = new Ogre::Skeleton( creator, o_name, handle, o_group);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::SkeletonAnimationBlendMode Skeleton::BlendMode::get()
	{
		return (Mogre::SkeletonAnimationBlendMode)static_cast<const Ogre::Skeleton*>(_native)->getBlendMode( );
	}
	void Skeleton::BlendMode::set( Mogre::SkeletonAnimationBlendMode state )
	{
		static_cast<Ogre::Skeleton*>(_native)->setBlendMode( (Ogre::SkeletonAnimationBlendMode)state );
	}
	
	bool Skeleton::HasManualBones::get()
	{
		return static_cast<const Ogre::Skeleton*>(_native)->hasManualBones( );
	}
	
	bool Skeleton::ManualBonesDirty::get()
	{
		return static_cast<const Ogre::Skeleton*>(_native)->getManualBonesDirty( );
	}
	
	unsigned short Skeleton::NumAnimations::get()
	{
		return static_cast<const Ogre::Skeleton*>(_native)->getNumAnimations( );
	}
	
	unsigned short Skeleton::NumBones::get()
	{
		return static_cast<const Ogre::Skeleton*>(_native)->getNumBones( );
	}
	
	Mogre::Bone^ Skeleton::RootBone::get()
	{
		return static_cast<const Ogre::Skeleton*>(_native)->getRootBone( );
	}
	
	Mogre::Bone^ Skeleton::CreateBone( )
	{
		return static_cast<Ogre::Skeleton*>(_native)->createBone( );
	}
	
	Mogre::Bone^ Skeleton::CreateBone( unsigned short handle )
	{
		return static_cast<Ogre::Skeleton*>(_native)->createBone( handle );
	}
	
	Mogre::Bone^ Skeleton::CreateBone( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::Skeleton*>(_native)->createBone( o_name );
	}
	
	Mogre::Bone^ Skeleton::CreateBone( String^ name, unsigned short handle )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::Skeleton*>(_native)->createBone( o_name, handle );
	}
	
	Mogre::Skeleton::BoneIterator^ Skeleton::GetRootBoneIterator( )
	{
		return static_cast<Ogre::Skeleton*>(_native)->getRootBoneIterator( );
	}
	
	Mogre::Skeleton::BoneIterator^ Skeleton::GetBoneIterator( )
	{
		return static_cast<Ogre::Skeleton*>(_native)->getBoneIterator( );
	}
	
	Mogre::Bone^ Skeleton::GetBone( unsigned short handle )
	{
		return static_cast<const Ogre::Skeleton*>(_native)->getBone( handle );
	}
	
	Mogre::Bone^ Skeleton::GetBone( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::Skeleton*>(_native)->getBone( o_name );
	}
	
	void Skeleton::SetBindingPose( )
	{
		static_cast<Ogre::Skeleton*>(_native)->setBindingPose( );
	}
	
	void Skeleton::Reset( bool resetManualBones )
	{
		static_cast<Ogre::Skeleton*>(_native)->reset( resetManualBones );
	}
	void Skeleton::Reset( )
	{
		static_cast<Ogre::Skeleton*>(_native)->reset( );
	}
	
	Mogre::Animation^ Skeleton::CreateAnimation( String^ name, Mogre::Real length )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::Skeleton*>(_native)->createAnimation( o_name, length );
	}
	
	Mogre::Animation^ Skeleton::GetAnimation( String^ name, [Out] Mogre::LinkedSkeletonAnimationSource_NativePtr% linker )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		const Ogre::LinkedSkeletonAnimationSource* out_linker;
	
		Mogre::Animation^ retres = static_cast<const Ogre::Skeleton*>(_native)->getAnimation( o_name, &out_linker );
		linker = out_linker;
	
		return retres;
	}
	Mogre::Animation^ Skeleton::GetAnimation( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::Skeleton*>(_native)->getAnimation( o_name );
	}
	
	Mogre::Animation^ Skeleton::_getAnimationImpl( String^ name, [Out] Mogre::LinkedSkeletonAnimationSource_NativePtr% linker )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		const Ogre::LinkedSkeletonAnimationSource* out_linker;
	
		Mogre::Animation^ retres = static_cast<const Ogre::Skeleton*>(_native)->_getAnimationImpl( o_name, &out_linker );
		linker = out_linker;
	
		return retres;
	}
	Mogre::Animation^ Skeleton::_getAnimationImpl( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::Skeleton*>(_native)->_getAnimationImpl( o_name );
	}
	
	bool Skeleton::HasAnimation( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::Skeleton*>(_native)->hasAnimation( o_name );
	}
	
	void Skeleton::RemoveAnimation( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::Skeleton*>(_native)->removeAnimation( o_name );
	}
	
	void Skeleton::SetAnimationState( Mogre::AnimationStateSet^ animSet )
	{
		static_cast<Ogre::Skeleton*>(_native)->setAnimationState( animSet );
	}
	
	void Skeleton::_initAnimationState( Mogre::AnimationStateSet^ animSet )
	{
		static_cast<Ogre::Skeleton*>(_native)->_initAnimationState( animSet );
	}
	
	void Skeleton::_refreshAnimationState( Mogre::AnimationStateSet^ animSet )
	{
		static_cast<Ogre::Skeleton*>(_native)->_refreshAnimationState( animSet );
	}
	
	void Skeleton::_getBoneMatrices( Mogre::Matrix4::NativeValue* pMatrices )
	{
		Ogre::Matrix4* o_pMatrices = reinterpret_cast<Ogre::Matrix4*>(pMatrices);
	
		static_cast<Ogre::Skeleton*>(_native)->_getBoneMatrices( o_pMatrices );
	}
	
	Mogre::Animation^ Skeleton::GetAnimation( unsigned short index )
	{
		return static_cast<const Ogre::Skeleton*>(_native)->getAnimation( index );
	}
	
	void Skeleton::_updateTransforms( )
	{
		static_cast<Ogre::Skeleton*>(_native)->_updateTransforms( );
	}
	
	void Skeleton::OptimiseAllAnimations( bool preservingIdentityNodeTracks )
	{
		static_cast<Ogre::Skeleton*>(_native)->optimiseAllAnimations( preservingIdentityNodeTracks );
	}
	void Skeleton::OptimiseAllAnimations( )
	{
		static_cast<Ogre::Skeleton*>(_native)->optimiseAllAnimations( );
	}
	
	void Skeleton::AddLinkedSkeletonAnimationSource( String^ skelName, Mogre::Real scale )
	{
		DECLARE_NATIVE_STRING( o_skelName, skelName )
	
		static_cast<Ogre::Skeleton*>(_native)->addLinkedSkeletonAnimationSource( o_skelName, scale );
	}
	void Skeleton::AddLinkedSkeletonAnimationSource( String^ skelName )
	{
		DECLARE_NATIVE_STRING( o_skelName, skelName )
	
		static_cast<Ogre::Skeleton*>(_native)->addLinkedSkeletonAnimationSource( o_skelName );
	}
	
	void Skeleton::RemoveAllLinkedSkeletonAnimationSources( )
	{
		static_cast<Ogre::Skeleton*>(_native)->removeAllLinkedSkeletonAnimationSources( );
	}
	
	Mogre::Skeleton::LinkedSkeletonAnimSourceIterator^ Skeleton::GetLinkedSkeletonAnimationSourceIterator( )
	{
		return static_cast<const Ogre::Skeleton*>(_native)->getLinkedSkeletonAnimationSourceIterator( );
	}
	
	void Skeleton::_notifyManualBonesDirty( )
	{
		static_cast<Ogre::Skeleton*>(_native)->_notifyManualBonesDirty( );
	}
	
	void Skeleton::_notifyManualBoneStateChange( Mogre::Bone^ bone )
	{
		static_cast<Ogre::Skeleton*>(_native)->_notifyManualBoneStateChange( bone );
	}
	
	void Skeleton::_mergeSkeletonAnimations( Mogre::Skeleton^ source, Mogre::Skeleton::Const_BoneHandleMap^ boneHandleMap, Mogre::Const_StringVector^ animations )
	{
		static_cast<Ogre::Skeleton*>(_native)->_mergeSkeletonAnimations( source, boneHandleMap, animations );
	}
	void Skeleton::_mergeSkeletonAnimations( Mogre::Skeleton^ source, Mogre::Skeleton::Const_BoneHandleMap^ boneHandleMap )
	{
		static_cast<Ogre::Skeleton*>(_native)->_mergeSkeletonAnimations( source, boneHandleMap );
	}
	
	void Skeleton::_buildMapBoneByHandle( Mogre::Skeleton^ source, Mogre::Skeleton::BoneHandleMap^ boneHandleMap )
	{
		static_cast<const Ogre::Skeleton*>(_native)->_buildMapBoneByHandle( source, boneHandleMap );
	}
	
	void Skeleton::_buildMapBoneByName( Mogre::Skeleton^ source, Mogre::Skeleton::BoneHandleMap^ boneHandleMap )
	{
		static_cast<const Ogre::Skeleton*>(_native)->_buildMapBoneByName( source, boneHandleMap );
	}
	
	
	//Protected Declarations
	
	

}
