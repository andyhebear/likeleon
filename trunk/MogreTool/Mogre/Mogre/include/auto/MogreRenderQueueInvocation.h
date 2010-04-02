/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreRenderQueueInvocation.h"
#include "MogrePlatform.h"
#include "MogrePrerequisites.h"
#include "MogreRenderQueueSortingGrouping.h"

namespace Mogre
{
	//################################################################
	//RenderQueueInvocation
	//################################################################
	
	public ref class RenderQueueInvocation : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		RenderQueueInvocation( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		RenderQueueInvocation( Mogre::uint8 renderQueueGroupID, String^ invocationName );
		RenderQueueInvocation( Mogre::uint8 renderQueueGroupID );
	
	
		static property String^ RENDER_QUEUE_INVOCATION_SHADOWS
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		property String^ InvocationName
		{
		public:
			String^ get();
		}
	
		property Mogre::uint8 RenderQueueGroupID
		{
		public:
			Mogre::uint8 get();
		}
	
		property Mogre::QueuedRenderableCollection::OrganisationMode SolidsOrganisation
		{
		public:
			Mogre::QueuedRenderableCollection::OrganisationMode get();
		public:
			void set(Mogre::QueuedRenderableCollection::OrganisationMode org);
		}
	
		property bool SuppressRenderStateChanges
		{
		public:
			bool get();
		public:
			void set(bool suppress);
		}
	
		property bool SuppressShadows
		{
		public:
			bool get();
		public:
			void set(bool suppress);
		}
	
		void Invoke( Mogre::RenderQueueGroup^ group, Mogre::SceneManager^ targetSceneManager );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( RenderQueueInvocation )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//RenderQueueInvocationSequence
	//################################################################
	
	public ref class RenderQueueInvocationSequence : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		RenderQueueInvocationSequence( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		RenderQueueInvocationSequence( String^ name );
	
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		Mogre::RenderQueueInvocation^ Add( Mogre::uint8 renderQueueGroupID, String^ invocationName );
	
		void Add( Mogre::RenderQueueInvocation^ i );
	
		size_t Size( );
	
		void Clear( );
	
		Mogre::RenderQueueInvocation^ Get( size_t index );
	
		void Remove( size_t index );
	
		Mogre::RenderQueueInvocationIterator^ GetIterator( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( RenderQueueInvocationSequence )
	
		//Protected Declarations
	protected public:
	
	};
	
	#define STLDECL_MANAGEDTYPE Mogre::RenderQueueInvocation^
	#define STLDECL_NATIVETYPE Ogre::RenderQueueInvocation*
	INC_DECLARE_STLVECTOR( RenderQueueInvocationList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	public INC_DECLARE_ITERATOR( RenderQueueInvocationIterator, Ogre::RenderQueueInvocationIterator, Mogre::RenderQueueInvocationList, Mogre::RenderQueueInvocation^, Ogre::RenderQueueInvocation* )
	

}
