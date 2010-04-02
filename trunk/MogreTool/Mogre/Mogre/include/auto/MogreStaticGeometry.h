/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreStaticGeometry.h"
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"
#include "MogreMovableObject.h"
#include "MogreShadowCaster.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//StaticGeometry
	//################################################################
	
	public ref class StaticGeometry : public Wrapper
	{
		//Nested Types
		public: ref class OptimisedSubMeshGeometryList;
		public: ref class SubMeshLodGeometryLinkList;
		public: ref class SubMeshGeometryLookup;
		public: ref class QueuedSubMeshList;
		public: ref class QueuedGeometryList;
		public: ref class RegionMap;
		public: ref class LODBucket;
		public: ref class MaterialBucket;
		public: ref class Region;
	
		//################################################################
		//SubMeshLodGeometryLink_NativePtr
		//################################################################
	
		public: value class SubMeshLodGeometryLink_NativePtr
		{
			//Nested Types
	
			//Private Declarations
		private protected:
			Ogre::StaticGeometry::SubMeshLodGeometryLink* _native;
	
			//Internal Declarations
		public protected:
	
			//Public Declarations
		public:
	
	
			property Mogre::VertexData^ vertexData
			{
			public:
				Mogre::VertexData^ get();
			public:
				void set(Mogre::VertexData^ value);
			}
	
			property Mogre::IndexData^ indexData
			{
			public:
				Mogre::IndexData^ get();
			public:
				void set(Mogre::IndexData^ value);
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( StaticGeometry::SubMeshLodGeometryLink_NativePtr, Ogre::StaticGeometry::SubMeshLodGeometryLink )
	
	
			property IntPtr NativePtr
			{
				IntPtr get() { return (IntPtr)_native; }
			}
	
			static SubMeshLodGeometryLink_NativePtr Create();
	
			void DestroyNativePtr()
			{
				if (_native)  { delete _native; _native = 0; }
			}
	
			property bool IsNull
			{
				bool get() { return (_native == 0); }
			}
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//QueuedGeometry_NativePtr
		//################################################################
	
		public: value class QueuedGeometry_NativePtr
		{
			//Nested Types
	
			//Private Declarations
		private protected:
			Ogre::StaticGeometry::QueuedGeometry* _native;
	
			//Internal Declarations
		public protected:
	
			//Public Declarations
		public:
	
	
			property Mogre::StaticGeometry::SubMeshLodGeometryLink_NativePtr geometry
			{
			public:
				Mogre::StaticGeometry::SubMeshLodGeometryLink_NativePtr get();
			public:
				void set(Mogre::StaticGeometry::SubMeshLodGeometryLink_NativePtr value);
			}
	
			property Mogre::Vector3 position
			{
			public:
				Mogre::Vector3 get();
			public:
				void set(Mogre::Vector3 value);
			}
	
			property Mogre::Quaternion orientation
			{
			public:
				Mogre::Quaternion get();
			public:
				void set(Mogre::Quaternion value);
			}
	
			property Mogre::Vector3 scale
			{
			public:
				Mogre::Vector3 get();
			public:
				void set(Mogre::Vector3 value);
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( StaticGeometry::QueuedGeometry_NativePtr, Ogre::StaticGeometry::QueuedGeometry )
	
	
			property IntPtr NativePtr
			{
				IntPtr get() { return (IntPtr)_native; }
			}
	
			static QueuedGeometry_NativePtr Create();
	
			void DestroyNativePtr()
			{
				if (_native)  { delete _native; _native = 0; }
			}
	
			property bool IsNull
			{
				bool get() { return (_native == 0); }
			}
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//LODBucket
		//################################################################
	
		public: ref class LODBucket : public INativePointer
		{
			//Nested Types
			public: ref class MaterialBucketMap;
	
			#define STLDECL_MANAGEDKEY String^
			#define STLDECL_MANAGEDVALUE Mogre::StaticGeometry::MaterialBucket^
			#define STLDECL_NATIVEKEY Ogre::String
			#define STLDECL_NATIVEVALUE Ogre::StaticGeometry::MaterialBucket*
			public: INC_DECLARE_STLMAP( MaterialBucketMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
			#undef STLDECL_MANAGEDKEY
			#undef STLDECL_MANAGEDVALUE
			#undef STLDECL_NATIVEKEY
			#undef STLDECL_NATIVEVALUE
	
			public: INC_DECLARE_MAP_ITERATOR( MaterialIterator, Ogre::StaticGeometry::LODBucket::MaterialIterator, Mogre::StaticGeometry::LODBucket::MaterialBucketMap, Mogre::StaticGeometry::MaterialBucket^, Ogre::StaticGeometry::MaterialBucket*, String^, Ogre::String )
	
			//Private Declarations
		private protected:
	
			virtual void ClearNativePtr() = INativePointer::ClearNativePtr
			{
				_native = 0;
			}
	
			//Internal Declarations
		public protected:
			LODBucket( Ogre::StaticGeometry::LODBucket* obj ) : _native(obj), _createdByCLR(false)
			{
			}
	
			~LODBucket()
			{
				if (_createdByCLR &&_native)
				{
					delete _native;
					_native = 0;
				}
			}
	
			Ogre::StaticGeometry::LODBucket* _native;
			bool _createdByCLR;
	
	
			//Public Declarations
		public:
			LODBucket( Mogre::StaticGeometry::Region^ parent, unsigned short lod, Mogre::Real lodDist );
	
	
			property Mogre::ushort Lod
			{
			public:
				Mogre::ushort get();
			}
	
			property Mogre::StaticGeometry::Region^ Parent
			{
			public:
				Mogre::StaticGeometry::Region^ get();
			}
	
			property Mogre::Real SquaredDistance
			{
			public:
				Mogre::Real get();
			}
	
			void Build( bool stencilShadows );
	
			void AddRenderables( Mogre::RenderQueue^ queue, Mogre::uint8 group, Mogre::Real camSquaredDistance );
	
			Mogre::StaticGeometry::LODBucket::MaterialIterator^ GetMaterialIterator( );
	
			void Dump( [Out] std::ofstream% of );
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( StaticGeometry::LODBucket )
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//MaterialBucket
		//################################################################
	
		public: ref class MaterialBucket : public INativePointer
		{
			//Nested Types
			public: ref class GeometryBucketList;
	
			//Private Declarations
		private protected:
	
			virtual void ClearNativePtr() = INativePointer::ClearNativePtr
			{
				_native = 0;
			}
	
			//Internal Declarations
		public protected:
			MaterialBucket( Ogre::StaticGeometry::MaterialBucket* obj ) : _native(obj), _createdByCLR(false)
			{
			}
	
			~MaterialBucket()
			{
				if (_createdByCLR &&_native)
				{
					delete _native;
					_native = 0;
				}
			}
	
			Ogre::StaticGeometry::MaterialBucket* _native;
			bool _createdByCLR;
	
	
			//Public Declarations
		public:
			MaterialBucket( Mogre::StaticGeometry::LODBucket^ parent, String^ materialName );
	
	
			property Mogre::Technique^ CurrentTechnique
			{
			public:
				Mogre::Technique^ get();
			}
	
			property String^ MaterialName
			{
			public:
				String^ get();
			}
	
			property Mogre::StaticGeometry::LODBucket^ Parent
			{
			public:
				Mogre::StaticGeometry::LODBucket^ get();
			}
	
			void Assign( Mogre::StaticGeometry::QueuedGeometry_NativePtr qsm );
	
			void Build( bool stencilShadows );
	
			void AddRenderables( Mogre::RenderQueue^ queue, Mogre::uint8 group, Mogre::Real camSquaredDist );
	
			Mogre::MaterialPtr^ GetMaterial( );
	
			void Dump( [Out] std::ofstream% of );
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( StaticGeometry::MaterialBucket )
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//Region
		//################################################################
	
		public: ref class Region : public MovableObject
		{
			//Nested Types
			public: ref class LODBucketList;
	
			#define STLDECL_MANAGEDTYPE Mogre::StaticGeometry::LODBucket^
			#define STLDECL_NATIVETYPE Ogre::StaticGeometry::LODBucket*
			public: INC_DECLARE_STLVECTOR( LODBucketList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
			#undef STLDECL_MANAGEDTYPE
			#undef STLDECL_NATIVETYPE
	
			public: INC_DECLARE_ITERATOR( LODIterator, Ogre::StaticGeometry::Region::LODIterator, Mogre::StaticGeometry::Region::LODBucketList, Mogre::StaticGeometry::LODBucket^, Ogre::StaticGeometry::LODBucket* )
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			Region( CLRObject* obj ) : MovableObject(obj)
			{
			}
	
	
			//Public Declarations
		public:
			Region( Mogre::StaticGeometry^ parent, String^ name, Mogre::SceneManager^ mgr, Mogre::uint32 regionID, Mogre::Vector3 centre );
	
	
			property Mogre::AxisAlignedBox^ BoundingBox
			{
			public:
				Mogre::AxisAlignedBox^ get();
			}
	
			property Mogre::Real BoundingRadius
			{
			public:
				Mogre::Real get();
			}
	
			property Mogre::Vector3 Centre
			{
			public:
				Mogre::Vector3 get();
			}
	
			property Mogre::EdgeData^ EdgeList
			{
			public:
				Mogre::EdgeData^ get();
			}
	
			property bool HasEdgeList
			{
			public:
				bool get();
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
	
			property Mogre::StaticGeometry^ Parent
			{
			public:
				Mogre::StaticGeometry^ get();
			}
	
			property Mogre::uint32 TypeFlags
			{
			public:
				Mogre::uint32 get();
			}
	
			void Build( bool stencilShadows );
	
			void _notifyCurrentCamera( Mogre::Camera^ cam );
	
			void _updateRenderQueue( Mogre::RenderQueue^ queue );
	
			bool IsVisible( );
	
			Mogre::StaticGeometry::Region::LODIterator^ GetLODIterator( );
	
			Mogre::ShadowCaster::ShadowRenderableListIterator^ GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDistance, unsigned long flags );
			Mogre::ShadowCaster::ShadowRenderableListIterator^ GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDistance );
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS( StaticGeometry::Region )
	
			//Protected Declarations
		protected public:
	
		};
	
		#define STLDECL_MANAGEDTYPE Mogre::StaticGeometry::SubMeshLodGeometryLink_NativePtr
		#define STLDECL_NATIVETYPE Ogre::StaticGeometry::SubMeshLodGeometryLink
		public: INC_DECLARE_STLVECTOR( SubMeshLodGeometryLinkList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDKEY Mogre::SubMesh^
		#define STLDECL_MANAGEDVALUE Mogre::StaticGeometry::SubMeshLodGeometryLinkList^
		#define STLDECL_NATIVEKEY Ogre::SubMesh*
		#define STLDECL_NATIVEVALUE Ogre::StaticGeometry::SubMeshLodGeometryLinkList*
		public: INC_DECLARE_STLMAP( SubMeshGeometryLookup, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDTYPE Mogre::StaticGeometry::QueuedGeometry_NativePtr
		#define STLDECL_NATIVETYPE Ogre::StaticGeometry::QueuedGeometry*
		public: INC_DECLARE_STLVECTOR( QueuedGeometryList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDKEY Mogre::uint32
		#define STLDECL_MANAGEDVALUE Mogre::StaticGeometry::Region^
		#define STLDECL_NATIVEKEY Ogre::uint32
		#define STLDECL_NATIVEVALUE Ogre::StaticGeometry::Region*
		public: INC_DECLARE_STLMAP( RegionMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		public: INC_DECLARE_MAP_ITERATOR( RegionIterator, Ogre::StaticGeometry::RegionIterator, Mogre::StaticGeometry::RegionMap, Mogre::StaticGeometry::Region^, Ogre::StaticGeometry::Region*, Mogre::uint32, Ogre::uint32 )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		StaticGeometry( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		StaticGeometry( Mogre::SceneManager^ owner, String^ name );
	
	
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
	
		property Mogre::Vector3 Origin
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 origin);
		}
	
		property Mogre::Vector3 RegionDimensions
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 size);
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
	
		void Destroy( );
	
		void Reset( );
	
		void SetVisible( bool visible );
	
		Mogre::StaticGeometry::RegionIterator^ GetRegionIterator( );
	
		void Dump( String^ filename );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( StaticGeometry )
	
		//Protected Declarations
	protected public:
	
	};
	

}
