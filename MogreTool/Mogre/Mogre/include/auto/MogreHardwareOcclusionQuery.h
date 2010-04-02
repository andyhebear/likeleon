/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreHardwareOcclusionQuery.h"

namespace Mogre
{
	//################################################################
	//HardwareOcclusionQuery
	//################################################################
	
	public ref class HardwareOcclusionQuery : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		HardwareOcclusionQuery( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property bool IsStillOutstanding
		{
		public:
			bool get();
		}
	
		property unsigned int LastQuerysPixelcount
		{
		public:
			unsigned int get();
		}
	
		void BeginOcclusionQuery( );
	
		void EndOcclusionQuery( );
	
		bool PullOcclusionQuery( [Out] unsigned int% NumOfFragments );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( HardwareOcclusionQuery )
	
		//Protected Declarations
	protected public:
	
	};
	

}
