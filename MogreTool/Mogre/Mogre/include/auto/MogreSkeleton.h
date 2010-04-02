/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreSkeleton.h"
#include "MogrePrerequisites.h"
#include "MogreResource.h"
#include "MogreStringVector.h"

namespace Mogre
{
	public enum class SkeletonAnimationBlendMode
	{
		ANIMBLEND_AVERAGE = Ogre::ANIMBLEND_AVERAGE,
		ANIMBLEND_CUMULATIVE = Ogre::ANIMBLEND_CUMULATIVE
	};
	
	//################################################################
	//LinkedSkeletonAnimationSource_NativePtr
	//################################################################
	
	public value class LinkedSkeletonAnimationSource_NativePtr
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		Ogre::LinkedSkeletonAnimationSource* _native;
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		property String^ skeletonName
		{
		public:
			String^ get();
		}
	
		property Mogre::SkeletonPtr^ pSkeleton
		{
		public:
			Mogre::SkeletonPtr^ get();
		}
	
		property Mogre::Real scale
		{
		public:
			Mogre::Real get();
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( LinkedSkeletonAnimationSource_NativePtr, Ogre::LinkedSkeletonAnimationSource )
	
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_native; }
		}
	
		property bool IsNull
		{
			bool get() { return (_native == 0); }
		}
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//Skeleton
	//################################################################
	
	public ref class Skeleton : public Resource
	{
		//Nested Types
		public: ref class BoneList;
		public: ref class LinkedSkeletonAnimSourceList;
		public: ref class BoneHandleMap;
	
		#define STLDECL_MANAGEDTYPE Mogre::Bone^
		#define STLDECL_NATIVETYPE Ogre::Bone*
		public: INC_DECLARE_STLVECTOR( BoneList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDTYPE Mogre::LinkedSkeletonAnimationSource_NativePtr
		#define STLDECL_NATIVETYPE Ogre::LinkedSkeletonAnimationSource
		public: INC_DECLARE_STLVECTOR( LinkedSkeletonAnimSourceList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDTYPE Mogre::ushort
		#define STLDECL_NATIVETYPE Ogre::ushort
		public: INC_DECLARE_STLVECTOR( BoneHandleMap, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		public: INC_DECLARE_ITERATOR( BoneIterator, Ogre::Skeleton::BoneIterator, Mogre::Skeleton::BoneList, Mogre::Bone^, Ogre::Bone* )
	
		public: INC_DECLARE_ITERATOR( LinkedSkeletonAnimSourceIterator, Ogre::Skeleton::LinkedSkeletonAnimSourceIterator, Mogre::Skeleton::LinkedSkeletonAnimSourceList, Mogre::LinkedSkeletonAnimationSource_NativePtr, Ogre::LinkedSkeletonAnimationSource )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Skeleton( CLRObject* obj ) : Resource(obj)
		{
		}
	
	
		//Public Declarations
	public:
		Skeleton( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader );
		Skeleton( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual );
		Skeleton( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group );
	
	
		property Mogre::SkeletonAnimationBlendMode BlendMode
		{
		public:
			Mogre::SkeletonAnimationBlendMode get();
		public:
			void set(Mogre::SkeletonAnimationBlendMode state);
		}
	
		property bool HasManualBones
		{
		public:
			bool get();
		}
	
		property bool ManualBonesDirty
		{
		public:
			bool get();
		}
	
		property unsigned short NumAnimations
		{
		public:
			unsigned short get();
		}
	
		property unsigned short NumBones
		{
		public:
			unsigned short get();
		}
	
		property Mogre::Bone^ RootBone
		{
		public:
			Mogre::Bone^ get();
		}
	
		Mogre::Bone^ CreateBone( );
	
		Mogre::Bone^ CreateBone( unsigned short handle );
	
		Mogre::Bone^ CreateBone( String^ name );
	
		Mogre::Bone^ CreateBone( String^ name, unsigned short handle );
	
		Mogre::Skeleton::BoneIterator^ GetRootBoneIterator( );
	
		Mogre::Skeleton::BoneIterator^ GetBoneIterator( );
	
		Mogre::Bone^ GetBone( unsigned short handle );
	
		Mogre::Bone^ GetBone( String^ name );
	
		void SetBindingPose( );
	
		void Reset( bool resetManualBones );
		void Reset( );
	
		Mogre::Animation^ CreateAnimation( String^ name, Mogre::Real length );
	
		Mogre::Animation^ GetAnimation( String^ name, [Out] Mogre::LinkedSkeletonAnimationSource_NativePtr% linker );
		Mogre::Animation^ GetAnimation( String^ name );
	
		Mogre::Animation^ _getAnimationImpl( String^ name, [Out] Mogre::LinkedSkeletonAnimationSource_NativePtr% linker );
		Mogre::Animation^ _getAnimationImpl( String^ name );
	
		bool HasAnimation( String^ name );
	
		void RemoveAnimation( String^ name );
	
		void SetAnimationState( Mogre::AnimationStateSet^ animSet );
	
		void _initAnimationState( Mogre::AnimationStateSet^ animSet );
	
		void _refreshAnimationState( Mogre::AnimationStateSet^ animSet );
	
		void _getBoneMatrices( Mogre::Matrix4::NativeValue* pMatrices );
	
		Mogre::Animation^ GetAnimation( unsigned short index );
	
		void _updateTransforms( );
	
		void OptimiseAllAnimations( bool preservingIdentityNodeTracks );
		void OptimiseAllAnimations( );
	
		void AddLinkedSkeletonAnimationSource( String^ skelName, Mogre::Real scale );
		void AddLinkedSkeletonAnimationSource( String^ skelName );
	
		void RemoveAllLinkedSkeletonAnimationSources( );
	
		Mogre::Skeleton::LinkedSkeletonAnimSourceIterator^ GetLinkedSkeletonAnimationSourceIterator( );
	
		void _notifyManualBonesDirty( );
	
		void _notifyManualBoneStateChange( Mogre::Bone^ bone );
	
		void _mergeSkeletonAnimations( Mogre::Skeleton^ source, Mogre::Skeleton::Const_BoneHandleMap^ boneHandleMap, Mogre::Const_StringVector^ animations );
		void _mergeSkeletonAnimations( Mogre::Skeleton^ source, Mogre::Skeleton::Const_BoneHandleMap^ boneHandleMap );
	
		void _buildMapBoneByHandle( Mogre::Skeleton^ source, Mogre::Skeleton::BoneHandleMap^ boneHandleMap );
	
		void _buildMapBoneByName( Mogre::Skeleton^ source, Mogre::Skeleton::BoneHandleMap^ boneHandleMap );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Skeleton )
	
		//Protected Declarations
	protected public:
	
	};
	
	public ref class SkeletonPtr : public Skeleton
	{
	public protected:
			Ogre::SkeletonPtr* _sharedPtr;
	
		SkeletonPtr(Ogre::SkeletonPtr& sharedPtr) : Skeleton( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::SkeletonPtr(sharedPtr);
		}
	
		!SkeletonPtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~SkeletonPtr()
		{
			this->!SkeletonPtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( SkeletonPtr )
	
		static SkeletonPtr^ FromResourcePtr( ResourcePtr^ ptr )
		{
			return (SkeletonPtr^) ptr;
		}
	
		static operator SkeletonPtr^ ( ResourcePtr^ ptr )
		{
			if (CLR_NULL == ptr) return nullptr;
			void* castptr = dynamic_cast<Ogre::Skeleton*>(ptr->_native);
			if (castptr == 0) throw gcnew InvalidCastException("The underlying type of the ResourcePtr object is not of type Skeleton.");
			return gcnew SkeletonPtr( (Ogre::SkeletonPtr) *(ptr->_sharedPtr) );
		}
	
		SkeletonPtr(Skeleton^ obj) : Skeleton( obj->_native )
		{
			_sharedPtr = new Ogre::SkeletonPtr( static_cast<Ogre::Skeleton*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			SkeletonPtr^ clr = dynamic_cast<SkeletonPtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(SkeletonPtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (SkeletonPtr^ val1, SkeletonPtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (SkeletonPtr^ val1, SkeletonPtr^ val2)
		{
			return !(val1 == val2);
		}
	
		virtual int GetHashCode() override
		{
			return reinterpret_cast<int>( _native );
		}
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_sharedPtr; }
		}
	
		property bool Unique
		{
			bool get()
			{
				return (*_sharedPtr).unique();
			}
		}
	
		property int UseCount
		{
			int get()
			{
				return (*_sharedPtr).useCount();
			}
		}
	
		property Skeleton^ Target
		{
			Skeleton^ get()
			{
				return static_cast<Ogre::Skeleton*>(_native);
			}
		}
	};
	
	

}
