/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreUnifiedHighLevelGpuProgram.h"
#include "MogreHighLevelGpuProgram.h"
#include "MogrePrerequisites.h"
#include "MogreResource.h"

namespace Mogre
{
	//################################################################
	//UnifiedHighLevelGpuProgram
	//################################################################
	
	public ref class UnifiedHighLevelGpuProgram : public HighLevelGpuProgram
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		UnifiedHighLevelGpuProgram( CLRObject* obj ) : HighLevelGpuProgram(obj)
		{
		}
	
	
		//Public Declarations
	public:
		UnifiedHighLevelGpuProgram( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader );
		UnifiedHighLevelGpuProgram( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual );
		UnifiedHighLevelGpuProgram( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group );
	
	
		property bool HasCompileError
		{
		public:
			bool get();
		}
	
		property bool HasDefaultParameters
		{
		public:
			bool get();
		}
	
		property bool IsBackgroundLoaded
		{
		public:
			bool get();
		}
	
		property bool IsLoaded
		{
		public:
			bool get();
		}
	
		property bool IsMorphAnimationIncluded
		{
		public:
			bool get();
		}
	
		property bool IsPoseAnimationIncluded
		{
		public:
			bool get();
		}
	
		property bool IsReloadable
		{
		public:
			bool get();
		}
	
		property bool IsSkeletalAnimationIncluded
		{
		public:
			bool get();
		}
	
		property bool IsSupported
		{
		public:
			bool get();
		}
	
		property bool IsVertexTextureFetchRequired
		{
		public:
			bool get();
		}
	
		property String^ Language
		{
		public:
			String^ get();
		}
	
		property Mogre::Resource::LoadingState LoadingState
		{
		public:
			Mogre::Resource::LoadingState get();
		}
	
		property bool PassSurfaceAndLightStates
		{
		public:
			bool get();
		}
	
		property size_t Size
		{
		public:
			size_t get();
		}
	
		void AddDelegateProgram( String^ name );
	
		void ClearDelegatePrograms( );
	
		Mogre::HighLevelGpuProgramPtr^ _getDelegate( );
	
		Mogre::GpuProgramParametersSharedPtr^ CreateParameters( );
	
		Mogre::GpuProgram^ _getBindingDelegate( );
	
		Mogre::GpuProgramParametersSharedPtr^ GetDefaultParameters( );
	
		void ResetCompileError( );
	
		void Load( bool backgroundThread );
		void Load( );
	
		void Reload( );
	
		Mogre::Resource::LoadingState IsLoading( );
	
		void Unload( );
	
		void Touch( );
	
		void SetBackgroundLoaded( bool bl );
	
		void EscalateLoading( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( UnifiedHighLevelGpuProgram )
	
		//Protected Declarations
	protected public:
	
	};
	

}
