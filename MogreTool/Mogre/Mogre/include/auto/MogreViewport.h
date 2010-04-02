/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreViewport.h"
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"

namespace Mogre
{
	//################################################################
	//Viewport
	//################################################################
	
	public ref class Viewport : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Viewport( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		Viewport( Mogre::Camera^ camera, Mogre::RenderTarget^ target, Mogre::Real left, Mogre::Real top, Mogre::Real width, Mogre::Real height, int ZOrder );
	
	
		property int ActualHeight
		{
		public:
			int get();
		}
	
		property int ActualLeft
		{
		public:
			int get();
		}
	
		property int ActualTop
		{
		public:
			int get();
		}
	
		property int ActualWidth
		{
		public:
			int get();
		}
	
		property Mogre::ColourValue BackgroundColour
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue colour);
		}
	
		property Mogre::Camera^ Camera
		{
		public:
			Mogre::Camera^ get();
		public:
			void set(Mogre::Camera^ cam);
		}
	
		property unsigned int ClearBuffers
		{
		public:
			unsigned int get();
		}
	
		property bool ClearEveryFrame
		{
		public:
			bool get();
		}
	
		property Mogre::Real Height
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real Left
		{
		public:
			Mogre::Real get();
		}
	
		property String^ MaterialScheme
		{
		public:
			String^ get();
		public:
			void set(String^ schemeName);
		}
	
		property bool OverlaysEnabled
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property String^ RenderQueueInvocationSequenceName
		{
		public:
			String^ get();
		public:
			void set(String^ sequenceName);
		}
	
		property bool ShadowsEnabled
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property bool SkiesEnabled
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property Mogre::RenderTarget^ Target
		{
		public:
			Mogre::RenderTarget^ get();
		}
	
		property Mogre::Real Top
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::uint VisibilityMask
		{
		public:
			Mogre::uint get();
		}
	
		property Mogre::Real Width
		{
		public:
			Mogre::Real get();
		}
	
		property int ZOrder
		{
		public:
			int get();
		}
	
		void _updateDimensions( );
	
		void Update( );
	
		void SetDimensions( Mogre::Real left, Mogre::Real top, Mogre::Real width, Mogre::Real height );
	
		void SetClearEveryFrame( bool clear, unsigned int buffers );
		void SetClearEveryFrame( bool clear );
	
		void GetActualDimensions( [Out] int% left, [Out] int% top, [Out] int% width, [Out] int% height );
	
		bool _isUpdated( );
	
		void _clearUpdatedFlag( );
	
		unsigned int _getNumRenderedFaces( );
	
		unsigned int _getNumRenderedBatches( );
	
		void SetVisibilityMask( Mogre::uint32 mask );
	
		Mogre::RenderQueueInvocationSequence^ _getRenderQueueInvocationSequence( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Viewport )
	
		//Protected Declarations
	protected public:
	
	};
	

}
