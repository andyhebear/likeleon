/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreExternalTextureSource.h"
#include "MogreStringInterface.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//ExternalTextureSource
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::StringInterface* ExternalTextureSource::_IStringInterface_GetNativePtr()
	{
		return static_cast<Ogre::StringInterface*>( static_cast<Ogre::ExternalTextureSource*>(_native) );
	}
	
	
	//Public Declarations
	String^ ExternalTextureSource::DictionaryStringName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ExternalTextureSource*>(_native)->getDictionaryStringName( ) );
	}
	
	int ExternalTextureSource::FPS::get()
	{
		return static_cast<const Ogre::ExternalTextureSource*>(_native)->getFPS( );
	}
	
	String^ ExternalTextureSource::InputName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ExternalTextureSource*>(_native)->getInputName( ) );
	}
	void ExternalTextureSource::InputName::set( String^ sIN )
	{
		DECLARE_NATIVE_STRING( o_sIN, sIN )
	
		static_cast<Ogre::ExternalTextureSource*>(_native)->setInputName( o_sIN );
	}
	
	Mogre::eTexturePlayMode ExternalTextureSource::PlayMode::get()
	{
		return (Mogre::eTexturePlayMode)static_cast<const Ogre::ExternalTextureSource*>(_native)->getPlayMode( );
	}
	void ExternalTextureSource::PlayMode::set( Mogre::eTexturePlayMode eMode )
	{
		static_cast<Ogre::ExternalTextureSource*>(_native)->setPlayMode( (Ogre::eTexturePlayMode)eMode );
	}
	
	String^ ExternalTextureSource::PlugInStringName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ExternalTextureSource*>(_native)->getPlugInStringName( ) );
	}
	
	void ExternalTextureSource::SetFPS( int iFPS )
	{
		static_cast<Ogre::ExternalTextureSource*>(_native)->setFPS( iFPS );
	}
	
	void ExternalTextureSource::SetTextureTecPassStateLevel( int t, int p, int s )
	{
		static_cast<Ogre::ExternalTextureSource*>(_native)->setTextureTecPassStateLevel( t, p, s );
	}
	
	void ExternalTextureSource::GetTextureTecPassStateLevel( [Out] int% t, [Out] int% p, [Out] int% s )
	{
		pin_ptr<int> p_t = &t;
		pin_ptr<int> p_p = &p;
		pin_ptr<int> p_s = &s;
	
		static_cast<const Ogre::ExternalTextureSource*>(_native)->getTextureTecPassStateLevel( *p_t, *p_p, *p_s );
	}
	
	void ExternalTextureSource::AddBaseParams( )
	{
		static_cast<Ogre::ExternalTextureSource*>(_native)->addBaseParams( );
	}
	
	bool ExternalTextureSource::Initialise( )
	{
		return static_cast<Ogre::ExternalTextureSource*>(_native)->initialise( );
	}
	
	void ExternalTextureSource::ShutDown( )
	{
		static_cast<Ogre::ExternalTextureSource*>(_native)->shutDown( );
	}
	
	void ExternalTextureSource::CreateDefinedTexture( String^ sMaterialName, String^ groupName )
	{
		DECLARE_NATIVE_STRING( o_sMaterialName, sMaterialName )
		DECLARE_NATIVE_STRING( o_groupName, groupName )
	
		static_cast<Ogre::ExternalTextureSource*>(_native)->createDefinedTexture( o_sMaterialName, o_groupName );
	}
	void ExternalTextureSource::CreateDefinedTexture( String^ sMaterialName )
	{
		DECLARE_NATIVE_STRING( o_sMaterialName, sMaterialName )
	
		static_cast<Ogre::ExternalTextureSource*>(_native)->createDefinedTexture( o_sMaterialName );
	}
	
	void ExternalTextureSource::DestroyAdvancedTexture( String^ sTextureName, String^ groupName )
	{
		DECLARE_NATIVE_STRING( o_sTextureName, sTextureName )
		DECLARE_NATIVE_STRING( o_groupName, groupName )
	
		static_cast<Ogre::ExternalTextureSource*>(_native)->destroyAdvancedTexture( o_sTextureName, o_groupName );
	}
	void ExternalTextureSource::DestroyAdvancedTexture( String^ sTextureName )
	{
		DECLARE_NATIVE_STRING( o_sTextureName, sTextureName )
	
		static_cast<Ogre::ExternalTextureSource*>(_native)->destroyAdvancedTexture( o_sTextureName );
	}
	
	//------------------------------------------------------------
	// Implementation for IStringInterface
	//------------------------------------------------------------
	
	Mogre::ParamDictionary_NativePtr ExternalTextureSource::ParamDictionary::get()
	{
		return static_cast<Ogre::ExternalTextureSource*>(_native)->getParamDictionary( );
	}
	
	Mogre::Const_ParameterList^ ExternalTextureSource::GetParameters( )
	{
		return static_cast<const Ogre::ExternalTextureSource*>(_native)->getParameters( );
	}
	
	bool ExternalTextureSource::SetParameter( String^ name, String^ value )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_value, value )
	
		return static_cast<Ogre::ExternalTextureSource*>(_native)->setParameter( o_name, o_value );
	}
	
	void ExternalTextureSource::SetParameterList( Mogre::Const_NameValuePairList^ paramList )
	{
		static_cast<Ogre::ExternalTextureSource*>(_native)->setParameterList( paramList );
	}
	
	String^ ExternalTextureSource::GetParameter( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return TO_CLR_STRING( static_cast<const Ogre::ExternalTextureSource*>(_native)->getParameter( o_name ) );
	}
	
	void ExternalTextureSource::CopyParametersTo( Mogre::IStringInterface^ dest )
	{
		static_cast<const Ogre::ExternalTextureSource*>(_native)->copyParametersTo( dest );
	}
	
	
	//Protected Declarations
	
	

}
