/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreBillboardChain.h"
#include "MogreRenderable.h"
#include "MogreCamera.h"
#include "MogreMaterial.h"
#include "MogreRenderQueue.h"
#include "MogreRenderOperation.h"
#include "MogreCommon.h"
#include "MogreTechnique.h"
#include "MogrePlane.h"
#include "MogreGpuProgram.h"
#include "MogreMovableObject.h"

namespace Mogre
{
	//################################################################
	//BillboardChain
	//################################################################
	
	//Nested Types
	//################################################################
	//Element_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	Mogre::Vector3 BillboardChain::Element_NativePtr::position::get()
	{
		return _native->position;
	}
	void BillboardChain::Element_NativePtr::position::set( Mogre::Vector3 value )
	{
		_native->position = value;
	}
	
	Mogre::Real BillboardChain::Element_NativePtr::width::get()
	{
		return _native->width;
	}
	void BillboardChain::Element_NativePtr::width::set( Mogre::Real value )
	{
		_native->width = value;
	}
	
	Mogre::Real BillboardChain::Element_NativePtr::texCoord::get()
	{
		return _native->texCoord;
	}
	void BillboardChain::Element_NativePtr::texCoord::set( Mogre::Real value )
	{
		_native->texCoord = value;
	}
	
	Mogre::ColourValue BillboardChain::Element_NativePtr::colour::get()
	{
		return _native->colour;
	}
	void BillboardChain::Element_NativePtr::colour::set( Mogre::ColourValue value )
	{
		_native->colour = value;
	}
	
	
	Mogre::BillboardChain::Element_NativePtr BillboardChain::Element_NativePtr::Create( )
	{
		Element_NativePtr ptr;
		ptr._native = new Ogre::BillboardChain::Element();
		return ptr;
	}
	Mogre::BillboardChain::Element_NativePtr BillboardChain::Element_NativePtr::Create( Mogre::Vector3 position, Mogre::Real width, Mogre::Real texCoord, Mogre::ColourValue colour )
	{
		Element_NativePtr ptr;
		ptr._native = new Ogre::BillboardChain::Element( position, width, texCoord, colour);
		return ptr;
	}
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDTYPE Mogre::BillboardChain::Element_NativePtr
	#define STLDECL_NATIVETYPE Ogre::BillboardChain::Element
	CPP_DECLARE_STLVECTOR( BillboardChain::, ElementList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	//Private Declarations
	
	//Internal Declarations
	Ogre::Renderable* BillboardChain::_IRenderable_GetNativePtr()
	{
		return static_cast<Ogre::Renderable*>( static_cast<Ogre::BillboardChain*>(_native) );
	}
	
	
	//Public Declarations
	BillboardChain::BillboardChain( String^ name, size_t maxElements, size_t numberOfChains, bool useTextureCoords, bool useColours, bool dynamic ) : MovableObject((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::BillboardChain( o_name, maxElements, numberOfChains, useTextureCoords, useColours, dynamic);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	BillboardChain::BillboardChain( String^ name, size_t maxElements, size_t numberOfChains, bool useTextureCoords, bool useColours ) : MovableObject((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::BillboardChain( o_name, maxElements, numberOfChains, useTextureCoords, useColours);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	BillboardChain::BillboardChain( String^ name, size_t maxElements, size_t numberOfChains, bool useTextureCoords ) : MovableObject((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::BillboardChain( o_name, maxElements, numberOfChains, useTextureCoords);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	BillboardChain::BillboardChain( String^ name, size_t maxElements, size_t numberOfChains ) : MovableObject((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::BillboardChain( o_name, maxElements, numberOfChains);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	BillboardChain::BillboardChain( String^ name, size_t maxElements ) : MovableObject((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::BillboardChain( o_name, maxElements);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	BillboardChain::BillboardChain( String^ name ) : MovableObject((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::BillboardChain( o_name);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::AxisAlignedBox^ BillboardChain::BoundingBox::get()
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getBoundingBox( );
	}
	
	Mogre::Real BillboardChain::BoundingRadius::get()
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getBoundingRadius( );
	}
	
	bool BillboardChain::Dynamic::get()
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getDynamic( );
	}
	void BillboardChain::Dynamic::set( bool dyn )
	{
		static_cast<Ogre::BillboardChain*>(_native)->setDynamic( dyn );
	}
	
	String^ BillboardChain::MaterialName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::BillboardChain*>(_native)->getMaterialName( ) );
	}
	void BillboardChain::MaterialName::set( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::BillboardChain*>(_native)->setMaterialName( o_name );
	}
	
	size_t BillboardChain::MaxChainElements::get()
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getMaxChainElements( );
	}
	void BillboardChain::MaxChainElements::set( size_t maxElements )
	{
		static_cast<Ogre::BillboardChain*>(_native)->setMaxChainElements( maxElements );
	}
	
	String^ BillboardChain::MovableType::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::BillboardChain*>(_native)->getMovableType( ) );
	}
	
	size_t BillboardChain::NumberOfChains::get()
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getNumberOfChains( );
	}
	void BillboardChain::NumberOfChains::set( size_t numChains )
	{
		static_cast<Ogre::BillboardChain*>(_native)->setNumberOfChains( numChains );
	}
	
	const Mogre::Real* BillboardChain::OtherTextureCoordRange::get()
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getOtherTextureCoordRange( );
	}
	
	Mogre::BillboardChain::TexCoordDirection BillboardChain::TextureCoordDirection::get()
	{
		return (Mogre::BillboardChain::TexCoordDirection)static_cast<Ogre::BillboardChain*>(_native)->getTextureCoordDirection( );
	}
	void BillboardChain::TextureCoordDirection::set( Mogre::BillboardChain::TexCoordDirection dir )
	{
		static_cast<Ogre::BillboardChain*>(_native)->setTextureCoordDirection( (Ogre::BillboardChain::TexCoordDirection)dir );
	}
	
	bool BillboardChain::UseTextureCoords::get()
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getUseTextureCoords( );
	}
	void BillboardChain::UseTextureCoords::set( bool use )
	{
		static_cast<Ogre::BillboardChain*>(_native)->setUseTextureCoords( use );
	}
	
	bool BillboardChain::UseVertexColours::get()
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getUseVertexColours( );
	}
	void BillboardChain::UseVertexColours::set( bool use )
	{
		static_cast<Ogre::BillboardChain*>(_native)->setUseVertexColours( use );
	}
	
	Mogre::Quaternion BillboardChain::WorldOrientation::get()
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getWorldOrientation( );
	}
	
