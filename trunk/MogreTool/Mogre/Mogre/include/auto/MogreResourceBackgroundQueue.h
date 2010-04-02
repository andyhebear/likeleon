/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreResourceBackgroundQueue.h"
#include "MogrePrerequisites.h"
#include "MogreResource.h"
#include "MogreCommon.h"

namespace Mogre
{
	typedef Ogre::BackgroundProcessTicket BackgroundProcessTicket;
	
	//################################################################
	//ResourceBackgroundQueue
	//################################################################
	
	public ref class ResourceBackgroundQueue
	{
		//Nested Types
	
		//################################################################
		//IListener
		//################################################################
	
		public: interface class IListener
		{
			//Nested Types
	
			//Private Declarations
	
			//Internal Declarations
	
			//Public Declarations
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IListener, Ogre::ResourceBackgroundQueue::Listener )
	
			virtual Ogre::ResourceBackgroundQueue::Listener* _GetNativePtr();
	
		public:
	
	
			virtual void OperationCompleted( Mogre::BackgroundProcessTicket ticket );
	
			virtual void OperationCompletedInThread( Mogre::BackgroundProcessTicket ticket );
	
	
			//Protected Declarations
	
		};
	
		//################################################################
		//IListener
		//################################################################
		
		public: ref class Listener abstract : public Wrapper, public Mogre::ResourceBackgroundQueue::IListener
		{
			//Nested Types
		
			//Private Declarations
		private protected:
		
			//Internal Declarations
		public protected:
			Listener( CLRObject* obj ) : Wrapper(obj)
			{
			}
		
			virtual Ogre::ResourceBackgroundQueue::Listener* _IListener_GetNativePtr() = IListener::_GetNativePtr;
		
		
			//Public Declarations
		public:
			Listener();
		
		
			virtual void OperationCompleted( Mogre::BackgroundProcessTicket ticket ) abstract;
		
			[Implementation::MethodIndex( 0 )]
			virtual void OperationCompletedInThread( Mogre::BackgroundProcessTicket ticket );
		
		
			//Protected Declarations
		protected public:
		
		};
		
	
		//Private Declarations
	private protected:
		static ResourceBackgroundQueue^ _singleton;
		Ogre::ResourceBackgroundQueue* _native;
		bool _createdByCLR;
	
		//Internal Declarations
	public protected:
		ResourceBackgroundQueue( Ogre::ResourceBackgroundQueue* obj ) : _native(obj)
		{
		}
	
	
		//Public Declarations
	public:
		ResourceBackgroundQueue( );
	
		static property ResourceBackgroundQueue^ Singleton
		{
			ResourceBackgroundQueue^ get()
			{
				if (_singleton == CLR_NULL)
				{
					Ogre::ResourceBackgroundQueue* ptr = Ogre::ResourceBackgroundQueue::getSingletonPtr();
					if ( ptr ) _singleton = gcnew ResourceBackgroundQueue( ptr );
				}
				return _singleton;
			}
		}
	
		property bool StartBackgroundThread
		{
		public:
			bool get();
		public:
			void set(bool startThread);
		}
	
		void Initialise( );
	
		void Shutdown( );
	
		Mogre::BackgroundProcessTicket InitialiseResourceGroup( String^ name, Mogre::ResourceBackgroundQueue::IListener^ listener );
		Mogre::BackgroundProcessTicket InitialiseResourceGroup( String^ name );
	
		Mogre::BackgroundProcessTicket InitialiseAllResourceGroups( Mogre::ResourceBackgroundQueue::IListener^ listener );
		Mogre::BackgroundProcessTicket InitialiseAllResourceGroups( );
	
		Mogre::BackgroundProcessTicket LoadResourceGroup( String^ name, Mogre::ResourceBackgroundQueue::IListener^ listener );
		Mogre::BackgroundProcessTicket LoadResourceGroup( String^ name );
	
		Mogre::BackgroundProcessTicket Unload( String^ resType, String^ name, Mogre::ResourceBackgroundQueue::IListener^ listener );
		Mogre::BackgroundProcessTicket Unload( String^ resType, String^ name );
	
		Mogre::BackgroundProcessTicket Unload( String^ resType, Mogre::ResourceHandle handle, Mogre::ResourceBackgroundQueue::IListener^ listener );
		Mogre::BackgroundProcessTicket Unload( String^ resType, Mogre::ResourceHandle handle );
	
		Mogre::BackgroundProcessTicket UnloadResourceGroup( String^ name, Mogre::ResourceBackgroundQueue::IListener^ listener );
		Mogre::BackgroundProcessTicket UnloadResourceGroup( String^ name );
	
		Mogre::BackgroundProcessTicket Load( String^ resType, String^ name, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader, Mogre::Const_NameValuePairList^ loadParams, Mogre::ResourceBackgroundQueue::IListener^ listener );
		Mogre::BackgroundProcessTicket Load( String^ resType, String^ name, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader, Mogre::Const_NameValuePairList^ loadParams );
		Mogre::BackgroundProcessTicket Load( String^ resType, String^ name, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader );
		Mogre::BackgroundProcessTicket Load( String^ resType, String^ name, String^ group, bool isManual );
		Mogre::BackgroundProcessTicket Load( String^ resType, String^ name, String^ group );
	
		bool IsProcessComplete( Mogre::BackgroundProcessTicket ticket );
	
		bool _doNextQueuedBackgroundProcess( );
	
		void _initThread( );
	
		void _fireBackgroundLoadingComplete( );
	
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//ResourceBackgroundQueue_Listener_Proxy
	//################################################################
	
	class ResourceBackgroundQueue_Listener_Proxy : public Ogre::ResourceBackgroundQueue::Listener, public CLRObject
	{
	public:
		friend ref class Mogre::ResourceBackgroundQueue::Listener;
	
		bool* _overriden;
	
		gcroot<Mogre::ResourceBackgroundQueue::Listener^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		ResourceBackgroundQueue_Listener_Proxy( Mogre::ResourceBackgroundQueue::Listener^ managedObj ) :
			_managed(managedObj)
		{
		}
	
		virtual void operationCompleted( Ogre::BackgroundProcessTicket ticket ) override;
	
		virtual void operationCompletedInThread( Ogre::BackgroundProcessTicket ticket ) override;
	};
	

}
