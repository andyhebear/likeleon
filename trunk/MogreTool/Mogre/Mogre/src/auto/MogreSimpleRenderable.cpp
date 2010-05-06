/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreSimpleRenderable.h"
#include "MogreRenderable.h"
#include "MogreMaterial.h"
#include "MogreRenderOperation.h"
#include "MogreCamera.h"
#include "MogreRenderQueue.h"
#include "MogreCommon.h"
#include "MogreTechnique.h"
#include "MogrePlane.h"
#include "MogreGpuProgram.h"

namespace Mogre
{
	//################################################################
	//SimpleRenderable
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::Renderable* SimpleRenderable::_IRenderable_GetNativePtr()
	{
		return static_cast<Ogre::Renderable*>( static_cast<Ogre::SimpleRenderable*>(_native) );
	}
	
	
	//Public Declarations
	OBBoxRenderable::OBBoxRenderable() : SimpleRenderable((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::OBBoxRenderable();

		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}

	OBBoxRenderable::OBBoxRenderable( String^ matname) : SimpleRenderable((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_matname, matname )

		_native = new Ogre::OBBoxRenderable(o_matname);

		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}

	OBBoxRenderable::OBBoxRenderable( String^ matname, Mogre::ColourValue colour ) : SimpleRenderable((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_matname, matname )

		_native = new Ogre::OBBoxRenderable(o_matname, colour);

		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}

	Mogre::AxisAlignedBox^ SimpleRenderable::BoundingBox::get()
	{
		return static_cast<const Ogre::SimpleRenderable*>(_native)->getBoundingBox( );
	}
	void SimpleRenderable::BoundingBox::set( Mogre::AxisAlignedBox^ box )
	{
		static_cast<Ogre::SimpleRenderable*>(_native)->setBoundingBox( (Ogre::AxisAlignedBox)box );
	}
	
	String^ SimpleRenderable::MovableType::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::SimpleRenderable*>(_native)->getMovableType( ) );
	}
	
	Mogre::Quaternion SimpleRenderable::WorldOrientation::get()
	{
		return static_cast<const Ogre::SimpleRenderable*>(_native)->getWorldOrientation( );
	}
	
	Mogre::Vector3 SimpleRenderable::WorldPosition::get()
	{
		return static_cast<const Ogre::SimpleRenderable*>(_native)->getWorldPosition( );
	}
	
	void SimpleRenderable::SetMaterial( String^ matName )
	{
		DECLARE_NATIVE_STRING( o_matName, matName )
	
		static_cast<Ogre::SimpleRenderable*>(_native)->setMaterial( o_matName );
	}
	
	Mogre::MaterialPtr^ SimpleRenderable::GetMaterial( )
	{
		return static_cast<const Ogre::SimpleRenderable*>(_native)->getMaterial( );
	}
	
	void SimpleRenderable::SetRenderOperation( Mogre::RenderOperation^ rend )
	{
		static_cast<Ogre::SimpleRenderable*>(_native)->setRenderOperation( rend );
	}
	
	void SimpleRenderable::GetRenderOperation( Mogre::RenderOperation^ op )
	{
		static_cast<Ogre::SimpleRenderable*>(_native)->getRenderOperation( op );
	}
	
	void SimpleRenderable::SetWorldTransform( Mogre::Matrix4^ xform )
	{
		pin_ptr<Ogre::Matrix4> p_xform = interior_ptr<Ogre::Matrix4>(&xform->m00);
	
		static_cast<Ogre::SimpleRenderable*>(_native)->setWorldTransform( *p_xform );
	}
	
	void SimpleRenderable::GetWorldTransforms( Mogre::Matrix4::NativeValue* xform )
	{
		Ogre::Matrix4* o_xform = reinterpret_cast<Ogre::Matrix4*>(xform);
	
		static_cast<const Ogre::SimpleRenderable*>(_native)->getWorldTransforms( o_xform );
	}
	
	void SimpleRenderable::_notifyCurrentCamera( Mogre::Camera^ cam )
	{
		static_cast<Ogre::SimpleRenderable*>(_native)->_notifyCurrentCamera( cam );
	}
	
	void SimpleRenderable::_updateRenderQueue( Mogre::RenderQueue^ queue )
	{
		static_cast<Ogre::SimpleRenderable*>(_native)->_updateRenderQueue( queue );
	}
	
	Mogre::Const_LightList^ SimpleRenderable::GetLights( )
	{
		return static_cast<const Ogre::SimpleRenderable*>(_native)->getLights( );
	}
	
	//------------------------------------------------------------
	// Implementation for IRenderable
	//------------------------------------------------------------
	
	bool SimpleRenderable::CastsShadows::get()
	{
		return static_cast<const Ogre::SimpleRenderable*>(_native)->getCastsShadows( );
	}
	
	bool SimpleRenderable::NormaliseNormals::get()
	{
		return static_cast<const Ogre::SimpleRenderable*>(_native)->getNormaliseNormals( );
	}
	
	unsigned short SimpleRenderable::NumWorldTransforms::get()
	{
		return static_cast<const Ogre::SimpleRenderable*>(_native)->getNumWorldTransforms( );
	}
	
	bool SimpleRenderable::PolygonModeOverrideable::get()
	{
		return static_cast<const Ogre::SimpleRenderable*>(_native)->getPolygonModeOverrideable( );
	}
	void SimpleRenderable::PolygonModeOverrideable::set( bool override )
	{
		static_cast<Ogre::SimpleRenderable*>(_native)->setPolygonModeOverrideable( override );
	}
	
	Mogre::Technique^ SimpleRenderable::Technique::get()
	{
		return static_cast<const Ogre::SimpleRenderable*>(_native)->getTechnique( );
	}
	
	bool SimpleRenderable::UseIdentityProjection::get()
	{
		return static_cast<const Ogre::SimpleRenderable*>(_native)->getUseIdentityProjection( );
	}
	void SimpleRenderable::UseIdentityProjection::set( bool useIdentityProjection )
	{
		static_cast<Ogre::SimpleRenderable*>(_native)->setUseIdentityProjection( useIdentityProjection );
	}
	
	bool SimpleRenderable::UseIdentityView::get()
	{
		return static_cast<const Ogre::SimpleRenderable*>(_native)->getUseIdentityView( );
	}
	void SimpleRenderable::UseIdentityView::set( bool useIdentityView )
	{
		static_cast<Ogre::SimpleRenderable*>(_native)->setUseIdentityView( useIdentityView );
	}
	
	Mogre::Real SimpleRenderable::GetSquaredViewDepth( Mogre::Camera^ cam )
	{
		return static_cast<const Ogre::SimpleRenderable*>(_native)->getSquaredViewDepth( cam );
	}
	
	Mogre::Const_PlaneList^ SimpleRenderable::GetClipPlanes( )
	{
		return static_cast<const Ogre::SimpleRenderable*>(_native)->getClipPlanes( );
	}
	
	void SimpleRenderable::SetCustomParameter( size_t index, Mogre::Vector4 value )
	{
		static_cast<Ogre::SimpleRenderable*>(_native)->setCustomParameter( index, value );
	}
	
	Mogre::Vector4 SimpleRenderable::GetCustomParameter( size_t index )
	{
		return static_cast<const Ogre::SimpleRenderable*>(_native)->getCustomParameter( index );
	}
	
	void SimpleRenderable::_updateCustomGpuParameter( Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params )
	{
		static_cast<const Ogre::SimpleRenderable*>(_native)->_updateCustomGpuParameter( constantEntry, params );
	}
	
	
	//Protected Declarations
	
	

	//################################################################
	//OBBoxRenderable
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations	
	
	//Public Declarations
	void OBBoxRenderable::SetupVertices( Mogre::AxisAlignedBox^ aab )
	{
		static_cast<Ogre::OBBoxRenderable*>(_native)->setupVertices(aab);
	}

	Mogre::Real OBBoxRenderable::GetSquaredViewDepth( Mogre::Camera^ cam )
	{
		return static_cast<const Ogre::OBBoxRenderable*>(_native)->getSquaredViewDepth( cam );
	}

	Mogre::Real OBBoxRenderable::BoundingRadius::get()
	{
		return static_cast<const Ogre::OBBoxRenderable*>(_native)->getBoundingRadius();
	}

	void OBBoxRenderable::GetWorldTransforms( Mogre::Matrix4::NativeValue* xform )
	{
		Ogre::Matrix4* o_xform = reinterpret_cast<Ogre::Matrix4*>(xform);
	
		static_cast<const Ogre::OBBoxRenderable*>(_native)->getWorldTransforms( o_xform );
	}
}
