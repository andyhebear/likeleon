/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreCompositionTargetPass.h"
#include "MogreCompositionPass.h"
#include "MogreCompositionTechnique.h"

namespace Mogre
{
	//################################################################
	//CompositionTargetPass
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Mogre::CompositionPass^
	#define STLDECL_NATIVETYPE Ogre::CompositionPass*
	CPP_DECLARE_STLVECTOR( CompositionTargetPass::, Passes, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	CPP_DECLARE_ITERATOR( CompositionTargetPass::, PassIterator, Ogre::CompositionTargetPass::PassIterator, Mogre::CompositionTargetPass::Passes, Mogre::CompositionPass^, Ogre::CompositionPass*,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	CompositionTargetPass::CompositionTargetPass( Mogre::CompositionTechnique^ parent )
	{
		_createdByCLR = true;
		_native = new Ogre::CompositionTargetPass( parent);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	float CompositionTargetPass::LodBias::get()
	{
		return static_cast<Ogre::CompositionTargetPass*>(_native)->getLodBias( );
	}
	void CompositionTargetPass::LodBias::set( float bias )
	{
		static_cast<Ogre::CompositionTargetPass*>(_native)->setLodBias( bias );
	}
	
	String^ CompositionTargetPass::MaterialScheme::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::CompositionTargetPass*>(_native)->getMaterialScheme( ) );
	}
	void CompositionTargetPass::MaterialScheme::set( String^ schemeName )
	{
		DECLARE_NATIVE_STRING( o_schemeName, schemeName )
	
		static_cast<Ogre::CompositionTargetPass*>(_native)->setMaterialScheme( o_schemeName );
	}
	
	size_t CompositionTargetPass::NumPasses::get()
	{
		return static_cast<Ogre::CompositionTargetPass*>(_native)->getNumPasses( );
	}
	
	bool CompositionTargetPass::OnlyInitial::get()
	{
		return static_cast<Ogre::CompositionTargetPass*>(_native)->getOnlyInitial( );
	}
	void CompositionTargetPass::OnlyInitial::set( bool value )
	{
		static_cast<Ogre::CompositionTargetPass*>(_native)->setOnlyInitial( value );
	}
	
	String^ CompositionTargetPass::OutputName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::CompositionTargetPass*>(_native)->getOutputName( ) );
	}
	void CompositionTargetPass::OutputName::set( String^ out )
	{
		DECLARE_NATIVE_STRING( o_out, out )
	
		static_cast<Ogre::CompositionTargetPass*>(_native)->setOutputName( o_out );
	}
	
	Mogre::CompositionTechnique^ CompositionTargetPass::Parent::get()
	{
		return static_cast<Ogre::CompositionTargetPass*>(_native)->getParent( );
	}
	
	bool CompositionTargetPass::ShadowsEnabled::get()
	{
		return static_cast<const Ogre::CompositionTargetPass*>(_native)->getShadowsEnabled( );
	}
	void CompositionTargetPass::ShadowsEnabled::set( bool enabled )
	{
		static_cast<Ogre::CompositionTargetPass*>(_native)->setShadowsEnabled( enabled );
	}
	
	Mogre::uint32 CompositionTargetPass::VisibilityMask::get()
	{
		return static_cast<Ogre::CompositionTargetPass*>(_native)->getVisibilityMask( );
	}
	void CompositionTargetPass::VisibilityMask::set( Mogre::uint32 mask )
	{
		static_cast<Ogre::CompositionTargetPass*>(_native)->setVisibilityMask( mask );
	}
	
	void CompositionTargetPass::SetInputMode( Mogre::CompositionTargetPass::InputMode mode )
	{
		static_cast<Ogre::CompositionTargetPass*>(_native)->setInputMode( (Ogre::CompositionTargetPass::InputMode)mode );
	}
	
	Mogre::CompositionTargetPass::InputMode CompositionTargetPass::GetInputMode( )
	{
		return (Mogre::CompositionTargetPass::InputMode)static_cast<const Ogre::CompositionTargetPass*>(_native)->getInputMode( );
	}
	
	Mogre::CompositionPass^ CompositionTargetPass::CreatePass( )
	{
		return static_cast<Ogre::CompositionTargetPass*>(_native)->createPass( );
	}
	
	void CompositionTargetPass::RemovePass( size_t idx )
	{
		static_cast<Ogre::CompositionTargetPass*>(_native)->removePass( idx );
	}
	
	Mogre::CompositionPass^ CompositionTargetPass::GetPass( size_t idx )
	{
		return static_cast<Ogre::CompositionTargetPass*>(_native)->getPass( idx );
	}
	
	void CompositionTargetPass::RemoveAllPasses( )
	{
		static_cast<Ogre::CompositionTargetPass*>(_native)->removeAllPasses( );
	}
	
	Mogre::CompositionTargetPass::PassIterator^ CompositionTargetPass::GetPassIterator( )
	{
		return static_cast<Ogre::CompositionTargetPass*>(_native)->getPassIterator( );
	}
	
	bool CompositionTargetPass::_isSupported( )
	{
		return static_cast<Ogre::CompositionTargetPass*>(_native)->_isSupported( );
	}
	
	
	//Protected Declarations
	
	

}
