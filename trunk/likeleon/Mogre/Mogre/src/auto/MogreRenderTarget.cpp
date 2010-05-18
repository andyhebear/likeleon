/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreRenderTarget.h"
#include "MogreViewport.h"
#include "MogreCamera.h"

namespace Mogre
{
	//################################################################
	//RenderTarget
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	float RenderTarget::AverageFPS::get()
	{
		return static_cast<const Ogre::RenderTarget*>(_native)->getAverageFPS( );
	}
	
	size_t RenderTarget::BatchCount::get()
	{
		return static_cast<const Ogre::RenderTarget*>(_native)->getBatchCount( );
	}
	
	float RenderTarget::BestFPS::get()
	{
		return static_cast<const Ogre::RenderTarget*>(_native)->getBestFPS( );
	}
	
	float RenderTarget::BestFrameTime::get()
	{
		return static_cast<const Ogre::RenderTarget*>(_native)->getBestFrameTime( );
	}
	
	unsigned int RenderTarget::ColourDepth::get()
	{
		return static_cast<const Ogre::RenderTarget*>(_native)->getColourDepth( );
	}
	
	unsigned int RenderTarget::Height::get()
	{
		return static_cast<const Ogre::RenderTarget*>(_native)->getHeight( );
	}
	
	bool RenderTarget::IsActive::get()
	{
		return static_cast<const Ogre::RenderTarget*>(_native)->isActive( );
	}
	void RenderTarget::IsActive::set( bool state )
	{
		static_cast<Ogre::RenderTarget*>(_native)->setActive( state );
	}
	
	bool RenderTarget::IsAutoUpdated::get()
	{
		return static_cast<const Ogre::RenderTarget*>(_native)->isAutoUpdated( );
	}
	void RenderTarget::IsAutoUpdated::set( bool autoupdate )
	{
		static_cast<Ogre::RenderTarget*>(_native)->setAutoUpdated( autoupdate );
	}
	
	bool RenderTarget::IsPrimary::get()
	{
		return static_cast<const Ogre::RenderTarget*>(_native)->isPrimary( );
	}
	
	float RenderTarget::LastFPS::get()
	{
		return static_cast<const Ogre::RenderTarget*>(_native)->getLastFPS( );
	}
	
