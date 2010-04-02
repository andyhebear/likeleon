/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreProfiler.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//Profiler
	//################################################################
	
	public ref class Profiler
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		static Profiler^ _singleton;
		Ogre::Profiler* _native;
		bool _createdByCLR;
	
		//Internal Declarations
	public protected:
		Profiler( Ogre::Profiler* obj ) : _native(obj)
		{
		}
	
	
		//Public Declarations
	public:
		Profiler( );
	
		static property Profiler^ Singleton
		{
			Profiler^ get()
			{
				if (_singleton == CLR_NULL)
				{
					Ogre::Profiler* ptr = Ogre::Profiler::getSingletonPtr();
					if ( ptr ) _singleton = gcnew Profiler( ptr );
				}
				return _singleton;
			}
		}
	
		property bool Enabled
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property Mogre::Timer^ Timer
		{
		public:
			Mogre::Timer^ get();
		public:
			void set(Mogre::Timer^ t);
		}
	
		property Mogre::uint UpdateDisplayFrequency
		{
		public:
			Mogre::uint get();
		public:
			void set(Mogre::uint freq);
		}
	
		void BeginProfile( String^ profileName );
	
		void EndProfile( String^ profileName );
	
		void EnableProfile( String^ profileName );
	
		void DisableProfile( String^ profileName );
	
		bool WatchForMax( String^ profileName );
	
		bool WatchForMin( String^ profileName );
	
		bool WatchForLimit( String^ profileName, Mogre::Real limit, bool greaterThan );
		bool WatchForLimit( String^ profileName, Mogre::Real limit );
	
		void LogResults( );
	
		void Reset( );
	
	
		//Protected Declarations
	protected public:
	
	};
	

}
