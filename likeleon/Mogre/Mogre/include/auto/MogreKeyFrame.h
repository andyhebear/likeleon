/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreKeyFrame.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//KeyFrame
	//################################################################
	
	public ref class KeyFrame : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		KeyFrame( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		KeyFrame( Mogre::AnimationTrack^ parent, Mogre::Real time );
	
	
		property Mogre::Real Time
		{
		public:
			Mogre::Real get();
		}
	
		Mogre::KeyFrame^ _clone( Mogre::AnimationTrack^ newParent );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( KeyFrame )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//NumericKeyFrame
	//################################################################
	
	public ref class NumericKeyFrame : public KeyFrame
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		NumericKeyFrame( CLRObject* obj ) : KeyFrame(obj)
		{
		}
	
	
		//Public Declarations
	public:
		NumericKeyFrame( Mogre::AnimationTrack^ parent, Mogre::Real time );
	
	
		Mogre::KeyFrame^ _clone( Mogre::AnimationTrack^ newParent );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( NumericKeyFrame )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//TransformKeyFrame
	//################################################################
	
	public ref class TransformKeyFrame : public KeyFrame
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		TransformKeyFrame( CLRObject* obj ) : KeyFrame(obj)
		{
		}
	
	
		//Public Declarations
	public:
		TransformKeyFrame( Mogre::AnimationTrack^ parent, Mogre::Real time );
	
	
		property Mogre::Quaternion Rotation
		{
		public:
			Mogre::Quaternion get();
		public:
			void set(Mogre::Quaternion rot);
		}
	
		property Mogre::Vector3 Scale
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 scale);
		}
	
		property Mogre::Vector3 Translate
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 trans);
		}
	
		Mogre::KeyFrame^ _clone( Mogre::AnimationTrack^ newParent );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( TransformKeyFrame )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//VertexMorphKeyFrame
	//################################################################
	
	public ref class VertexMorphKeyFrame : public KeyFrame
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		VertexMorphKeyFrame( CLRObject* obj ) : KeyFrame(obj)
		{
		}
	
	
		//Public Declarations
	public:
		VertexMorphKeyFrame( Mogre::AnimationTrack^ parent, Mogre::Real time );
	
	
		void SetVertexBuffer( Mogre::HardwareVertexBufferSharedPtr^ buf );
	
		Mogre::HardwareVertexBufferSharedPtr^ GetVertexBuffer( );
	
		Mogre::KeyFrame^ _clone( Mogre::AnimationTrack^ newParent );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( VertexMorphKeyFrame )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//VertexPoseKeyFrame
	//################################################################
	
	public ref class VertexPoseKeyFrame : public KeyFrame
	{
		//Nested Types
		public: ref class PoseRefList;
	
		//################################################################
		//PoseRef
		//################################################################
	
		public: value class PoseRef
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			Mogre::ushort _poseIndex;
			Mogre::Real _influence;
	
	
			//Public Declarations
		public:
	
	
			property Mogre::ushort PoseIndex
			{
				Mogre::ushort get()
				{
					return _poseIndex;
				}
			}
	
			property Mogre::Real Influence
			{
				Mogre::Real get()
				{
					return _influence;
				}
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_VALUECLASS( VertexPoseKeyFrame::PoseRef )
	
			//Protected Declarations
		protected public:
	
		};
	
		#define STLDECL_MANAGEDTYPE Mogre::VertexPoseKeyFrame::PoseRef
		#define STLDECL_NATIVETYPE Ogre::VertexPoseKeyFrame::PoseRef
		public: INC_DECLARE_STLVECTOR_READONLY( PoseRefList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		public: INC_DECLARE_ITERATOR( PoseRefIterator, Ogre::VertexPoseKeyFrame::PoseRefIterator, Mogre::VertexPoseKeyFrame::PoseRefList, Mogre::VertexPoseKeyFrame::PoseRef, Ogre::VertexPoseKeyFrame::PoseRef )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		VertexPoseKeyFrame( CLRObject* obj ) : KeyFrame(obj)
		{
		}
	
	
		//Public Declarations
	public:
		VertexPoseKeyFrame( Mogre::AnimationTrack^ parent, Mogre::Real time );
	
	
		void AddPoseReference( Mogre::ushort poseIndex, Mogre::Real influence );
	
		void UpdatePoseReference( Mogre::ushort poseIndex, Mogre::Real influence );
	
		void RemovePoseReference( Mogre::ushort poseIndex );
	
		void RemoveAllPoseReferences( );
	
		Mogre::VertexPoseKeyFrame::Const_PoseRefList^ GetPoseReferences( );
	
		Mogre::VertexPoseKeyFrame::PoseRefIterator^ GetPoseReferenceIterator( );
	
		Mogre::KeyFrame^ _clone( Mogre::AnimationTrack^ newParent );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( VertexPoseKeyFrame )
	
		//Protected Declarations
	protected public:
	
	};
	

}
