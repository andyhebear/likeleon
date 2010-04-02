/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreSubEntity.h"
#include "MogreRenderable.h"
#include "MogreEntity.h"
#include "MogreSubMesh.h"
#include "MogreTechnique.h"
#include "MogreVertexIndexData.h"
#include "MogreMaterial.h"
#include "MogreRenderOperation.h"
#include "MogreCamera.h"
#include "MogreCommon.h"
#include "MogreGpuProgram.h"
#include "MogrePlane.h"

namespace Mogre
{
	//################################################################
	//SubEntity
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::Renderable* SubEntity::_IRenderable_GetNativePtr()
	{
		return static_cast<Ogre::Renderable*>( static_cast<Ogre::SubEntity*>(_native) );
	}
	
	
	//Public Declarations
	
	bool SubEntity::CastsShadows::get()
	{
		return static_cast<const Ogre::SubEntity*>(_native)->getCastsShadows( );
	}
	
	bool SubEntity::IsVisible::get()
	{
		return static_cast<const Ogre::SubEntity*>(_native)->isVisible( );
	}
	
	String^ SubEntity::MaterialName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::SubEntity*>(_native)->getMaterialName( ) );
	}
	void SubEntity::MaterialName::set( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::SubEntity*>(_native)->setMaterialName( o_name );
	}
	
	bool SubEntity::NormaliseNormals::get()
	{
		return static_cast<const Ogre::SubEntity*>(_native)->getNormaliseNormals( );
	}
	
	unsigned short SubEntity::NumWorldTransforms::get()
	{
		return static_cast<const Ogre::SubEntity*>(_native)->getNumWorldTransforms( );
	}
	
	Mogre::Entity^ SubEntity::Parent::get()
	{
		return static_cast<const Ogre::SubEntity*>(_native)->getParent( );
	}
	
	Mogre::SubMesh^ SubEntity::SubMesh::get()
	{
		return static_cast<Ogre::SubEntity*>(_native)->getSubMesh( );
	}
	
	Mogre::Technique^ SubEntity::Technique::get()
	{
		return static_cast<const Ogre::SubEntity*>(_native)->getTechnique( );
	}
	
	Mogre::VertexData^ SubEntity::VertexDataForBinding::get()
	{
		return static_cast<Ogre::SubEntity*>(_native)->getVertexDataForBinding( );
	}
	
	Mogre::Quaternion SubEntity::WorldOrientation::get()
	{
		return static_cast<const Ogre::SubEntity*>(_native)->getWorldOrientation( );
	}
	
	Mogre::Vector3 SubEntity::WorldPosition::get()
	{
		return static_cast<const Ogre::SubEntity*>(_native)->getWorldPosition( );
	}
	
	void SubEntity::SetVisible( bool visible )
	{
		static_cast<Ogre::SubEntity*>(_native)->setVisible( visible );
	}
	
	Mogre::MaterialPtr^ SubEntity::GetMaterial( )
	{
		return static_cast<const Ogre::SubEntity*>(_native)->getMaterial( );
	}
	
	void SubEntity::GetRenderOperation( Mogre::RenderOperation^ op )
	{
		static_cast<Ogre::SubEntity*>(_native)->getRenderOperation( op );
	}
	
	void SubEntity::GetWorldTransforms( Mogre::Matrix4::NativeValue* xform )
	{
		Ogre::Matrix4* o_xform = reinterpret_cast<Ogre::Matrix4*>(xform);
	
		static_cast<const Ogre::SubEntity*>(_native)->getWorldTransforms( o_xform );
	}
	
	Mogre::Real SubEntity::GetSquaredViewDepth( Mogre::Camera^ cam )
	{
		return static_cast<const Ogre::SubEntity*>(_native)->getSquaredViewDepth( cam );
	}
	
	Mogre::Const_LightList^ SubEntity::GetLights( )
	{
		return static_cast<const Ogre::SubEntity*>(_native)->getLights( );
	}
	
	Mogre::VertexData^ SubEntity::_getSkelAnimVertexData( )
	{
		return static_cast<Ogre::SubEntity*>(_native)->_getSkelAnimVertexData( );
	}
	
	Mogre::VertexData^ SubEntity::_getSoftwareVertexAnimVertexData( )
	{
		return static_cast<Ogre::SubEntity*>(_native)->_getSoftwareVertexAnimVertexData( );
	}
	
	Mogre::VertexData^ SubEntity::_getHardwareVertexAnimVertexData( )
	{
		return static_cast<Ogre::SubEntity*>(_native)->_getHardwareVertexAnimVertexData( );
	}
	
	void SubEntity::_markBuffersUnusedForAnimation( )
	{
		static_cast<Ogre::SubEntity*>(_native)->_markBuffersUnusedForAnimation( );
	}
	
	void SubEntity::_markBuffersUsedForAnimation( )
	{
		static_cast<Ogre::SubEntity*>(_native)->_markBuffersUsedForAnimation( );
	}
	
	bool SubEntity::_getBuffersMarkedForAnimation( )
	{
		return static_cast<const Ogre::SubEntity*>(_native)->_getBuffersMarkedForAnimation( );
	}
	
	void SubEntity::_restoreBuffersForUnusedAnimation( bool hardwareAnimation )
	{
		static_cast<Ogre::SubEntity*>(_native)->_restoreBuffersForUnusedAnimation( hardwareAnimation );
	}
	
	void SubEntity::_updateCustomGpuParameter( Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params )
	{
		static_cast<const Ogre::SubEntity*>(_native)->_updateCustomGpuParameter( constantEntry, params );
	}
	
	void SubEntity::_invalidateCameraCache( )
	{
		static_cast<Ogre::SubEntity*>(_native)->_invalidateCameraCache( );
	}
	
	//------------------------------------------------------------
	// Implementation for IRenderable
	//------------------------------------------------------------
	
	bool SubEntity::PolygonModeOverrideable::get()
	{
		return static_cast<const Ogre::SubEntity*>(_native)->getPolygonModeOverrideable( );
	}
	void SubEntity::PolygonModeOverrideable::set( bool override )
	{
		static_cast<Ogre::SubEntity*>(_native)->setPolygonModeOverrideable( override );
	}
	
	bool SubEntity::UseIdentityProjection::get()
	{
		return static_cast<const Ogre::SubEntity*>(_native)->getUseIdentityProjection( );
	}
	void SubEntity::UseIdentityProjection::set( bool useIdentityProjection )
	{
		static_cast<Ogre::SubEntity*>(_native)->setUseIdentityProjection( useIdentityProjection );
	}
	
	bool SubEntity::UseIdentityView::get()
	{
		return static_cast<const Ogre::SubEntity*>(_native)->getUseIdentityView( );
	}
	void SubEntity::UseIdentityView::set( bool useIdentityView )
	{
		static_cast<Ogre::SubEntity*>(_native)->setUseIdentityView( useIdentityView );
	}
	
	Mogre::Const_PlaneList^ SubEntity::GetClipPlanes( )
	{
		return static_cast<const Ogre::SubEntity*>(_native)->getClipPlanes( );
	}
	
	void SubEntity::SetCustomParameter( size_t index, Mogre::Vector4 value )
	{
		static_cast<Ogre::SubEntity*>(_native)->setCustomParameter( index, value );
	}
	
	Mogre::Vector4 SubEntity::GetCustomParameter( size_t index )
	{
		return static_cast<const Ogre::SubEntity*>(_native)->getCustomParameter( index );
	}
	
	
	//Protected Declarations
	
	

}
