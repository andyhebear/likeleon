/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreBillboardSet.h"
#include "MogreRenderable.h"
#include "MogreBillboard.h"
#include "MogreCamera.h"
#include "MogreRenderQueue.h"
#include "MogreMaterial.h"
#include "MogreRenderOperation.h"
#include "MogreCommon.h"
#include "MogreTechnique.h"
#include "MogrePlane.h"
#include "MogreGpuProgram.h"
#include "MogreMovableObject.h"

namespace Mogre
{
	//################################################################
	//BillboardSet
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::Renderable* BillboardSet::_IRenderable_GetNativePtr()
	{
		return static_cast<Ogre::Renderable*>( static_cast<Ogre::BillboardSet*>(_native) );
	}
	
	
	//Public Declarations
	BillboardSet::BillboardSet( String^ name, unsigned int poolSize, bool externalDataSource ) : MovableObject((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::BillboardSet( o_name, poolSize, externalDataSource);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	BillboardSet::BillboardSet( String^ name, unsigned int poolSize ) : MovableObject((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::BillboardSet( o_name, poolSize);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	BillboardSet::BillboardSet( String^ name ) : MovableObject((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::BillboardSet( o_name);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	bool BillboardSet::Autoextend::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getAutoextend( );
	}
	void BillboardSet::Autoextend::set( bool autoextend )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setAutoextend( autoextend );
	}
	
	Mogre::BillboardOrigin BillboardSet::BillboardOrigin::get()
	{
		return (Mogre::BillboardOrigin)static_cast<const Ogre::BillboardSet*>(_native)->getBillboardOrigin( );
	}
	void BillboardSet::BillboardOrigin::set( Mogre::BillboardOrigin origin )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setBillboardOrigin( (Ogre::BillboardOrigin)origin );
	}
	
	Mogre::BillboardRotationType BillboardSet::BillboardRotationType::get()
	{
		return (Mogre::BillboardRotationType)static_cast<const Ogre::BillboardSet*>(_native)->getBillboardRotationType( );
	}
	void BillboardSet::BillboardRotationType::set( Mogre::BillboardRotationType rotationType )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setBillboardRotationType( (Ogre::BillboardRotationType)rotationType );
	}
	
	Mogre::BillboardType BillboardSet::BillboardType::get()
	{
		return (Mogre::BillboardType)static_cast<const Ogre::BillboardSet*>(_native)->getBillboardType( );
	}
	void BillboardSet::BillboardType::set( Mogre::BillboardType bbt )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setBillboardType( (Ogre::BillboardType)bbt );
	}
	
	Mogre::AxisAlignedBox^ BillboardSet::BoundingBox::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getBoundingBox( );
	}
	
