/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "Mogre-WIN32_OgreTimerImp.h"

namespace Mogre
{
	//################################################################
	//Timer
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Timer::Timer( )
	{
		_createdByCLR = true;
		_native = new Ogre::Timer();
	}
	
	unsigned long Timer::Microseconds::get()
	{
		return static_cast<Ogre::Timer*>(_native)->getMicroseconds( );
	}
	
	unsigned long Timer::MicrosecondsCPU::get()
	{
		return static_cast<Ogre::Timer*>(_native)->getMicrosecondsCPU( );
	}
	
	unsigned long Timer::Milliseconds::get()
	{
		return static_cast<Ogre::Timer*>(_native)->getMilliseconds( );
	}
	
	unsigned long Timer::MillisecondsCPU::get()
	{
		return static_cast<Ogre::Timer*>(_native)->getMillisecondsCPU( );
	}
	
	bool Timer::SetOption( String^ strKey, const void* pValue )
	{
		DECLARE_NATIVE_STRING( o_strKey, strKey )
	
		return static_cast<Ogre::Timer*>(_native)->setOption( o_strKey, pValue );
	}
	
	void Timer::Reset( )
	{
		static_cast<Ogre::Timer*>(_native)->reset( );
	}
	
	
	//Protected Declarations
	
	

}
