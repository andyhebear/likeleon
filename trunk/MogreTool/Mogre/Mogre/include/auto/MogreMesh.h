/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreMesh.h"
#include "MogreResource.h"
#include "MogrePrerequisites.h"
#include "MogreVertexBoneAssignment.h"
#include "MogreHardwareBuffer.h"
#include "MogreAnimationTrack.h"
#include "MogreProgressiveMesh.h"
#include "MogreHardwareVertexBuffer.h"
#include "MogrePose.h"

namespace Mogre
{
	//################################################################
	//Mesh
	//################################################################
	
	public ref class Mesh : public Resource
	{
		//Nested Types
		public: ref class LodDistanceList;
		public: ref class VertexBoneAssignmentList;
		public: ref class SubMeshList;
		public: ref class IndexMap;
		public: ref class SubMeshNameMap;
	
		#define STLDECL_MANAGEDTYPE Mogre::Real
		#define STLDECL_NATIVETYPE Ogre::Real
		public: INC_DECLARE_STLVECTOR( LodDistanceList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDKEY size_t
		#define STLDECL_MANAGEDVALUE Mogre::VertexBoneAssignment
		#define STLDECL_NATIVEKEY size_t
		#define STLDECL_NATIVEVALUE Ogre::VertexBoneAssignment
		public: INC_DECLARE_STLMULTIMAP( VertexBoneAssignmentList, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDTYPE Mogre::SubMesh^
		#define STLDECL_NATIVETYPE Ogre::SubMesh*
		public: INC_DECLARE_STLVECTOR( SubMeshList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDTYPE unsigned short
		#define STLDECL_NATIVETYPE unsigned short
		public: INC_DECLARE_STLVECTOR( IndexMap, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::ushort
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::ushort
		public: INC_DECLARE_STLHASHMAP( SubMeshNameMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		public: INC_DECLARE_MAP_ITERATOR( BoneAssignmentIterator, Ogre::Mesh::BoneAssignmentIterator, Mogre::Mesh::VertexBoneAssignmentList, Mogre::VertexBoneAssignment, Ogre::VertexBoneAssignment, size_t, size_t )
	
		public: INC_DECLARE_ITERATOR( SubMeshIterator, Ogre::Mesh::SubMeshIterator, Mogre::Mesh::SubMeshList, Mogre::SubMesh^, Ogre::SubMesh* )
	
		public: INC_DECLARE_ITERATOR( PoseIterator, Ogre::Mesh::PoseIterator, Mogre::PoseList, Mogre::Pose^, Ogre::Pose* )
	
		//Private Declarations
	private protected:
		//Cached fields
		Mogre::Mesh::IndexMap^ _sharedBlendIndexToBoneIndexMap;
	
		//Internal Declarations
	public protected:
		Mesh( CLRObject* obj ) : Resource(obj)
		{
		}
	
	
		//Public Declarations
	public:
		Mesh( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader );
		Mesh( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual );
		Mesh( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group );
	
	
		property Mogre::VertexData^ sharedVertexData
		{
		public:
			Mogre::VertexData^ get();
		public:
			void set(Mogre::VertexData^ value);
		}
	
		property Mogre::Mesh::IndexMap^ sharedBlendIndexToBoneIndexMap
		{
		public:
			Mogre::Mesh::IndexMap^ get();
		}
	
		property bool AutoBuildEdgeLists
		{
		public:
			bool get();
		public:
			void set(bool autobuild);
		}
	
		property Mogre::Real BoundingSphereRadius
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::AxisAlignedBox^ Bounds
		{
		public:
			Mogre::AxisAlignedBox^ get();
		}
	
		property bool HasSkeleton
		{
		public:
			bool get();
		}
	
		property bool HasVertexAnimation
		{
		public:
			bool get();
		}
	
		property Mogre::HardwareBuffer::Usage IndexBufferUsage
		{
		public:
			Mogre::HardwareBuffer::Usage get();
		}
	
		property bool IsEdgeListBuilt
		{
		public:
			bool get();
		}
	
		property bool IsIndexBufferShadowed
		{
		public:
			bool get();
		}
	
		property bool IsLodManual
		{
		public:
			bool get();
		}
	
		property bool IsPreparedForShadowVolumes
		{
		public:
			bool get();
		}
	
		property bool IsVertexBufferShadowed
		{
		public:
			bool get();
		}
	
		property unsigned short NumAnimations
		{
		public:
			unsigned short get();
		}
	
		property Mogre::ushort NumLodLevels
		{
		public:
			Mogre::ushort get();
		}
	
		property unsigned short NumSubMeshes
		{
		public:
			unsigned short get();
		}
	
		property size_t PoseCount
		{
		public:
			size_t get();
		}
	
		property Mogre::VertexAnimationType SharedVertexDataAnimationType
		{
		public:
			Mogre::VertexAnimationType get();
		}
	
		property String^ SkeletonName
		{
		public:
			String^ get();
		public:
			void set(String^ skelName);
		}
	
		property Mogre::HardwareBuffer::Usage VertexBufferUsage
		{
		public:
			Mogre::HardwareBuffer::Usage get();
		}
	
		Mogre::SubMesh^ CreateSubMesh( );
	
		Mogre::SubMesh^ CreateSubMesh( String^ name );
	
		void NameSubMesh( String^ name, Mogre::ushort index );
	
		Mogre::ushort _getSubMeshIndex( String^ name );
	
		Mogre::SubMesh^ GetSubMesh( unsigned short index );
	
		Mogre::SubMesh^ GetSubMesh( String^ name );
	
		Mogre::Mesh::SubMeshIterator^ GetSubMeshIterator( );
	
		Mogre::MeshPtr^ Clone( String^ newName, String^ newGroup );
		Mogre::MeshPtr^ Clone( String^ newName );
	
		void _setBounds( Mogre::AxisAlignedBox^ bounds, bool pad );
		void _setBounds( Mogre::AxisAlignedBox^ bounds );
	
		void _setBoundingSphereRadius( Mogre::Real radius );
	
		Mogre::SkeletonPtr^ GetSkeleton( );
	
		void _initAnimationState( Mogre::AnimationStateSet^ animSet );
	
		void _refreshAnimationState( Mogre::AnimationStateSet^ animSet );
	
		void AddBoneAssignment( Mogre::VertexBoneAssignment vertBoneAssign );
	
		void ClearBoneAssignments( );
	
		void _notifySkeleton( Mogre::SkeletonPtr^ pSkel );
	
		Mogre::Mesh::BoneAssignmentIterator^ GetBoneAssignmentIterator( );
	
		void GenerateLodLevels( Mogre::Mesh::Const_LodDistanceList^ lodDistances, Mogre::ProgressiveMesh::VertexReductionQuota reductionMethod, Mogre::Real reductionValue );
	
		Mogre::MeshLodUsage^ GetLodLevel( Mogre::ushort index );
	
		void CreateManualLodLevel( Mogre::Real fromDepth, String^ meshName );
	
		void UpdateManualLodLevel( Mogre::ushort index, String^ meshName );
	
		Mogre::ushort GetLodIndex( Mogre::Real depth );
	
		Mogre::ushort GetLodIndexSquaredDepth( Mogre::Real squaredDepth );
	
		void _setLodInfo( unsigned short numLevels, bool isManual );
	
		void _setLodUsage( unsigned short level, Mogre::MeshLodUsage^ usage );
	
		void _setSubMeshLodFaceList( unsigned short subIdx, unsigned short level, Mogre::IndexData^ facedata );
	
		void RemoveLodLevels( );
	
		void SetVertexBufferPolicy( Mogre::HardwareBuffer::Usage usage, bool shadowBuffer );
		void SetVertexBufferPolicy( Mogre::HardwareBuffer::Usage usage );
	
		void SetIndexBufferPolicy( Mogre::HardwareBuffer::Usage usage, bool shadowBuffer );
		void SetIndexBufferPolicy( Mogre::HardwareBuffer::Usage usage );
	
		unsigned short _rationaliseBoneAssignments( size_t vertexCount, Mogre::Mesh::VertexBoneAssignmentList^ assignments );
	
		void _compileBoneAssignments( );
	
		void _updateCompiledBoneAssignments( );
	
		void BuildTangentVectors( Mogre::VertexElementSemantic targetSemantic, unsigned short sourceTexCoordSet, unsigned short index );
		void BuildTangentVectors( Mogre::VertexElementSemantic targetSemantic, unsigned short sourceTexCoordSet );
		void BuildTangentVectors( Mogre::VertexElementSemantic targetSemantic );
		void BuildTangentVectors( );
	
		bool SuggestTangentVectorBuildParams( Mogre::VertexElementSemantic targetSemantic, [Out] unsigned short% outSourceCoordSet, [Out] unsigned short% outIndex );
	
		void BuildEdgeList( );
	
		void FreeEdgeList( );
	
		void PrepareForShadowVolume( );
	
		Mogre::EdgeData^ GetEdgeList( unsigned int lodIndex );
		Mogre::EdgeData^ GetEdgeList( );
	
		Mogre::Mesh::Const_SubMeshNameMap^ GetSubMeshNameMap( );
	
		Mogre::Animation^ CreateAnimation( String^ name, Mogre::Real length );
	
		Mogre::Animation^ GetAnimation( String^ name );
	
		Mogre::Animation^ _getAnimationImpl( String^ name );
	
		bool HasAnimation( String^ name );
	
		void RemoveAnimation( String^ name );
	
		Mogre::Animation^ GetAnimation( unsigned short index );
	
		void RemoveAllAnimations( );
	
		Mogre::VertexData^ GetVertexDataByTrackHandle( unsigned short handle );
	
		void UpdateMaterialForAllSubMeshes( );
	
		void _determineAnimationTypes( );
	
		bool _getAnimationTypesDirty( );
	
		Mogre::Pose^ CreatePose( Mogre::ushort target, String^ name );
		Mogre::Pose^ CreatePose( Mogre::ushort target );
	
		Mogre::Pose^ GetPose( Mogre::ushort index );
	
		Mogre::Pose^ GetPose( String^ name );
	
		void RemovePose( Mogre::ushort index );
	
		void RemovePose( String^ name );
	
		void RemoveAllPoses( );
	
		Mogre::Mesh::PoseIterator^ GetPoseIterator( );
	
		Mogre::Const_PoseList^ GetPoseList( );
	
		static void SoftwareVertexMorph( Mogre::Real t, Mogre::HardwareVertexBufferSharedPtr^ b1, Mogre::HardwareVertexBufferSharedPtr^ b2, Mogre::VertexData^ targetVertexData );
	
		static void SoftwareVertexPoseBlend( Mogre::Real weight, Collections::Generic::SortedList<size_t, Mogre::Vector3>^ vertexOffsetMap, Mogre::VertexData^ targetVertexData );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Mesh )
	
		//Protected Declarations
	protected public:
	
	};
	
	public ref class MeshPtr : public Mesh
	{
	public protected:
			Ogre::MeshPtr* _sharedPtr;
	
		MeshPtr(Ogre::MeshPtr& sharedPtr) : Mesh( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::MeshPtr(sharedPtr);
		}
	
		!MeshPtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~MeshPtr()
		{
			this->!MeshPtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( MeshPtr )
	
		static MeshPtr^ FromResourcePtr( ResourcePtr^ ptr )
		{
			return (MeshPtr^) ptr;
		}
	
		static operator MeshPtr^ ( ResourcePtr^ ptr )
		{
			if (CLR_NULL == ptr) return nullptr;
			void* castptr = dynamic_cast<Ogre::Mesh*>(ptr->_native);
			if (castptr == 0) throw gcnew InvalidCastException("The underlying type of the ResourcePtr object is not of type Mesh.");
			return gcnew MeshPtr( (Ogre::MeshPtr) *(ptr->_sharedPtr) );
		}
	
		MeshPtr(Mesh^ obj) : Mesh( obj->_native )
		{
			_sharedPtr = new Ogre::MeshPtr( static_cast<Ogre::Mesh*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			MeshPtr^ clr = dynamic_cast<MeshPtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(MeshPtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (MeshPtr^ val1, MeshPtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (MeshPtr^ val1, MeshPtr^ val2)
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
	
		property Mesh^ Target
		{
			Mesh^ get()
			{
				return static_cast<Ogre::Mesh*>(_native);
			}
		}
	};
	
	
	//################################################################
	//MeshLodUsage
	//################################################################
	
	public ref class MeshLodUsage
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		MeshLodUsage( Ogre::MeshLodUsage* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~MeshLodUsage()
		{
			this->!MeshLodUsage();
		}
		!MeshLodUsage()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::MeshLodUsage* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		MeshLodUsage();
	
	
		property Mogre::Real fromDepthSquared
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		property String^ manualName
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		property Mogre::MeshPtr^ manualMesh
		{
		public:
			Mogre::MeshPtr^ get();
		public:
			void set(Mogre::MeshPtr^ value);
		}
	
		property Mogre::EdgeData^ edgeData
		{
		public:
			Mogre::EdgeData^ get();
		public:
			void set(Mogre::EdgeData^ value);
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( MeshLodUsage )
	
		//Protected Declarations
	protected public:
	
	};
	

}
