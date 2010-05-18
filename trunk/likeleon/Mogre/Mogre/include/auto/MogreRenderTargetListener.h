/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreRenderTargetListener.h"

namespace Mogre
{
	//################################################################
	//RenderTargetViewportEvent_NativePtr
	//################################################################
	
	public value class RenderTargetViewportEvent_NativePtr
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		Ogre::RenderTargetViewportEvent* _native;
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		property Mogre::Viewport^ source
		{
		public:
			Mogre::Viewport^ get();
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( RenderTargetViewportEvent_NativePtr, Ogre::RenderTargetViewportEvent )
	
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_native; }
		}
	
		property bool IsNull
		{
			bool get() { return (_native == 0); }
		}
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//RenderTargetEvent_NativePtr
	//################################################################
	
	public value class RenderTargetEvent_NativePtr
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		Ogre::RenderTargetEvent* _native;
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		property Mogre::RenderTarget^ source
		{
		public:
			Mogre::RenderTarget^ get();
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( RenderTargetEvent_NativePtr, Ogre::RenderTargetEvent )
	
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_native; }
		}
	
		property bool IsNull
		{
			bool get() { return (_native == 0); }
		}
	
		//Protected Declarations
	protected public:
	
	};
	
	interface class IRenderTargetListener_Receiver
	{
		void PreRenderTargetUpdate( Mogre::RenderTargetEvent_NativePtr evt );
	
		void PostRenderTargetUpdate( Mogre::RenderTargetEvent_NativePtr evt );
	
		void PreViewportUpdate( Mogre::RenderTargetViewportEvent_NativePtr evt );
	
		void PostViewportUpdate( Mogre::RenderTargetViewportEvent_NativePtr evt );
	
		void ViewportAdded( Mogre::RenderTargetViewportEvent_NativePtr evt );
	
		void ViewportRemoved( Mogre::RenderTargetViewportEvent_NativePtr evt );
	
	};
	
	public ref class RenderTargetListener abstract sealed
	{
	public:
		delegate static void PreRenderTargetUpdateHandler( Mogre::RenderTargetEvent_NativePtr evt );
		delegate static void PostRenderTargetUpdateHandler( Mogre::RenderTargetEvent_NativePtr evt );
		delegate static void PreViewportUpdateHandler( Mogre::RenderTargetViewportEvent_NativePtr evt );
		delegate static void PostViewportUpdateHandler( Mogre::RenderTargetViewportEvent_NativePtr evt );
		delegate static void ViewportAddedHandler( Mogre::RenderTargetViewportEvent_NativePtr evt );
		delegate static void ViewportRemovedHandler( Mogre::RenderTargetViewportEvent_NativePtr evt );
	};
	
	//################################################################
	//RenderTargetListener
	//################################################################
	
	class RenderTargetListener_Director : public Ogre::RenderTargetListener
	{
		//Nested Types
	
		//Private Declarations
	private:
		gcroot<IRenderTargetListener_Receiver^> _receiver;
	
		//Internal Declarations
	
		//Public Declarations
	public:
		RenderTargetListener_Director( IRenderTargetListener_Receiver^ recv )
			: _receiver(recv), doCallForPreRenderTargetUpdate(false), doCallForPostRenderTargetUpdate(false), doCallForPreViewportUpdate(false), doCallForPostViewportUpdate(false), doCallForViewportAdded(false), doCallForViewportRemoved(false)
		{
		}
	
		bool doCallForPreRenderTargetUpdate;
		bool doCallForPostRenderTargetUpdate;
		bool doCallForPreViewportUpdate;
		bool doCallForPostViewportUpdate;
		bool doCallForViewportAdded;
		bool doCallForViewportRemoved;
	
		virtual void preRenderTargetUpdate( const Ogre::RenderTargetEvent& evt ) override;
	
		virtual void postRenderTargetUpdate( const Ogre::RenderTargetEvent& evt ) override;
	
		virtual void preViewportUpdate( const Ogre::RenderTargetViewportEvent& evt ) override;
	
		virtual void postViewportUpdate( const Ogre::RenderTargetViewportEvent& evt ) override;
	
		virtual void viewportAdded( const Ogre::RenderTargetViewportEvent& evt ) override;
	
		virtual void viewportRemoved( const Ogre::RenderTargetViewportEvent& evt ) override;
	
	
		//Protected Declarations
	
	};
	

}
