/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreLogManager.h"
#include "MogreLog.h"

namespace Mogre
{
	//################################################################
	//LogManager
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	LogManager::LogManager( )
	{
		_createdByCLR = true;
		_native = new Ogre::LogManager();
	}
	
	Mogre::Log^ LogManager::DefaultLog::get()
	{
		return static_cast<Ogre::LogManager*>(_native)->getDefaultLog( );
	}
	
	Mogre::Log^ LogManager::CreateLog( String^ name, bool defaultLog, bool debuggerOutput, bool suppressFileOutput )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::LogManager*>(_native)->createLog( o_name, defaultLog, debuggerOutput, suppressFileOutput );
	}
	Mogre::Log^ LogManager::CreateLog( String^ name, bool defaultLog, bool debuggerOutput )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::LogManager*>(_native)->createLog( o_name, defaultLog, debuggerOutput );
	}
	Mogre::Log^ LogManager::CreateLog( String^ name, bool defaultLog )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::LogManager*>(_native)->createLog( o_name, defaultLog );
	}
	Mogre::Log^ LogManager::CreateLog( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::LogManager*>(_native)->createLog( o_name );
	}
	
	Mogre::Log^ LogManager::GetLog( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::LogManager*>(_native)->getLog( o_name );
	}
	
	void LogManager::DestroyLog( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::LogManager*>(_native)->destroyLog( o_name );
	}
	
	void LogManager::DestroyLog( Mogre::Log^ log )
	{
		static_cast<Ogre::LogManager*>(_native)->destroyLog( log );
	}
	
	Mogre::Log^ LogManager::SetDefaultLog( Mogre::Log^ newLog )
	{
		return static_cast<Ogre::LogManager*>(_native)->setDefaultLog( newLog );
	}
	
	void LogManager::LogMessage( String^ message, Mogre::LogMessageLevel lml, bool maskDebug )
	{
		DECLARE_NATIVE_STRING( o_message, message )
	
		static_cast<Ogre::LogManager*>(_native)->logMessage( o_message, (Ogre::LogMessageLevel)lml, maskDebug );
	}
	void LogManager::LogMessage( String^ message, Mogre::LogMessageLevel lml )
	{
		DECLARE_NATIVE_STRING( o_message, message )
	
		static_cast<Ogre::LogManager*>(_native)->logMessage( o_message, (Ogre::LogMessageLevel)lml );
	}
	void LogManager::LogMessage( String^ message )
	{
		DECLARE_NATIVE_STRING( o_message, message )
	
		static_cast<Ogre::LogManager*>(_native)->logMessage( o_message );
	}
	
	void LogManager::LogMessage( Mogre::LogMessageLevel lml, String^ message, bool maskDebug )
	{
		DECLARE_NATIVE_STRING( o_message, message )
	
		static_cast<Ogre::LogManager*>(_native)->logMessage( (Ogre::LogMessageLevel)lml, o_message, maskDebug );
	}
	void LogManager::LogMessage( Mogre::LogMessageLevel lml, String^ message )
	{
		DECLARE_NATIVE_STRING( o_message, message )
	
		static_cast<Ogre::LogManager*>(_native)->logMessage( (Ogre::LogMessageLevel)lml, o_message );
	}
	
	void LogManager::SetLogDetail( Mogre::LoggingLevel ll )
	{
		static_cast<Ogre::LogManager*>(_native)->setLogDetail( (Ogre::LoggingLevel)ll );
	}
	
	
	//Protected Declarations
	
	

}
