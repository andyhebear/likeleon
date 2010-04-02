/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreOverlayContainer.h"
#include "MogreOverlayElement.h"
#include "MogreOverlay.h"
#include "MogreRenderQueue.h"

namespace Mogre
{
	//################################################################
	//OverlayContainer
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::OverlayElement^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::OverlayElement*
	CPP_DECLARE_STLMAP( OverlayContainer::, ChildMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::OverlayContainer^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::OverlayContainer*
	CPP_DECLARE_STLMAP( OverlayContainer::, ChildContainerMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	CPP_DECLARE_MAP_ITERATOR( OverlayContainer::, ChildIterator, Ogre::OverlayContainer::ChildIterator, Mogre::OverlayContainer::ChildMap, Mogre::OverlayElement^, Ogre::OverlayElement*, String^, Ogre::String,  )
	
	CPP_DECLARE_MAP_ITERATOR( OverlayContainer::, ChildContainerIterator, Ogre::OverlayContainer::ChildContainerIterator, Mogre::OverlayContainer::ChildContainerMap, Mogre::OverlayContainer^, Ogre::OverlayContainer*, String^, Ogre::String,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	bool OverlayContainer::IsChildrenProcessEvents::get()
	{
		return static_cast<const Ogre::OverlayContainer*>(_native)->isChildrenProcessEvents( );
	}
	
	bool OverlayContainer::IsContainer::get()
	{
		return static_cast<const Ogre::OverlayContainer*>(_native)->isContainer( );
	}
	
	void OverlayContainer::AddChild( Mogre::OverlayElement^ elem )
	{
		static_cast<Ogre::OverlayContainer*>(_native)->addChild( elem );
	}
	
	void OverlayContainer::AddChildImpl( Mogre::OverlayElement^ elem )
	{
		static_cast<Ogre::OverlayContainer*>(_native)->addChildImpl( elem );
	}
	
	void OverlayContainer::AddChildImpl( Mogre::OverlayContainer^ cont )
	{
		static_cast<Ogre::OverlayContainer*>(_native)->addChildImpl( cont );
	}
	
	void OverlayContainer::RemoveChild( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::OverlayContainer*>(_native)->removeChild( o_name );
	}
	
	Mogre::OverlayElement^ OverlayContainer::GetChild( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::OverlayContainer*>(_native)->getChild( o_name );
	}
	
	void OverlayContainer::Initialise( )
	{
		static_cast<Ogre::OverlayContainer*>(_native)->initialise( );
	}
	
	void OverlayContainer::_addChild( Mogre::OverlayElement^ elem )
	{
		static_cast<Ogre::OverlayContainer*>(_native)->_addChild( elem );
	}
	
	void OverlayContainer::_removeChild( Mogre::OverlayElement^ elem )
	{
		static_cast<Ogre::OverlayContainer*>(_native)->_removeChild( elem );
	}
	
	void OverlayContainer::_removeChild( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::OverlayContainer*>(_native)->_removeChild( o_name );
	}
	
	Mogre::OverlayContainer::ChildIterator^ OverlayContainer::GetChildIterator( )
	{
		return static_cast<Ogre::OverlayContainer*>(_native)->getChildIterator( );
	}
	
	Mogre::OverlayContainer::ChildContainerIterator^ OverlayContainer::GetChildContainerIterator( )
	{
		return static_cast<Ogre::OverlayContainer*>(_native)->getChildContainerIterator( );
	}
	
	void OverlayContainer::_positionsOutOfDate( )
	{
		static_cast<Ogre::OverlayContainer*>(_native)->_positionsOutOfDate( );
	}
	
	void OverlayContainer::_update( )
	{
		static_cast<Ogre::OverlayContainer*>(_native)->_update( );
	}
	
	void OverlayContainer::_notifyZOrder( Mogre::ushort newZOrder )
	{
		static_cast<Ogre::OverlayContainer*>(_native)->_notifyZOrder( newZOrder );
	}
	
	void OverlayContainer::_notifyViewport( )
	{
		static_cast<Ogre::OverlayContainer*>(_native)->_notifyViewport( );
	}
	
	void OverlayContainer::_notifyWorldTransforms( Mogre::Matrix4^ xform )
	{
		pin_ptr<Ogre::Matrix4> p_xform = interior_ptr<Ogre::Matrix4>(&xform->m00);
	
		static_cast<Ogre::OverlayContainer*>(_native)->_notifyWorldTransforms( *p_xform );
	}
	
	void OverlayContainer::_notifyParent( Mogre::OverlayContainer^ parent, Mogre::Overlay^ overlay )
	{
		static_cast<Ogre::OverlayContainer*>(_native)->_notifyParent( parent, overlay );
	}
	
	void OverlayContainer::_updateRenderQueue( Mogre::RenderQueue^ queue )
	{
		static_cast<Ogre::OverlayContainer*>(_native)->_updateRenderQueue( queue );
	}
	
	void OverlayContainer::SetChildrenProcessEvents( bool val )
	{
		static_cast<Ogre::OverlayContainer*>(_native)->setChildrenProcessEvents( val );
	}
	
	Mogre::OverlayElement^ OverlayContainer::FindElementAt( Mogre::Real x, Mogre::Real y )
	{
		return static_cast<Ogre::OverlayContainer*>(_native)->findElementAt( x, y );
	}
	
	void OverlayContainer::CopyFromTemplate( Mogre::OverlayElement^ templateOverlay )
	{
		static_cast<Ogre::OverlayContainer*>(_native)->copyFromTemplate( templateOverlay );
	}
	
	Mogre::OverlayElement^ OverlayContainer::Clone( String^ instanceName )
	{
		DECLARE_NATIVE_STRING( o_instanceName, instanceName )
	
		return static_cast<Ogre::OverlayContainer*>(_native)->clone( o_instanceName );
	}
	
	
	//Protected Declarations
	
	

}