	String^ RenderTarget::Name::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::RenderTarget*>(_native)->getName( ) );
	}
	
	unsigned short RenderTarget::NumViewports::get()
	{
		return static_cast<const Ogre::RenderTarget*>(_native)->getNumViewports( );
	}
	
	Mogre::uchar RenderTarget::Priority::get()
	{
		return static_cast<const Ogre::RenderTarget*>(_native)->getPriority( );
	}
	void RenderTarget::Priority::set( Mogre::uchar priority )
	{
		static_cast<Ogre::RenderTarget*>(_native)->setPriority( priority );
	}
	
	size_t RenderTarget::TriangleCount::get()
	{
		return static_cast<const Ogre::RenderTarget*>(_native)->getTriangleCount( );
	}
	
	unsigned int RenderTarget::Width::get()
	{
		return static_cast<const Ogre::RenderTarget*>(_native)->getWidth( );
	}
	
	float RenderTarget::WorstFPS::get()
	{
		return static_cast<const Ogre::RenderTarget*>(_native)->getWorstFPS( );
	}
	
	float RenderTarget::WorstFrameTime::get()
	{
		return static_cast<const Ogre::RenderTarget*>(_native)->getWorstFrameTime( );
	}
	
	void RenderTarget::GetMetrics( [Out] unsigned int% width, [Out] unsigned int% height, [Out] unsigned int% colourDepth )
	{
		pin_ptr<unsigned int> p_width = &width;
		pin_ptr<unsigned int> p_height = &height;
		pin_ptr<unsigned int> p_colourDepth = &colourDepth;
	
		static_cast<Ogre::RenderTarget*>(_native)->getMetrics( *p_width, *p_height, *p_colourDepth );
	}
	
	void RenderTarget::Update( )
	{
		static_cast<Ogre::RenderTarget*>(_native)->update( );
	}
	
	Mogre::Viewport^ RenderTarget::AddViewport( Mogre::Camera^ cam, int ZOrder, float left, float top, float width, float height )
	{
		return static_cast<Ogre::RenderTarget*>(_native)->addViewport( cam, ZOrder, left, top, width, height );
	}
	Mogre::Viewport^ RenderTarget::AddViewport( Mogre::Camera^ cam, int ZOrder, float left, float top, float width )
	{
		return static_cast<Ogre::RenderTarget*>(_native)->addViewport( cam, ZOrder, left, top, width );
	}
	Mogre::Viewport^ RenderTarget::AddViewport( Mogre::Camera^ cam, int ZOrder, float left, float top )
	{
		return static_cast<Ogre::RenderTarget*>(_native)->addViewport( cam, ZOrder, left, top );
	}
	Mogre::Viewport^ RenderTarget::AddViewport( Mogre::Camera^ cam, int ZOrder, float left )
	{
		return static_cast<Ogre::RenderTarget*>(_native)->addViewport( cam, ZOrder, left );
	}
	Mogre::Viewport^ RenderTarget::AddViewport( Mogre::Camera^ cam, int ZOrder )
	{
		return static_cast<Ogre::RenderTarget*>(_native)->addViewport( cam, ZOrder );
	}
	Mogre::Viewport^ RenderTarget::AddViewport( Mogre::Camera^ cam )
	{
		return static_cast<Ogre::RenderTarget*>(_native)->addViewport( cam );
	}
	
	Mogre::Viewport^ RenderTarget::GetViewport( unsigned short index )
	{
		return static_cast<Ogre::RenderTarget*>(_native)->getViewport( index );
	}
	
	void RenderTarget::RemoveViewport( int ZOrder )
	{
		static_cast<Ogre::RenderTarget*>(_native)->removeViewport( ZOrder );
	}
	
	void RenderTarget::RemoveAllViewports( )
	{
		static_cast<Ogre::RenderTarget*>(_native)->removeAllViewports( );
	}
	
	void RenderTarget::GetStatistics( [Out] float% lastFPS, [Out] float% avgFPS, [Out] float% bestFPS, [Out] float% worstFPS )
	{
		pin_ptr<float> p_lastFPS = &lastFPS;
		pin_ptr<float> p_avgFPS = &avgFPS;
		pin_ptr<float> p_bestFPS = &bestFPS;
		pin_ptr<float> p_worstFPS = &worstFPS;
	
		static_cast<const Ogre::RenderTarget*>(_native)->getStatistics( *p_lastFPS, *p_avgFPS, *p_bestFPS, *p_worstFPS );
	}
	
	Mogre::RenderTarget::FrameStats^ RenderTarget::GetStatistics( )
	{
		return static_cast<const Ogre::RenderTarget*>(_native)->getStatistics( );
	}
	
	void RenderTarget::ResetStatistics( )
	{
		static_cast<Ogre::RenderTarget*>(_native)->resetStatistics( );
	}
	
	void RenderTarget::GetCustomAttribute( String^ name, void* pData )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::RenderTarget*>(_native)->getCustomAttribute( o_name, pData );
	}
	
	void RenderTarget::RemoveAllListeners( )
	{
		static_cast<Ogre::RenderTarget*>(_native)->removeAllListeners( );
	}
	
	void RenderTarget::WriteContentsToFile( String^ filename )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
	
		static_cast<Ogre::RenderTarget*>(_native)->writeContentsToFile( o_filename );
	}
	
	String^ RenderTarget::WriteContentsToTimestampedFile( String^ filenamePrefix, String^ filenameSuffix )
	{
		DECLARE_NATIVE_STRING( o_filenamePrefix, filenamePrefix )
		DECLARE_NATIVE_STRING( o_filenameSuffix, filenameSuffix )
	
		return TO_CLR_STRING( static_cast<Ogre::RenderTarget*>(_native)->writeContentsToTimestampedFile( o_filenamePrefix, o_filenameSuffix ) );
	}
	
	bool RenderTarget::RequiresTextureFlipping( )
	{
		return static_cast<const Ogre::RenderTarget*>(_native)->requiresTextureFlipping( );
	}
	
	void RenderTarget::_notifyCameraRemoved( Mogre::Camera^ cam )
	{
		static_cast<Ogre::RenderTarget*>(_native)->_notifyCameraRemoved( cam );
	}
	
	
	//Protected Declarations
	
	

}
