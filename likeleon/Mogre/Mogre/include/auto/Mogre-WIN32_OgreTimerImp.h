/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "WIN32/OgreTimerImp.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//Timer
	//################################################################
	
	public ref class Timer
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Timer( Ogre::Timer* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~Timer()
		{
			this->!Timer();
		}
		!Timer()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::Timer* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		Timer( );
	
	
		property unsigned long Microseconds
		{
		public:
			unsigned long get();
		}
	
		property unsigned long MicrosecondsCPU
		{
		public:
			unsigned long get();
		}
	
		property unsigned long Milliseconds
		{
		public:
			unsigned long get();
		}
	
		property unsigned long MillisecondsCPU
		{
		public:
			unsigned long get();
		}
	
		bool SetOption( String^ strKey, const void* pValue );
	
		void Reset( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( Timer )
	
		//Protected Declarations
	protected public:
	
	};
	

}
