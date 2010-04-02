/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreOverlayContainer.h"
#include "MogreOverlayElement.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//OverlayContainer
	//################################################################
	
	public ref class OverlayContainer : public OverlayElement
	{
		//Nested Types
		public: ref class ChildMap;
		public: ref class ChildContainerMap;
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::OverlayElement^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::OverlayElement*
		public: INC_DECLARE_STLMAP( ChildMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::OverlayContainer^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::OverlayContainer*
		public: INC_DECLARE_STLMAP( ChildContainerMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		public: INC_DECLARE_MAP_ITERATOR( ChildIterator, Ogre::OverlayContainer::ChildIterator, Mogre::OverlayContainer::ChildMap, Mogre::OverlayElement^, Ogre::OverlayElement*, String^, Ogre::String )
	
		public: INC_DECLARE_MAP_ITERATOR( ChildContainerIterator, Ogre::OverlayContainer::ChildContainerIterator, Mogre::OverlayContainer::ChildContainerMap, Mogre::OverlayContainer^, Ogre::OverlayContainer*, String^, Ogre::String )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		OverlayContainer( CLRObject* obj ) : OverlayElement(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property bool IsChildrenProcessEvents
		{
		public:
			bool get();
		}
	
		property bool IsContainer
		{
		public:
			bool get();
		}
	
		void AddChild( Mogre::OverlayElement^ elem );
	
		void AddChildImpl( Mogre::OverlayElement^ elem );
	
		void AddChildImpl( Mogre::OverlayContainer^ cont );
	
		void RemoveChild( String^ name );
	
		Mogre::OverlayElement^ GetChild( String^ name );
	
		void Initialise( );
	
		void _addChild( Mogre::OverlayElement^ elem );
	
		void _removeChild( Mogre::OverlayElement^ elem );
	
		void _removeChild( String^ name );
	
		Mogre::OverlayContainer::ChildIterator^ GetChildIterator( );
	
		Mogre::OverlayContainer::ChildContainerIterator^ GetChildContainerIterator( );
	
		void _positionsOutOfDate( );
	
		void _update( );
	
		void _notifyZOrder( Mogre::ushort newZOrder );
	
		void _notifyViewport( );
	
		void _notifyWorldTransforms( Mogre::Matrix4^ xform );
	
		void _notifyParent( Mogre::OverlayContainer^ parent, Mogre::Overlay^ overlay );
	
		void _updateRenderQueue( Mogre::RenderQueue^ queue );
	
		void SetChildrenProcessEvents( bool val );
	
		Mogre::OverlayElement^ FindElementAt( Mogre::Real x, Mogre::Real y );
	
		void CopyFromTemplate( Mogre::OverlayElement^ templateOverlay );
	
		Mogre::OverlayElement^ Clone( String^ instanceName );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( OverlayContainer )
	
		//Protected Declarations
	protected public:
	
	};
	

}
