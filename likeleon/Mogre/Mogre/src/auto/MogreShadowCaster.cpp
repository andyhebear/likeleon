/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreShadowCaster.h"
#include "MogreRenderable.h"
#include "MogreRenderOperation.h"
#include "MogreMaterial.h"
#include "MogreCamera.h"
#include "MogreCommon.h"
#include "MogreTechnique.h"
#include "MogrePlane.h"
#include "MogreGpuProgram.h"
#include "MogreEdgeListBuilder.h"
#include "MogreLight.h"
#include "MogreHardwareIndexBuffer.h"
#include "MogreHardwareVertexBuffer.h"

namespace Mogre
{
	//################################################################
	//ShadowRenderable
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::Renderable* ShadowRenderable::_IRenderable_GetNativePtr()
	{
		return static_cast<Ogre::Renderable*>( static_cast<Ogre::ShadowRenderable*>(_native) );
	}
	
	
	//Public Declarations
	bool ShadowRenderable::IsLightCapSeparate::get()
	{
		return static_cast<const Ogre::ShadowRenderable*>(_native)->isLightCapSeparate( );
	}
	
	bool ShadowRenderable::IsVisible::get()
	{
		return static_cast<const Ogre::ShadowRenderable*>(_native)->isVisible( );
	}
	
	Mogre::ShadowRenderable^ ShadowRenderable::LightCapRenderable::get()
	{
		return static_cast<Ogre::ShadowRenderable*>(_native)->getLightCapRenderable( );
	}
	
	Mogre::RenderOperation^ ShadowRenderable::RenderOperationForUpdate::get()
	{
		return static_cast<Ogre::ShadowRenderable*>(_native)->getRenderOperationForUpdate( );
	}
	
	Mogre::Quaternion ShadowRenderable::WorldOrientation::get()
	{
		return static_cast<const Ogre::ShadowRenderable*>(_native)->getWorldOrientation( );
	}
	
	Mogre::Vector3 ShadowRenderable::WorldPosition::get()
	{
		return static_cast<const Ogre::ShadowRenderable*>(_native)->getWorldPosition( );
	}
	
	void ShadowRenderable::SetMaterial( Mogre::MaterialPtr^ mat )
	{
		static_cast<Ogre::ShadowRenderable*>(_native)->setMaterial( (const Ogre::MaterialPtr&)mat );
	}
	
	Mogre::MaterialPtr^ ShadowRenderable::GetMaterial( )
	{
		return static_cast<const Ogre::ShadowRenderable*>(_native)->getMaterial( );
	}
	
	void ShadowRenderable::GetRenderOperation( Mogre::RenderOperation^ op )
	{
		static_cast<Ogre::ShadowRenderable*>(_native)->getRenderOperation( op );
	}
	
	void ShadowRenderable::GetWorldTransforms( Mogre::Matrix4::NativeValue* xform )
	{
		Ogre::Matrix4* o_xform = reinterpret_cast<Ogre::Matrix4*>(xform);
	
		static_cast<const Ogre::ShadowRenderable*>(_native)->getWorldTransforms( o_xform );
	}
	
	Mogre::Real ShadowRenderable::GetSquaredViewDepth( Mogre::Camera^ param1 )
	{
		return static_cast<const Ogre::ShadowRenderable*>(_native)->getSquaredViewDepth( param1 );
	}
	
	Mogre::Const_LightList^ ShadowRenderable::GetLights( )
	{
		return static_cast<const Ogre::ShadowRenderable*>(_native)->getLights( );
	}
	
	//------------------------------------------------------------
	// Implementation for IRenderable
	//------------------------------------------------------------
	
	bool ShadowRenderable::CastsShadows::get()
	{
		return static_cast<const Ogre::ShadowRenderable*>(_native)->getCastsShadows( );
	}
	
	bool ShadowRenderable::NormaliseNormals::get()
	{
		return static_cast<const Ogre::ShadowRenderable*>(_native)->getNormaliseNormals( );
	}
	
	unsigned short ShadowRenderable::NumWorldTransforms::get()
	{
		return static_cast<const Ogre::ShadowRenderable*>(_native)->getNumWorldTransforms( );
	}
	
	bool ShadowRenderable::PolygonModeOverrideable::get()
	{
		return static_cast<const Ogre::ShadowRenderable*>(_native)->getPolygonModeOverrideable( );
	}
	void ShadowRenderable::PolygonModeOverrideable::set( bool override )
	{
		static_cast<Ogre::ShadowRenderable*>(_native)->setPolygonModeOverrideable( override );
	}
	
	Mogre::Technique^ ShadowRenderable::Technique::get()
	{
		return static_cast<const Ogre::ShadowRenderable*>(_native)->getTechnique( );
	}
	
	bool ShadowRenderable::UseIdentityProjection::get()
	{
		return static_cast<const Ogre::ShadowRenderable*>(_native)->getUseIdentityProjection( );
	}
	void ShadowRenderable::UseIdentityProjection::set( bool useIdentityProjection )
	{
		static_cast<Ogre::ShadowRenderable*>(_native)->setUseIdentityProjection( useIdentityProjection );
	}
	