	Mogre::Real BillboardSet::BoundingRadius::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getBoundingRadius( );
	}
	
	Mogre::Vector3 BillboardSet::CommonDirection::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getCommonDirection( );
	}
	void BillboardSet::CommonDirection::set( Mogre::Vector3 vec )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setCommonDirection( vec );
	}
	
	Mogre::Vector3 BillboardSet::CommonUpVector::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getCommonUpVector( );
	}
	void BillboardSet::CommonUpVector::set( Mogre::Vector3 vec )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setCommonUpVector( vec );
	}
	
	bool BillboardSet::CullIndividually::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getCullIndividually( );
	}
	void BillboardSet::CullIndividually::set( bool cullIndividual )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setCullIndividually( cullIndividual );
	}
	
	Mogre::Real BillboardSet::DefaultHeight::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getDefaultHeight( );
	}
	void BillboardSet::DefaultHeight::set( Mogre::Real height )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setDefaultHeight( height );
	}
	
	Mogre::Real BillboardSet::DefaultWidth::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getDefaultWidth( );
	}
	void BillboardSet::DefaultWidth::set( Mogre::Real width )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setDefaultWidth( width );
	}
	
	bool BillboardSet::IsPointRenderingEnabled::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->isPointRenderingEnabled( );
	}
	
	String^ BillboardSet::MaterialName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::BillboardSet*>(_native)->getMaterialName( ) );
	}
	void BillboardSet::MaterialName::set( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::BillboardSet*>(_native)->setMaterialName( o_name );
	}
	
	String^ BillboardSet::MovableType::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::BillboardSet*>(_native)->getMovableType( ) );
	}
	
	int BillboardSet::NumBillboards::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getNumBillboards( );
	}
	
	unsigned int BillboardSet::PoolSize::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getPoolSize( );
	}
	
	bool BillboardSet::SortingEnabled::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getSortingEnabled( );
	}
	void BillboardSet::SortingEnabled::set( bool sortenable )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setSortingEnabled( sortenable );
	}
	
	Mogre::uint32 BillboardSet::TypeFlags::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getTypeFlags( );
	}
	
	bool BillboardSet::UseAccurateFacing::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getUseAccurateFacing( );
	}
	void BillboardSet::UseAccurateFacing::set( bool acc )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setUseAccurateFacing( acc );
	}
	
	Mogre::Quaternion BillboardSet::WorldOrientation::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getWorldOrientation( );
	}
	
	Mogre::Vector3 BillboardSet::WorldPosition::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getWorldPosition( );
	}
	
	Mogre::Billboard^ BillboardSet::CreateBillboard( Mogre::Vector3 position, Mogre::ColourValue colour )
	{
		return static_cast<Ogre::BillboardSet*>(_native)->createBillboard( position, colour );
	}
	Mogre::Billboard^ BillboardSet::CreateBillboard( Mogre::Vector3 position )
	{
		return static_cast<Ogre::BillboardSet*>(_native)->createBillboard( position );
	}
	
	Mogre::Billboard^ BillboardSet::CreateBillboard( Mogre::Real x, Mogre::Real y, Mogre::Real z, Mogre::ColourValue colour )
	{
		return static_cast<Ogre::BillboardSet*>(_native)->createBillboard( x, y, z, colour );
	}
	Mogre::Billboard^ BillboardSet::CreateBillboard( Mogre::Real x, Mogre::Real y, Mogre::Real z )
	{
		return static_cast<Ogre::BillboardSet*>(_native)->createBillboard( x, y, z );
	}
	
	void BillboardSet::SetPoolSize( size_t size )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setPoolSize( size );
	}
	
	void BillboardSet::Clear( )
	{
		static_cast<Ogre::BillboardSet*>(_native)->clear( );
	}
	
	Mogre::Billboard^ BillboardSet::GetBillboard( unsigned int index )
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getBillboard( index );
	}
	
	void BillboardSet::RemoveBillboard( unsigned int index )
	{
		static_cast<Ogre::BillboardSet*>(_native)->removeBillboard( index );
	}
	
	void BillboardSet::RemoveBillboard( Mogre::Billboard^ pBill )
	{
		static_cast<Ogre::BillboardSet*>(_native)->removeBillboard( pBill );
	}
	
	void BillboardSet::SetDefaultDimensions( Mogre::Real width, Mogre::Real height )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setDefaultDimensions( width, height );
	}
	
	void BillboardSet::_notifyCurrentCamera( Mogre::Camera^ cam )
	{
		static_cast<Ogre::BillboardSet*>(_native)->_notifyCurrentCamera( cam );
	}
	
	void BillboardSet::BeginBillboards( size_t numBillboards )
	{
		static_cast<Ogre::BillboardSet*>(_native)->beginBillboards( numBillboards );
	}
	void BillboardSet::BeginBillboards( )
	{
		static_cast<Ogre::BillboardSet*>(_native)->beginBillboards( );
	}
	
	void BillboardSet::InjectBillboard( Mogre::Billboard^ bb )
	{
		static_cast<Ogre::BillboardSet*>(_native)->injectBillboard( bb );
	}
	
	void BillboardSet::EndBillboards( )
	{
		static_cast<Ogre::BillboardSet*>(_native)->endBillboards( );
	}
	
	void BillboardSet::SetBounds( Mogre::AxisAlignedBox^ box, Mogre::Real radius )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setBounds( (Ogre::AxisAlignedBox)box, radius );
	}
	
	void BillboardSet::_updateRenderQueue( Mogre::RenderQueue^ queue )
	{
		static_cast<Ogre::BillboardSet*>(_native)->_updateRenderQueue( queue );
	}
	
	Mogre::MaterialPtr^ BillboardSet::GetMaterial( )
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getMaterial( );
	}
	
	void BillboardSet::GetRenderOperation( Mogre::RenderOperation^ op )
	{
		static_cast<Ogre::BillboardSet*>(_native)->getRenderOperation( op );
	}
	
	void BillboardSet::GetWorldTransforms( Mogre::Matrix4::NativeValue* xform )
	{
		Ogre::Matrix4* o_xform = reinterpret_cast<Ogre::Matrix4*>(xform);
	
		static_cast<const Ogre::BillboardSet*>(_native)->getWorldTransforms( o_xform );
	}
	
	void BillboardSet::_notifyBillboardResized( )
	{
		static_cast<Ogre::BillboardSet*>(_native)->_notifyBillboardResized( );
	}
	
	void BillboardSet::_notifyBillboardRotated( )
	{
		static_cast<Ogre::BillboardSet*>(_native)->_notifyBillboardRotated( );
	}
	
	Mogre::Real BillboardSet::GetSquaredViewDepth( Mogre::Camera^ cam )
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getSquaredViewDepth( cam );
	}
	
	void BillboardSet::_updateBounds( )
	{
		static_cast<Ogre::BillboardSet*>(_native)->_updateBounds( );
	}
	
	Mogre::Const_LightList^ BillboardSet::GetLights( )
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getLights( );
	}
	
	void BillboardSet::_sortBillboards( Mogre::Camera^ cam )
	{
		static_cast<Ogre::BillboardSet*>(_native)->_sortBillboards( cam );
	}
	
	Mogre::SortMode BillboardSet::_getSortMode( )
	{
		return (Mogre::SortMode)static_cast<const Ogre::BillboardSet*>(_native)->_getSortMode( );
	}
	
	void BillboardSet::SetBillboardsInWorldSpace( bool ws )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setBillboardsInWorldSpace( ws );
	}
	
	void BillboardSet::SetTextureCoords( Mogre::FloatRect* coords, Mogre::uint16 numCoords )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setTextureCoords( (Ogre::FloatRect*) coords, numCoords );
	}
	
	void BillboardSet::SetTextureStacksAndSlices( Mogre::uchar stacks, Mogre::uchar slices )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setTextureStacksAndSlices( stacks, slices );
	}
	
	Mogre::FloatRect* BillboardSet::GetTextureCoords( [Out] Mogre::uint16% oNumCoords )
	{
		pin_ptr<Mogre::uint16> p_oNumCoords = &oNumCoords;
	
		return (Mogre::FloatRect*) static_cast<Ogre::BillboardSet*>(_native)->getTextureCoords( p_oNumCoords );
	}
	
	void BillboardSet::SetPointRenderingEnabled( bool enabled )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setPointRenderingEnabled( enabled );
	}
	
	//------------------------------------------------------------
	// Implementation for IRenderable
	//------------------------------------------------------------
	
	bool BillboardSet::CastsShadows::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getCastsShadows( );
	}
	
	bool BillboardSet::NormaliseNormals::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getNormaliseNormals( );
	}
	
	unsigned short BillboardSet::NumWorldTransforms::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getNumWorldTransforms( );
	}
	
	bool BillboardSet::PolygonModeOverrideable::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getPolygonModeOverrideable( );
	}
	void BillboardSet::PolygonModeOverrideable::set( bool override )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setPolygonModeOverrideable( override );
	}
	
	Mogre::Technique^ BillboardSet::Technique::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getTechnique( );
	}
	
	bool BillboardSet::UseIdentityProjection::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getUseIdentityProjection( );
	}
	void BillboardSet::UseIdentityProjection::set( bool useIdentityProjection )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setUseIdentityProjection( useIdentityProjection );
	}
	
	bool BillboardSet::UseIdentityView::get()
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getUseIdentityView( );
	}
	void BillboardSet::UseIdentityView::set( bool useIdentityView )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setUseIdentityView( useIdentityView );
	}
	
	Mogre::Const_PlaneList^ BillboardSet::GetClipPlanes( )
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getClipPlanes( );
	}
	
	void BillboardSet::SetCustomParameter( size_t index, Mogre::Vector4 value )
	{
		static_cast<Ogre::BillboardSet*>(_native)->setCustomParameter( index, value );
	}
	
	Mogre::Vector4 BillboardSet::GetCustomParameter( size_t index )
	{
		return static_cast<const Ogre::BillboardSet*>(_native)->getCustomParameter( index );
	}
	
	void BillboardSet::_updateCustomGpuParameter( Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params )
	{
		static_cast<const Ogre::BillboardSet*>(_native)->_updateCustomGpuParameter( constantEntry, params );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//BillboardSetFactory
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	BillboardSetFactory::BillboardSetFactory( ) : MovableObjectFactory((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::BillboardSetFactory();
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	String^ BillboardSetFactory::FACTORY_TYPE_NAME::get()
	{
		return TO_CLR_STRING( Ogre::BillboardSetFactory::FACTORY_TYPE_NAME );
	}
	void BillboardSetFactory::FACTORY_TYPE_NAME::set( String^ value )
	{
		DECLARE_NATIVE_STRING( o_value, value )
	
		Ogre::BillboardSetFactory::FACTORY_TYPE_NAME = o_value;
	}
	
	String^ BillboardSetFactory::Type::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::BillboardSetFactory*>(_native)->getType( ) );
	}
	
	void BillboardSetFactory::DestroyInstance( Mogre::MovableObject^ obj )
	{
		static_cast<Ogre::BillboardSetFactory*>(_native)->destroyInstance( obj );
	}
	
	
	//Protected Declarations
	
	

}
