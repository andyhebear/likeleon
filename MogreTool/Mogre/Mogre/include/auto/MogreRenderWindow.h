/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreRenderWindow.h"
#include "MogreRenderTarget.h"
#include "MogrePrerequisites.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//RenderWindow
	//################################################################
	
	public ref class RenderWindow : public RenderTarget
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		RenderWindow( CLRObject* obj ) : RenderTarget(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property bool IsActive
		{
		public:
			bool get();
		public:
			void set(bool state);
		}
	
		property bool IsClosed
		{
		public:
			bool get();
		}
	
		property bool IsFullScreen
		{
		public:
			bool get();
		}
	
		property bool IsPrimary
		{
		public:
			bool get();
		}
	
		property bool IsVisible
		{
		public:
			bool get();
		}
	
		void Create( String^ name, unsigned int width, unsigned int height, bool fullScreen, Mogre::Const_NameValuePairList^ miscParams );
	
		void SetFullscreen( bool fullScreen, unsigned int width, unsigned int height );
	
		void Destroy( );
	
		void Resize( unsigned int width, unsigned int height );
	
		void WindowMovedOrResized( );
	
		void Reposition( int left, int top );
	
		void SetVisible( bool visible );
	
		void SwapBuffers( bool waitForVSync );
		void SwapBuffers( );
	
		void Update( );
	
		void Update( bool swapBuffers );
	
		void GetMetrics( [Out] unsigned int% width, [Out] unsigned int% height, [Out] unsigned int% colourDepth, [Out] int% left, [Out] int% top );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( RenderWindow )
	
		//Protected Declarations
	protected public:
	
	};
	

}
