/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreCompositorInstance.h"
#include "MogreMaterial.h"
#include "MogreCompositor.h"
#include "MogreCompositionTechnique.h"
#include "MogreCompositorChain.h"

namespace Mogre
{
	//################################################################
	//Listener
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	void CompositorInstance_Listener_Director::notifyMaterialSetup( Ogre::uint32 pass_id, Ogre::MaterialPtr& mat )
	{
		if (doCallForNotifyMaterialSetup)
		{
			_receiver->NotifyMaterialSetup( pass_id, mat );
		}
	}
	
	void CompositorInstance_Listener_Director::notifyMaterialRender( Ogre::uint32 pass_id, Ogre::MaterialPtr& mat )
	{
		if (doCallForNotifyMaterialRender)
		{
			_receiver->NotifyMaterialRender( pass_id, mat );
		}
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//CompositorInstance
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDKEY int
	#define STLDECL_MANAGEDVALUE Mogre::MaterialPtr^
	#define STLDECL_NATIVEKEY int
	#define STLDECL_NATIVEVALUE Ogre::MaterialPtr
	CPP_DECLARE_STLMAP( CompositorInstance::, QuadMaterialMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	CompositorInstance::CompositorInstance( Mogre::Compositor^ filter, Mogre::CompositionTechnique^ technique, Mogre::CompositorChain^ chain ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::CompositorInstance( filter, technique, chain);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::CompositorChain^ CompositorInstance::Chain::get()
	{
		return static_cast<Ogre::CompositorInstance*>(_native)->getChain( );
	}
	
	Mogre::Compositor^ CompositorInstance::Compositor::get()
	{
		return static_cast<Ogre::CompositorInstance*>(_native)->getCompositor( );
	}
	
	bool CompositorInstance::Enabled::get()
	{
		return static_cast<Ogre::CompositorInstance*>(_native)->getEnabled( );
	}
	void CompositorInstance::Enabled::set( bool value )
	{
		static_cast<Ogre::CompositorInstance*>(_native)->setEnabled( value );
	}
	
	Mogre::CompositionTechnique^ CompositorInstance::Technique::get()
	{
		return static_cast<Ogre::CompositorInstance*>(_native)->getTechnique( );
	}
	
	String^ CompositorInstance::GetTextureInstanceName( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return TO_CLR_STRING( static_cast<Ogre::CompositorInstance*>(_native)->getTextureInstanceName( o_name ) );
	}
	
	void CompositorInstance::_fireNotifyMaterialSetup( Mogre::uint32 pass_id, Mogre::MaterialPtr^ mat )
	{
		static_cast<Ogre::CompositorInstance*>(_native)->_fireNotifyMaterialSetup( pass_id, (Ogre::MaterialPtr&)mat );
	}
	
	void CompositorInstance::_fireNotifyMaterialRender( Mogre::uint32 pass_id, Mogre::MaterialPtr^ mat )
	{
		static_cast<Ogre::CompositorInstance*>(_native)->_fireNotifyMaterialRender( pass_id, (Ogre::MaterialPtr&)mat );
	}
	
	
	//Protected Declarations
	
	

}