	bool ShadowRenderable::UseIdentityView::get()
	{
		return static_cast<const Ogre::ShadowRenderable*>(_native)->getUseIdentityView( );
	}
	void ShadowRenderable::UseIdentityView::set( bool useIdentityView )
	{
		static_cast<Ogre::ShadowRenderable*>(_native)->setUseIdentityView( useIdentityView );
	}
	
	Mogre::Const_PlaneList^ ShadowRenderable::GetClipPlanes( )
	{
		return static_cast<const Ogre::ShadowRenderable*>(_native)->getClipPlanes( );
	}
	
	void ShadowRenderable::SetCustomParameter( size_t index, Mogre::Vector4 value )
	{
		static_cast<Ogre::ShadowRenderable*>(_native)->setCustomParameter( index, value );
	}
	
	Mogre::Vector4 ShadowRenderable::GetCustomParameter( size_t index )
	{
		return static_cast<const Ogre::ShadowRenderable*>(_native)->getCustomParameter( index );
	}
	
	void ShadowRenderable::_updateCustomGpuParameter( Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params )
	{
		static_cast<const Ogre::ShadowRenderable*>(_native)->_updateCustomGpuParameter( constantEntry, params );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//ShadowCaster
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Mogre::ShadowRenderable^
	#define STLDECL_NATIVETYPE Ogre::ShadowRenderable*
	CPP_DECLARE_STLVECTOR( ShadowCaster::, ShadowRenderableList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	CPP_DECLARE_ITERATOR( ShadowCaster::, ShadowRenderableListIterator, Ogre::ShadowCaster::ShadowRenderableListIterator, Mogre::ShadowCaster::ShadowRenderableList, Mogre::ShadowRenderable^, Ogre::ShadowRenderable*,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	bool ShadowCaster::CastShadows::get()
	{
		return static_cast<const Ogre::ShadowCaster*>(_native)->getCastShadows( );
	}
	
	Mogre::EdgeData^ ShadowCaster::EdgeList::get()
	{
		return static_cast<Ogre::ShadowCaster*>(_native)->getEdgeList( );
	}
	
	bool ShadowCaster::HasEdgeList::get()
	{
		return static_cast<Ogre::ShadowCaster*>(_native)->hasEdgeList( );
	}
	
	Mogre::AxisAlignedBox^ ShadowCaster::LightCapBounds::get()
	{
		return static_cast<const Ogre::ShadowCaster*>(_native)->getLightCapBounds( );
	}
	
	Mogre::AxisAlignedBox^ ShadowCaster::GetWorldBoundingBox( bool derive )
	{
		return static_cast<const Ogre::ShadowCaster*>(_native)->getWorldBoundingBox( derive );
	}
	Mogre::AxisAlignedBox^ ShadowCaster::GetWorldBoundingBox( )
	{
		return static_cast<const Ogre::ShadowCaster*>(_native)->getWorldBoundingBox( );
	}
	
	Mogre::AxisAlignedBox^ ShadowCaster::GetDarkCapBounds( Mogre::Light^ light, Mogre::Real dirLightExtrusionDist )
	{
		return static_cast<const Ogre::ShadowCaster*>(_native)->getDarkCapBounds( light, dirLightExtrusionDist );
	}
	
	Mogre::ShadowCaster::ShadowRenderableListIterator^ ShadowCaster::GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDistance, unsigned long flags )
	{
		return static_cast<Ogre::ShadowCaster*>(_native)->getShadowVolumeRenderableIterator( (Ogre::ShadowTechnique)shadowTechnique, light, (Ogre::HardwareIndexBufferSharedPtr*)indexBuffer, extrudeVertices, extrusionDistance, flags );
	}
	Mogre::ShadowCaster::ShadowRenderableListIterator^ ShadowCaster::GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDistance )
	{
		return static_cast<Ogre::ShadowCaster*>(_native)->getShadowVolumeRenderableIterator( (Ogre::ShadowTechnique)shadowTechnique, light, (Ogre::HardwareIndexBufferSharedPtr*)indexBuffer, extrudeVertices, extrusionDistance );
	}
	
	Mogre::Real ShadowCaster::GetPointExtrusionDistance( Mogre::Light^ l )
	{
		return static_cast<const Ogre::ShadowCaster*>(_native)->getPointExtrusionDistance( l );
	}
	
	void ShadowCaster::ExtrudeVertices( Mogre::HardwareVertexBufferSharedPtr^ vertexBuffer, size_t originalVertexCount, Mogre::Vector4 lightPos, Mogre::Real extrudeDist )
	{
		Ogre::ShadowCaster::extrudeVertices( (const Ogre::HardwareVertexBufferSharedPtr&)vertexBuffer, originalVertexCount, lightPos, extrudeDist );
	}
	
	
	//Protected Declarations
	
	

}
