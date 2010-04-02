/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreOverlayManager.h"
#include "MogrePrerequisites.h"
#include "MogreStringVector.h"

namespace Mogre
{
	//################################################################
	//OverlayManager
	//################################################################
	
	public ref class OverlayManager
	{
		//Nested Types
		public: ref class OverlayMap;
		public: ref class ElementMap;
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::Overlay^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::Overlay*
		public: INC_DECLARE_STLMAP( OverlayMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::OverlayElement^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::OverlayElement*
		public: INC_DECLARE_STLMAP( ElementMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		public: INC_DECLARE_MAP_ITERATOR( OverlayMapIterator, Ogre::OverlayManager::OverlayMapIterator, Mogre::OverlayManager::OverlayMap, Mogre::Overlay^, Ogre::Overlay*, String^, Ogre::String )
	
		public: INC_DECLARE_MAP_ITERATOR( TemplateIterator, Ogre::OverlayManager::TemplateIterator, Mogre::OverlayManager::ElementMap, Mogre::OverlayElement^, Ogre::OverlayElement*, String^, Ogre::String )
	
		//Private Declarations
	private protected:
		static OverlayManager^ _singleton;
		Ogre::OverlayManager* _native;
		bool _createdByCLR;
	
		//Internal Declarations
	public protected:
		OverlayManager( Ogre::OverlayManager* obj ) : _native(obj)
		{
		}
	
	
		//Public Declarations
	public:
		OverlayManager( );
	
		static property OverlayManager^ Singleton
		{
			OverlayManager^ get()
			{
				if (_singleton == CLR_NULL)
				{
					Ogre::OverlayManager* ptr = Ogre::OverlayManager::getSingletonPtr();
					if ( ptr ) _singleton = gcnew OverlayManager( ptr );
				}
				return _singleton;
			}
		}
	
		property bool HasViewportChanged
		{
		public:
			bool get();
		}
	
		property Mogre::Real LoadingOrder
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real ViewportAspectRatio
		{
		public:
			Mogre::Real get();
		}
	
		property int ViewportHeight
		{
		public:
			int get();
		}
	
		property int ViewportWidth
		{
		public:
			int get();
		}
	
		Mogre::Const_StringVector^ GetScriptPatterns( );
	
		void ParseScript( Mogre::DataStreamPtr^ stream, String^ groupName );
	
		Mogre::Overlay^ Create( String^ name );
	
		Mogre::Overlay^ GetByName( String^ name );
	
		void Destroy( String^ name );
	
		void Destroy( Mogre::Overlay^ overlay );
	
		void DestroyAll( );
	
		Mogre::OverlayManager::OverlayMapIterator^ GetOverlayIterator( );
	
		void _queueOverlaysForRendering( Mogre::Camera^ cam, Mogre::RenderQueue^ pQueue, Mogre::Viewport^ vp );
	
		Mogre::OverlayElement^ CreateOverlayElement( String^ typeName, String^ instanceName, bool isTemplate );
		Mogre::OverlayElement^ CreateOverlayElement( String^ typeName, String^ instanceName );
	
		Mogre::OverlayElement^ GetOverlayElement( String^ name, bool isTemplate );
		Mogre::OverlayElement^ GetOverlayElement( String^ name );
	
		void DestroyOverlayElement( String^ instanceName, bool isTemplate );
		void DestroyOverlayElement( String^ instanceName );
	
		void DestroyOverlayElement( Mogre::OverlayElement^ pInstance, bool isTemplate );
		void DestroyOverlayElement( Mogre::OverlayElement^ pInstance );
	
		void DestroyAllOverlayElements( bool isTemplate );
		void DestroyAllOverlayElements( );
	
		void AddOverlayElementFactory( Mogre::OverlayElementFactory^ elemFactory );
	
		Mogre::OverlayElement^ CreateOverlayElementFromTemplate( String^ templateName, String^ typeName, String^ instanceName, bool isTemplate );
		Mogre::OverlayElement^ CreateOverlayElementFromTemplate( String^ templateName, String^ typeName, String^ instanceName );
	
		Mogre::OverlayElement^ CloneOverlayElementFromTemplate( String^ templateName, String^ instanceName );
	
		Mogre::OverlayElement^ CreateOverlayElementFromFactory( String^ typeName, String^ instanceName );
	
		Mogre::OverlayManager::TemplateIterator^ GetTemplateIterator( );
	
		bool IsTemplate( String^ strName );
	
	
		//Protected Declarations
	protected public:
	
	};
	

}
