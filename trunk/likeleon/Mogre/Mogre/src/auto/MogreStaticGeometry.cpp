/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreStaticGeometry.h"
#include "MogreVertexIndexData.h"
#include "MogreRenderQueue.h"
#include "MogreTechnique.h"
#include "MogreMaterial.h"
#include "MogreSceneManager.h"
#include "MogreEdgeListBuilder.h"
#include "MogreCamera.h"
#include "MogreLight.h"
#include "MogreHardwareIndexBuffer.h"
#include "MogreSubMesh.h"
#include "MogreEntity.h"
#include "MogreSceneNode.h"

namespace Mogre
{
	//################################################################
	//StaticGeometry
	//################################################################
	
	//Nested Types
	//################################################################
	//SubMeshLodGeometryLink_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	Mogre::VertexData^ StaticGeometry::SubMeshLodGeometryLink_NativePtr::vertexData::get()
	{
		return _native->vertexData;
	}
	void StaticGeometry::SubMeshLodGeometryLink_NativePtr::vertexData::set( Mogre::VertexData^ value )
	{
		_native->vertexData = value;
	}
	
	Mogre::IndexData^ StaticGeometry::SubMeshLodGeometryLink_NativePtr::indexData::get()
	{
		return _native->indexData;
	}
	void StaticGeometry::SubMeshLodGeometryLink_NativePtr::indexData::set( Mogre::IndexData^ value )
	{
		_native->indexData = value;
	}
	
	
	Mogre::StaticGeometry::SubMeshLodGeometryLink_NativePtr StaticGeometry::SubMeshLodGeometryLink_NativePtr::Create()
	{
		SubMeshLodGeometryLink_NativePtr ptr;
		ptr._native = new Ogre::StaticGeometry::SubMeshLodGeometryLink();
		return ptr;
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//QueuedGeometry_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	Mogre::StaticGeometry::SubMeshLodGeometryLink_NativePtr StaticGeometry::QueuedGeometry_NativePtr::geometry::get()
	{
		return _native->geometry;
	}
	void StaticGeometry::QueuedGeometry_NativePtr::geometry::set( Mogre::StaticGeometry::SubMeshLodGeometryLink_NativePtr value )
	{
		_native->geometry = value;
	}
	
	Mogre::Vector3 StaticGeometry::QueuedGeometry_NativePtr::position::get()
	{
		return _native->position;
	}
	void StaticGeometry::QueuedGeometry_NativePtr::position::set( Mogre::Vector3 value )
	{
		_native->position = value;
	}
	
	Mogre::Quaternion StaticGeometry::QueuedGeometry_NativePtr::orientation::get()
	{
		return _native->orientation;
	}
	void StaticGeometry::QueuedGeometry_NativePtr::orientation::set( Mogre::Quaternion value )
	{
		_native->orientation = value;
	}
	
	Mogre::Vector3 StaticGeometry::QueuedGeometry_NativePtr::scale::get()
	{
		return _native->scale;
	}
	void StaticGeometry::QueuedGeometry_NativePtr::scale::set( Mogre::Vector3 value )
	{
		_native->scale = value;
	}
	
	
	Mogre::StaticGeometry::QueuedGeometry_NativePtr StaticGeometry::QueuedGeometry_NativePtr::Create()
	{
		QueuedGeometry_NativePtr ptr;
		ptr._native = new Ogre::StaticGeometry::QueuedGeometry();
		return ptr;
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//LODBucket
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::StaticGeometry::MaterialBucket^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::StaticGeometry::MaterialBucket*
	CPP_DECLARE_STLMAP( StaticGeometry::LODBucket::, MaterialBucketMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	CPP_DECLARE_MAP_ITERATOR( StaticGeometry::LODBucket::, MaterialIterator, Ogre::StaticGeometry::LODBucket::MaterialIterator, Mogre::StaticGeometry::LODBucket::MaterialBucketMap, Mogre::StaticGeometry::MaterialBucket^, Ogre::StaticGeometry::MaterialBucket*, String^, Ogre::String,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	StaticGeometry::LODBucket::LODBucket( Mogre::StaticGeometry::Region^ parent, unsigned short lod, Mogre::Real lodDist )
	{
		_createdByCLR = true;
		_native = new Ogre::StaticGeometry::LODBucket( parent, lod, lodDist);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::ushort StaticGeometry::LODBucket::Lod::get()
	{
		return static_cast<const Ogre::StaticGeometry::LODBucket*>(_native)->getLod( );
	}
	
	Mogre::StaticGeometry::Region^ StaticGeometry::LODBucket::Parent::get()
	{
		return static_cast<Ogre::StaticGeometry::LODBucket*>(_native)->getParent( );
	}
	
	Mogre::Real StaticGeometry::LODBucket::SquaredDistance::get()
	{
		return static_cast<const Ogre::StaticGeometry::LODBucket*>(_native)->getSquaredDistance( );
	}
	
	void StaticGeometry::LODBucket::Build( bool stencilShadows )
	{
		static_cast<Ogre::StaticGeometry::LODBucket*>(_native)->build( stencilShadows );
	}
	
	void StaticGeometry::LODBucket::AddRenderables( Mogre::RenderQueue^ queue, Mogre::uint8 group, Mogre::Real camSquaredDistance )
	{
		static_cast<Ogre::StaticGeometry::LODBucket*>(_native)->addRenderables( queue, group, camSquaredDistance );
	}
	
	Mogre::StaticGeometry::LODBucket::MaterialIterator^ StaticGeometry::LODBucket::GetMaterialIterator( )
	{
		return static_cast<Ogre::StaticGeometry::LODBucket*>(_native)->getMaterialIterator( );
	}
	
	void StaticGeometry::LODBucket::Dump( [Out] std::ofstream% of )
	{
		pin_ptr<std::ofstream> p_of = &of;
	
		static_cast<const Ogre::StaticGeometry::LODBucket*>(_native)->dump( *p_of );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//MaterialBucket
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	StaticGeometry::MaterialBucket::MaterialBucket( Mogre::StaticGeometry::LODBucket^ parent, String^ materialName )
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		_native = new Ogre::StaticGeometry::MaterialBucket( parent, o_materialName);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::Technique^ StaticGeometry::MaterialBucket::CurrentTechnique::get()
	{
		return static_cast<const Ogre::StaticGeometry::MaterialBucket*>(_native)->getCurrentTechnique( );
	}
	
	String^ StaticGeometry::MaterialBucket::MaterialName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::StaticGeometry::MaterialBucket*>(_native)->getMaterialName( ) );
	}
	
	Mogre::StaticGeometry::LODBucket^ StaticGeometry::MaterialBucket::Parent::get()
	{
		return static_cast<Ogre::StaticGeometry::MaterialBucket*>(_native)->getParent( );
	}
	
	void StaticGeometry::MaterialBucket::Assign( Mogre::StaticGeometry::QueuedGeometry_NativePtr qsm )
	{
		static_cast<Ogre::StaticGeometry::MaterialBucket*>(_native)->assign( qsm );
	}
	
	void StaticGeometry::MaterialBucket::Build( bool stencilShadows )
	{
		static_cast<Ogre::StaticGeometry::MaterialBucket*>(_native)->build( stencilShadows );
	}
	
	void StaticGeometry::MaterialBucket::AddRenderables( Mogre::RenderQueue^ queue, Mogre::uint8 group, Mogre::Real camSquaredDist )
	{
		static_cast<Ogre::StaticGeometry::MaterialBucket*>(_native)->addRenderables( queue, group, camSquaredDist );
	}
	
	Mogre::MaterialPtr^ StaticGeometry::MaterialBucket::GetMaterial( )
	{
		return static_cast<const Ogre::StaticGeometry::MaterialBucket*>(_native)->getMaterial( );
	}
	
	void StaticGeometry::MaterialBucket::Dump( [Out] std::ofstream% of )
	{
		pin_ptr<std::ofstream> p_of = &of;
	
		static_cast<const Ogre::StaticGeometry::MaterialBucket*>(_native)->dump( *p_of );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//Region
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Mogre::StaticGeometry::LODBucket^
	#define STLDECL_NATIVETYPE Ogre::StaticGeometry::LODBucket*
	CPP_DECLARE_STLVECTOR( StaticGeometry::Region::, LODBucketList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	CPP_DECLARE_ITERATOR( StaticGeometry::Region::, LODIterator, Ogre::StaticGeometry::Region::LODIterator, Mogre::StaticGeometry::Region::LODBucketList, Mogre::StaticGeometry::LODBucket^, Ogre::StaticGeometry::LODBucket*,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	StaticGeometry::Region::Region( Mogre::StaticGeometry^ parent, String^ name, Mogre::SceneManager^ mgr, Mogre::uint32 regionID, Mogre::Vector3 centre ) : MovableObject((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::StaticGeometry::Region( parent, o_name, mgr, regionID, centre);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::AxisAlignedBox^ StaticGeometry::Region::BoundingBox::get()
	{
		return static_cast<const Ogre::StaticGeometry::Region*>(_native)->getBoundingBox( );
	}
	
	Mogre::Real StaticGeometry::Region::BoundingRadius::get()
	{
		return static_cast<const Ogre::StaticGeometry::Region*>(_native)->getBoundingRadius( );
	}
	
	Mogre::Vector3 StaticGeometry::Region::Centre::get()
	{
		return static_cast<const Ogre::StaticGeometry::Region*>(_native)->getCentre( );
	}
	
	Mogre::EdgeData^ StaticGeometry::Region::EdgeList::get()
	{
		return static_cast<Ogre::StaticGeometry::Region*>(_native)->getEdgeList( );
	}
	
	bool StaticGeometry::Region::HasEdgeList::get()
	{
		return static_cast<Ogre::StaticGeometry::Region*>(_native)->hasEdgeList( );
	}
	
	Mogre::uint32 StaticGeometry::Region::ID::get()
	{
		return static_cast<const Ogre::StaticGeometry::Region*>(_native)->getID( );
	}
	
	String^ StaticGeometry::Region::MovableType::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::StaticGeometry::Region*>(_native)->getMovableType( ) );
	}
	
	Mogre::StaticGeometry^ StaticGeometry::Region::Parent::get()
	{
		return static_cast<const Ogre::StaticGeometry::Region*>(_native)->getParent( );
	}
	
	Mogre::uint32 StaticGeometry::Region::TypeFlags::get()
	{
		return static_cast<const Ogre::StaticGeometry::Region*>(_native)->getTypeFlags( );
	}
	
	void StaticGeometry::Region::Build( bool stencilShadows )
	{
		static_cast<Ogre::StaticGeometry::Region*>(_native)->build( stencilShadows );
	}
	
	void StaticGeometry::Region::_notifyCurrentCamera( Mogre::Camera^ cam )
	{
		static_cast<Ogre::StaticGeometry::Region*>(_native)->_notifyCurrentCamera( cam );
	}
	
	void StaticGeometry::Region::_updateRenderQueue( Mogre::RenderQueue^ queue )
	{
		static_cast<Ogre::StaticGeometry::Region*>(_native)->_updateRenderQueue( queue );
	}
	
	bool StaticGeometry::Region::IsVisible( )
	{
		return static_cast<const Ogre::StaticGeometry::Region*>(_native)->isVisible( );
	}
	
	Mogre::StaticGeometry::Region::LODIterator^ StaticGeometry::Region::GetLODIterator( )
	{
		return static_cast<Ogre::StaticGeometry::Region*>(_native)->getLODIterator( );
	}
	
	Mogre::ShadowCaster::ShadowRenderableListIterator^ StaticGeometry::Region::GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDistance, unsigned long flags )
	{
		return static_cast<Ogre::StaticGeometry::Region*>(_native)->getShadowVolumeRenderableIterator( (Ogre::ShadowTechnique)shadowTechnique, light, (Ogre::HardwareIndexBufferSharedPtr*)indexBuffer, extrudeVertices, extrusionDistance, flags );
	}
	Mogre::ShadowCaster::ShadowRenderableListIterator^ StaticGeometry::Region::GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDistance )
	{
		return static_cast<Ogre::StaticGeometry::Region*>(_native)->getShadowVolumeRenderableIterator( (Ogre::ShadowTechnique)shadowTechnique, light, (Ogre::HardwareIndexBufferSharedPtr*)indexBuffer, extrudeVertices, extrusionDistance );
	}
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDTYPE Mogre::StaticGeometry::SubMeshLodGeometryLink_NativePtr
	#define STLDECL_NATIVETYPE Ogre::StaticGeometry::SubMeshLodGeometryLink
	CPP_DECLARE_STLVECTOR( StaticGeometry::, SubMeshLodGeometryLinkList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDKEY Mogre::SubMesh^
	#define STLDECL_MANAGEDVALUE Mogre::StaticGeometry::SubMeshLodGeometryLinkList^
	#define STLDECL_NATIVEKEY Ogre::SubMesh*
	#define STLDECL_NATIVEVALUE Ogre::StaticGeometry::SubMeshLodGeometryLinkList*
	CPP_DECLARE_STLMAP( StaticGeometry::, SubMeshGeometryLookup, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDTYPE Mogre::StaticGeometry::QueuedGeometry_NativePtr
	#define STLDECL_NATIVETYPE Ogre::StaticGeometry::QueuedGeometry*
	CPP_DECLARE_STLVECTOR( StaticGeometry::, QueuedGeometryList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDKEY Mogre::uint32
	#define STLDECL_MANAGEDVALUE Mogre::StaticGeometry::Region^
	#define STLDECL_NATIVEKEY Ogre::uint32
	#define STLDECL_NATIVEVALUE Ogre::StaticGeometry::Region*
	CPP_DECLARE_STLMAP( StaticGeometry::, RegionMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	CPP_DECLARE_MAP_ITERATOR( StaticGeometry::, RegionIterator, Ogre::StaticGeometry::RegionIterator, Mogre::StaticGeometry::RegionMap, Mogre::StaticGeometry::Region^, Ogre::StaticGeometry::Region*, Mogre::uint32, Ogre::uint32,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	StaticGeometry::StaticGeometry( Mogre::SceneManager^ owner, String^ name ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::StaticGeometry( owner, o_name);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	bool StaticGeometry::CastShadows::get()
	{
		return static_cast<Ogre::StaticGeometry*>(_native)->getCastShadows( );
	}
	void StaticGeometry::CastShadows::set( bool castShadows )
	{
		static_cast<Ogre::StaticGeometry*>(_native)->setCastShadows( castShadows );
	}
	
	bool StaticGeometry::IsVisible::get()
	{
		return static_cast<const Ogre::StaticGeometry*>(_native)->isVisible( );
	}
	
	String^ StaticGeometry::Name::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::StaticGeometry*>(_native)->getName( ) );
	}
	
	Mogre::Vector3 StaticGeometry::Origin::get()
	{
		return static_cast<const Ogre::StaticGeometry*>(_native)->getOrigin( );
	}
	void StaticGeometry::Origin::set( Mogre::Vector3 origin )
	{
		static_cast<Ogre::StaticGeometry*>(_native)->setOrigin( origin );
	}
	
	Mogre::Vector3 StaticGeometry::RegionDimensions::get()
	{
		return static_cast<const Ogre::StaticGeometry*>(_native)->getRegionDimensions( );
	}
	void StaticGeometry::RegionDimensions::set( Mogre::Vector3 size )
	{
		static_cast<Ogre::StaticGeometry*>(_native)->setRegionDimensions( size );
	}
	
	Mogre::Real StaticGeometry::RenderingDistance::get()
	{
		return static_cast<const Ogre::StaticGeometry*>(_native)->getRenderingDistance( );
	}
	void StaticGeometry::RenderingDistance::set( Mogre::Real dist )
	{
		static_cast<Ogre::StaticGeometry*>(_native)->setRenderingDistance( dist );
	}
	
	Mogre::uint8 StaticGeometry::RenderQueueGroup::get()
	{
		return static_cast<const Ogre::StaticGeometry*>(_native)->getRenderQueueGroup( );
	}
	void StaticGeometry::RenderQueueGroup::set( Mogre::uint8 queueID )
	{
		static_cast<Ogre::StaticGeometry*>(_native)->setRenderQueueGroup( queueID );
	}
	
	Mogre::Real StaticGeometry::SquaredRenderingDistance::get()
	{
		return static_cast<const Ogre::StaticGeometry*>(_native)->getSquaredRenderingDistance( );
	}
	
	void StaticGeometry::AddEntity( Mogre::Entity^ ent, Mogre::Vector3 position, Mogre::Quaternion orientation, Mogre::Vector3 scale )
	{
		static_cast<Ogre::StaticGeometry*>(_native)->addEntity( ent, position, orientation, scale );
	}
	void StaticGeometry::AddEntity( Mogre::Entity^ ent, Mogre::Vector3 position, Mogre::Quaternion orientation )
	{
		static_cast<Ogre::StaticGeometry*>(_native)->addEntity( ent, position, orientation );
	}
	void StaticGeometry::AddEntity( Mogre::Entity^ ent, Mogre::Vector3 position )
	{
		static_cast<Ogre::StaticGeometry*>(_native)->addEntity( ent, position );
	}
	
	void StaticGeometry::AddSceneNode( Mogre::SceneNode^ node )
	{
		static_cast<Ogre::StaticGeometry*>(_native)->addSceneNode( node );
	}
	
	void StaticGeometry::Build( )
	{
		static_cast<Ogre::StaticGeometry*>(_native)->build( );
	}
	
	void StaticGeometry::Destroy( )
	{
		static_cast<Ogre::StaticGeometry*>(_native)->destroy( );
	}
	
	void StaticGeometry::Reset( )
	{
		static_cast<Ogre::StaticGeometry*>(_native)->reset( );
	}
	
	void StaticGeometry::SetVisible( bool visible )
	{
		static_cast<Ogre::StaticGeometry*>(_native)->setVisible( visible );
	}
	
	Mogre::StaticGeometry::RegionIterator^ StaticGeometry::GetRegionIterator( )
	{
		return static_cast<Ogre::StaticGeometry*>(_native)->getRegionIterator( );
	}
	
	void StaticGeometry::Dump( String^ filename )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
	
		static_cast<const Ogre::StaticGeometry*>(_native)->dump( o_filename );
	}
	
	
	//Protected Declarations
	
	

}
