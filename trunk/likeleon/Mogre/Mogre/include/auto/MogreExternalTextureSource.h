/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreExternalTextureSource.h"
#include "MogreStringInterface.h"
#include "MogrePrerequisites.h"
#include "MogreCommon.h"

namespace Mogre
{
	public enum class eTexturePlayMode
	{
		TextureEffectPause = Ogre::TextureEffectPause,
		TextureEffectPlay_ASAP = Ogre::TextureEffectPlay_ASAP,
		TextureEffectPlay_Looping = Ogre::TextureEffectPlay_Looping
	};
	
	//################################################################
	//ExternalTextureSource
	//################################################################
	
	public ref class ExternalTextureSource : public Wrapper, public IStringInterface
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ExternalTextureSource( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::StringInterface* _IStringInterface_GetNativePtr() = IStringInterface::_GetNativePtr;
	
	
		//Public Declarations
	public:
	
	
		property String^ DictionaryStringName
		{
		public:
			String^ get();
		}
	
		property int FPS
		{
		public:
			int get();
		}
	
		property String^ InputName
		{
		public:
			String^ get();
		public:
			void set(String^ sIN);
		}
	
		property Mogre::eTexturePlayMode PlayMode
		{
		public:
			Mogre::eTexturePlayMode get();
		public:
			void set(Mogre::eTexturePlayMode eMode);
		}
	
		property String^ PlugInStringName
		{
		public:
			String^ get();
		}
	
		void SetFPS( int iFPS );
	
		void SetTextureTecPassStateLevel( int t, int p, int s );
	
		void GetTextureTecPassStateLevel( [Out] int% t, [Out] int% p, [Out] int% s );
	
		void AddBaseParams( );
	
		bool Initialise( );
	
		void ShutDown( );
	
		void CreateDefinedTexture( String^ sMaterialName, String^ groupName );
		void CreateDefinedTexture( String^ sMaterialName );
	
		void DestroyAdvancedTexture( String^ sTextureName, String^ groupName );
		void DestroyAdvancedTexture( String^ sTextureName );
	
		//------------------------------------------------------------
		// Implementation for IStringInterface
		//------------------------------------------------------------
	
		property Mogre::ParamDictionary_NativePtr ParamDictionary
		{
		public:
			Mogre::ParamDictionary_NativePtr get();
		}
	
	public:
		Mogre::Const_ParameterList^ GetParameters( );
	
	public:
		virtual bool SetParameter( String^ name, String^ value );
	
	public:
		virtual void SetParameterList( Mogre::Const_NameValuePairList^ paramList );
	
	public:
		virtual String^ GetParameter( String^ name );
	
	public:
		virtual void CopyParametersTo( Mogre::IStringInterface^ dest );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( ExternalTextureSource )
	
		//Protected Declarations
	protected public:
	
	};
	

}
