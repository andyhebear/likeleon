/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreCompositionTechnique.h"
#include "MogreCompositionTargetPass.h"
#include "MogreCompositor.h"
#include "MogreCompositorInstance.h"
#include "MogreCompositorChain.h"

namespace Mogre
{
	//################################################################
	//CompositionTechnique
	//################################################################
	
	//Nested Types
	//################################################################
	//TextureDefinition_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	String^ CompositionTechnique::TextureDefinition_NativePtr::name::get()
	{
		return TO_CLR_STRING( _native->name );
	}
	void CompositionTechnique::TextureDefinition_NativePtr::name::set( String^ value )
	{
		DECLARE_NATIVE_STRING( o_value, value )
	
		_native->name = o_value;
	}
	
	size_t CompositionTechnique::TextureDefinition_NativePtr::width::get()
	{
		return _native->width;
	}
	void CompositionTechnique::TextureDefinition_NativePtr::width::set( size_t value )
	{
		_native->width = value;
	}
	
	size_t CompositionTechnique::TextureDefinition_NativePtr::height::get()
	{
		return _native->height;
	}
	void CompositionTechnique::TextureDefinition_NativePtr::height::set( size_t value )
	{
		_native->height = value;
	}
	
	Mogre::PixelFormat CompositionTechnique::TextureDefinition_NativePtr::format::get()
	{
		return (Mogre::PixelFormat)_native->format;
	}
	void CompositionTechnique::TextureDefinition_NativePtr::format::set( Mogre::PixelFormat value )
	{
		_native->format = (Ogre::PixelFormat)value;
	}
	
	
	Mogre::CompositionTechnique::TextureDefinition_NativePtr CompositionTechnique::TextureDefinition_NativePtr::Create( )
	{
		TextureDefinition_NativePtr ptr;
		ptr._native = new Ogre::CompositionTechnique::TextureDefinition();
		return ptr;
	}
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDTYPE Mogre::CompositionTargetPass^
	#define STLDECL_NATIVETYPE Ogre::CompositionTargetPass*
	CPP_DECLARE_STLVECTOR( CompositionTechnique::, TargetPasses, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE Mogre::CompositionTechnique::TextureDefinition_NativePtr
	#define STLDECL_NATIVETYPE Ogre::CompositionTechnique::TextureDefinition*
	CPP_DECLARE_STLVECTOR( CompositionTechnique::, TextureDefinitions, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	CPP_DECLARE_ITERATOR( CompositionTechnique::, TargetPassIterator, Ogre::CompositionTechnique::TargetPassIterator, Mogre::CompositionTechnique::TargetPasses, Mogre::CompositionTargetPass^, Ogre::CompositionTargetPass*,  )
	
	CPP_DECLARE_ITERATOR( CompositionTechnique::, TextureDefinitionIterator, Ogre::CompositionTechnique::TextureDefinitionIterator, Mogre::CompositionTechnique::TextureDefinitions, Mogre::CompositionTechnique::TextureDefinition_NativePtr, Ogre::CompositionTechnique::TextureDefinition*,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	CompositionTechnique::CompositionTechnique( Mogre::Compositor^ parent ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::CompositionTechnique( parent);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	size_t CompositionTechnique::NumTargetPasses::get()
	{
		return static_cast<Ogre::CompositionTechnique*>(_native)->getNumTargetPasses( );
	}
	
	size_t CompositionTechnique::NumTextureDefinitions::get()
	{
		return static_cast<Ogre::CompositionTechnique*>(_native)->getNumTextureDefinitions( );
	}
	
	Mogre::CompositionTargetPass^ CompositionTechnique::OutputTargetPass::get()
	{
		return static_cast<Ogre::CompositionTechnique*>(_native)->getOutputTargetPass( );
	}
	
	Mogre::Compositor^ CompositionTechnique::Parent::get()
	{
		return static_cast<Ogre::CompositionTechnique*>(_native)->getParent( );
	}
	
	Mogre::CompositionTechnique::TextureDefinition_NativePtr CompositionTechnique::CreateTextureDefinition( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::CompositionTechnique*>(_native)->createTextureDefinition( o_name );
	}
	
	void CompositionTechnique::RemoveTextureDefinition( size_t idx )
	{
		static_cast<Ogre::CompositionTechnique*>(_native)->removeTextureDefinition( idx );
	}
	
	Mogre::CompositionTechnique::TextureDefinition_NativePtr CompositionTechnique::GetTextureDefinition( size_t idx )
	{
		return static_cast<Ogre::CompositionTechnique*>(_native)->getTextureDefinition( idx );
	}
	
	void CompositionTechnique::RemoveAllTextureDefinitions( )
	{
		static_cast<Ogre::CompositionTechnique*>(_native)->removeAllTextureDefinitions( );
	}
	
	Mogre::CompositionTechnique::TextureDefinitionIterator^ CompositionTechnique::GetTextureDefinitionIterator( )
	{
		return static_cast<Ogre::CompositionTechnique*>(_native)->getTextureDefinitionIterator( );
	}
	
	Mogre::CompositionTargetPass^ CompositionTechnique::CreateTargetPass( )
	{
		return static_cast<Ogre::CompositionTechnique*>(_native)->createTargetPass( );
	}
	
	void CompositionTechnique::RemoveTargetPass( size_t idx )
	{
		static_cast<Ogre::CompositionTechnique*>(_native)->removeTargetPass( idx );
	}
	
	Mogre::CompositionTargetPass^ CompositionTechnique::GetTargetPass( size_t idx )
	{
		return static_cast<Ogre::CompositionTechnique*>(_native)->getTargetPass( idx );
	}
	
	void CompositionTechnique::RemoveAllTargetPasses( )
	{
		static_cast<Ogre::CompositionTechnique*>(_native)->removeAllTargetPasses( );
	}
	
	Mogre::CompositionTechnique::TargetPassIterator^ CompositionTechnique::GetTargetPassIterator( )
	{
		return static_cast<Ogre::CompositionTechnique*>(_native)->getTargetPassIterator( );
	}
	
	bool CompositionTechnique::IsSupported( bool allowTextureDegradation )
	{
		return static_cast<Ogre::CompositionTechnique*>(_native)->isSupported( allowTextureDegradation );
	}
	
	Mogre::CompositorInstance^ CompositionTechnique::CreateInstance( Mogre::CompositorChain^ chain )
	{
		return static_cast<Ogre::CompositionTechnique*>(_native)->createInstance( chain );
	}
	
	void CompositionTechnique::DestroyInstance( Mogre::CompositorInstance^ instance )
	{
		static_cast<Ogre::CompositionTechnique*>(_native)->destroyInstance( instance );
	}
	
	
	//Protected Declarations
	
	

}
