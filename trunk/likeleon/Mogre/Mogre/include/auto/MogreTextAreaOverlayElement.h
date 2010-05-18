/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreTextAreaOverlayElement.h"
#include "MogreOverlayElement.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//TextAreaOverlayElement
	//################################################################
	
	public ref class TextAreaOverlayElement : public OverlayElement
	{
		//Nested Types
	
		public: enum class Alignment
		{
			Left = Ogre::TextAreaOverlayElement::Left,
			Right = Ogre::TextAreaOverlayElement::Right,
			Center = Ogre::TextAreaOverlayElement::Center
		};
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		TextAreaOverlayElement( CLRObject* obj ) : OverlayElement(obj)
		{
		}
	
	
		//Public Declarations
	public:
		TextAreaOverlayElement( String^ name );
	
	
		property String^ Caption
		{
		public:
			String^ get();
		public:
			void set(String^ text);
		}
	
		property Mogre::Real CharHeight
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real height);
		}
	
		property Mogre::ColourValue Colour
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue col);
		}
	
		property Mogre::ColourValue ColourBottom
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue col);
		}
	
		property Mogre::ColourValue ColourTop
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue col);
		}
	
		property String^ FontName
		{
		public:
			String^ get();
		public:
			void set(String^ font);
		}
	
		property String^ MaterialName
		{
		public:
			String^ get();
		public:
			void set(String^ matName);
		}
	
		property Mogre::GuiMetricsMode MetricsMode
		{
		public:
			Mogre::GuiMetricsMode get();
		public:
			void set(Mogre::GuiMetricsMode gmm);
		}
	
		property Mogre::Real SpaceWidth
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real width);
		}
	
		property String^ TypeName
		{
		public:
			String^ get();
		}
	
		void Initialise( );
	
		virtual void GetRenderOperation( Mogre::RenderOperation^ op ) override;
	
		void SetAlignment( Mogre::TextAreaOverlayElement::Alignment a );
	
		Mogre::TextAreaOverlayElement::Alignment GetAlignment( );
	
		void _update( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( TextAreaOverlayElement )
	
		//Protected Declarations
	protected public:
	
	};
	

}
