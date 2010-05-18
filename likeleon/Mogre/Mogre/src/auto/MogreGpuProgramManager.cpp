/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreGpuProgramManager.h"
#include "MogreGpuProgram.h"
#include "MogreResource.h"

namespace Mogre
{
	//################################################################
	//GpuProgramManager
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE String^
	#define STLDECL_NATIVETYPE Ogre::String
	CPP_DECLARE_STLSET( GpuProgramManager::, SyntaxCodes, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Mogre::GpuProgramPtr^ GpuProgramManager::Load( String^ name, String^ groupName, String^ filename, Mogre::GpuProgramType gptype, String^ syntaxCode )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_groupName, groupName )
		DECLARE_NATIVE_STRING( o_filename, filename )
		DECLARE_NATIVE_STRING( o_syntaxCode, syntaxCode )
	
		return static_cast<Ogre::GpuProgramManager*>(_native)->load( o_name, o_groupName, o_filename, (Ogre::GpuProgramType)gptype, o_syntaxCode );
	}
	
	Mogre::GpuProgramPtr^ GpuProgramManager::LoadFromString( String^ name, String^ groupName, String^ code, Mogre::GpuProgramType gptype, String^ syntaxCode )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_groupName, groupName )
		DECLARE_NATIVE_STRING( o_code, code )
		DECLARE_NATIVE_STRING( o_syntaxCode, syntaxCode )
	
		return static_cast<Ogre::GpuProgramManager*>(_native)->loadFromString( o_name, o_groupName, o_code, (Ogre::GpuProgramType)gptype, o_syntaxCode );
	}
	
	Mogre::GpuProgramManager::Const_SyntaxCodes^ GpuProgramManager::GetSupportedSyntax( )
	{
		return static_cast<const Ogre::GpuProgramManager*>(_native)->getSupportedSyntax( );
	}
	
	bool GpuProgramManager::IsSyntaxSupported( String^ syntaxCode )
	{
		DECLARE_NATIVE_STRING( o_syntaxCode, syntaxCode )
	
		return static_cast<const Ogre::GpuProgramManager*>(_native)->isSyntaxSupported( o_syntaxCode );
	}
	
	Mogre::GpuProgramParametersSharedPtr^ GpuProgramManager::CreateParameters( )
	{
		return static_cast<Ogre::GpuProgramManager*>(_native)->createParameters( );
	}
	
	Mogre::GpuProgramPtr^ GpuProgramManager::CreateProgram( String^ name, String^ groupName, String^ filename, Mogre::GpuProgramType gptype, String^ syntaxCode )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_groupName, groupName )
		DECLARE_NATIVE_STRING( o_filename, filename )
		DECLARE_NATIVE_STRING( o_syntaxCode, syntaxCode )
	
		return static_cast<Ogre::GpuProgramManager*>(_native)->createProgram( o_name, o_groupName, o_filename, (Ogre::GpuProgramType)gptype, o_syntaxCode );
	}
	
	Mogre::GpuProgramPtr^ GpuProgramManager::CreateProgramFromString( String^ name, String^ groupName, String^ code, Mogre::GpuProgramType gptype, String^ syntaxCode )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_groupName, groupName )
		DECLARE_NATIVE_STRING( o_code, code )
		DECLARE_NATIVE_STRING( o_syntaxCode, syntaxCode )
	
		return static_cast<Ogre::GpuProgramManager*>(_native)->createProgramFromString( o_name, o_groupName, o_code, (Ogre::GpuProgramType)gptype, o_syntaxCode );
	}
	
	Mogre::ResourcePtr^ GpuProgramManager::Create( String^ name, String^ group, Mogre::GpuProgramType gptype, String^ syntaxCode, bool isManual, Mogre::IManualResourceLoader^ loader )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
		DECLARE_NATIVE_STRING( o_syntaxCode, syntaxCode )
	
		return static_cast<Ogre::GpuProgramManager*>(_native)->create( o_name, o_group, (Ogre::GpuProgramType)gptype, o_syntaxCode, isManual, loader );
	}
	Mogre::ResourcePtr^ GpuProgramManager::Create( String^ name, String^ group, Mogre::GpuProgramType gptype, String^ syntaxCode, bool isManual )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
		DECLARE_NATIVE_STRING( o_syntaxCode, syntaxCode )
	
		return static_cast<Ogre::GpuProgramManager*>(_native)->create( o_name, o_group, (Ogre::GpuProgramType)gptype, o_syntaxCode, isManual );
	}
	Mogre::ResourcePtr^ GpuProgramManager::Create( String^ name, String^ group, Mogre::GpuProgramType gptype, String^ syntaxCode )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
		DECLARE_NATIVE_STRING( o_syntaxCode, syntaxCode )
	
		return static_cast<Ogre::GpuProgramManager*>(_native)->create( o_name, o_group, (Ogre::GpuProgramType)gptype, o_syntaxCode );
	}
	
	void GpuProgramManager::_pushSyntaxCode( String^ syntaxCode )
	{
		DECLARE_NATIVE_STRING( o_syntaxCode, syntaxCode )
	
		static_cast<Ogre::GpuProgramManager*>(_native)->_pushSyntaxCode( o_syntaxCode );
	}
	
	Mogre::ResourcePtr^ GpuProgramManager::GetByName( String^ name, bool preferHighLevelPrograms )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::GpuProgramManager*>(_native)->getByName( o_name, preferHighLevelPrograms );
	}
	Mogre::ResourcePtr^ GpuProgramManager::GetByName( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::GpuProgramManager*>(_native)->getByName( o_name );
	}
	
	
	//Protected Declarations
	
	

}
