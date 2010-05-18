/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreShadowTextureManager.h"
#include "MogrePixelFormat.h"

namespace Mogre
{
	//################################################################
	//ShadowTextureConfig
	//################################################################
	
	public value class ShadowTextureConfig
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		unsigned int width;
	
		unsigned int height;
	
		Mogre::PixelFormat format;
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_VALUECLASS( ShadowTextureConfig )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//ShadowTextureManager
	//################################################################
	
	public ref class ShadowTextureManager
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		static ShadowTextureManager^ _singleton;
		Ogre::ShadowTextureManager* _native;
		bool _createdByCLR;
	
		//Internal Declarations
	public protected:
		ShadowTextureManager( Ogre::ShadowTextureManager* obj ) : _native(obj)
		{
		}
	
	
		//Public Declarations
	public:
		ShadowTextureManager( );
	
		static property ShadowTextureManager^ Singleton
		{
			ShadowTextureManager^ get()
			{
				if (_singleton == CLR_NULL)
				{
					Ogre::ShadowTextureManager* ptr = Ogre::ShadowTextureManager::getSingletonPtr();
					if ( ptr ) _singleton = gcnew ShadowTextureManager( ptr );
				}
				return _singleton;
			}
		}
	
		void GetShadowTextures( Mogre::Const_ShadowTextureConfigList^ config, Mogre::ShadowTextureList^ listToPopulate );
	
		Mogre::TexturePtr^ GetNullShadowTexture( Mogre::PixelFormat format );
	
		void ClearUnused( );
	
		void Clear( );
	
	
		//Protected Declarations
	protected public:
	
	};
	
	#define STLDECL_MANAGEDTYPE Mogre::TexturePtr^
	#define STLDECL_NATIVETYPE Ogre::TexturePtr
	INC_DECLARE_STLVECTOR( ShadowTextureList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE Mogre::ShadowTextureConfig
	#define STLDECL_NATIVETYPE Ogre::ShadowTextureConfig
	INC_DECLARE_STLVECTOR( ShadowTextureConfigList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	public INC_DECLARE_ITERATOR( ConstShadowTextureConfigIterator, Ogre::ConstShadowTextureConfigIterator, Mogre::ShadowTextureConfigList, Mogre::ShadowTextureConfig, Ogre::ShadowTextureConfig )
	

}
