/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreKeyFrame.h"
#include "MogreAnimationTrack.h"
#include "MogreHardwareVertexBuffer.h"

namespace Mogre
{
	//################################################################
	//KeyFrame
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	KeyFrame::KeyFrame( Mogre::AnimationTrack^ parent, Mogre::Real time ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::KeyFrame( parent, time);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::Real KeyFrame::Time::get()
	{
		return static_cast<const Ogre::KeyFrame*>(_native)->getTime( );
	}
	
	Mogre::KeyFrame^ KeyFrame::_clone( Mogre::AnimationTrack^ newParent )
	{
		return static_cast<const Ogre::KeyFrame*>(_native)->_clone( newParent );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//NumericKeyFrame
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	NumericKeyFrame::NumericKeyFrame( Mogre::AnimationTrack^ parent, Mogre::Real time ) : KeyFrame((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::NumericKeyFrame( parent, time);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::KeyFrame^ NumericKeyFrame::_clone( Mogre::AnimationTrack^ newParent )
	{
		return static_cast<const Ogre::NumericKeyFrame*>(_native)->_clone( newParent );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//TransformKeyFrame
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	TransformKeyFrame::TransformKeyFrame( Mogre::AnimationTrack^ parent, Mogre::Real time ) : KeyFrame((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::TransformKeyFrame( parent, time);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::Quaternion TransformKeyFrame::Rotation::get()
	{
		return static_cast<const Ogre::TransformKeyFrame*>(_native)->getRotation( );
	}
	void TransformKeyFrame::Rotation::set( Mogre::Quaternion rot )
	{
		static_cast<Ogre::TransformKeyFrame*>(_native)->setRotation( rot );
	}
	
	Mogre::Vector3 TransformKeyFrame::Scale::get()
	{
		return static_cast<const Ogre::TransformKeyFrame*>(_native)->getScale( );
	}
	void TransformKeyFrame::Scale::set( Mogre::Vector3 scale )
	{
		static_cast<Ogre::TransformKeyFrame*>(_native)->setScale( scale );
	}
	
	Mogre::Vector3 TransformKeyFrame::Translate::get()
	{
		return static_cast<const Ogre::TransformKeyFrame*>(_native)->getTranslate( );
	}
	void TransformKeyFrame::Translate::set( Mogre::Vector3 trans )
	{
		static_cast<Ogre::TransformKeyFrame*>(_native)->setTranslate( trans );
	}
	
	Mogre::KeyFrame^ TransformKeyFrame::_clone( Mogre::AnimationTrack^ newParent )
	{
		return static_cast<const Ogre::TransformKeyFrame*>(_native)->_clone( newParent );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//VertexMorphKeyFrame
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	VertexMorphKeyFrame::VertexMorphKeyFrame( Mogre::AnimationTrack^ parent, Mogre::Real time ) : KeyFrame((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::VertexMorphKeyFrame( parent, time);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	void VertexMorphKeyFrame::SetVertexBuffer( Mogre::HardwareVertexBufferSharedPtr^ buf )
	{
		static_cast<Ogre::VertexMorphKeyFrame*>(_native)->setVertexBuffer( (const Ogre::HardwareVertexBufferSharedPtr&)buf );
	}
	
	Mogre::HardwareVertexBufferSharedPtr^ VertexMorphKeyFrame::GetVertexBuffer( )
	{
		return static_cast<const Ogre::VertexMorphKeyFrame*>(_native)->getVertexBuffer( );
	}
	
	Mogre::KeyFrame^ VertexMorphKeyFrame::_clone( Mogre::AnimationTrack^ newParent )
	{
		return static_cast<const Ogre::VertexMorphKeyFrame*>(_native)->_clone( newParent );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//VertexPoseKeyFrame
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Mogre::VertexPoseKeyFrame::PoseRef
	#define STLDECL_NATIVETYPE Ogre::VertexPoseKeyFrame::PoseRef
	CPP_DECLARE_STLVECTOR_READONLY( VertexPoseKeyFrame::, PoseRefList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	CPP_DECLARE_ITERATOR( VertexPoseKeyFrame::, PoseRefIterator, Ogre::VertexPoseKeyFrame::PoseRefIterator, Mogre::VertexPoseKeyFrame::PoseRefList, Mogre::VertexPoseKeyFrame::PoseRef, Ogre::VertexPoseKeyFrame::PoseRef,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	VertexPoseKeyFrame::VertexPoseKeyFrame( Mogre::AnimationTrack^ parent, Mogre::Real time ) : KeyFrame((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::VertexPoseKeyFrame( parent, time);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	void VertexPoseKeyFrame::AddPoseReference( Mogre::ushort poseIndex, Mogre::Real influence )
	{
		static_cast<Ogre::VertexPoseKeyFrame*>(_native)->addPoseReference( poseIndex, influence );
	}
	
	void VertexPoseKeyFrame::UpdatePoseReference( Mogre::ushort poseIndex, Mogre::Real influence )
	{
		static_cast<Ogre::VertexPoseKeyFrame*>(_native)->updatePoseReference( poseIndex, influence );
	}
	
	void VertexPoseKeyFrame::RemovePoseReference( Mogre::ushort poseIndex )
	{
		static_cast<Ogre::VertexPoseKeyFrame*>(_native)->removePoseReference( poseIndex );
	}
	
	void VertexPoseKeyFrame::RemoveAllPoseReferences( )
	{
		static_cast<Ogre::VertexPoseKeyFrame*>(_native)->removeAllPoseReferences( );
	}
	
	Mogre::VertexPoseKeyFrame::Const_PoseRefList^ VertexPoseKeyFrame::GetPoseReferences( )
	{
		return static_cast<const Ogre::VertexPoseKeyFrame*>(_native)->getPoseReferences( );
	}
	
	Mogre::VertexPoseKeyFrame::PoseRefIterator^ VertexPoseKeyFrame::GetPoseReferenceIterator( )
	{
		return static_cast<Ogre::VertexPoseKeyFrame*>(_native)->getPoseReferenceIterator( );
	}
	
	Mogre::KeyFrame^ VertexPoseKeyFrame::_clone( Mogre::AnimationTrack^ newParent )
	{
		return static_cast<const Ogre::VertexPoseKeyFrame*>(_native)->_clone( newParent );
	}
	
	
	//Protected Declarations
	
	

}
