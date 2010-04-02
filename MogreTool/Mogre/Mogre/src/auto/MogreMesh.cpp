/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreMesh.h"
#include "MogreSubMesh.h"
#include "MogrePose.h"
#include "MogreResourceManager.h"
#include "MogreResource.h"
#include "MogreVertexIndexData.h"
#include "MogreSkeleton.h"
#include "MogreAnimationState.h"
#include "MogreEdgeListBuilder.h"
#include "MogreAnimation.h"
#include "MogreHardwareVertexBuffer.h"

namespace Mogre
{
	//################################################################
	//Mesh
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Mogre::Real
	#define STLDECL_NATIVETYPE Ogre::Real
	CPP_DECLARE_STLVECTOR( Mesh::, LodDistanceList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDKEY size_t
	#define STLDECL_MANAGEDVALUE Mogre::VertexBoneAssignment
	#define STLDECL_NATIVEKEY size_t
	#define STLDECL_NATIVEVALUE Ogre::VertexBoneAssignment
	CPP_DECLARE_STLMULTIMAP( Mesh::, VertexBoneAssignmentList, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDTYPE Mogre::SubMesh^
	#define STLDECL_NATIVETYPE Ogre::SubMesh*
	CPP_DECLARE_STLVECTOR( Mesh::, SubMeshList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE unsigned short
	#define STLDECL_NATIVETYPE unsigned short
	CPP_DECLARE_STLVECTOR( Mesh::, IndexMap, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::ushort
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::ushort
	CPP_DECLARE_STLHASHMAP( Mesh::, SubMeshNameMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	CPP_DECLARE_MAP_ITERATOR( Mesh::, BoneAssignmentIterator, Ogre::Mesh::BoneAssignmentIterator, Mogre::Mesh::VertexBoneAssignmentList, Mogre::VertexBoneAssignment, Ogre::VertexBoneAssignment, size_t, size_t,  )
	
	CPP_DECLARE_ITERATOR( Mesh::, SubMeshIterator, Ogre::Mesh::SubMeshIterator, Mogre::Mesh::SubMeshList, Mogre::SubMesh^, Ogre::SubMesh*,  )
	
	CPP_DECLARE_ITERATOR( Mesh::, PoseIterator, Ogre::Mesh::PoseIterator, Mogre::PoseList, Mogre::Pose^, Ogre::Pose*,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Mesh::Mesh( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader ) : Resource((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		_native = new Ogre::Mesh( creator, o_name, handle, o_group, isManual, loader);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	Mesh::Mesh( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual ) : Resource((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		_native = new Ogre::Mesh( creator, o_name, handle, o_group, isManual);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	Mesh::Mesh( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group ) : Resource((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		_native = new Ogre::Mesh( creator, o_name, handle, o_group);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::VertexData^ Mesh::sharedVertexData::get()
	{
		return static_cast<Ogre::Mesh*>(_native)->sharedVertexData;
	}
	void Mesh::sharedVertexData::set( Mogre::VertexData^ value )
	{
		static_cast<Ogre::Mesh*>(_native)->sharedVertexData = value;
	}
	
	Mogre::Mesh::IndexMap^ Mesh::sharedBlendIndexToBoneIndexMap::get()
	{
		return ( CLR_NULL == _sharedBlendIndexToBoneIndexMap ) ? (_sharedBlendIndexToBoneIndexMap = static_cast<Ogre::Mesh*>(_native)->sharedBlendIndexToBoneIndexMap) : _sharedBlendIndexToBoneIndexMap;
	}
	
	bool Mesh::AutoBuildEdgeLists::get()
	{
		return static_cast<const Ogre::Mesh*>(_native)->getAutoBuildEdgeLists( );
	}
	void Mesh::AutoBuildEdgeLists::set( bool autobuild )
	{
		static_cast<Ogre::Mesh*>(_native)->setAutoBuildEdgeLists( autobuild );
	}
	
	Mogre::Real Mesh::BoundingSphereRadius::get()
	{
		return static_cast<const Ogre::Mesh*>(_native)->getBoundingSphereRadius( );
	}
	
	Mogre::AxisAlignedBox^ Mesh::Bounds::get()
	{
		return static_cast<const Ogre::Mesh*>(_native)->getBounds( );
	}
	
	bool Mesh::HasSkeleton::get()
	{
		return static_cast<const Ogre::Mesh*>(_native)->hasSkeleton( );
	}
	
	bool Mesh::HasVertexAnimation::get()
	{
		return static_cast<const Ogre::Mesh*>(_native)->hasVertexAnimation( );
	}
	
	Mogre::HardwareBuffer::Usage Mesh::IndexBufferUsage::get()
	{
		return (Mogre::HardwareBuffer::Usage)static_cast<const Ogre::Mesh*>(_native)->getIndexBufferUsage( );
	}
	
	bool Mesh::IsEdgeListBuilt::get()
	{
		return static_cast<const Ogre::Mesh*>(_native)->isEdgeListBuilt( );
	}
	
	bool Mesh::IsIndexBufferShadowed::get()
	{
		return static_cast<const Ogre::Mesh*>(_native)->isIndexBufferShadowed( );
	}
	
	bool Mesh::IsLodManual::get()
	{
		return static_cast<const Ogre::Mesh*>(_native)->isLodManual( );
	}
	
	bool Mesh::IsPreparedForShadowVolumes::get()
	{
		return static_cast<const Ogre::Mesh*>(_native)->isPreparedForShadowVolumes( );
	}
	
	bool Mesh::IsVertexBufferShadowed::get()
	{
		return static_cast<const Ogre::Mesh*>(_native)->isVertexBufferShadowed( );
	}
	
	unsigned short Mesh::NumAnimations::get()
	{
		return static_cast<const Ogre::Mesh*>(_native)->getNumAnimations( );
	}
	
	Mogre::ushort Mesh::NumLodLevels::get()
	{
		return static_cast<const Ogre::Mesh*>(_native)->getNumLodLevels( );
	}
	
	unsigned short Mesh::NumSubMeshes::get()
	{
		return static_cast<const Ogre::Mesh*>(_native)->getNumSubMeshes( );
	}
	
	size_t Mesh::PoseCount::get()
	{
		return static_cast<const Ogre::Mesh*>(_native)->getPoseCount( );
	}
	
	Mogre::VertexAnimationType Mesh::SharedVertexDataAnimationType::get()
	{
		return (Mogre::VertexAnimationType)static_cast<const Ogre::Mesh*>(_native)->getSharedVertexDataAnimationType( );
	}
	
	String^ Mesh::SkeletonName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Mesh*>(_native)->getSkeletonName( ) );
	}
	void Mesh::SkeletonName::set( String^ skelName )
	{
		DECLARE_NATIVE_STRING( o_skelName, skelName )
	
		static_cast<Ogre::Mesh*>(_native)->setSkeletonName( o_skelName );
	}
	
	Mogre::HardwareBuffer::Usage Mesh::VertexBufferUsage::get()
	{
		return (Mogre::HardwareBuffer::Usage)static_cast<const Ogre::Mesh*>(_native)->getVertexBufferUsage( );
	}
	
	Mogre::SubMesh^ Mesh::CreateSubMesh( )
	{
		return static_cast<Ogre::Mesh*>(_native)->createSubMesh( );
	}
	
	Mogre::SubMesh^ Mesh::CreateSubMesh( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::Mesh*>(_native)->createSubMesh( o_name );
	}
	
	void Mesh::NameSubMesh( String^ name, Mogre::ushort index )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::Mesh*>(_native)->nameSubMesh( o_name, index );
	}
	
	Mogre::ushort Mesh::_getSubMeshIndex( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::Mesh*>(_native)->_getSubMeshIndex( o_name );
	}
	
	Mogre::SubMesh^ Mesh::GetSubMesh( unsigned short index )
	{
		return static_cast<const Ogre::Mesh*>(_native)->getSubMesh( index );
	}
	
	Mogre::SubMesh^ Mesh::GetSubMesh( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::Mesh*>(_native)->getSubMesh( o_name );
	}
	
	Mogre::Mesh::SubMeshIterator^ Mesh::GetSubMeshIterator( )
	{
		return static_cast<Ogre::Mesh*>(_native)->getSubMeshIterator( );
	}
	
	Mogre::MeshPtr^ Mesh::Clone( String^ newName, String^ newGroup )
	{
		DECLARE_NATIVE_STRING( o_newName, newName )
		DECLARE_NATIVE_STRING( o_newGroup, newGroup )
	
		return static_cast<Ogre::Mesh*>(_native)->clone( o_newName, o_newGroup );
	}
	Mogre::MeshPtr^ Mesh::Clone( String^ newName )
	{
		DECLARE_NATIVE_STRING( o_newName, newName )
	
		return static_cast<Ogre::Mesh*>(_native)->clone( o_newName );
	}
	
	void Mesh::_setBounds( Mogre::AxisAlignedBox^ bounds, bool pad )
	{
		static_cast<Ogre::Mesh*>(_native)->_setBounds( (Ogre::AxisAlignedBox)bounds, pad );
	}
	void Mesh::_setBounds( Mogre::AxisAlignedBox^ bounds )
	{
		static_cast<Ogre::Mesh*>(_native)->_setBounds( (Ogre::AxisAlignedBox)bounds );
	}
	
	void Mesh::_setBoundingSphereRadius( Mogre::Real radius )
	{
		static_cast<Ogre::Mesh*>(_native)->_setBoundingSphereRadius( radius );
	}
	
	Mogre::SkeletonPtr^ Mesh::GetSkeleton( )
	{
		return static_cast<const Ogre::Mesh*>(_native)->getSkeleton( );
	}
	
	void Mesh::_initAnimationState( Mogre::AnimationStateSet^ animSet )
	{
		static_cast<Ogre::Mesh*>(_native)->_initAnimationState( animSet );
	}
	
	void Mesh::_refreshAnimationState( Mogre::AnimationStateSet^ animSet )
	{
		static_cast<Ogre::Mesh*>(_native)->_refreshAnimationState( animSet );
	}
	
	void Mesh::AddBoneAssignment( Mogre::VertexBoneAssignment vertBoneAssign )
	{
		static_cast<Ogre::Mesh*>(_native)->addBoneAssignment( vertBoneAssign );
	}
	
	void Mesh::ClearBoneAssignments( )
	{
		static_cast<Ogre::Mesh*>(_native)->clearBoneAssignments( );
	}
	
	void Mesh::_notifySkeleton( Mogre::SkeletonPtr^ pSkel )
	{
		static_cast<Ogre::Mesh*>(_native)->_notifySkeleton( (Ogre::SkeletonPtr&)pSkel );
	}
	
	Mogre::Mesh::BoneAssignmentIterator^ Mesh::GetBoneAssignmentIterator( )
	{
		return static_cast<Ogre::Mesh*>(_native)->getBoneAssignmentIterator( );
	}
	
	void Mesh::GenerateLodLevels( Mogre::Mesh::Const_LodDistanceList^ lodDistances, Mogre::ProgressiveMesh::VertexReductionQuota reductionMethod, Mogre::Real reductionValue )
	{
		static_cast<Ogre::Mesh*>(_native)->generateLodLevels( lodDistances, (Ogre::ProgressiveMesh::VertexReductionQuota)reductionMethod, reductionValue );
	}
	
	Mogre::MeshLodUsage^ Mesh::GetLodLevel( Mogre::ushort index )
	{
		return static_cast<const Ogre::Mesh*>(_native)->getLodLevel( index );
	}
	
	void Mesh::CreateManualLodLevel( Mogre::Real fromDepth, String^ meshName )
	{
		DECLARE_NATIVE_STRING( o_meshName, meshName )
	
		static_cast<Ogre::Mesh*>(_native)->createManualLodLevel( fromDepth, o_meshName );
	}
	
	void Mesh::UpdateManualLodLevel( Mogre::ushort index, String^ meshName )
	{
		DECLARE_NATIVE_STRING( o_meshName, meshName )
	
		static_cast<Ogre::Mesh*>(_native)->updateManualLodLevel( index, o_meshName );
	}
	
	Mogre::ushort Mesh::GetLodIndex( Mogre::Real depth )
	{
		return static_cast<const Ogre::Mesh*>(_native)->getLodIndex( depth );
	}
	
	Mogre::ushort Mesh::GetLodIndexSquaredDepth( Mogre::Real squaredDepth )
	{
		return static_cast<const Ogre::Mesh*>(_native)->getLodIndexSquaredDepth( squaredDepth );
	}
	
	void Mesh::_setLodInfo( unsigned short numLevels, bool isManual )
	{
		static_cast<Ogre::Mesh*>(_native)->_setLodInfo( numLevels, isManual );
	}
	
	void Mesh::_setLodUsage( unsigned short level, Mogre::MeshLodUsage^ usage )
	{
		static_cast<Ogre::Mesh*>(_native)->_setLodUsage( level, usage );
	}
	
	void Mesh::_setSubMeshLodFaceList( unsigned short subIdx, unsigned short level, Mogre::IndexData^ facedata )
	{
		static_cast<Ogre::Mesh*>(_native)->_setSubMeshLodFaceList( subIdx, level, facedata );
	}
	
	void Mesh::RemoveLodLevels( )
	{
		static_cast<Ogre::Mesh*>(_native)->removeLodLevels( );
	}
	
	void Mesh::SetVertexBufferPolicy( Mogre::HardwareBuffer::Usage usage, bool shadowBuffer )
	{
		static_cast<Ogre::Mesh*>(_native)->setVertexBufferPolicy( (Ogre::HardwareBuffer::Usage)usage, shadowBuffer );
	}
	void Mesh::SetVertexBufferPolicy( Mogre::HardwareBuffer::Usage usage )
	{
		static_cast<Ogre::Mesh*>(_native)->setVertexBufferPolicy( (Ogre::HardwareBuffer::Usage)usage );
	}
	
	void Mesh::SetIndexBufferPolicy( Mogre::HardwareBuffer::Usage usage, bool shadowBuffer )
	{
		static_cast<Ogre::Mesh*>(_native)->setIndexBufferPolicy( (Ogre::HardwareBuffer::Usage)usage, shadowBuffer );
	}
	void Mesh::SetIndexBufferPolicy( Mogre::HardwareBuffer::Usage usage )
	{
		static_cast<Ogre::Mesh*>(_native)->setIndexBufferPolicy( (Ogre::HardwareBuffer::Usage)usage );
	}
	
	unsigned short Mesh::_rationaliseBoneAssignments( size_t vertexCount, Mogre::Mesh::VertexBoneAssignmentList^ assignments )
	{
		return static_cast<Ogre::Mesh*>(_native)->_rationaliseBoneAssignments( vertexCount, assignments );
	}
	
	void Mesh::_compileBoneAssignments( )
	{
		static_cast<Ogre::Mesh*>(_native)->_compileBoneAssignments( );
	}
	
	void Mesh::_updateCompiledBoneAssignments( )
	{
		static_cast<Ogre::Mesh*>(_native)->_updateCompiledBoneAssignments( );
	}
	
	void Mesh::BuildTangentVectors( Mogre::VertexElementSemantic targetSemantic, unsigned short sourceTexCoordSet, unsigned short index )
	{
		static_cast<Ogre::Mesh*>(_native)->buildTangentVectors( (Ogre::VertexElementSemantic)targetSemantic, sourceTexCoordSet, index );
	}
	void Mesh::BuildTangentVectors( Mogre::VertexElementSemantic targetSemantic, unsigned short sourceTexCoordSet )
	{
		static_cast<Ogre::Mesh*>(_native)->buildTangentVectors( (Ogre::VertexElementSemantic)targetSemantic, sourceTexCoordSet );
	}
	void Mesh::BuildTangentVectors( Mogre::VertexElementSemantic targetSemantic )
	{
		static_cast<Ogre::Mesh*>(_native)->buildTangentVectors( (Ogre::VertexElementSemantic)targetSemantic );
	}
	void Mesh::BuildTangentVectors( )
	{
		static_cast<Ogre::Mesh*>(_native)->buildTangentVectors( );
	}
	
	bool Mesh::SuggestTangentVectorBuildParams( Mogre::VertexElementSemantic targetSemantic, [Out] unsigned short% outSourceCoordSet, [Out] unsigned short% outIndex )
	{
		pin_ptr<unsigned short> p_outSourceCoordSet = &outSourceCoordSet;
		pin_ptr<unsigned short> p_outIndex = &outIndex;
	
		return static_cast<Ogre::Mesh*>(_native)->suggestTangentVectorBuildParams( (Ogre::VertexElementSemantic)targetSemantic, *p_outSourceCoordSet, *p_outIndex );
	}
	
	void Mesh::BuildEdgeList( )
	{
		static_cast<Ogre::Mesh*>(_native)->buildEdgeList( );
	}
	
	void Mesh::FreeEdgeList( )
	{
		static_cast<Ogre::Mesh*>(_native)->freeEdgeList( );
	}
	
	void Mesh::PrepareForShadowVolume( )
	{
		static_cast<Ogre::Mesh*>(_native)->prepareForShadowVolume( );
	}
	
	Mogre::EdgeData^ Mesh::GetEdgeList( unsigned int lodIndex )
	{
		return static_cast<Ogre::Mesh*>(_native)->getEdgeList( lodIndex );
	}
	Mogre::EdgeData^ Mesh::GetEdgeList( )
	{
		return static_cast<Ogre::Mesh*>(_native)->getEdgeList( );
	}
	
	Mogre::Mesh::Const_SubMeshNameMap^ Mesh::GetSubMeshNameMap( )
	{
		return static_cast<const Ogre::Mesh*>(_native)->getSubMeshNameMap( );
	}
	
	Mogre::Animation^ Mesh::CreateAnimation( String^ name, Mogre::Real length )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::Mesh*>(_native)->createAnimation( o_name, length );
	}
	
	Mogre::Animation^ Mesh::GetAnimation( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::Mesh*>(_native)->getAnimation( o_name );
	}
	
	Mogre::Animation^ Mesh::_getAnimationImpl( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<const Ogre::Mesh*>(_native)->_getAnimationImpl( o_name );
	}
	
	bool Mesh::HasAnimation( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::Mesh*>(_native)->hasAnimation( o_name );
	}
	
	void Mesh::RemoveAnimation( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::Mesh*>(_native)->removeAnimation( o_name );
	}
	
	Mogre::Animation^ Mesh::GetAnimation( unsigned short index )
	{
		return static_cast<const Ogre::Mesh*>(_native)->getAnimation( index );
	}
	
	void Mesh::RemoveAllAnimations( )
	{
		static_cast<Ogre::Mesh*>(_native)->removeAllAnimations( );
	}
	
	Mogre::VertexData^ Mesh::GetVertexDataByTrackHandle( unsigned short handle )
	{
		return static_cast<Ogre::Mesh*>(_native)->getVertexDataByTrackHandle( handle );
	}
	
	void Mesh::UpdateMaterialForAllSubMeshes( )
	{
		static_cast<Ogre::Mesh*>(_native)->updateMaterialForAllSubMeshes( );
	}
	
	void Mesh::_determineAnimationTypes( )
	{
		static_cast<const Ogre::Mesh*>(_native)->_determineAnimationTypes( );
	}
	
	bool Mesh::_getAnimationTypesDirty( )
	{
		return static_cast<const Ogre::Mesh*>(_native)->_getAnimationTypesDirty( );
	}
	
	Mogre::Pose^ Mesh::CreatePose( Mogre::ushort target, String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::Mesh*>(_native)->createPose( target, o_name );
	}
	Mogre::Pose^ Mesh::CreatePose( Mogre::ushort target )
	{
		return static_cast<Ogre::Mesh*>(_native)->createPose( target );
	}
	
	Mogre::Pose^ Mesh::GetPose( Mogre::ushort index )
	{
		return static_cast<Ogre::Mesh*>(_native)->getPose( index );
	}
	
	Mogre::Pose^ Mesh::GetPose( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::Mesh*>(_native)->getPose( o_name );
	}
	
	void Mesh::RemovePose( Mogre::ushort index )
	{
		static_cast<Ogre::Mesh*>(_native)->removePose( index );
	}
	
	void Mesh::RemovePose( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::Mesh*>(_native)->removePose( o_name );
	}
	
	void Mesh::RemoveAllPoses( )
	{
		static_cast<Ogre::Mesh*>(_native)->removeAllPoses( );
	}
	
	Mogre::Mesh::PoseIterator^ Mesh::GetPoseIterator( )
	{
		return static_cast<Ogre::Mesh*>(_native)->getPoseIterator( );
	}
	
	Mogre::Const_PoseList^ Mesh::GetPoseList( )
	{
		return static_cast<const Ogre::Mesh*>(_native)->getPoseList( );
	}
	
	void Mesh::SoftwareVertexMorph( Mogre::Real t, Mogre::HardwareVertexBufferSharedPtr^ b1, Mogre::HardwareVertexBufferSharedPtr^ b2, Mogre::VertexData^ targetVertexData )
	{
		Ogre::Mesh::softwareVertexMorph( t, (const Ogre::HardwareVertexBufferSharedPtr&)b1, (const Ogre::HardwareVertexBufferSharedPtr&)b2, targetVertexData );
	}
	
	void Mesh::SoftwareVertexPoseBlend( Mogre::Real weight, Collections::Generic::SortedList<size_t, Mogre::Vector3>^ vertexOffsetMap, Mogre::VertexData^ targetVertexData )
	{
		std::map<size_t,Ogre::Vector3> o_vertexOffsetMap;
		FillMapFromSortedList<std::map<size_t,Ogre::Vector3>, size_t, Mogre::Vector3>(o_vertexOffsetMap, vertexOffsetMap);
	
		Ogre::Mesh::softwareVertexPoseBlend( weight, o_vertexOffsetMap, targetVertexData );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//MeshLodUsage
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	MeshLodUsage::MeshLodUsage()
	{
		_createdByCLR = true;
		_native = new Ogre::MeshLodUsage();
	}
	
	Mogre::Real MeshLodUsage::fromDepthSquared::get()
	{
		return static_cast<Ogre::MeshLodUsage*>(_native)->fromDepthSquared;
	}
	void MeshLodUsage::fromDepthSquared::set( Mogre::Real value )
	{
		static_cast<Ogre::MeshLodUsage*>(_native)->fromDepthSquared = value;
	}
	
	String^ MeshLodUsage::manualName::get()
	{
		return TO_CLR_STRING( static_cast<Ogre::MeshLodUsage*>(_native)->manualName );
	}
	void MeshLodUsage::manualName::set( String^ value )
	{
		DECLARE_NATIVE_STRING( o_value, value )
	
		static_cast<Ogre::MeshLodUsage*>(_native)->manualName = o_value;
	}
	
	Mogre::MeshPtr^ MeshLodUsage::manualMesh::get()
	{
		return static_cast<Ogre::MeshLodUsage*>(_native)->manualMesh;
	}
	void MeshLodUsage::manualMesh::set( Mogre::MeshPtr^ value )
	{
		static_cast<Ogre::MeshLodUsage*>(_native)->manualMesh = (Ogre::MeshPtr)value;
	}
	
	Mogre::EdgeData^ MeshLodUsage::edgeData::get()
	{
		return static_cast<Ogre::MeshLodUsage*>(_native)->edgeData;
	}
	void MeshLodUsage::edgeData::set( Mogre::EdgeData^ value )
	{
		static_cast<Ogre::MeshLodUsage*>(_native)->edgeData = value;
	}
	
	
	//Protected Declarations
	
	

}
