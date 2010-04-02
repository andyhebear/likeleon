/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreUnifiedHighLevelGpuProgram.h"
#include "MogreResourceManager.h"
#include "MogreResource.h"
#include "MogreHighLevelGpuProgram.h"
#include "MogreGpuProgram.h"

namespace Mogre
{
	//################################################################
	//UnifiedHighLevelGpuProgram
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	UnifiedHighLevelGpuProgram::UnifiedHighLevelGpuProgram( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader ) : HighLevelGpuProgram((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		_native = new Ogre::UnifiedHighLevelGpuProgram( creator, o_name, handle, o_group, isManual, loader);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	UnifiedHighLevelGpuProgram::UnifiedHighLevelGpuProgram( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual ) : HighLevelGpuProgram((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		_native = new Ogre::UnifiedHighLevelGpuProgram( creator, o_name, handle, o_group, isManual);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	UnifiedHighLevelGpuProgram::UnifiedHighLevelGpuProgram( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group ) : HighLevelGpuProgram((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		_native = new Ogre::UnifiedHighLevelGpuProgram( creator, o_name, handle, o_group);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	bool UnifiedHighLevelGpuProgram::HasCompileError::get()
	{
		return static_cast<const Ogre::UnifiedHighLevelGpuProgram*>(_native)->hasCompileError( );
	}
	
	bool UnifiedHighLevelGpuProgram::HasDefaultParameters::get()
	{
		return static_cast<const Ogre::UnifiedHighLevelGpuProgram*>(_native)->hasDefaultParameters( );
	}
	
	bool UnifiedHighLevelGpuProgram::IsBackgroundLoaded::get()
	{
		return static_cast<const Ogre::UnifiedHighLevelGpuProgram*>(_native)->isBackgroundLoaded( );
	}
	
	bool UnifiedHighLevelGpuProgram::IsLoaded::get()
	{
		return static_cast<const Ogre::UnifiedHighLevelGpuProgram*>(_native)->isLoaded( );
	}
	
	bool UnifiedHighLevelGpuProgram::IsMorphAnimationIncluded::get()
	{
		return static_cast<const Ogre::UnifiedHighLevelGpuProgram*>(_native)->isMorphAnimationIncluded( );
	}
	
	bool UnifiedHighLevelGpuProgram::IsPoseAnimationIncluded::get()
	{
		return static_cast<const Ogre::UnifiedHighLevelGpuProgram*>(_native)->isPoseAnimationIncluded( );
	}
	
	bool UnifiedHighLevelGpuProgram::IsReloadable::get()
	{
		return static_cast<const Ogre::UnifiedHighLevelGpuProgram*>(_native)->isReloadable( );
	}
	
	bool UnifiedHighLevelGpuProgram::IsSkeletalAnimationIncluded::get()
	{
		return static_cast<const Ogre::UnifiedHighLevelGpuProgram*>(_native)->isSkeletalAnimationIncluded( );
	}
	
	bool UnifiedHighLevelGpuProgram::IsSupported::get()
	{
		return static_cast<const Ogre::UnifiedHighLevelGpuProgram*>(_native)->isSupported( );
	}
	
	bool UnifiedHighLevelGpuProgram::IsVertexTextureFetchRequired::get()
	{
		return static_cast<const Ogre::UnifiedHighLevelGpuProgram*>(_native)->isVertexTextureFetchRequired( );
	}
	
	String^ UnifiedHighLevelGpuProgram::Language::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::UnifiedHighLevelGpuProgram*>(_native)->getLanguage( ) );
	}
	
	Mogre::Resource::LoadingState UnifiedHighLevelGpuProgram::LoadingState::get()
	{
		return (Mogre::Resource::LoadingState)static_cast<const Ogre::UnifiedHighLevelGpuProgram*>(_native)->getLoadingState( );
	}
	
	bool UnifiedHighLevelGpuProgram::PassSurfaceAndLightStates::get()
	{
		return static_cast<const Ogre::UnifiedHighLevelGpuProgram*>(_native)->getPassSurfaceAndLightStates( );
	}
	
	size_t UnifiedHighLevelGpuProgram::Size::get()
	{
		return static_cast<const Ogre::UnifiedHighLevelGpuProgram*>(_native)->getSize( );
	}
	
	void UnifiedHighLevelGpuProgram::AddDelegateProgram( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::UnifiedHighLevelGpuProgram*>(_native)->addDelegateProgram( o_name );
	}
	
	void UnifiedHighLevelGpuProgram::ClearDelegatePrograms( )
	{
		static_cast<Ogre::UnifiedHighLevelGpuProgram*>(_native)->clearDelegatePrograms( );
	}
	
	Mogre::HighLevelGpuProgramPtr^ UnifiedHighLevelGpuProgram::_getDelegate( )
	{
		return static_cast<const Ogre::UnifiedHighLevelGpuProgram*>(_native)->_getDelegate( );
	}
	
	Mogre::GpuProgramParametersSharedPtr^ UnifiedHighLevelGpuProgram::CreateParameters( )
	{
		return static_cast<Ogre::UnifiedHighLevelGpuProgram*>(_native)->createParameters( );
	}
	
	Mogre::GpuProgram^ UnifiedHighLevelGpuProgram::_getBindingDelegate( )
	{
		return static_cast<Ogre::UnifiedHighLevelGpuProgram*>(_native)->_getBindingDelegate( );
	}
	
	Mogre::GpuProgramParametersSharedPtr^ UnifiedHighLevelGpuProgram::GetDefaultParameters( )
	{
		return static_cast<Ogre::UnifiedHighLevelGpuProgram*>(_native)->getDefaultParameters( );
	}
	
	void UnifiedHighLevelGpuProgram::ResetCompileError( )
	{
		static_cast<Ogre::UnifiedHighLevelGpuProgram*>(_native)->resetCompileError( );
	}
	
	void UnifiedHighLevelGpuProgram::Load( bool backgroundThread )
	{
		static_cast<Ogre::UnifiedHighLevelGpuProgram*>(_native)->load( backgroundThread );
	}
	void UnifiedHighLevelGpuProgram::Load( )
	{
		static_cast<Ogre::UnifiedHighLevelGpuProgram*>(_native)->load( );
	}
	
	void UnifiedHighLevelGpuProgram::Reload( )
	{
		static_cast<Ogre::UnifiedHighLevelGpuProgram*>(_native)->reload( );
	}
	
	Mogre::Resource::LoadingState UnifiedHighLevelGpuProgram::IsLoading( )
	{
		return (Mogre::Resource::LoadingState)static_cast<const Ogre::UnifiedHighLevelGpuProgram*>(_native)->isLoading( );
	}
	
	void UnifiedHighLevelGpuProgram::Unload( )
	{
		static_cast<Ogre::UnifiedHighLevelGpuProgram*>(_native)->unload( );
	}
	
	void UnifiedHighLevelGpuProgram::Touch( )
	{
		static_cast<Ogre::UnifiedHighLevelGpuProgram*>(_native)->touch( );
	}
	
	void UnifiedHighLevelGpuProgram::SetBackgroundLoaded( bool bl )
	{
		static_cast<Ogre::UnifiedHighLevelGpuProgram*>(_native)->setBackgroundLoaded( bl );
	}
	
	void UnifiedHighLevelGpuProgram::EscalateLoading( )
	{
		static_cast<Ogre::UnifiedHighLevelGpuProgram*>(_native)->escalateLoading( );
	}
	
	
	//Protected Declarations
	
	

}
