/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreManualObject.h"
#include "MogreRenderable.h"
#include "MogreRenderOperation.h"
#include "MogreMaterial.h"
#include "MogreCamera.h"
#include "MogreCommon.h"
#include "MogreTechnique.h"
#include "MogrePlane.h"
#include "MogreGpuProgram.h"
#include "MogreHardwareIndexBuffer.h"
#include "MogreVertexIndexData.h"
#include "MogreHardwareVertexBuffer.h"
#include "MogreEdgeListBuilder.h"
#include "MogreMesh.h"
#include "MogreRenderQueue.h"
#include "MogreLight.h"
#include "MogreMovableObject.h"

namespace Mogre
{
	//################################################################
	//ManualObject
	//################################################################
	
	//Nested Types
	//################################################################
	//ManualObjectSection
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::Renderable* ManualObject::ManualObjectSection::_IRenderable_GetNativePtr()
	{
		return static_cast<Ogre::Renderable*>( static_cast<Ogre::ManualObject::ManualObjectSection*>(_native) );
	}
	
	
	//Public Declarations
	ManualObject::ManualObjectSection::ManualObjectSection( Mogre::ManualObject^ parent, String^ materialName, Mogre::RenderOperation::OperationTypes opType ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		_native = new Ogre::ManualObject::ManualObjectSection( parent, o_materialName, (Ogre::RenderOperation::OperationType)opType);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	String^ ManualObject::ManualObjectSection::MaterialName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ManualObject::ManualObjectSection*>(_native)->getMaterialName( ) );
	}
	void ManualObject::ManualObjectSection::MaterialName::set( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::ManualObject::ManualObjectSection*>(_native)->setMaterialName( o_name );
	}
	
	Mogre::RenderOperation^ ManualObject::ManualObjectSection::RenderOperation::get()
	{
		return static_cast<Ogre::ManualObject::ManualObjectSection*>(_native)->getRenderOperation( );
	}
	
	Mogre::Quaternion ManualObject::ManualObjectSection::WorldOrientation::get()
	{
		return static_cast<const Ogre::ManualObject::ManualObjectSection*>(_native)->getWorldOrientation( );
	}
	
	Mogre::Vector3 ManualObject::ManualObjectSection::WorldPosition::get()
	{
		return static_cast<const Ogre::ManualObject::ManualObjectSection*>(_native)->getWorldPosition( );
	}
	
	Mogre::MaterialPtr^ ManualObject::ManualObjectSection::GetMaterial( )
	{
		return static_cast<const Ogre::ManualObject::ManualObjectSection*>(_native)->getMaterial( );
	}
	
	void ManualObject::ManualObjectSection::GetRenderOperation( Mogre::RenderOperation^ op )
	{
		static_cast<Ogre::ManualObject::ManualObjectSection*>(_native)->getRenderOperation( op );
	}
	
	void ManualObject::ManualObjectSection::GetWorldTransforms( Mogre::Matrix4::NativeValue* xform )
	{
		Ogre::Matrix4* o_xform = reinterpret_cast<Ogre::Matrix4*>(xform);
	
		static_cast<const Ogre::ManualObject::ManualObjectSection*>(_native)->getWorldTransforms( o_xform );
	}
	
	Mogre::Real ManualObject::ManualObjectSection::GetSquaredViewDepth( Mogre::Camera^ param1 )
	{
		return static_cast<const Ogre::ManualObject::ManualObjectSection*>(_native)->getSquaredViewDepth( param1 );
	}
	
	Mogre::Const_LightList^ ManualObject::ManualObjectSection::GetLights( )
	{
		return static_cast<const Ogre::ManualObject::ManualObjectSection*>(_native)->getLights( );
	}
	
	//------------------------------------------------------------
	// Implementation for IRenderable
	//------------------------------------------------------------
	
	bool ManualObject::ManualObjectSection::CastsShadows::get()
	{
		return static_cast<const Ogre::ManualObject::ManualObjectSection*>(_native)->getCastsShadows( );
	}
	
	bool ManualObject::ManualObjectSection::NormaliseNormals::get()
	{
		return static_cast<const Ogre::ManualObject::ManualObjectSection*>(_native)->getNormaliseNormals( );
	}
	
	unsigned short ManualObject::ManualObjectSection::NumWorldTransforms::get()
	{
		return static_cast<const Ogre::ManualObject::ManualObjectSection*>(_native)->getNumWorldTransforms( );
	}
	
	bool ManualObject::ManualObjectSection::PolygonModeOverrideable::get()
	{
		return static_cast<const Ogre::ManualObject::ManualObjectSection*>(_native)->getPolygonModeOverrideable( );
	}
	void ManualObject::ManualObjectSection::PolygonModeOverrideable::set( bool override )
	{
		static_cast<Ogre::ManualObject::ManualObjectSection*>(_native)->setPolygonModeOverrideable( override );
	}
	
	Mogre::Technique^ ManualObject::ManualObjectSection::Technique::get()
	{
		return static_cast<const Ogre::ManualObject::ManualObjectSection*>(_native)->getTechnique( );
	}
	
	bool ManualObject::ManualObjectSection::UseIdentityProjection::get()
	{
		return static_cast<const Ogre::ManualObject::ManualObjectSection*>(_native)->getUseIdentityProjection( );
	}
	void ManualObject::ManualObjectSection::UseIdentityProjection::set( bool useIdentityProjection )
	{
		static_cast<Ogre::ManualObject::ManualObjectSection*>(_native)->setUseIdentityProjection( useIdentityProjection );
	}
	
	bool ManualObject::ManualObjectSection::UseIdentityView::get()
	{
		return static_cast<const Ogre::ManualObject::ManualObjectSection*>(_native)->getUseIdentityView( );
	}
	void ManualObject::ManualObjectSection::UseIdentityView::set( bool useIdentityView )
	{
		static_cast<Ogre::ManualObject::ManualObjectSection*>(_native)->setUseIdentityView( useIdentityView );
	}
	
	Mogre::Const_PlaneList^ ManualObject::ManualObjectSection::GetClipPlanes( )
	{
		return static_cast<const Ogre::ManualObject::ManualObjectSection*>(_native)->getClipPlanes( );
	}
	
	void ManualObject::ManualObjectSection::SetCustomParameter( size_t index, Mogre::Vector4 value )
	{
		static_cast<Ogre::ManualObject::ManualObjectSection*>(_native)->setCustomParameter( index, value );
	}
	
	Mogre::Vector4 ManualObject::ManualObjectSection::GetCustomParameter( size_t index )
	{
		return static_cast<const Ogre::ManualObject::ManualObjectSection*>(_native)->getCustomParameter( index );
	}
	
	void ManualObject::ManualObjectSection::_updateCustomGpuParameter( Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params )
	{
		static_cast<const Ogre::ManualObject::ManualObjectSection*>(_native)->_updateCustomGpuParameter( constantEntry, params );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//ManualObjectSectionShadowRenderable
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	ManualObject::ManualObjectSectionShadowRenderable::ManualObjectSectionShadowRenderable( Mogre::ManualObject^ parent, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, Mogre::VertexData^ vertexData, bool createSeparateLightCap, bool isLightCap ) : ShadowRenderable((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::ManualObject::ManualObjectSectionShadowRenderable( parent, (Ogre::HardwareIndexBufferSharedPtr*)indexBuffer, vertexData, createSeparateLightCap, isLightCap);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	ManualObject::ManualObjectSectionShadowRenderable::ManualObjectSectionShadowRenderable( Mogre::ManualObject^ parent, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, Mogre::VertexData^ vertexData, bool createSeparateLightCap ) : ShadowRenderable((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::ManualObject::ManualObjectSectionShadowRenderable( parent, (Ogre::HardwareIndexBufferSharedPtr*)indexBuffer, vertexData, createSeparateLightCap);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::Quaternion ManualObject::ManualObjectSectionShadowRenderable::WorldOrientation::get()
	{
		return static_cast<const Ogre::ManualObject::ManualObjectSectionShadowRenderable*>(_native)->getWorldOrientation( );
	}
	
	Mogre::Vector3 ManualObject::ManualObjectSectionShadowRenderable::WorldPosition::get()
	{
		return static_cast<const Ogre::ManualObject::ManualObjectSectionShadowRenderable*>(_native)->getWorldPosition( );
	}
	
	void ManualObject::ManualObjectSectionShadowRenderable::GetWorldTransforms( Mogre::Matrix4::NativeValue* xform )
	{
		Ogre::Matrix4* o_xform = reinterpret_cast<Ogre::Matrix4*>(xform);
	
		static_cast<const Ogre::ManualObject::ManualObjectSectionShadowRenderable*>(_native)->getWorldTransforms( o_xform );
	}
	
	Mogre::HardwareVertexBufferSharedPtr^ ManualObject::ManualObjectSectionShadowRenderable::GetPositionBuffer( )
	{
		return static_cast<Ogre::ManualObject::ManualObjectSectionShadowRenderable*>(_native)->getPositionBuffer( );
	}
	
	Mogre::HardwareVertexBufferSharedPtr^ ManualObject::ManualObjectSectionShadowRenderable::GetWBuffer( )
	{
		return static_cast<Ogre::ManualObject::ManualObjectSectionShadowRenderable*>(_native)->getWBuffer( );
	}
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDTYPE Mogre::ManualObject::ManualObjectSection^
	#define STLDECL_NATIVETYPE Ogre::ManualObject::ManualObjectSection*
	CPP_DECLARE_STLVECTOR( ManualObject::, SectionList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	ManualObject::ManualObject( String^ name ) : MovableObject((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::ManualObject( o_name);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::AxisAlignedBox^ ManualObject::BoundingBox::get()
	{
		return static_cast<const Ogre::ManualObject*>(_native)->getBoundingBox( );
	}
	void ManualObject::BoundingBox::set( Mogre::AxisAlignedBox^ box )
	{
		static_cast<Ogre::ManualObject*>(_native)->setBoundingBox( (Ogre::AxisAlignedBox)box );
	}
	
	Mogre::Real ManualObject::BoundingRadius::get()
	{
		return static_cast<const Ogre::ManualObject*>(_native)->getBoundingRadius( );
	}
	
	bool ManualObject::Dynamic::get()
	{
		return static_cast<const Ogre::ManualObject*>(_native)->getDynamic( );
	}
	void ManualObject::Dynamic::set( bool dyn )
	{
		static_cast<Ogre::ManualObject*>(_native)->setDynamic( dyn );
	}
	
	Mogre::EdgeData^ ManualObject::EdgeList::get()
	{
		return static_cast<Ogre::ManualObject*>(_native)->getEdgeList( );
	}
	
	bool ManualObject::HasEdgeList::get()
	{
		return static_cast<Ogre::ManualObject*>(_native)->hasEdgeList( );
	}
	
	String^ ManualObject::MovableType::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ManualObject*>(_native)->getMovableType( ) );
	}
	
	unsigned int ManualObject::NumSections::get()
	{
		return static_cast<const Ogre::ManualObject*>(_native)->getNumSections( );
	}
	
	bool ManualObject::UseIdentityProjection::get()
	{
		return static_cast<const Ogre::ManualObject*>(_native)->getUseIdentityProjection( );
	}
	void ManualObject::UseIdentityProjection::set( bool useIdentityProjection )
	{
		static_cast<Ogre::ManualObject*>(_native)->setUseIdentityProjection( useIdentityProjection );
	}
	
	bool ManualObject::UseIdentityView::get()
	{
		return static_cast<const Ogre::ManualObject*>(_native)->getUseIdentityView( );
	}
	void ManualObject::UseIdentityView::set( bool useIdentityView )
	{
		static_cast<Ogre::ManualObject*>(_native)->setUseIdentityView( useIdentityView );
	}
	
	void ManualObject::Clear( )
	{
		static_cast<Ogre::ManualObject*>(_native)->clear( );
	}
	
	void ManualObject::EstimateVertexCount( size_t vcount )
	{
		static_cast<Ogre::ManualObject*>(_native)->estimateVertexCount( vcount );
	}
	
	void ManualObject::EstimateIndexCount( size_t icount )
	{
		static_cast<Ogre::ManualObject*>(_native)->estimateIndexCount( icount );
	}
	
	void ManualObject::Begin( String^ materialName, Mogre::RenderOperation::OperationTypes opType )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::ManualObject*>(_native)->begin( o_materialName, (Ogre::RenderOperation::OperationType)opType );
	}
	void ManualObject::Begin( String^ materialName )
	{
		DECLARE_NATIVE_STRING( o_materialName, materialName )
	
		static_cast<Ogre::ManualObject*>(_native)->begin( o_materialName );
	}
	
	void ManualObject::BeginUpdate( size_t sectionIndex )
	{
		static_cast<Ogre::ManualObject*>(_native)->beginUpdate( sectionIndex );
	}
	
	void ManualObject::Position( Mogre::Vector3 pos )
	{
		static_cast<Ogre::ManualObject*>(_native)->position( pos );
	}
	
	void ManualObject::Position( Mogre::Real x, Mogre::Real y, Mogre::Real z )
	{
		static_cast<Ogre::ManualObject*>(_native)->position( x, y, z );
	}
	
	void ManualObject::Normal( Mogre::Vector3 norm )
	{
		static_cast<Ogre::ManualObject*>(_native)->normal( norm );
	}
	
	void ManualObject::Normal( Mogre::Real x, Mogre::Real y, Mogre::Real z )
	{
		static_cast<Ogre::ManualObject*>(_native)->normal( x, y, z );
	}
	
	void ManualObject::TextureCoord( Mogre::Real u )
	{
		static_cast<Ogre::ManualObject*>(_native)->textureCoord( u );
	}
	
	void ManualObject::TextureCoord( Mogre::Real u, Mogre::Real v )
	{
		static_cast<Ogre::ManualObject*>(_native)->textureCoord( u, v );
	}
	
	void ManualObject::TextureCoord( Mogre::Real u, Mogre::Real v, Mogre::Real w )
	{
		static_cast<Ogre::ManualObject*>(_native)->textureCoord( u, v, w );
	}
	
	void ManualObject::TextureCoord( Mogre::Vector2 uv )
	{
		static_cast<Ogre::ManualObject*>(_native)->textureCoord( uv );
	}
	
	void ManualObject::TextureCoord( Mogre::Vector3 uvw )
	{
		static_cast<Ogre::ManualObject*>(_native)->textureCoord( uvw );
	}
	
	void ManualObject::Colour( Mogre::ColourValue col )
	{
		static_cast<Ogre::ManualObject*>(_native)->colour( col );
	}
	
	void ManualObject::Colour( Mogre::Real r, Mogre::Real g, Mogre::Real b, Mogre::Real a )
	{
		static_cast<Ogre::ManualObject*>(_native)->colour( r, g, b, a );
	}
	void ManualObject::Colour( Mogre::Real r, Mogre::Real g, Mogre::Real b )
	{
		static_cast<Ogre::ManualObject*>(_native)->colour( r, g, b );
	}
	
	void ManualObject::Index( Mogre::uint16 idx )
	{
		static_cast<Ogre::ManualObject*>(_native)->index( idx );
	}
	
	void ManualObject::Triangle( Mogre::uint16 i1, Mogre::uint16 i2, Mogre::uint16 i3 )
	{
		static_cast<Ogre::ManualObject*>(_native)->triangle( i1, i2, i3 );
	}
	
	void ManualObject::Quad( Mogre::uint16 i1, Mogre::uint16 i2, Mogre::uint16 i3, Mogre::uint16 i4 )
	{
		static_cast<Ogre::ManualObject*>(_native)->quad( i1, i2, i3, i4 );
	}
	
	Mogre::ManualObject::ManualObjectSection^ ManualObject::End( )
	{
		return static_cast<Ogre::ManualObject*>(_native)->end( );
	}
	
	void ManualObject::SetMaterialName( size_t subindex, String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::ManualObject*>(_native)->setMaterialName( subindex, o_name );
	}
	
	Mogre::MeshPtr^ ManualObject::ConvertToMesh( String^ meshName, String^ groupName )
	{
		DECLARE_NATIVE_STRING( o_meshName, meshName )
		DECLARE_NATIVE_STRING( o_groupName, groupName )
	
		return static_cast<Ogre::ManualObject*>(_native)->convertToMesh( o_meshName, o_groupName );
	}
	Mogre::MeshPtr^ ManualObject::ConvertToMesh( String^ meshName )
	{
		DECLARE_NATIVE_STRING( o_meshName, meshName )
	
		return static_cast<Ogre::ManualObject*>(_native)->convertToMesh( o_meshName );
	}
	
	Mogre::ManualObject::ManualObjectSection^ ManualObject::GetSection( unsigned int index )
	{
		return static_cast<const Ogre::ManualObject*>(_native)->getSection( index );
	}
	
	void ManualObject::_updateRenderQueue( Mogre::RenderQueue^ queue )
	{
		static_cast<Ogre::ManualObject*>(_native)->_updateRenderQueue( queue );
	}
	
	Mogre::ShadowCaster::ShadowRenderableListIterator^ ManualObject::GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDist, unsigned long flags )
	{
		return static_cast<Ogre::ManualObject*>(_native)->getShadowVolumeRenderableIterator( (Ogre::ShadowTechnique)shadowTechnique, light, (Ogre::HardwareIndexBufferSharedPtr*)indexBuffer, extrudeVertices, extrusionDist, flags );
	}
	Mogre::ShadowCaster::ShadowRenderableListIterator^ ManualObject::GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDist )
	{
		return static_cast<Ogre::ManualObject*>(_native)->getShadowVolumeRenderableIterator( (Ogre::ShadowTechnique)shadowTechnique, light, (Ogre::HardwareIndexBufferSharedPtr*)indexBuffer, extrudeVertices, extrusionDist );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//ManualObjectFactory
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	ManualObjectFactory::ManualObjectFactory( ) : MovableObjectFactory((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::ManualObjectFactory();
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	String^ ManualObjectFactory::FACTORY_TYPE_NAME::get()
	{
		return TO_CLR_STRING( Ogre::ManualObjectFactory::FACTORY_TYPE_NAME );
	}
	void ManualObjectFactory::FACTORY_TYPE_NAME::set( String^ value )
	{
		DECLARE_NATIVE_STRING( o_value, value )
	
		Ogre::ManualObjectFactory::FACTORY_TYPE_NAME = o_value;
	}
	
	String^ ManualObjectFactory::Type::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ManualObjectFactory*>(_native)->getType( ) );
	}
	
	void ManualObjectFactory::DestroyInstance( Mogre::MovableObject^ obj )
	{
		static_cast<Ogre::ManualObjectFactory*>(_native)->destroyInstance( obj );
	}
	
	
	//Protected Declarations
	
	

}
