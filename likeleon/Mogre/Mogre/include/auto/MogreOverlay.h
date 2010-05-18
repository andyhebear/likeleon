/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreOverlay.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//Overlay
	//################################################################
	
	public ref class Overlay : public Wrapper
	{
		//Nested Types
		public: ref class OverlayContainerList;
	
		#define STLDECL_MANAGEDTYPE Mogre::OverlayContainer^
		#define STLDECL_NATIVETYPE Ogre::OverlayContainer*
		public: INC_DECLARE_STLLIST( OverlayContainerList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		public: INC_DECLARE_ITERATOR( Overlay2DElementsIterator, Ogre::Overlay::Overlay2DElementsIterator, Mogre::Overlay::OverlayContainerList, Mogre::OverlayContainer^, Ogre::OverlayContainer* )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Overlay( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		Overlay( String^ name );
	
	
		property bool IsInitialised
		{
		public:
			bool get();
		}
	
		property bool IsVisible
		{
		public:
			bool get();
		}
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		property String^ Origin
		{
		public:
			String^ get();
		}
	
		property Mogre::Real ScaleX
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real ScaleY
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real ScrollX
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real ScrollY
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Quaternion WorldOrientation
		{
		public:
			Mogre::Quaternion get();
		}
	
		property Mogre::Vector3 WorldPosition
		{
		public:
			Mogre::Vector3 get();
		}
	
		property Mogre::ushort ZOrder
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort zorder);
		}
	
		Mogre::OverlayContainer^ GetChild( String^ name );
	
		void Show( );
	
		void Hide( );
	
		void Add2D( Mogre::OverlayContainer^ cont );
	
		void Remove2D( Mogre::OverlayContainer^ cont );
	
		void Add3D( Mogre::SceneNode^ node );
	
		void Remove3D( Mogre::SceneNode^ node );
	
		void Clear( );
	
		void SetScroll( Mogre::Real x, Mogre::Real y );
	
		void Scroll( Mogre::Real xoff, Mogre::Real yoff );
	
		void SetRotate( Mogre::Radian angle );
	
		Mogre::Radian GetRotate( );
	
		void Rotate( Mogre::Radian angle );
	
		void SetScale( Mogre::Real x, Mogre::Real y );
	
		void _findVisibleObjects( Mogre::Camera^ cam, Mogre::RenderQueue^ queue );
	
		Mogre::OverlayElement^ FindElementAt( Mogre::Real x, Mogre::Real y );
	
		Mogre::Overlay::Overlay2DElementsIterator^ Get2DElementsIterator( );
	
		void _notifyOrigin( String^ origin );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Overlay )
	
		//Protected Declarations
	protected public:
	
	};
	

}
