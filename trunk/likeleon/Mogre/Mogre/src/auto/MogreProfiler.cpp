/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreProfiler.h"
#include "Mogre-WIN32_OgreTimerImp.h"

namespace Mogre
{
	//################################################################
	//Profiler
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Profiler::Profiler( )
	{
		_createdByCLR = true;
		_native = new Ogre::Profiler();
	}
	
	bool Profiler::Enabled::get()
	{
		return static_cast<const Ogre::Profiler*>(_native)->getEnabled( );
	}
	void Profiler::Enabled::set( bool enabled )
	{
		static_cast<Ogre::Profiler*>(_native)->setEnabled( enabled );
	}
	
	Mogre::Timer^ Profiler::Timer::get()
	{
		return static_cast<Ogre::Profiler*>(_native)->getTimer( );
	}
	void Profiler::Timer::set( Mogre::Timer^ t )
	{
		static_cast<Ogre::Profiler*>(_native)->setTimer( t );
	}
	
	Mogre::uint Profiler::UpdateDisplayFrequency::get()
	{
		return static_cast<const Ogre::Profiler*>(_native)->getUpdateDisplayFrequency( );
	}
	void Profiler::UpdateDisplayFrequency::set( Mogre::uint freq )
	{
		static_cast<Ogre::Profiler*>(_native)->setUpdateDisplayFrequency( freq );
	}
	
	void Profiler::BeginProfile( String^ profileName )
	{
		DECLARE_NATIVE_STRING( o_profileName, profileName )
	
		static_cast<Ogre::Profiler*>(_native)->beginProfile( o_profileName );
	}
	
	void Profiler::EndProfile( String^ profileName )
	{
		DECLARE_NATIVE_STRING( o_profileName, profileName )
	
		static_cast<Ogre::Profiler*>(_native)->endProfile( o_profileName );
	}
	
	void Profiler::EnableProfile( String^ profileName )
	{
		DECLARE_NATIVE_STRING( o_profileName, profileName )
	
		static_cast<Ogre::Profiler*>(_native)->enableProfile( o_profileName );
	}
	
	void Profiler::DisableProfile( String^ profileName )
	{
		DECLARE_NATIVE_STRING( o_profileName, profileName )
	
		static_cast<Ogre::Profiler*>(_native)->disableProfile( o_profileName );
	}
	
	bool Profiler::WatchForMax( String^ profileName )
	{
		DECLARE_NATIVE_STRING( o_profileName, profileName )
	
		return static_cast<Ogre::Profiler*>(_native)->watchForMax( o_profileName );
	}
	
	bool Profiler::WatchForMin( String^ profileName )
	{
		DECLARE_NATIVE_STRING( o_profileName, profileName )
	
		return static_cast<Ogre::Profiler*>(_native)->watchForMin( o_profileName );
	}
	
	bool Profiler::WatchForLimit( String^ profileName, Mogre::Real limit, bool greaterThan )
	{
		DECLARE_NATIVE_STRING( o_profileName, profileName )
	
		return static_cast<Ogre::Profiler*>(_native)->watchForLimit( o_profileName, limit, greaterThan );
	}
	bool Profiler::WatchForLimit( String^ profileName, Mogre::Real limit )
	{
		DECLARE_NATIVE_STRING( o_profileName, profileName )
	
		return static_cast<Ogre::Profiler*>(_native)->watchForLimit( o_profileName, limit );
	}
	
	void Profiler::LogResults( )
	{
		static_cast<Ogre::Profiler*>(_native)->logResults( );
	}
	
	void Profiler::Reset( )
	{
		static_cast<Ogre::Profiler*>(_native)->reset( );
	}
	
	
	//Protected Declarations
	
	

}
