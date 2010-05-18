/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreLogManager.h"
#include "MogrePrerequisites.h"
#include "MogreLog.h"

namespace Mogre
{
	//################################################################
	//LogManager
	//################################################################
	
	public ref class LogManager
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		static LogManager^ _singleton;
		Ogre::LogManager* _native;
		bool _createdByCLR;
	
		//Internal Declarations
	public protected:
		LogManager( Ogre::LogManager* obj ) : _native(obj)
		{
		}
	
	
		//Public Declarations
	public:
		LogManager( );
	
		static property LogManager^ Singleton
		{
			LogManager^ get()
			{
				if (_singleton == CLR_NULL)
				{
					Ogre::LogManager* ptr = Ogre::LogManager::getSingletonPtr();
					if ( ptr ) _singleton = gcnew LogManager( ptr );
				}
				return _singleton;
			}
		}
	
		property Mogre::Log^ DefaultLog
		{
		public:
			Mogre::Log^ get();
		}
	
		Mogre::Log^ CreateLog( String^ name, bool defaultLog, bool debuggerOutput, bool suppressFileOutput );
		Mogre::Log^ CreateLog( String^ name, bool defaultLog, bool debuggerOutput );
		Mogre::Log^ CreateLog( String^ name, bool defaultLog );
		Mogre::Log^ CreateLog( String^ name );
	
		Mogre::Log^ GetLog( String^ name );
	
		void DestroyLog( String^ name );
	
		void DestroyLog( Mogre::Log^ log );
	
		Mogre::Log^ SetDefaultLog( Mogre::Log^ newLog );
	
		void LogMessage( String^ message, Mogre::LogMessageLevel lml, bool maskDebug );
		void LogMessage( String^ message, Mogre::LogMessageLevel lml );
		void LogMessage( String^ message );
	
		void LogMessage( Mogre::LogMessageLevel lml, String^ message, bool maskDebug );
		void LogMessage( Mogre::LogMessageLevel lml, String^ message );
	
		void SetLogDetail( Mogre::LoggingLevel ll );
	
	
		//Protected Declarations
	protected public:
	
	};
	

}
