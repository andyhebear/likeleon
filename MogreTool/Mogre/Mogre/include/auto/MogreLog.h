/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreLog.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	public enum class LogMessageLevel
	{
		LML_TRIVIAL = Ogre::LML_TRIVIAL,
		LML_NORMAL = Ogre::LML_NORMAL,
		LML_CRITICAL = Ogre::LML_CRITICAL
	};
	
	public enum class LoggingLevel
	{
		LL_LOW = Ogre::LL_LOW,
		LL_NORMAL = Ogre::LL_NORMAL,
		LL_BOREME = Ogre::LL_BOREME
	};
	
	interface class ILogListener_Receiver
	{
		void MessageLogged( String^ message, Mogre::LogMessageLevel lml, bool maskDebug, String^ logName );
	
	};
	
	public ref class LogListener abstract sealed
	{
	public:
		delegate static void MessageLoggedHandler( String^ message, Mogre::LogMessageLevel lml, bool maskDebug, String^ logName );
	};
	
	//################################################################
	//LogListener
	//################################################################
	
	class LogListener_Director : public Ogre::LogListener
	{
		//Nested Types
	
		//Private Declarations
	private:
		gcroot<ILogListener_Receiver^> _receiver;
	
		//Internal Declarations
	
		//Public Declarations
	public:
		LogListener_Director( ILogListener_Receiver^ recv )
			: _receiver(recv), doCallForMessageLogged(false)
		{
		}
	
		bool doCallForMessageLogged;
	
		virtual void messageLogged( const Ogre::String& message, Ogre::LogMessageLevel lml, bool maskDebug, const Ogre::String& logName ) override;
	
	
		//Protected Declarations
	
	};
	
	//################################################################
	//Log
	//################################################################
	
	public ref class Log : public INativePointer, public ILogListener_Receiver
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		
		//Event and Listener fields
		LogListener_Director* _logListener;
		Mogre::LogListener::MessageLoggedHandler^ _messageLogged;
	
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		Log( Ogre::Log* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~Log()
		{
			if (_logListener != 0)
			{
				if (_native != 0) static_cast<Ogre::Log*>(_native)->removeListener(_logListener);
				delete _logListener; _logListener = 0;
			}
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::Log* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		Log( String^ name, bool debugOutput, bool suppressFileOutput );
		Log( String^ name, bool debugOutput );
		Log( String^ name );
	
	
		event Mogre::LogListener::MessageLoggedHandler^ MessageLogged
		{
			void add(Mogre::LogListener::MessageLoggedHandler^ hnd)
			{
				if (_messageLogged == CLR_NULL)
				{
					if (_logListener == 0)
					{
						_logListener = new LogListener_Director(this);
						static_cast<Ogre::Log*>(_native)->addListener(_logListener);
					}
					_logListener->doCallForMessageLogged = true;
				}
				_messageLogged += hnd;
			}
			void remove(Mogre::LogListener::MessageLoggedHandler^ hnd)
			{
				_messageLogged -= hnd;
				if (_messageLogged == CLR_NULL) _logListener->doCallForMessageLogged = false;
			}
		private:
			void raise( String^ message, Mogre::LogMessageLevel lml, bool maskDebug, String^ logName )
			{
				if (_messageLogged)
					_messageLogged->Invoke( message, lml, maskDebug, logName );
			}
		}
	
	
		property bool IsDebugOutputEnabled
		{
		public:
			bool get();
		}
	
		property bool IsFileOutputSuppressed
		{
		public:
			bool get();
		}
	
		property Mogre::LoggingLevel LogDetail
		{
		public:
			Mogre::LoggingLevel get();
		public:
			void set(Mogre::LoggingLevel ll);
		}
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		void LogMessage( String^ message, Mogre::LogMessageLevel lml, bool maskDebug );
		void LogMessage( String^ message, Mogre::LogMessageLevel lml );
		void LogMessage( String^ message );
	
		void SetDebugOutputEnabled( bool debugOutput );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( Log )
	
		//Protected Declarations
	protected public:
		virtual void OnMessageLogged( String^ message, Mogre::LogMessageLevel lml, bool maskDebug, String^ logName ) = ILogListener_Receiver::MessageLogged
		{
			MessageLogged( message, lml, maskDebug, logName );
		}
	
	
	
	};
	

}
