/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreCompositor.h"
#include "MogreCompositionTechnique.h"
#include "MogreResourceManager.h"
#include "MogreResource.h"

namespace Mogre
{
	//################################################################
	//Compositor
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Mogre::CompositionTechnique^
	#define STLDECL_NATIVETYPE Ogre::CompositionTechnique*
	CPP_DECLARE_STLVECTOR( Compositor::, Techniques, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	CPP_DECLARE_ITERATOR( Compositor::, TechniqueIterator, Ogre::Compositor::TechniqueIterator, Mogre::Compositor::Techniques, Mogre::CompositionTechnique^, Ogre::CompositionTechnique*,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Compositor::Compositor( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader ) : Resource((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		_native = new Ogre::Compositor( creator, o_name, handle, o_group, isManual, loader);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	Compositor::Compositor( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual ) : Resource((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		_native = new Ogre::Compositor( creator, o_name, handle, o_group, isManual);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	Compositor::Compositor( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group ) : Resource((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		_native = new Ogre::Compositor( creator, o_name, handle, o_group);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	size_t Compositor::NumSupportedTechniques::get()
	{
		return static_cast<Ogre::Compositor*>(_native)->getNumSupportedTechniques( );
	}
	
	size_t Compositor::NumTechniques::get()
	{
		return static_cast<Ogre::Compositor*>(_native)->getNumTechniques( );
	}
	
	Mogre::CompositionTechnique^ Compositor::CreateTechnique( )
	{
		return static_cast<Ogre::Compositor*>(_native)->createTechnique( );
	}
	
	void Compositor::RemoveTechnique( size_t idx )
	{
		static_cast<Ogre::Compositor*>(_native)->removeTechnique( idx );
	}
	
	Mogre::CompositionTechnique^ Compositor::GetTechnique( size_t idx )
	{
		return static_cast<Ogre::Compositor*>(_native)->getTechnique( idx );
	}
	
	void Compositor::RemoveAllTechniques( )
	{
		static_cast<Ogre::Compositor*>(_native)->removeAllTechniques( );
	}
	
	Mogre::Compositor::TechniqueIterator^ Compositor::GetTechniqueIterator( )
	{
		return static_cast<Ogre::Compositor*>(_native)->getTechniqueIterator( );
	}
	
	Mogre::CompositionTechnique^ Compositor::GetSupportedTechnique( size_t idx )
	{
		return static_cast<Ogre::Compositor*>(_native)->getSupportedTechnique( idx );
	}
	
	Mogre::Compositor::TechniqueIterator^ Compositor::GetSupportedTechniqueIterator( )
	{
		return static_cast<Ogre::Compositor*>(_native)->getSupportedTechniqueIterator( );
	}
	
	
	//Protected Declarations
	
	

}
