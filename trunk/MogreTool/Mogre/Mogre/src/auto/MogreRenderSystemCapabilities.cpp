/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreRenderSystemCapabilities.h"
#include "MogreLog.h"

namespace Mogre
{
	//################################################################
	//RenderSystemCapabilities
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	RenderSystemCapabilities::RenderSystemCapabilities( )
	{
		_createdByCLR = true;
		_native = new Ogre::RenderSystemCapabilities();
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::ushort RenderSystemCapabilities::FragmentProgramConstantBoolCount::get()
	{
		return static_cast<const Ogre::RenderSystemCapabilities*>(_native)->getFragmentProgramConstantBoolCount( );
	}
	void RenderSystemCapabilities::FragmentProgramConstantBoolCount::set( Mogre::ushort c )
	{
		static_cast<Ogre::RenderSystemCapabilities*>(_native)->setFragmentProgramConstantBoolCount( c );
	}
	
	Mogre::ushort RenderSystemCapabilities::FragmentProgramConstantFloatCount::get()
	{
		return static_cast<const Ogre::RenderSystemCapabilities*>(_native)->getFragmentProgramConstantFloatCount( );
	}
	void RenderSystemCapabilities::FragmentProgramConstantFloatCount::set( Mogre::ushort c )
	{
		static_cast<Ogre::RenderSystemCapabilities*>(_native)->setFragmentProgramConstantFloatCount( c );
	}
	
	Mogre::ushort RenderSystemCapabilities::FragmentProgramConstantIntCount::get()
	{
		return static_cast<const Ogre::RenderSystemCapabilities*>(_native)->getFragmentProgramConstantIntCount( );
	}
	void RenderSystemCapabilities::FragmentProgramConstantIntCount::set( Mogre::ushort c )
	{
		static_cast<Ogre::RenderSystemCapabilities*>(_native)->setFragmentProgramConstantIntCount( c );
	}
	
	String^ RenderSystemCapabilities::MaxFragmentProgramVersion::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::RenderSystemCapabilities*>(_native)->getMaxFragmentProgramVersion( ) );
	}
	void RenderSystemCapabilities::MaxFragmentProgramVersion::set( String^ ver )
	{
		DECLARE_NATIVE_STRING( o_ver, ver )
	
		static_cast<Ogre::RenderSystemCapabilities*>(_native)->setMaxFragmentProgramVersion( o_ver );
	}
	
	Mogre::Real RenderSystemCapabilities::MaxPointSize::get()
	{
		return static_cast<const Ogre::RenderSystemCapabilities*>(_native)->getMaxPointSize( );
	}
	void RenderSystemCapabilities::MaxPointSize::set( Mogre::Real s )
	{
		static_cast<Ogre::RenderSystemCapabilities*>(_native)->setMaxPointSize( s );
	}
	
	String^ RenderSystemCapabilities::MaxVertexProgramVersion::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::RenderSystemCapabilities*>(_native)->getMaxVertexProgramVersion( ) );
	}
	void RenderSystemCapabilities::MaxVertexProgramVersion::set( String^ ver )
	{
		DECLARE_NATIVE_STRING( o_ver, ver )
	
		static_cast<Ogre::RenderSystemCapabilities*>(_native)->setMaxVertexProgramVersion( o_ver );
	}
	
	bool RenderSystemCapabilities::NonPOW2TexturesLimited::get()
	{
		return static_cast<const Ogre::RenderSystemCapabilities*>(_native)->getNonPOW2TexturesLimited( );
	}
	void RenderSystemCapabilities::NonPOW2TexturesLimited::set( bool l )
	{
		static_cast<Ogre::RenderSystemCapabilities*>(_native)->setNonPOW2TexturesLimited( l );
	}
	
	Mogre::ushort RenderSystemCapabilities::NumTextureUnits::get()
	{
		return static_cast<const Ogre::RenderSystemCapabilities*>(_native)->getNumTextureUnits( );
	}
	void RenderSystemCapabilities::NumTextureUnits::set( Mogre::ushort num )
	{
		static_cast<Ogre::RenderSystemCapabilities*>(_native)->setNumTextureUnits( num );
	}
	
	Mogre::ushort RenderSystemCapabilities::NumVertexTextureUnits::get()
	{
		return static_cast<const Ogre::RenderSystemCapabilities*>(_native)->getNumVertexTextureUnits( );
	}
	void RenderSystemCapabilities::NumVertexTextureUnits::set( Mogre::ushort n )
	{
		static_cast<Ogre::RenderSystemCapabilities*>(_native)->setNumVertexTextureUnits( n );
	}
	
	Mogre::ushort RenderSystemCapabilities::NumWorldMatricies::get()
	{
		return static_cast<const Ogre::RenderSystemCapabilities*>(_native)->getNumWorldMatricies( );
	}
	void RenderSystemCapabilities::NumWorldMatricies::set( Mogre::ushort num )
	{
		static_cast<Ogre::RenderSystemCapabilities*>(_native)->setNumWorldMatricies( num );
	}
	
	Mogre::ushort RenderSystemCapabilities::StencilBufferBitDepth::get()
	{
		return static_cast<const Ogre::RenderSystemCapabilities*>(_native)->getStencilBufferBitDepth( );
	}
	void RenderSystemCapabilities::StencilBufferBitDepth::set( Mogre::ushort num )
	{
		static_cast<Ogre::RenderSystemCapabilities*>(_native)->setStencilBufferBitDepth( num );
	}
	
	Mogre::ushort RenderSystemCapabilities::VertexProgramConstantBoolCount::get()
	{
		return static_cast<const Ogre::RenderSystemCapabilities*>(_native)->getVertexProgramConstantBoolCount( );
	}
	void RenderSystemCapabilities::VertexProgramConstantBoolCount::set( Mogre::ushort c )
	{
		static_cast<Ogre::RenderSystemCapabilities*>(_native)->setVertexProgramConstantBoolCount( c );
	}
	
	Mogre::ushort RenderSystemCapabilities::VertexProgramConstantFloatCount::get()
	{
		return static_cast<const Ogre::RenderSystemCapabilities*>(_native)->getVertexProgramConstantFloatCount( );
	}
	void RenderSystemCapabilities::VertexProgramConstantFloatCount::set( Mogre::ushort c )
	{
		static_cast<Ogre::RenderSystemCapabilities*>(_native)->setVertexProgramConstantFloatCount( c );
	}
	
	Mogre::ushort RenderSystemCapabilities::VertexProgramConstantIntCount::get()
	{
		return static_cast<const Ogre::RenderSystemCapabilities*>(_native)->getVertexProgramConstantIntCount( );
	}
	void RenderSystemCapabilities::VertexProgramConstantIntCount::set( Mogre::ushort c )
	{
		static_cast<Ogre::RenderSystemCapabilities*>(_native)->setVertexProgramConstantIntCount( c );
	}
	
	bool RenderSystemCapabilities::VertexTextureUnitsShared::get()
	{
		return static_cast<const Ogre::RenderSystemCapabilities*>(_native)->getVertexTextureUnitsShared( );
	}
	void RenderSystemCapabilities::VertexTextureUnitsShared::set( bool shared )
	{
		static_cast<Ogre::RenderSystemCapabilities*>(_native)->setVertexTextureUnitsShared( shared );
	}
	
	void RenderSystemCapabilities::SetNumVertexBlendMatrices( Mogre::ushort num )
	{
		static_cast<Ogre::RenderSystemCapabilities*>(_native)->setNumVertexBlendMatrices( num );
	}
	
	void RenderSystemCapabilities::SetNumMultiRenderTargets( Mogre::ushort num )
	{
		static_cast<Ogre::RenderSystemCapabilities*>(_native)->setNumMultiRenderTargets( num );
	}
	
	Mogre::ushort RenderSystemCapabilities::NumVertexBlendMatrices( )
	{
		return static_cast<const Ogre::RenderSystemCapabilities*>(_native)->numVertexBlendMatrices( );
	}
	
	Mogre::ushort RenderSystemCapabilities::NumMultiRenderTargets( )
	{
		return static_cast<const Ogre::RenderSystemCapabilities*>(_native)->numMultiRenderTargets( );
	}
	
	void RenderSystemCapabilities::SetCapability( Mogre::Capabilities c )
	{
		static_cast<Ogre::RenderSystemCapabilities*>(_native)->setCapability( (Ogre::Capabilities)c );
	}
	
	bool RenderSystemCapabilities::HasCapability( Mogre::Capabilities c )
	{
		return static_cast<const Ogre::RenderSystemCapabilities*>(_native)->hasCapability( (Ogre::Capabilities)c );
	}
	
	void RenderSystemCapabilities::Log( Mogre::Log^ pLog )
	{
		static_cast<Ogre::RenderSystemCapabilities*>(_native)->log( pLog );
	}
	
	
	//Protected Declarations
	
	

}