	Mogre::Vector3 BillboardChain::WorldPosition::get()
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getWorldPosition( );
	}
	
	void BillboardChain::SetOtherTextureCoordRange( Mogre::Real start, Mogre::Real end )
	{
		static_cast<Ogre::BillboardChain*>(_native)->setOtherTextureCoordRange( start, end );
	}
	
	void BillboardChain::AddChainElement( size_t chainIndex, Mogre::BillboardChain::Element_NativePtr billboardChainElement )
	{
		static_cast<Ogre::BillboardChain*>(_native)->addChainElement( chainIndex, billboardChainElement );
	}
	
	void BillboardChain::RemoveChainElement( size_t chainIndex )
	{
		static_cast<Ogre::BillboardChain*>(_native)->removeChainElement( chainIndex );
	}
	
	void BillboardChain::UpdateChainElement( size_t chainIndex, size_t elementIndex, Mogre::BillboardChain::Element_NativePtr billboardChainElement )
	{
		static_cast<Ogre::BillboardChain*>(_native)->updateChainElement( chainIndex, elementIndex, billboardChainElement );
	}
	
	Mogre::BillboardChain::Element_NativePtr BillboardChain::GetChainElement( size_t chainIndex, size_t elementIndex )
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getChainElement( chainIndex, elementIndex );
	}
	
	void BillboardChain::ClearChain( size_t chainIndex )
	{
		static_cast<Ogre::BillboardChain*>(_native)->clearChain( chainIndex );
	}
	
	void BillboardChain::ClearAllChains( )
	{
		static_cast<Ogre::BillboardChain*>(_native)->clearAllChains( );
	}
	
	void BillboardChain::_notifyCurrentCamera( Mogre::Camera^ cam )
	{
		static_cast<Ogre::BillboardChain*>(_native)->_notifyCurrentCamera( cam );
	}
	
	Mogre::Real BillboardChain::GetSquaredViewDepth( Mogre::Camera^ cam )
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getSquaredViewDepth( cam );
	}
	
	Mogre::MaterialPtr^ BillboardChain::GetMaterial( )
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getMaterial( );
	}
	
	void BillboardChain::_updateRenderQueue( Mogre::RenderQueue^ param1 )
	{
		static_cast<Ogre::BillboardChain*>(_native)->_updateRenderQueue( param1 );
	}
	
	void BillboardChain::GetRenderOperation( Mogre::RenderOperation^ param1 )
	{
		static_cast<Ogre::BillboardChain*>(_native)->getRenderOperation( param1 );
	}
	
	void BillboardChain::GetWorldTransforms( Mogre::Matrix4::NativeValue* param1 )
	{
		Ogre::Matrix4* o_param1 = reinterpret_cast<Ogre::Matrix4*>(param1);
	
		static_cast<const Ogre::BillboardChain*>(_native)->getWorldTransforms( o_param1 );
	}
	
	Mogre::Const_LightList^ BillboardChain::GetLights( )
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getLights( );
	}
	
	//------------------------------------------------------------
	// Implementation for IRenderable
	//------------------------------------------------------------
	
	bool BillboardChain::CastsShadows::get()
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getCastsShadows( );
	}
	
	bool BillboardChain::NormaliseNormals::get()
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getNormaliseNormals( );
	}
	
	unsigned short BillboardChain::NumWorldTransforms::get()
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getNumWorldTransforms( );
	}
	
	bool BillboardChain::PolygonModeOverrideable::get()
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getPolygonModeOverrideable( );
	}
	void BillboardChain::PolygonModeOverrideable::set( bool override )
	{
		static_cast<Ogre::BillboardChain*>(_native)->setPolygonModeOverrideable( override );
	}
	
	Mogre::Technique^ BillboardChain::Technique::get()
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getTechnique( );
	}
	
	bool BillboardChain::UseIdentityProjection::get()
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getUseIdentityProjection( );
	}
	void BillboardChain::UseIdentityProjection::set( bool useIdentityProjection )
	{
		static_cast<Ogre::BillboardChain*>(_native)->setUseIdentityProjection( useIdentityProjection );
	}
	
	bool BillboardChain::UseIdentityView::get()
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getUseIdentityView( );
	}
	void BillboardChain::UseIdentityView::set( bool useIdentityView )
	{
		static_cast<Ogre::BillboardChain*>(_native)->setUseIdentityView( useIdentityView );
	}
	
	Mogre::Const_PlaneList^ BillboardChain::GetClipPlanes( )
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getClipPlanes( );
	}
	
	void BillboardChain::SetCustomParameter( size_t index, Mogre::Vector4 value )
	{
		static_cast<Ogre::BillboardChain*>(_native)->setCustomParameter( index, value );
	}
	
	Mogre::Vector4 BillboardChain::GetCustomParameter( size_t index )
	{
		return static_cast<const Ogre::BillboardChain*>(_native)->getCustomParameter( index );
	}
	
	void BillboardChain::_updateCustomGpuParameter( Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params )
	{
		static_cast<const Ogre::BillboardChain*>(_native)->_updateCustomGpuParameter( constantEntry, params );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//BillboardChainFactory
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	BillboardChainFactory::BillboardChainFactory( ) : MovableObjectFactory((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::BillboardChainFactory();
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	String^ BillboardChainFactory::FACTORY_TYPE_NAME::get()
	{
		return TO_CLR_STRING( Ogre::BillboardChainFactory::FACTORY_TYPE_NAME );
	}
	void BillboardChainFactory::FACTORY_TYPE_NAME::set( String^ value )
	{
		DECLARE_NATIVE_STRING( o_value, value )
	
		Ogre::BillboardChainFactory::FACTORY_TYPE_NAME = o_value;
	}
	
	String^ BillboardChainFactory::Type::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::BillboardChainFactory*>(_native)->getType( ) );
	}
	
	void BillboardChainFactory::DestroyInstance( Mogre::MovableObject^ obj )
	{
		static_cast<Ogre::BillboardChainFactory*>(_native)->destroyInstance( obj );
	}
	
	
	//Protected Declarations
	
	

}
