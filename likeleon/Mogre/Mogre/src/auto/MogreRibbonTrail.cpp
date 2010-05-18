/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreRibbonTrail.h"
#include "MogreNode.h"
#include "MogreMovableObject.h"

namespace Mogre
{
	//################################################################
	//RibbonTrail
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Mogre::Node^
	#define STLDECL_NATIVETYPE Ogre::Node*
	CPP_DECLARE_STLVECTOR( RibbonTrail::, NodeList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	CPP_DECLARE_ITERATOR( RibbonTrail::, NodeIterator, Ogre::RibbonTrail::NodeIterator, Mogre::RibbonTrail::NodeList, Mogre::Node^, Ogre::Node*,  )
	
	//Private Declarations
	
	//Internal Declarations
	Ogre::Node::Listener* RibbonTrail::_IListener_GetNativePtr()
	{
		return static_cast<Ogre::Node::Listener*>( static_cast<Ogre::RibbonTrail*>(_native) );
	}
	
	
	//Public Declarations
	RibbonTrail::RibbonTrail( String^ name, size_t maxElements, size_t numberOfChains, bool useTextureCoords, bool useColours ) : BillboardChain((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::RibbonTrail( o_name, maxElements, numberOfChains, useTextureCoords, useColours);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	RibbonTrail::RibbonTrail( String^ name, size_t maxElements, size_t numberOfChains, bool useTextureCoords ) : BillboardChain((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::RibbonTrail( o_name, maxElements, numberOfChains, useTextureCoords);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	RibbonTrail::RibbonTrail( String^ name, size_t maxElements, size_t numberOfChains ) : BillboardChain((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::RibbonTrail( o_name, maxElements, numberOfChains);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	RibbonTrail::RibbonTrail( String^ name, size_t maxElements ) : BillboardChain((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::RibbonTrail( o_name, maxElements);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	RibbonTrail::RibbonTrail( String^ name ) : BillboardChain((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::RibbonTrail( o_name);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	size_t RibbonTrail::MaxChainElements::get()
	{
		return static_cast<const Ogre::RibbonTrail*>(_native)->getMaxChainElements( );
	}
	void RibbonTrail::MaxChainElements::set( size_t maxElements )
	{
		static_cast<Ogre::RibbonTrail*>(_native)->setMaxChainElements( maxElements );
	}
	
	String^ RibbonTrail::MovableType::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::RibbonTrail*>(_native)->getMovableType( ) );
	}
	
	size_t RibbonTrail::NumberOfChains::get()
	{
		return static_cast<const Ogre::RibbonTrail*>(_native)->getNumberOfChains( );
	}
	void RibbonTrail::NumberOfChains::set( size_t numChains )
	{
		static_cast<Ogre::RibbonTrail*>(_native)->setNumberOfChains( numChains );
	}
	
	Mogre::Real RibbonTrail::TrailLength::get()
	{
		return static_cast<const Ogre::RibbonTrail*>(_native)->getTrailLength( );
	}
	void RibbonTrail::TrailLength::set( Mogre::Real len )
	{
		static_cast<Ogre::RibbonTrail*>(_native)->setTrailLength( len );
	}
	
	void RibbonTrail::AddNode( Mogre::Node^ n )
	{
		static_cast<Ogre::RibbonTrail*>(_native)->addNode( n );
	}
	
	void RibbonTrail::RemoveNode( Mogre::Node^ n )
	{
		static_cast<Ogre::RibbonTrail*>(_native)->removeNode( n );
	}
	
	Mogre::RibbonTrail::NodeIterator^ RibbonTrail::GetNodeIterator( )
	{
		return static_cast<const Ogre::RibbonTrail*>(_native)->getNodeIterator( );
	}
	
	size_t RibbonTrail::GetChainIndexForNode( Mogre::Node^ n )
	{
		return static_cast<Ogre::RibbonTrail*>(_native)->getChainIndexForNode( n );
	}
	
	void RibbonTrail::ClearChain( size_t chainIndex )
	{
		static_cast<Ogre::RibbonTrail*>(_native)->clearChain( chainIndex );
	}
	
	void RibbonTrail::SetInitialColour( size_t chainIndex, Mogre::ColourValue col )
	{
		static_cast<Ogre::RibbonTrail*>(_native)->setInitialColour( chainIndex, col );
	}
	
	void RibbonTrail::SetInitialColour( size_t chainIndex, Mogre::Real r, Mogre::Real g, Mogre::Real b, Mogre::Real a )
	{
		static_cast<Ogre::RibbonTrail*>(_native)->setInitialColour( chainIndex, r, g, b, a );
	}
	void RibbonTrail::SetInitialColour( size_t chainIndex, Mogre::Real r, Mogre::Real g, Mogre::Real b )
	{
		static_cast<Ogre::RibbonTrail*>(_native)->setInitialColour( chainIndex, r, g, b );
	}
	
	Mogre::ColourValue RibbonTrail::GetInitialColour( size_t chainIndex )
	{
		return static_cast<const Ogre::RibbonTrail*>(_native)->getInitialColour( chainIndex );
	}
	
	void RibbonTrail::SetColourChange( size_t chainIndex, Mogre::ColourValue valuePerSecond )
	{
		static_cast<Ogre::RibbonTrail*>(_native)->setColourChange( chainIndex, valuePerSecond );
	}
	
	void RibbonTrail::SetInitialWidth( size_t chainIndex, Mogre::Real width )
	{
		static_cast<Ogre::RibbonTrail*>(_native)->setInitialWidth( chainIndex, width );
	}
	
	Mogre::Real RibbonTrail::GetInitialWidth( size_t chainIndex )
	{
		return static_cast<const Ogre::RibbonTrail*>(_native)->getInitialWidth( chainIndex );
	}
	
	void RibbonTrail::SetWidthChange( size_t chainIndex, Mogre::Real widthDeltaPerSecond )
	{
		static_cast<Ogre::RibbonTrail*>(_native)->setWidthChange( chainIndex, widthDeltaPerSecond );
	}
	
	Mogre::Real RibbonTrail::GetWidthChange( size_t chainIndex )
	{
		return static_cast<const Ogre::RibbonTrail*>(_native)->getWidthChange( chainIndex );
	}
	
	void RibbonTrail::SetColourChange( size_t chainIndex, Mogre::Real r, Mogre::Real g, Mogre::Real b, Mogre::Real a )
	{
		static_cast<Ogre::RibbonTrail*>(_native)->setColourChange( chainIndex, r, g, b, a );
	}
	
	Mogre::ColourValue RibbonTrail::GetColourChange( size_t chainIndex )
	{
		return static_cast<const Ogre::RibbonTrail*>(_native)->getColourChange( chainIndex );
	}
	
	void RibbonTrail::NodeUpdated( Mogre::Node^ node )
	{
		static_cast<Ogre::RibbonTrail*>(_native)->nodeUpdated( node );
	}
	
	void RibbonTrail::NodeDestroyed( Mogre::Node^ node )
	{
		static_cast<Ogre::RibbonTrail*>(_native)->nodeDestroyed( node );
	}
	
	void RibbonTrail::_timeUpdate( Mogre::Real time )
	{
		static_cast<Ogre::RibbonTrail*>(_native)->_timeUpdate( time );
	}
	
	//------------------------------------------------------------
	// Implementation for IListener
	//------------------------------------------------------------
	
	void RibbonTrail::NodeAttached( Mogre::Node^ param1 )
	{
		static_cast<Ogre::RibbonTrail*>(_native)->nodeAttached( param1 );
	}
	
	void RibbonTrail::NodeDetached( Mogre::Node^ param1 )
	{
		static_cast<Ogre::RibbonTrail*>(_native)->nodeDetached( param1 );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//RibbonTrailFactory
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	RibbonTrailFactory::RibbonTrailFactory( ) : MovableObjectFactory((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::RibbonTrailFactory();
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	String^ RibbonTrailFactory::FACTORY_TYPE_NAME::get()
	{
		return TO_CLR_STRING( Ogre::RibbonTrailFactory::FACTORY_TYPE_NAME );
	}
	void RibbonTrailFactory::FACTORY_TYPE_NAME::set( String^ value )
	{
		DECLARE_NATIVE_STRING( o_value, value )
	
		Ogre::RibbonTrailFactory::FACTORY_TYPE_NAME = o_value;
	}
	
	String^ RibbonTrailFactory::Type::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::RibbonTrailFactory*>(_native)->getType( ) );
	}
	
	void RibbonTrailFactory::DestroyInstance( Mogre::MovableObject^ obj )
	{
		static_cast<Ogre::RibbonTrailFactory*>(_native)->destroyInstance( obj );
	}
	
	
	//Protected Declarations
	
	

}
