/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgrePanelOverlayElement.h"
#include "MogreOverlayContainer.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//PanelOverlayElement
	//################################################################
	
	public ref class PanelOverlayElement : public OverlayContainer
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PanelOverlayElement( CLRObject* obj ) : OverlayContainer(obj)
		{
		}
	
	
		//Public Declarations
	public:
		PanelOverlayElement( String^ name );
	
	
		property bool IsTransparent
		{
		public:
			bool get();
		}
	
		property String^ MaterialName
		{
		public:
			String^ get();
		public:
			void set(String^ matName);
		}
	
		property String^ TypeName
		{
		public:
			String^ get();
		}
	
		void Initialise( );
	
		void SetTiling( Mogre::Real x, Mogre::Real y, Mogre::ushort layer );
		void SetTiling( Mogre::Real x, Mogre::Real y );
	
		Mogre::Real GetTileX( Mogre::ushort layer );
		Mogre::Real GetTileX( );
	
		Mogre::Real GetTileY( Mogre::ushort layer );
		Mogre::Real GetTileY( );
	
		void SetUV( Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2 );
	
		void GetUV( [Out] Mogre::Real% u1, [Out] Mogre::Real% v1, [Out] Mogre::Real% u2, [Out] Mogre::Real% v2 );
	
		void SetTransparent( bool isTransparent );
	
		virtual void GetRenderOperation( Mogre::RenderOperation^ op ) override;
	
		void _updateRenderQueue( Mogre::RenderQueue^ queue );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( PanelOverlayElement )
	
		//Protected Declarations
	protected public:
	
	};
	

}
