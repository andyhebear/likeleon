/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreOverlayManager.h"
#include "MogreOverlay.h"
#include "MogreOverlayElement.h"
#include "MogreStringVector.h"
#include "MogreDataStream.h"
#include "MogreCamera.h"
#include "MogreRenderQueue.h"
#include "MogreViewport.h"
#include "MogreOverlayElementFactory.h"

namespace Mogre
{
	//################################################################
	//OverlayManager
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::Overlay^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::Overlay*
	CPP_DECLARE_STLMAP( OverlayManager::, OverlayMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::OverlayElement^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::OverlayElement*
	CPP_DECLARE_STLMAP( OverlayManager::, ElementMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	CPP_DECLARE_MAP_ITERATOR( OverlayManager::, OverlayMapIterator, Ogre::OverlayManager::OverlayMapIterator, Mogre::OverlayManager::OverlayMap, Mogre::Overlay^, Ogre::Overlay*, String^, Ogre::String,  )
	
	CPP_DECLARE_MAP_ITERATOR( OverlayManager::, TemplateIterator, Ogre::OverlayManager::TemplateIterator, Mogre::OverlayManager::ElementMap, Mogre::OverlayElement^, Ogre::OverlayElement*, String^, Ogre::String,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	OverlayManager::OverlayManager( )
	{
		_createdByCLR = true;
		_native = new Ogre::OverlayManager();
	}
	
	bool OverlayManager::HasViewportChanged::get()
	{
		return static_cast<const Ogre::OverlayManager*>(_native)->hasViewportChanged( );
	}
	
	Mogre::Real OverlayManager::LoadingOrder::get()
	{
		return static_cast<const Ogre::OverlayManager*>(_native)->getLoadingOrder( );
	}
	
	Mogre::Real OverlayManager::ViewportAspectRatio::get()
	{
		return static_cast<const Ogre::OverlayManager*>(_native)->getViewportAspectRatio( );
	}
	
	int OverlayManager::ViewportHeight::get()
	{
		return static_cast<const Ogre::OverlayManager*>(_native)->getViewportHeight( );
	}
	
	int OverlayManager::ViewportWidth::get()
	{
		return static_cast<const Ogre::OverlayManager*>(_native)->getViewportWidth( );
	}
	
	Mogre::Const_StringVector^ OverlayManager::GetScriptPatterns( )
	{
		return static_cast<const Ogre::OverlayManager*>(_native)->getScriptPatterns( );
	}
	
	void OverlayManager::ParseScript( Mogre::DataStreamPtr^ stream, String^ groupName )
	{
		DECLARE_NATIVE_STRING( o_groupName, groupName )
	
		static_cast<Ogre::OverlayManager*>(_native)->parseScript( (Ogre::DataStreamPtr&)stream, o_groupName );
	}
	
	Mogre::Overlay^ OverlayManager::Create( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::OverlayManager*>(_native)->create( o_name );
	}
	
	Mogre::Overlay^ OverlayManager::GetByName( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::OverlayManager*>(_native)->getByName( o_name );
	}
	
	void OverlayManager::Destroy( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::OverlayManager*>(_native)->destroy( o_name );
	}
	
	void OverlayManager::Destroy( Mogre::Overlay^ overlay )
	{
		static_cast<Ogre::OverlayManager*>(_native)->destroy( overlay );
	}
	
	void OverlayManager::DestroyAll( )
	{
		static_cast<Ogre::OverlayManager*>(_native)->destroyAll( );
	}
	
	Mogre::OverlayManager::OverlayMapIterator^ OverlayManager::GetOverlayIterator( )
	{
		return static_cast<Ogre::OverlayManager*>(_native)->getOverlayIterator( );
	}
	
	void OverlayManager::_queueOverlaysForRendering( Mogre::Camera^ cam, Mogre::RenderQueue^ pQueue, Mogre::Viewport^ vp )
	{
		static_cast<Ogre::OverlayManager*>(_native)->_queueOverlaysForRendering( cam, pQueue, vp );
	}
	
	Mogre::OverlayElement^ OverlayManager::CreateOverlayElement( String^ typeName, String^ instanceName, bool isTemplate )
	{
		DECLARE_NATIVE_STRING( o_typeName, typeName )
		DECLARE_NATIVE_STRING( o_instanceName, instanceName )
	
		return static_cast<Ogre::OverlayManager*>(_native)->createOverlayElement( o_typeName, o_instanceName, isTemplate );
	}
	Mogre::OverlayElement^ OverlayManager::CreateOverlayElement( String^ typeName, String^ instanceName )
	{
		DECLARE_NATIVE_STRING( o_typeName, typeName )
		DECLARE_NATIVE_STRING( o_instanceName, instanceName )
	
		return static_cast<Ogre::OverlayManager*>(_native)->createOverlayElement( o_typeName, o_instanceName );
	}
	
	Mogre::OverlayElement^ OverlayManager::GetOverlayElement( String^ name, bool isTemplate )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::OverlayManager*>(_native)->getOverlayElement( o_name, isTemplate );
	}
	Mogre::OverlayElement^ OverlayManager::GetOverlayElement( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::OverlayManager*>(_native)->getOverlayElement( o_name );
	}
	
	void OverlayManager::DestroyOverlayElement( String^ instanceName, bool isTemplate )
	{
		DECLARE_NATIVE_STRING( o_instanceName, instanceName )
	
		static_cast<Ogre::OverlayManager*>(_native)->destroyOverlayElement( o_instanceName, isTemplate );
	}
	void OverlayManager::DestroyOverlayElement( String^ instanceName )
	{
		DECLARE_NATIVE_STRING( o_instanceName, instanceName )
	
		static_cast<Ogre::OverlayManager*>(_native)->destroyOverlayElement( o_instanceName );
	}
	
	void OverlayManager::DestroyOverlayElement( Mogre::OverlayElement^ pInstance, bool isTemplate )
	{
		static_cast<Ogre::OverlayManager*>(_native)->destroyOverlayElement( pInstance, isTemplate );
	}
	void OverlayManager::DestroyOverlayElement( Mogre::OverlayElement^ pInstance )
	{
		static_cast<Ogre::OverlayManager*>(_native)->destroyOverlayElement( pInstance );
	}
	
	void OverlayManager::DestroyAllOverlayElements( bool isTemplate )
	{
		static_cast<Ogre::OverlayManager*>(_native)->destroyAllOverlayElements( isTemplate );
	}
	void OverlayManager::DestroyAllOverlayElements( )
	{
		static_cast<Ogre::OverlayManager*>(_native)->destroyAllOverlayElements( );
	}
	
	void OverlayManager::AddOverlayElementFactory( Mogre::OverlayElementFactory^ elemFactory )
	{
		static_cast<Ogre::OverlayManager*>(_native)->addOverlayElementFactory( elemFactory );
	}
	
	Mogre::OverlayElement^ OverlayManager::CreateOverlayElementFromTemplate( String^ templateName, String^ typeName, String^ instanceName, bool isTemplate )
	{
		DECLARE_NATIVE_STRING( o_templateName, templateName )
		DECLARE_NATIVE_STRING( o_typeName, typeName )
		DECLARE_NATIVE_STRING( o_instanceName, instanceName )
	
		return static_cast<Ogre::OverlayManager*>(_native)->createOverlayElementFromTemplate( o_templateName, o_typeName, o_instanceName, isTemplate );
	}
	Mogre::OverlayElement^ OverlayManager::CreateOverlayElementFromTemplate( String^ templateName, String^ typeName, String^ instanceName )
	{
		DECLARE_NATIVE_STRING( o_templateName, templateName )
		DECLARE_NATIVE_STRING( o_typeName, typeName )
		DECLARE_NATIVE_STRING( o_instanceName, instanceName )
	
		return static_cast<Ogre::OverlayManager*>(_native)->createOverlayElementFromTemplate( o_templateName, o_typeName, o_instanceName );
	}
	
	Mogre::OverlayElement^ OverlayManager::CloneOverlayElementFromTemplate( String^ templateName, String^ instanceName )
	{
		DECLARE_NATIVE_STRING( o_templateName, templateName )
		DECLARE_NATIVE_STRING( o_instanceName, instanceName )
	
		return static_cast<Ogre::OverlayManager*>(_native)->cloneOverlayElementFromTemplate( o_templateName, o_instanceName );
	}
	
	Mogre::OverlayElement^ OverlayManager::CreateOverlayElementFromFactory( String^ typeName, String^ instanceName )
	{
		DECLARE_NATIVE_STRING( o_typeName, typeName )
		DECLARE_NATIVE_STRING( o_instanceName, instanceName )
	
		return static_cast<Ogre::OverlayManager*>(_native)->createOverlayElementFromFactory( o_typeName, o_instanceName );
	}
	
	Mogre::OverlayManager::TemplateIterator^ OverlayManager::GetTemplateIterator( )
	{
		return static_cast<Ogre::OverlayManager*>(_native)->getTemplateIterator( );
	}
	
	bool OverlayManager::IsTemplate( String^ strName )
	{
		DECLARE_NATIVE_STRING( o_strName, strName )
	
		return static_cast<const Ogre::OverlayManager*>(_native)->isTemplate( o_strName );
	}
	
	
	//Protected Declarations
	
	

}
