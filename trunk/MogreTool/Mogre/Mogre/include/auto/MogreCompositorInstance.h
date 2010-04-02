/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreCompositorInstance.h"
#include "MogrePlatform.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	interface class ICompositorInstance_Listener_Receiver
	{
		void NotifyMaterialSetup( Mogre::uint32 pass_id, Mogre::MaterialPtr^ mat );
	
		void NotifyMaterialRender( Mogre::uint32 pass_id, Mogre::MaterialPtr^ mat );
	
	};
	
	//################################################################
	//Listener
	//################################################################
	
	class CompositorInstance_Listener_Director : public Ogre::CompositorInstance::Listener
	{
		//Nested Types
	
		//Private Declarations
	private:
		gcroot<ICompositorInstance_Listener_Receiver^> _receiver;
	
		//Internal Declarations
	
		//Public Declarations
	public:
		CompositorInstance_Listener_Director( ICompositorInstance_Listener_Receiver^ recv )
			: _receiver(recv), doCallForNotifyMaterialSetup(false), doCallForNotifyMaterialRender(false)
		{
		}
	
		bool doCallForNotifyMaterialSetup;
		bool doCallForNotifyMaterialRender;
	
		virtual void notifyMaterialSetup( Ogre::uint32 pass_id, Ogre::MaterialPtr& mat ) override;
	
		virtual void notifyMaterialRender( Ogre::uint32 pass_id, Ogre::MaterialPtr& mat ) override;
	
	
		//Protected Declarations
	
	};
	
	//################################################################
	//CompositorInstance
	//################################################################
	
	public ref class CompositorInstance : public Wrapper, public ICompositorInstance_Listener_Receiver
	{
		//Nested Types
		public: ref class QuadMaterialMap;
		public: ref class RenderSystemOpPair;
		public: ref class RenderSystemOpPairs;
		public: ref class CompiledState;
		public: ref class Listener;
	
		public: ref class Listener abstract sealed
		{
		public:
			delegate static void NotifyMaterialSetupHandler( Mogre::uint32 pass_id, Mogre::MaterialPtr^ mat );
			delegate static void NotifyMaterialRenderHandler( Mogre::uint32 pass_id, Mogre::MaterialPtr^ mat );
		};
	
		#define STLDECL_MANAGEDKEY int
		#define STLDECL_MANAGEDVALUE Mogre::MaterialPtr^
		#define STLDECL_NATIVEKEY int
		#define STLDECL_NATIVEVALUE Ogre::MaterialPtr
		public: INC_DECLARE_STLMAP( QuadMaterialMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		//Private Declarations
	private protected:
		
		//Event and Listener fields
		CompositorInstance_Listener_Director* _listener;
		Mogre::CompositorInstance::Listener::NotifyMaterialSetupHandler^ _notifyMaterialSetup;
		Mogre::CompositorInstance::Listener::NotifyMaterialRenderHandler^ _notifyMaterialRender;
	
	
		//Internal Declarations
	public protected:
		CompositorInstance( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		~CompositorInstance()
		{
			if (_listener != 0)
			{
				if (_native != 0) static_cast<Ogre::CompositorInstance*>(_native)->removeListener(_listener);
				delete _listener; _listener = 0;
			}
		}
	
	
		//Public Declarations
	public:
		CompositorInstance( Mogre::Compositor^ filter, Mogre::CompositionTechnique^ technique, Mogre::CompositorChain^ chain );
	
	
		event Mogre::CompositorInstance::Listener::NotifyMaterialSetupHandler^ NotifyMaterialSetup
		{
			void add(Mogre::CompositorInstance::Listener::NotifyMaterialSetupHandler^ hnd)
			{
				if (_notifyMaterialSetup == CLR_NULL)
				{
					if (_listener == 0)
					{
						_listener = new CompositorInstance_Listener_Director(this);
						static_cast<Ogre::CompositorInstance*>(_native)->addListener(_listener);
					}
					_listener->doCallForNotifyMaterialSetup = true;
				}
				_notifyMaterialSetup += hnd;
			}
			void remove(Mogre::CompositorInstance::Listener::NotifyMaterialSetupHandler^ hnd)
			{
				_notifyMaterialSetup -= hnd;
				if (_notifyMaterialSetup == CLR_NULL) _listener->doCallForNotifyMaterialSetup = false;
			}
		private:
			void raise( Mogre::uint32 pass_id, Mogre::MaterialPtr^ mat )
			{
				if (_notifyMaterialSetup)
					_notifyMaterialSetup->Invoke( pass_id, mat );
			}
		}
	
		event Mogre::CompositorInstance::Listener::NotifyMaterialRenderHandler^ NotifyMaterialRender
		{
			void add(Mogre::CompositorInstance::Listener::NotifyMaterialRenderHandler^ hnd)
			{
				if (_notifyMaterialRender == CLR_NULL)
				{
					if (_listener == 0)
					{
						_listener = new CompositorInstance_Listener_Director(this);
						static_cast<Ogre::CompositorInstance*>(_native)->addListener(_listener);
					}
					_listener->doCallForNotifyMaterialRender = true;
				}
				_notifyMaterialRender += hnd;
			}
			void remove(Mogre::CompositorInstance::Listener::NotifyMaterialRenderHandler^ hnd)
			{
				_notifyMaterialRender -= hnd;
				if (_notifyMaterialRender == CLR_NULL) _listener->doCallForNotifyMaterialRender = false;
			}
		private:
			void raise( Mogre::uint32 pass_id, Mogre::MaterialPtr^ mat )
			{
				if (_notifyMaterialRender)
					_notifyMaterialRender->Invoke( pass_id, mat );
			}
		}
	
	
		property Mogre::CompositorChain^ Chain
		{
		public:
			Mogre::CompositorChain^ get();
		}
	
		property Mogre::Compositor^ Compositor
		{
		public:
			Mogre::Compositor^ get();
		}
	
		property bool Enabled
		{
		public:
			bool get();
		public:
			void set(bool value);
		}
	
		property Mogre::CompositionTechnique^ Technique
		{
		public:
			Mogre::CompositionTechnique^ get();
		}
	
		String^ GetTextureInstanceName( String^ name );
	
		void _fireNotifyMaterialSetup( Mogre::uint32 pass_id, Mogre::MaterialPtr^ mat );
	
		void _fireNotifyMaterialRender( Mogre::uint32 pass_id, Mogre::MaterialPtr^ mat );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( CompositorInstance )
	
		//Protected Declarations
	protected public:
		virtual void OnNotifyMaterialSetup( Mogre::uint32 pass_id, Mogre::MaterialPtr^ mat ) = ICompositorInstance_Listener_Receiver::NotifyMaterialSetup
		{
			NotifyMaterialSetup( pass_id, mat );
		}
	
		virtual void OnNotifyMaterialRender( Mogre::uint32 pass_id, Mogre::MaterialPtr^ mat ) = ICompositorInstance_Listener_Receiver::NotifyMaterialRender
		{
			NotifyMaterialRender( pass_id, mat );
		}
	
	
	
	};
	

}
