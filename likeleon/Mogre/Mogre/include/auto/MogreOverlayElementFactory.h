/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreOverlayElementFactory.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//OverlayElementFactory
	//################################################################
	
	public ref class OverlayElementFactory : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		OverlayElementFactory( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property String^ TypeName
		{
		public:
			String^ get();
		}
	
		Mogre::OverlayElement^ CreateOverlayElement( String^ instanceName );
	
		void DestroyOverlayElement( Mogre::OverlayElement^ pElement );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( OverlayElementFactory )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//PanelOverlayElementFactory
	//################################################################
	
	public ref class PanelOverlayElementFactory : public OverlayElementFactory
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PanelOverlayElementFactory( CLRObject* obj ) : OverlayElementFactory(obj)
		{
		}
	
	
		//Public Declarations
	public:
		PanelOverlayElementFactory();
	
	
		property String^ TypeName
		{
		public:
			String^ get();
		}
	
		Mogre::OverlayElement^ CreateOverlayElement( String^ instanceName );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( PanelOverlayElementFactory )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//BorderPanelOverlayElementFactory
	//################################################################
	
	public ref class BorderPanelOverlayElementFactory : public OverlayElementFactory
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		BorderPanelOverlayElementFactory( CLRObject* obj ) : OverlayElementFactory(obj)
		{
		}
	
	
		//Public Declarations
	public:
		BorderPanelOverlayElementFactory();
	
	
		property String^ TypeName
		{
		public:
			String^ get();
		}
	
		Mogre::OverlayElement^ CreateOverlayElement( String^ instanceName );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( BorderPanelOverlayElementFactory )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//TextAreaOverlayElementFactory
	//################################################################
	
	public ref class TextAreaOverlayElementFactory : public OverlayElementFactory
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		TextAreaOverlayElementFactory( CLRObject* obj ) : OverlayElementFactory(obj)
		{
		}
	
	
		//Public Declarations
	public:
		TextAreaOverlayElementFactory();
	
	
		property String^ TypeName
		{
		public:
			String^ get();
		}
	
		Mogre::OverlayElement^ CreateOverlayElement( String^ instanceName );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( TextAreaOverlayElementFactory )
	
		//Protected Declarations
	protected public:
	
	};
	

}
