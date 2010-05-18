/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreInstancedGeometry.h"
#include "MogreMovableObject.h"
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//InstancedGeometry
	//################################################################
	
	public ref class InstancedGeometry : public Wrapper
	{
		//Nested Types
		public: ref class OptimisedSubMeshGeometryList;
		public: ref class SubMeshLodGeometryLinkList;
		public: ref class SubMeshGeometryLookup;
		public: ref class QueuedSubMeshList;
		public: ref class QueuedSubMeshOriginList;
		public: ref class QueuedGeometryList;
		public: ref class BatchInstanceMap;
		public: ref class RenderOperationVector;
		public: ref class BatchInstance;
		public: ref class InstancedObject;
	
		//################################################################
		//BatchInstance
		//################################################################
	
		public: ref class BatchInstance : public MovableObject
		{
			//Nested Types
			public: ref class LODBucketList;
			public: ref class ObjectsMap;
	
			#define STLDECL_MANAGEDKEY int
			#define STLDECL_MANAGEDVALUE Mogre::InstancedGeometry::InstancedObject^
			#define STLDECL_NATIVEKEY int
			#define STLDECL_NATIVEVALUE Ogre::InstancedGeometry::InstancedObject*
			public: INC_DECLARE_STLMAP( ObjectsMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
			#undef STLDECL_MANAGEDKEY
			#undef STLDECL_MANAGEDVALUE
			#undef STLDECL_NATIVEKEY
			#undef STLDECL_NATIVEVALUE
	
			#define STLDECL_MANAGEDTYPE Mogre::Real
			#define STLDECL_NATIVETYPE Ogre::Real
			public: INC_DECLARE_STLVECTOR( STLVector_Real, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
			#undef STLDECL_MANAGEDTYPE
			#undef STLDECL_NATIVETYPE
	
			//Private Declarations
		private protected:
			//Cached fields
			STLVector_Real^ _mLodSquaredDistances;
	
			//Internal Declarations
		public protected:
			BatchInstance( CLRObject* obj ) : MovableObject(obj)
			{
			}
	
	
			//Public Declarations
		public:
			BatchInstance( Mogre::InstancedGeometry^ parent, String^ name, Mogre::SceneManager^ mgr, Mogre::uint32 BatchInstanceID );
	
	
			property STLVector_Real^ mLodSquaredDistances
			{
			public:
				STLVector_Real^ get();
			}
	
			property Mogre::AxisAlignedBox^ mAABB
			{
			public:
				Mogre::AxisAlignedBox^ get();
			public:
				void set(Mogre::AxisAlignedBox^ value);
			}
	
			property Mogre::Real mBoundingRadius
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			property Mogre::ushort mCurrentLod
			{
			public:
				Mogre::ushort get();
			public:
				void set(Mogre::ushort value);
			}
	
			property Mogre::Real mCamDistanceSquared
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			property Mogre::AxisAlignedBox^ BoundingBox
			{
			public:
				Mogre::AxisAlignedBox^ get();
			public:
				void set(Mogre::AxisAlignedBox^ box);
			}
	
			property Mogre::Real BoundingRadius
			{
			public:
				Mogre::Real get();
			}
	
			property Mogre::uint32 ID
			{
			public:
				Mogre::uint32 get();
			}
	
			property String^ MovableType
			{
			public:
				String^ get();
			}
	
			property Mogre::InstancedGeometry^ Parent
			{
			public:
				Mogre::InstancedGeometry^ get();
			}
	
			property Mogre::SceneNode^ SceneNode
			{
			public:
				Mogre::SceneNode^ get();
			}
	
			void Build( );
	
			void _notifyCurrentCamera( Mogre::Camera^ cam );
	
			void _updateRenderQueue( Mogre::RenderQueue^ queue );
	
			bool IsVisible( );
	
			Mogre::Const_LightList^ GetLights( );
	
			void UpdateBoundingBox( );
	
			void Dump( [Out] std::ofstream% of );
	
			void AttachToScene( );
	
			void AddInstancedObject( int index, Mogre::InstancedGeometry::InstancedObject^ object );
	
			Mogre::InstancedGeometry::InstancedObject^ IsInstancedObjectPresent( int index );
	
			Mogre::InstancedGeometry::BatchInstance::ObjectsMap^ GetInstancesMap( );
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS( InstancedGeometry::BatchInstance )
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//InstancedObject
		//################################################################
	
		public: ref class InstancedObject : public INativePointer
		{
			//Nested Types
			public: ref class GeometryBucketList;
	
			public: enum class TransformSpace
			{
				TS_LOCAL = Ogre::InstancedGeometry::InstancedObject::TS_LOCAL,
				TS_PARENT = Ogre::InstancedGeometry::InstancedObject::TS_PARENT,
				TS_WORLD = Ogre::InstancedGeometry::InstancedObject::TS_WORLD
			};
	
			//Private Declarations
		private protected:
	
			virtual void ClearNativePtr() = INativePointer::ClearNativePtr
			{
				_native = 0;
			}
	
			//Internal Declarations
		public protected:
			InstancedObject( Ogre::InstancedGeometry::InstancedObject* obj ) : _native(obj), _createdByCLR(false)
			{
			}
	
			~InstancedObject()
			{
				if (_createdByCLR &&_native)
				{
					delete _native;
					_native = 0;
				}
			}
	
			Ogre::InstancedGeometry::InstancedObject* _native;
			bool _createdByCLR;
	
	
			//Public Declarations
		public:
			InstancedObject( int index );
			InstancedObject( int index, Mogre::SkeletonInstance^ skeleton, Mogre::AnimationStateSet^ animations );
	
	
			property Mogre::Matrix3^ LocalAxes
			{
			public:
				Mogre::Matrix3^ get();
			}
	
			property Mogre::Vector3 Position
			{
			public:
				Mogre::Vector3 get();
			public:
				void set(Mogre::Vector3 position);
			}
	
			property Mogre::SkeletonInstance^ SkeletonInstance
			{
			public:
				Mogre::SkeletonInstance^ get();
			}
	
			void Yaw( Mogre::Radian angle );
	
			void Pitch( Mogre::Radian angle );
	
			void Roll( Mogre::Radian angle );
	
			void Rotate( Mogre::Quaternion q );
	
			void SetScale( Mogre::Vector3 scale );
	
			void NeedUpdate( );
	
			void Translate( Mogre::Matrix3^ axes, Mogre::Vector3 move );
	
			void Translate( Mogre::Vector3 d );
	
			void UpdateAnimation( );
	
			Mogre::AnimationState^ GetAnimationState( String^ name );
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( InstancedGeometry::InstancedObject )
	
			//Protected Declarations
		protected public:
	
		};
	
		#define STLDECL_MANAGEDTYPE String^
		#define STLDECL_NATIVETYPE Ogre::String
		public: INC_DECLARE_STLVECTOR( QueuedSubMeshOriginList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDKEY Mogre::uint32
		#define STLDECL_MANAGEDVALUE Mogre::InstancedGeometry::BatchInstance^
		#define STLDECL_NATIVEKEY Ogre::uint32
		#define STLDECL_NATIVEVALUE Ogre::InstancedGeometry::BatchInstance*
		public: INC_DECLARE_STLMAP( BatchInstanceMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDTYPE Mogre::RenderOperation^
		#define STLDECL_NATIVETYPE Ogre::RenderOperation*
		public: INC_DECLARE_STLVECTOR( RenderOperationVector, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		public: INC_DECLARE_MAP_ITERATOR( BatchInstanceIterator, Ogre::InstancedGeometry::BatchInstanceIterator, Mogre::InstancedGeometry::BatchInstanceMap, Mogre::InstancedGeometry::BatchInstance^, Ogre::InstancedGeometry::BatchInstance*, Mogre::uint32, Ogre::uint32 )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		InstancedGeometry( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		InstancedGeometry( Mogre::SceneManager^ owner, String^ name );
	
	
		property Mogre::AnimationStateSet^ BaseAnimationState
		{
		public:
			Mogre::AnimationStateSet^ get();
		}
	
		property Mogre::SkeletonInstance^ BaseSkeletonInstance
		{
		public:
			Mogre::SkeletonInstance^ get();
		}
	
		property Mogre::Vector3 BatchInstanceDimensions
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 size);
		}
	
		property bool CastShadows
		{
		public:
			bool get();
		public:
			void set(bool castShadows);
		}
	
		property bool IsVisible
		{
		public:
			bool get();
		}
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		property unsigned int ObjectCount
		{
		public:
			unsigned int get();
		}
	
		property Mogre::Vector3 Origin
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 origin);
		}
	
		property Mogre::Real RenderingDistance
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real dist);
		}
	
		property Mogre::uint8 RenderQueueGroup
		{
		public:
			Mogre::uint8 get();
		public:
			void set(Mogre::uint8 queueID);
		}
	
		property Mogre::Real SquaredRenderingDistance
		{
		public:
			Mogre::Real get();
		}
	
		void AddEntity( Mogre::Entity^ ent, Mogre::Vector3 position, Mogre::Quaternion orientation, Mogre::Vector3 scale );
		void AddEntity( Mogre::Entity^ ent, Mogre::Vector3 position, Mogre::Quaternion orientation );
		void AddEntity( Mogre::Entity^ ent, Mogre::Vector3 position );
	
		void AddSceneNode( Mogre::SceneNode^ node );
	
		void Build( );
	
		void AddBatchInstance( );
	
		void Destroy( );
	
		void Reset( );
	
		void SetVisible( bool visible );
	
		Mogre::InstancedGeometry::BatchInstanceIterator^ GetBatchInstanceIterator( );
	
		Mogre::InstancedGeometry::RenderOperationVector^ GetRenderOperationVector( );
	
		void Dump( String^ filename );
	
		Mogre::SkeletonPtr^ GetBaseSkeleton( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( InstancedGeometry )
	
		//Protected Declarations
	protected public:
	
	};
	

}
