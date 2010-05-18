/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreRenderTexture.h"
#include "MogreRenderTarget.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//RenderTexture
	//################################################################
	
	public ref class RenderTexture : public RenderTarget
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		RenderTexture( CLRObject* obj ) : RenderTarget(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		void WriteContentsToFile( String^ filename );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( RenderTexture )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//MultiRenderTarget
	//################################################################
	
	public ref class MultiRenderTarget : public RenderTarget
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		MultiRenderTarget( CLRObject* obj ) : RenderTarget(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		void BindSurface( size_t attachment, Mogre::RenderTexture^ target );
	
		void UnbindSurface( size_t attachment );
	
		void WriteContentsToFile( String^ filename );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( MultiRenderTarget )
	
		//Protected Declarations
	protected public:
	
	};
	

}
