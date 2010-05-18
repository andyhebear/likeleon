/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreCompositionPass.h"
#include "MogreCompositionTargetPass.h"
#include "MogreMaterial.h"

namespace Mogre
{
	//################################################################
	//CompositionPass
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	CompositionPass::CompositionPass( Mogre::CompositionTargetPass^ parent )
	{
		_createdByCLR = true;
		_native = new Ogre::CompositionPass( parent);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::uint32 CompositionPass::ClearBuffers::get()
	{
		return static_cast<Ogre::CompositionPass*>(_native)->getClearBuffers( );
	}
	void CompositionPass::ClearBuffers::set( Mogre::uint32 val )
	{
		static_cast<Ogre::CompositionPass*>(_native)->setClearBuffers( val );
	}
	
	Mogre::ColourValue CompositionPass::ClearColour::get()
	{
		return static_cast<Ogre::CompositionPass*>(_native)->getClearColour( );
	}
	void CompositionPass::ClearColour::set( Mogre::ColourValue val )
	{
		static_cast<Ogre::CompositionPass*>(_native)->setClearColour( val );
	}
	
	Mogre::Real CompositionPass::ClearDepth::get()
	{
		return static_cast<Ogre::CompositionPass*>(_native)->getClearDepth( );
	}
	void CompositionPass::ClearDepth::set( Mogre::Real depth )
	{
		static_cast<Ogre::CompositionPass*>(_native)->setClearDepth( depth );
	}
	
	Mogre::uint32 CompositionPass::ClearStencil::get()
	{
		return static_cast<Ogre::CompositionPass*>(_native)->getClearStencil( );
	}
	void CompositionPass::ClearStencil::set( Mogre::uint32 value )
	{
		static_cast<Ogre::CompositionPass*>(_native)->setClearStencil( value );
	}
	
	Mogre::uint8 CompositionPass::FirstRenderQueue::get()
	{
		return static_cast<Ogre::CompositionPass*>(_native)->getFirstRenderQueue( );
	}
	void CompositionPass::FirstRenderQueue::set( Mogre::uint8 id )
	{
		static_cast<Ogre::CompositionPass*>(_native)->setFirstRenderQueue( id );
	}
	
	Mogre::uint32 CompositionPass::Identifier::get()
	{
		return static_cast<const Ogre::CompositionPass*>(_native)->getIdentifier( );
	}
	void CompositionPass::Identifier::set( Mogre::uint32 id )
	{
		static_cast<Ogre::CompositionPass*>(_native)->setIdentifier( id );
	}
	
	Mogre::uint8 CompositionPass::LastRenderQueue::get()
	{
		return static_cast<Ogre::CompositionPass*>(_native)->getLastRenderQueue( );
	}
	void CompositionPass::LastRenderQueue::set( Mogre::uint8 id )
	{
		static_cast<Ogre::CompositionPass*>(_native)->setLastRenderQueue( id );
	}
	
	size_t CompositionPass::NumInputs::get()
	{
		return static_cast<Ogre::CompositionPass*>(_native)->getNumInputs( );
	}
	
	Mogre::CompositionTargetPass^ CompositionPass::Parent::get()
	{
		return static_cast<Ogre::CompositionPass*>(_native)->getParent( );
	}
	
	bool CompositionPass::StencilCheck::get()
	{
		return static_cast<Ogre::CompositionPass*>(_native)->getStencilCheck( );
	}
	void CompositionPass::StencilCheck::set( bool value )
	{
		static_cast<Ogre::CompositionPass*>(_native)->setStencilCheck( value );
	}
	
	Mogre::StencilOperation CompositionPass::StencilDepthFailOp::get()
	{
		return (Mogre::StencilOperation)static_cast<Ogre::CompositionPass*>(_native)->getStencilDepthFailOp( );
	}
	void CompositionPass::StencilDepthFailOp::set( Mogre::StencilOperation value )
	{
		static_cast<Ogre::CompositionPass*>(_native)->setStencilDepthFailOp( (Ogre::StencilOperation)value );
	}
	
	Mogre::StencilOperation CompositionPass::StencilFailOp::get()
	{
		return (Mogre::StencilOperation)static_cast<Ogre::CompositionPass*>(_native)->getStencilFailOp( );
	}
	void CompositionPass::StencilFailOp::set( Mogre::StencilOperation value )
	{
		static_cast<Ogre::CompositionPass*>(_native)->setStencilFailOp( (Ogre::StencilOperation)value );
	}
	
	Mogre::CompareFunction CompositionPass::StencilFunc::get()
	{
		return (Mogre::CompareFunction)static_cast<Ogre::CompositionPass*>(_native)->getStencilFunc( );
	}
	void CompositionPass::StencilFunc::set( Mogre::CompareFunction value )
	{
		static_cast<Ogre::CompositionPass*>(_native)->setStencilFunc( (Ogre::CompareFunction)value );
	}
	
	Mogre::uint32 CompositionPass::StencilMask::get()
	{
		return static_cast<Ogre::CompositionPass*>(_native)->getStencilMask( );
	}
	void CompositionPass::StencilMask::set( Mogre::uint32 value )
	{
		static_cast<Ogre::CompositionPass*>(_native)->setStencilMask( value );
	}
	
	Mogre::StencilOperation CompositionPass::StencilPassOp::get()
	{
		return (Mogre::StencilOperation)static_cast<Ogre::CompositionPass*>(_native)->getStencilPassOp( );
	}
	void CompositionPass::StencilPassOp::set( Mogre::StencilOperation value )
	{
		static_cast<Ogre::CompositionPass*>(_native)->setStencilPassOp( (Ogre::StencilOperation)value );
	}
	
	Mogre::uint32 CompositionPass::StencilRefValue::get()
	{
		return static_cast<Ogre::CompositionPass*>(_native)->getStencilRefValue( );
	}
	void CompositionPass::StencilRefValue::set( Mogre::uint32 value )
	{
		static_cast<Ogre::CompositionPass*>(_native)->setStencilRefValue( value );
	}
	
	bool CompositionPass::StencilTwoSidedOperation::get()
	{
		return static_cast<Ogre::CompositionPass*>(_native)->getStencilTwoSidedOperation( );
	}
	void CompositionPass::StencilTwoSidedOperation::set( bool value )
	{
		static_cast<Ogre::CompositionPass*>(_native)->setStencilTwoSidedOperation( value );
	}
	
	Mogre::CompositionPass::PassType CompositionPass::Type::get()
	{
		return (Mogre::CompositionPass::PassType)static_cast<const Ogre::CompositionPass*>(_native)->getType( );
	}
	void CompositionPass::Type::set( Mogre::CompositionPass::PassType type )
	{
		static_cast<Ogre::CompositionPass*>(_native)->setType( (Ogre::CompositionPass::PassType)type );
	}
	
	void CompositionPass::SetMaterial( Mogre::MaterialPtr^ mat )
	{
		static_cast<Ogre::CompositionPass*>(_native)->setMaterial( (const Ogre::MaterialPtr&)mat );
	}
	
	void CompositionPass::SetMaterialName( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::CompositionPass*>(_native)->setMaterialName( o_name );
	}
	
	Mogre::MaterialPtr^ CompositionPass::GetMaterial( )
	{
		return static_cast<const Ogre::CompositionPass*>(_native)->getMaterial( );
	}
	
	void CompositionPass::SetInput( size_t id, String^ input )
	{
		DECLARE_NATIVE_STRING( o_input, input )
	
		static_cast<Ogre::CompositionPass*>(_native)->setInput( id, o_input );
	}
	void CompositionPass::SetInput( size_t id )
	{
		static_cast<Ogre::CompositionPass*>(_native)->setInput( id );
	}
	
	String^ CompositionPass::GetInput( size_t id )
	{
		return TO_CLR_STRING( static_cast<Ogre::CompositionPass*>(_native)->getInput( id ) );
	}
	
	void CompositionPass::ClearAllInputs( )
	{
		static_cast<Ogre::CompositionPass*>(_native)->clearAllInputs( );
	}
	
	bool CompositionPass::_isSupported( )
	{
		return static_cast<Ogre::CompositionPass*>(_native)->_isSupported( );
	}
	
	
	//Protected Declarations
	
	

}
