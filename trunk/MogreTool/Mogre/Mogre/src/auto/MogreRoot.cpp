/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreRoot.h"
#include "MogrePlugin.h"
#include "MogreRenderWindow.h"
#include "MogreRenderSystem.h"
#include "Mogre-WIN32_OgreTimerImp.h"
#include "MogreSceneManager.h"
#include "MogreCommon.h"
#include "MogreRenderTarget.h"
#include "MogreRenderQueueInvocation.h"
#include "MogreMovableObject.h"

namespace Mogre
{
	//################################################################
	//Root
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Mogre::IPlugin^
	#define STLDECL_NATIVETYPE Ogre::Plugin*
	CPP_DECLARE_STLVECTOR( Root::, PluginInstanceList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Root::Root( String^ pluginFileName, String^ configFileName, String^ logFileName )
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_pluginFileName, pluginFileName )
		DECLARE_NATIVE_STRING( o_configFileName, configFileName )
		DECLARE_NATIVE_STRING( o_logFileName, logFileName )
	
		_native = new Ogre::Root( o_pluginFileName, o_configFileName, o_logFileName);
	}
	Root::Root( String^ pluginFileName, String^ configFileName )
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_pluginFileName, pluginFileName )
		DECLARE_NATIVE_STRING( o_configFileName, configFileName )
	
		_native = new Ogre::Root( o_pluginFileName, o_configFileName);
	}
	Root::Root( String^ pluginFileName )
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_pluginFileName, pluginFileName )
	
		_native = new Ogre::Root( o_pluginFileName);
	}
	Root::Root( )
	{
		_createdByCLR = true;
		_native = new Ogre::Root();
	}
	
	Mogre::RenderWindow^ Root::AutoCreatedWindow::get()
	{
		return static_cast<Ogre::Root*>(_native)->getAutoCreatedWindow( );
	}
	
	unsigned long Root::CurrentFrameNumber::get()
	{
		return static_cast<const Ogre::Root*>(_native)->getCurrentFrameNumber( );
	}
	
	Mogre::Real Root::FrameSmoothingPeriod::get()
	{
		return static_cast<const Ogre::Root*>(_native)->getFrameSmoothingPeriod( );
	}
	void Root::FrameSmoothingPeriod::set( Mogre::Real period )
	{
		static_cast<Ogre::Root*>(_native)->setFrameSmoothingPeriod( period );
	}
	
	bool Root::IsInitialised::get()
	{
		return static_cast<const Ogre::Root*>(_native)->isInitialised( );
	}
	
	Mogre::RenderSystem^ Root::RenderSystem::get()
	{
		return static_cast<Ogre::Root*>(_native)->getRenderSystem( );
	}
	void Root::RenderSystem::set( Mogre::RenderSystem^ system )
	{
		static_cast<Ogre::Root*>(_native)->setRenderSystem( system );
	}
	
	Mogre::Timer^ Root::Timer::get()
	{
		return static_cast<Ogre::Root*>(_native)->getTimer( );
	}
	
	void Root::SaveConfig( )
	{
		static_cast<Ogre::Root*>(_native)->saveConfig( );
	}
	
	bool Root::RestoreConfig( )
	{
		return static_cast<Ogre::Root*>(_native)->restoreConfig( );
	}
	
	bool Root::ShowConfigDialog( )
	{
		return static_cast<Ogre::Root*>(_native)->showConfigDialog( );
	}
	
	void Root::AddRenderSystem( Mogre::RenderSystem^ newRend )
	{
		static_cast<Ogre::Root*>(_native)->addRenderSystem( newRend );
	}
	
	Mogre::RenderSystemList^ Root::GetAvailableRenderers( )
	{
		return static_cast<Ogre::Root*>(_native)->getAvailableRenderers( );
	}
	
	Mogre::RenderSystem^ Root::GetRenderSystemByName( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::Root*>(_native)->getRenderSystemByName( o_name );
	}
	
	Mogre::RenderWindow^ Root::Initialise( bool autoCreateWindow, String^ windowTitle )
	{
		DECLARE_NATIVE_STRING( o_windowTitle, windowTitle )
	
		return static_cast<Ogre::Root*>(_native)->initialise( autoCreateWindow, o_windowTitle );
	}
	Mogre::RenderWindow^ Root::Initialise( bool autoCreateWindow )
	{
		return static_cast<Ogre::Root*>(_native)->initialise( autoCreateWindow );
	}
	
	void Root::AddSceneManagerFactory( Mogre::SceneManagerFactory^ fact )
	{
		static_cast<Ogre::Root*>(_native)->addSceneManagerFactory( fact );
	}
	
	void Root::RemoveSceneManagerFactory( Mogre::SceneManagerFactory^ fact )
	{
		static_cast<Ogre::Root*>(_native)->removeSceneManagerFactory( fact );
	}
	
	Mogre::SceneManagerMetaData_NativePtr Root::GetSceneManagerMetaData( String^ typeName )
	{
		DECLARE_NATIVE_STRING( o_typeName, typeName )
	
		return static_cast<const Ogre::Root*>(_native)->getSceneManagerMetaData( o_typeName );
	}
	
	Mogre::SceneManagerEnumerator::MetaDataIterator^ Root::GetSceneManagerMetaDataIterator( )
	{
		return static_cast<const Ogre::Root*>(_native)->getSceneManagerMetaDataIterator( );
	}
	
	Mogre::SceneManager^ Root::CreateSceneManager( String^ typeName, String^ instanceName )
	{
		DECLARE_NATIVE_STRING( o_typeName, typeName )
		DECLARE_NATIVE_STRING( o_instanceName, instanceName )
	
		return static_cast<Ogre::Root*>(_native)->createSceneManager( o_typeName, o_instanceName );
	}
	Mogre::SceneManager^ Root::CreateSceneManager( String^ typeName )
	{
		DECLARE_NATIVE_STRING( o_typeName, typeName )
	
		return static_cast<Ogre::Root*>(_native)->createSceneManager( o_typeName );
	}
	
	Mogre::SceneManager^ Root::CreateSceneManager( Mogre::SceneType typeMask, String^ instanceName )
	{
		DECLARE_NATIVE_STRING( o_instanceName, instanceName )
	
		return static_cast<Ogre::Root*>(_native)->createSceneManager( (Ogre::SceneType)typeMask, o_instanceName );
	}
	Mogre::SceneManager^ Root::CreateSceneManager( Mogre::SceneType typeMask )
	{
		return static_cast<Ogre::Root*>(_native)->createSceneManager( (Ogre::SceneType)typeMask );
	}
	
	void Root::DestroySceneManager( Mogre::SceneManager^ sm )
	{
		static_cast<Ogre::Root*>(_native)->destroySceneManager( sm );
	}
	
	Mogre::SceneManager^ Root::GetSceneManager( String^ instanceName )
	{
		DECLARE_NATIVE_STRING( o_instanceName, instanceName )
	
		return static_cast<const Ogre::Root*>(_native)->getSceneManager( o_instanceName );
	}
	
	Mogre::SceneManagerEnumerator::SceneManagerIterator^ Root::GetSceneManagerIterator( )
	{
		return static_cast<Ogre::Root*>(_native)->getSceneManagerIterator( );
	}
	
	String^ Root::GetErrorDescription( long errorNumber )
	{
		return TO_CLR_STRING( static_cast<Ogre::Root*>(_native)->getErrorDescription( errorNumber ) );
	}
	
	void Root::QueueEndRendering( )
	{
		static_cast<Ogre::Root*>(_native)->queueEndRendering( );
	}
	
	void Root::StartRendering( )
	{
		static_cast<Ogre::Root*>(_native)->startRendering( );
	}
	
	bool Root::RenderOneFrame( )
	{
		return static_cast<Ogre::Root*>(_native)->renderOneFrame( );
	}
	
	void Root::Shutdown( )
	{
		static_cast<Ogre::Root*>(_native)->shutdown( );
	}
	
	void Root::AddResourceLocation( String^ name, String^ locType, String^ groupName, bool recursive )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_locType, locType )
		DECLARE_NATIVE_STRING( o_groupName, groupName )
	
		static_cast<Ogre::Root*>(_native)->addResourceLocation( o_name, o_locType, o_groupName, recursive );
	}
	void Root::AddResourceLocation( String^ name, String^ locType, String^ groupName )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_locType, locType )
		DECLARE_NATIVE_STRING( o_groupName, groupName )
	
		static_cast<Ogre::Root*>(_native)->addResourceLocation( o_name, o_locType, o_groupName );
	}
	void Root::AddResourceLocation( String^ name, String^ locType )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_locType, locType )
	
		static_cast<Ogre::Root*>(_native)->addResourceLocation( o_name, o_locType );
	}
	
	void Root::RemoveResourceLocation( String^ name, String^ groupName )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_groupName, groupName )
	
		static_cast<Ogre::Root*>(_native)->removeResourceLocation( o_name, o_groupName );
	}
	void Root::RemoveResourceLocation( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::Root*>(_native)->removeResourceLocation( o_name );
	}
	
	void Root::ConvertColourValue( Mogre::ColourValue colour, [Out] Mogre::uint32% pDest )
	{
		pin_ptr<Mogre::uint32> p_pDest = &pDest;
	
		static_cast<Ogre::Root*>(_native)->convertColourValue( colour, p_pDest );
	}
	
	Mogre::RenderWindow^ Root::CreateRenderWindow( String^ name, unsigned int width, unsigned int height, bool fullScreen, Mogre::Const_NameValuePairList^ miscParams )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::Root*>(_native)->createRenderWindow( o_name, width, height, fullScreen, miscParams );
	}
	Mogre::RenderWindow^ Root::CreateRenderWindow( String^ name, unsigned int width, unsigned int height, bool fullScreen )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::Root*>(_native)->createRenderWindow( o_name, width, height, fullScreen );
	}
	
	void Root::DetachRenderTarget( Mogre::RenderTarget^ pWin )
	{
		static_cast<Ogre::Root*>(_native)->detachRenderTarget( pWin );
	}
	
	void Root::DetachRenderTarget( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::Root*>(_native)->detachRenderTarget( o_name );
	}
	
	Mogre::RenderTarget^ Root::GetRenderTarget( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::Root*>(_native)->getRenderTarget( o_name );
	}
	
	void Root::LoadPlugin( String^ pluginName )
	{
		DECLARE_NATIVE_STRING( o_pluginName, pluginName )
	
		static_cast<Ogre::Root*>(_native)->loadPlugin( o_pluginName );
	}
	
	void Root::UnloadPlugin( String^ pluginName )
	{
		DECLARE_NATIVE_STRING( o_pluginName, pluginName )
	
		static_cast<Ogre::Root*>(_native)->unloadPlugin( o_pluginName );
	}
	
	void Root::InstallPlugin( Mogre::IPlugin^ plugin )
	{
		static_cast<Ogre::Root*>(_native)->installPlugin( plugin );
	}
	
	void Root::UninstallPlugin( Mogre::IPlugin^ plugin )
	{
		static_cast<Ogre::Root*>(_native)->uninstallPlugin( plugin );
	}
	
	Mogre::Root::Const_PluginInstanceList^ Root::GetInstalledPlugins( )
	{
		return static_cast<const Ogre::Root*>(_native)->getInstalledPlugins( );
	}
	
	bool Root::_fireFrameStarted( Mogre::FrameEvent evt )
	{
		return static_cast<Ogre::Root*>(_native)->_fireFrameStarted( evt );
	}
	
	bool Root::_fireFrameEnded( Mogre::FrameEvent evt )
	{
		return static_cast<Ogre::Root*>(_native)->_fireFrameEnded( evt );
	}
	
	bool Root::_fireFrameStarted( )
	{
		return static_cast<Ogre::Root*>(_native)->_fireFrameStarted( );
	}
	
	bool Root::_fireFrameEnded( )
	{
		return static_cast<Ogre::Root*>(_native)->_fireFrameEnded( );
	}
	
	Mogre::SceneManager^ Root::_getCurrentSceneManager( )
	{
		return static_cast<const Ogre::Root*>(_native)->_getCurrentSceneManager( );
	}
	
	void Root::_setCurrentSceneManager( Mogre::SceneManager^ sm )
	{
		static_cast<Ogre::Root*>(_native)->_setCurrentSceneManager( sm );
	}
	
	void Root::_updateAllRenderTargets( )
	{
		static_cast<Ogre::Root*>(_native)->_updateAllRenderTargets( );
	}
	
	Mogre::RenderQueueInvocationSequence^ Root::CreateRenderQueueInvocationSequence( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::Root*>(_native)->createRenderQueueInvocationSequence( o_name );
	}
	
	Mogre::RenderQueueInvocationSequence^ Root::GetRenderQueueInvocationSequence( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::Root*>(_native)->getRenderQueueInvocationSequence( o_name );
	}
	
	void Root::DestroyRenderQueueInvocationSequence( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::Root*>(_native)->destroyRenderQueueInvocationSequence( o_name );
	}
	
	void Root::DestroyAllRenderQueueInvocationSequences( )
	{
		static_cast<Ogre::Root*>(_native)->destroyAllRenderQueueInvocationSequences( );
	}
	
	void Root::ClearEventTimes( )
	{
		static_cast<Ogre::Root*>(_native)->clearEventTimes( );
	}
	
	void Root::AddMovableObjectFactory( Mogre::MovableObjectFactory^ fact, bool overrideExisting )
	{
		static_cast<Ogre::Root*>(_native)->addMovableObjectFactory( fact, overrideExisting );
	}
	void Root::AddMovableObjectFactory( Mogre::MovableObjectFactory^ fact )
	{
		static_cast<Ogre::Root*>(_native)->addMovableObjectFactory( fact );
	}
	
	void Root::RemoveMovableObjectFactory( Mogre::MovableObjectFactory^ fact )
	{
		static_cast<Ogre::Root*>(_native)->removeMovableObjectFactory( fact );
	}
	
	bool Root::HasMovableObjectFactory( String^ typeName )
	{
		DECLARE_NATIVE_STRING( o_typeName, typeName )
	
		return static_cast<const Ogre::Root*>(_native)->hasMovableObjectFactory( o_typeName );
	}
	
	Mogre::MovableObjectFactory^ Root::GetMovableObjectFactory( String^ typeName )
	{
		DECLARE_NATIVE_STRING( o_typeName, typeName )
	
		return static_cast<Ogre::Root*>(_native)->getMovableObjectFactory( o_typeName );
	}
	
	Mogre::uint32 Root::_allocateNextMovableObjectTypeFlag( )
	{
		return static_cast<Ogre::Root*>(_native)->_allocateNextMovableObjectTypeFlag( );
	}
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDTYPE Mogre::RenderSystem^
	#define STLDECL_NATIVETYPE Ogre::RenderSystem*
	CPP_DECLARE_STLVECTOR( , RenderSystemList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	

}
