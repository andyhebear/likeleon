/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreRoot.h"
#include "MogreFrameListener.h"
#include "MogrePrerequisites.h"
#include "MogreSceneManager.h"
#include "MogreSceneManagerEnumerator.h"
#include "MogrePlatform.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//Root
	//################################################################
	
	public ref class Root : public IFrameListener_Receiver
	{
		//Nested Types
		public: ref class PluginLibList;
		public: ref class PluginInstanceList;
	
		#define STLDECL_MANAGEDTYPE Mogre::IPlugin^
		#define STLDECL_NATIVETYPE Ogre::Plugin*
		public: INC_DECLARE_STLVECTOR( PluginInstanceList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
		
		//Event and Listener fields
		FrameListener_Director* _frameListener;
		Mogre::FrameListener::FrameStartedHandler^ _frameStarted;
		array<Delegate^>^ _frameStartedDelegates;
		Mogre::FrameListener::FrameEndedHandler^ _frameEnded;
		array<Delegate^>^ _frameEndedDelegates;
	
		static Root^ _singleton;
		Ogre::Root* _native;
		bool _createdByCLR;
	
		//Internal Declarations
	public protected:
		Root( Ogre::Root* obj ) : _native(obj)
		{
		}
	
		~Root()
		{
			this->!Root();
		}
		!Root()
		{
			_native = Ogre::Root::getSingletonPtr();
			
			        // Collect all SharedPtr objects that are waiting for finalization
			        System::GC::Collect();
			        System::GC::WaitForPendingFinalizers();
			        System::GC::Collect();
			      
			if (_frameListener != 0)
			{
				if (_native != 0) static_cast<Ogre::Root*>(_native)->removeFrameListener(_frameListener);
				delete _frameListener; _frameListener = 0;
			}
			if (_createdByCLR && _native) { delete _native; _native = 0; }
			_singleton = nullptr;
		}
	
	
		//Public Declarations
	public:
		Root( String^ pluginFileName, String^ configFileName, String^ logFileName );
		Root( String^ pluginFileName, String^ configFileName );
		Root( String^ pluginFileName );
		Root( );
	
		static property Root^ Singleton
		{
			Root^ get()
			{
				if (_singleton == CLR_NULL)
				{
					Ogre::Root* ptr = Ogre::Root::getSingletonPtr();
					if ( ptr ) _singleton = gcnew Root( ptr );
				}
				return _singleton;
			}
		}
	
		event Mogre::FrameListener::FrameStartedHandler^ FrameStarted
		{
			void add(Mogre::FrameListener::FrameStartedHandler^ hnd)
			{
				if (_frameStarted == CLR_NULL)
				{
					if (_frameListener == 0)
					{
						_frameListener = new FrameListener_Director(this);
						static_cast<Ogre::Root*>(_native)->addFrameListener(_frameListener);
					}
					_frameListener->doCallForFrameStarted = true;
				}
				_frameStarted += hnd;
				_frameStartedDelegates = _frameStarted->GetInvocationList();
			}
			void remove(Mogre::FrameListener::FrameStartedHandler^ hnd)
			{
				_frameStarted -= hnd;
				if (_frameStarted == CLR_NULL) _frameListener->doCallForFrameStarted = false;
				if (_frameStarted == CLR_NULL) _frameStartedDelegates = nullptr; else _frameStartedDelegates = _frameStarted->GetInvocationList();
			}
		private:
			bool raise( Mogre::FrameEvent evt )
			{
				if (_frameStarted)
				{
					bool mp_return;
					for (int i=0; i < _frameStartedDelegates->Length; i++)
					{
						mp_return = static_cast<Mogre::FrameListener::FrameStartedHandler^>(_frameStartedDelegates[i])( evt );
						if (mp_return == false) break;
					}
					return mp_return;
				}
			}
		}
	
		event Mogre::FrameListener::FrameEndedHandler^ FrameEnded
		{
			void add(Mogre::FrameListener::FrameEndedHandler^ hnd)
			{
				if (_frameEnded == CLR_NULL)
				{
					if (_frameListener == 0)
					{
						_frameListener = new FrameListener_Director(this);
						static_cast<Ogre::Root*>(_native)->addFrameListener(_frameListener);
					}
					_frameListener->doCallForFrameEnded = true;
				}
				_frameEnded += hnd;
				_frameEndedDelegates = _frameEnded->GetInvocationList();
			}
			void remove(Mogre::FrameListener::FrameEndedHandler^ hnd)
			{
				_frameEnded -= hnd;
				if (_frameEnded == CLR_NULL) _frameListener->doCallForFrameEnded = false;
				if (_frameEnded == CLR_NULL) _frameEndedDelegates = nullptr; else _frameEndedDelegates = _frameEnded->GetInvocationList();
			}
		private:
			bool raise( Mogre::FrameEvent evt )
			{
				if (_frameEnded)
				{
					bool mp_return;
					for (int i=0; i < _frameEndedDelegates->Length; i++)
					{
						mp_return = static_cast<Mogre::FrameListener::FrameEndedHandler^>(_frameEndedDelegates[i])( evt );
						if (mp_return == false) break;
					}
					return mp_return;
				}
			}
		}
	
	
		property Mogre::RenderWindow^ AutoCreatedWindow
		{
		public:
			Mogre::RenderWindow^ get();
		}
	
		property unsigned long CurrentFrameNumber
		{
		public:
			unsigned long get();
		}
	
		property Mogre::Real FrameSmoothingPeriod
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real period);
		}
	
		property bool IsInitialised
		{
		public:
			bool get();
		}
	
		property Mogre::RenderSystem^ RenderSystem
		{
		public:
			Mogre::RenderSystem^ get();
		public:
			void set(Mogre::RenderSystem^ system);
		}
	
		property Mogre::Timer^ Timer
		{
		public:
			Mogre::Timer^ get();
		}
	
		void SaveConfig( );
	
		bool RestoreConfig( );
	
		bool ShowConfigDialog( );
	
		void AddRenderSystem( Mogre::RenderSystem^ newRend );
	
		Mogre::RenderSystemList^ GetAvailableRenderers( );
	
		Mogre::RenderSystem^ GetRenderSystemByName( String^ name );
	
		Mogre::RenderWindow^ Initialise( bool autoCreateWindow, String^ windowTitle );
		Mogre::RenderWindow^ Initialise( bool autoCreateWindow );
	
		void AddSceneManagerFactory( Mogre::SceneManagerFactory^ fact );
	
		void RemoveSceneManagerFactory( Mogre::SceneManagerFactory^ fact );
	
		Mogre::SceneManagerMetaData_NativePtr GetSceneManagerMetaData( String^ typeName );
	
		Mogre::SceneManagerEnumerator::MetaDataIterator^ GetSceneManagerMetaDataIterator( );
	
		Mogre::SceneManager^ CreateSceneManager( String^ typeName, String^ instanceName );
		Mogre::SceneManager^ CreateSceneManager( String^ typeName );
	
		Mogre::SceneManager^ CreateSceneManager( Mogre::SceneType typeMask, String^ instanceName );
		Mogre::SceneManager^ CreateSceneManager( Mogre::SceneType typeMask );
	
		void DestroySceneManager( Mogre::SceneManager^ sm );
	
		Mogre::SceneManager^ GetSceneManager( String^ instanceName );
	
		Mogre::SceneManagerEnumerator::SceneManagerIterator^ GetSceneManagerIterator( );
	
		String^ GetErrorDescription( long errorNumber );
	
		void QueueEndRendering( );
	
		void StartRendering( );
	
		bool RenderOneFrame( );
	
		void Shutdown( );
	
		void AddResourceLocation( String^ name, String^ locType, String^ groupName, bool recursive );
		void AddResourceLocation( String^ name, String^ locType, String^ groupName );
		void AddResourceLocation( String^ name, String^ locType );
	
		void RemoveResourceLocation( String^ name, String^ groupName );
		void RemoveResourceLocation( String^ name );
	
		void ConvertColourValue( Mogre::ColourValue colour, [Out] Mogre::uint32% pDest );
	
		Mogre::RenderWindow^ CreateRenderWindow( String^ name, unsigned int width, unsigned int height, bool fullScreen, Mogre::Const_NameValuePairList^ miscParams );
		Mogre::RenderWindow^ CreateRenderWindow( String^ name, unsigned int width, unsigned int height, bool fullScreen );
	
		void DetachRenderTarget( Mogre::RenderTarget^ pWin );
	
		void DetachRenderTarget( String^ name );
	
		Mogre::RenderTarget^ GetRenderTarget( String^ name );
	
		void LoadPlugin( String^ pluginName );
	
		void UnloadPlugin( String^ pluginName );
	
		void InstallPlugin( Mogre::IPlugin^ plugin );
	
		void UninstallPlugin( Mogre::IPlugin^ plugin );
	
		Mogre::Root::Const_PluginInstanceList^ GetInstalledPlugins( );
	
		bool _fireFrameStarted( Mogre::FrameEvent evt );
	
		bool _fireFrameEnded( Mogre::FrameEvent evt );
	
		bool _fireFrameStarted( );
	
		bool _fireFrameEnded( );
	
		Mogre::SceneManager^ _getCurrentSceneManager( );
	
		void _setCurrentSceneManager( Mogre::SceneManager^ sm );
	
		void _updateAllRenderTargets( );
	
		Mogre::RenderQueueInvocationSequence^ CreateRenderQueueInvocationSequence( String^ name );
	
		Mogre::RenderQueueInvocationSequence^ GetRenderQueueInvocationSequence( String^ name );
	
		void DestroyRenderQueueInvocationSequence( String^ name );
	
		void DestroyAllRenderQueueInvocationSequences( );
	
		void ClearEventTimes( );
	
		void AddMovableObjectFactory( Mogre::MovableObjectFactory^ fact, bool overrideExisting );
		void AddMovableObjectFactory( Mogre::MovableObjectFactory^ fact );
	
		void RemoveMovableObjectFactory( Mogre::MovableObjectFactory^ fact );
	
		bool HasMovableObjectFactory( String^ typeName );
	
		Mogre::MovableObjectFactory^ GetMovableObjectFactory( String^ typeName );
	
		Mogre::uint32 _allocateNextMovableObjectTypeFlag( );
	
	
		//Protected Declarations
	protected public:
		virtual bool OnFrameStarted( Mogre::FrameEvent evt ) = IFrameListener_Receiver::FrameStarted
		{
			return FrameStarted( evt );
		}
	
		virtual bool OnFrameEnded( Mogre::FrameEvent evt ) = IFrameListener_Receiver::FrameEnded
		{
			return FrameEnded( evt );
		}
	
	
	
	};
	
	#define STLDECL_MANAGEDTYPE Mogre::RenderSystem^
	#define STLDECL_NATIVETYPE Ogre::RenderSystem*
	INC_DECLARE_STLVECTOR( RenderSystemList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	

}
