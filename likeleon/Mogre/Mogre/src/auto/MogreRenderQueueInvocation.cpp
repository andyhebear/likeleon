/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreRenderQueueInvocation.h"
#include "MogreRenderQueueSortingGrouping.h"
#include "MogreSceneManager.h"

namespace Mogre
{
	//################################################################
	//RenderQueueInvocation
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	RenderQueueInvocation::RenderQueueInvocation( Mogre::uint8 renderQueueGroupID, String^ invocationName ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_invocationName, invocationName )
	
		_native = new Ogre::RenderQueueInvocation( renderQueueGroupID, o_invocationName);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	RenderQueueInvocation::RenderQueueInvocation( Mogre::uint8 renderQueueGroupID ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::RenderQueueInvocation( renderQueueGroupID);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	String^ RenderQueueInvocation::RENDER_QUEUE_INVOCATION_SHADOWS::get()
	{
		return TO_CLR_STRING( Ogre::RenderQueueInvocation::RENDER_QUEUE_INVOCATION_SHADOWS );
	}
	void RenderQueueInvocation::RENDER_QUEUE_INVOCATION_SHADOWS::set( String^ value )
	{
		DECLARE_NATIVE_STRING( o_value, value )
	
		Ogre::RenderQueueInvocation::RENDER_QUEUE_INVOCATION_SHADOWS = o_value;
	}
	
	String^ RenderQueueInvocation::InvocationName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::RenderQueueInvocation*>(_native)->getInvocationName( ) );
	}
	
	Mogre::uint8 RenderQueueInvocation::RenderQueueGroupID::get()
	{
		return static_cast<const Ogre::RenderQueueInvocation*>(_native)->getRenderQueueGroupID( );
	}
	
	Mogre::QueuedRenderableCollection::OrganisationMode RenderQueueInvocation::SolidsOrganisation::get()
	{
		return (Mogre::QueuedRenderableCollection::OrganisationMode)static_cast<const Ogre::RenderQueueInvocation*>(_native)->getSolidsOrganisation( );
	}
	void RenderQueueInvocation::SolidsOrganisation::set( Mogre::QueuedRenderableCollection::OrganisationMode org )
	{
		static_cast<Ogre::RenderQueueInvocation*>(_native)->setSolidsOrganisation( (Ogre::QueuedRenderableCollection::OrganisationMode)org );
	}
	
	bool RenderQueueInvocation::SuppressRenderStateChanges::get()
	{
		return static_cast<const Ogre::RenderQueueInvocation*>(_native)->getSuppressRenderStateChanges( );
	}
	void RenderQueueInvocation::SuppressRenderStateChanges::set( bool suppress )
	{
		static_cast<Ogre::RenderQueueInvocation*>(_native)->setSuppressRenderStateChanges( suppress );
	}
	
	bool RenderQueueInvocation::SuppressShadows::get()
	{
		return static_cast<const Ogre::RenderQueueInvocation*>(_native)->getSuppressShadows( );
	}
	void RenderQueueInvocation::SuppressShadows::set( bool suppress )
	{
		static_cast<Ogre::RenderQueueInvocation*>(_native)->setSuppressShadows( suppress );
	}
	
	void RenderQueueInvocation::Invoke( Mogre::RenderQueueGroup^ group, Mogre::SceneManager^ targetSceneManager )
	{
		static_cast<Ogre::RenderQueueInvocation*>(_native)->invoke( group, targetSceneManager );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//RenderQueueInvocationSequence
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	RenderQueueInvocationSequence::RenderQueueInvocationSequence( String^ name ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::RenderQueueInvocationSequence( o_name);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	String^ RenderQueueInvocationSequence::Name::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::RenderQueueInvocationSequence*>(_native)->getName( ) );
	}
	
	Mogre::RenderQueueInvocation^ RenderQueueInvocationSequence::Add( Mogre::uint8 renderQueueGroupID, String^ invocationName )
	{
		DECLARE_NATIVE_STRING( o_invocationName, invocationName )
	
		return static_cast<Ogre::RenderQueueInvocationSequence*>(_native)->add( renderQueueGroupID, o_invocationName );
	}
	
	void RenderQueueInvocationSequence::Add( Mogre::RenderQueueInvocation^ i )
	{
		static_cast<Ogre::RenderQueueInvocationSequence*>(_native)->add( i );
	}
	
	size_t RenderQueueInvocationSequence::Size( )
	{
		return static_cast<const Ogre::RenderQueueInvocationSequence*>(_native)->size( );
	}
	
	void RenderQueueInvocationSequence::Clear( )
	{
		static_cast<Ogre::RenderQueueInvocationSequence*>(_native)->clear( );
	}
	
	Mogre::RenderQueueInvocation^ RenderQueueInvocationSequence::Get( size_t index )
	{
		return static_cast<Ogre::RenderQueueInvocationSequence*>(_native)->get( index );
	}
	
	void RenderQueueInvocationSequence::Remove( size_t index )
	{
		static_cast<Ogre::RenderQueueInvocationSequence*>(_native)->remove( index );
	}
	
	Mogre::RenderQueueInvocationIterator^ RenderQueueInvocationSequence::GetIterator( )
	{
		return static_cast<Ogre::RenderQueueInvocationSequence*>(_native)->iterator( );
	}
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDTYPE Mogre::RenderQueueInvocation^
	#define STLDECL_NATIVETYPE Ogre::RenderQueueInvocation*
	CPP_DECLARE_STLVECTOR( , RenderQueueInvocationList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	CPP_DECLARE_ITERATOR( , RenderQueueInvocationIterator, Ogre::RenderQueueInvocationIterator, Mogre::RenderQueueInvocationList, Mogre::RenderQueueInvocation^, Ogre::RenderQueueInvocation*,  )
	

}
