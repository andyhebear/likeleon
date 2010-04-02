/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreMaterial.h"
#include "MogreResourceManager.h"
#include "MogreResource.h"
#include "MogreTechnique.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//Material
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Mogre::Real
	#define STLDECL_NATIVETYPE Ogre::Real
	CPP_DECLARE_STLVECTOR( Material::, LodDistanceList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	CPP_DECLARE_ITERATOR( Material::, LodDistanceIterator, Ogre::Material::LodDistanceIterator, Mogre::Material::LodDistanceList, Mogre::Real, Ogre::Real,  )
	
	CPP_DECLARE_ITERATOR_NOCONSTRUCTOR( Material::, TechniqueIterator, Ogre::Material::TechniqueIterator, Mogre::Material::Techniques, Mogre::Technique^, Ogre::Technique* )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Material::Material( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader ) : Resource((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		_native = new Ogre::Material( creator, o_name, handle, o_group, isManual, loader);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	Material::Material( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual ) : Resource((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		_native = new Ogre::Material( creator, o_name, handle, o_group, isManual);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	Material::Material( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group ) : Resource((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		_native = new Ogre::Material( creator, o_name, handle, o_group);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	bool Material::CompilationRequired::get()
	{
		return static_cast<const Ogre::Material*>(_native)->getCompilationRequired( );
	}
	
	bool Material::IsTransparent::get()
	{
		return static_cast<const Ogre::Material*>(_native)->isTransparent( );
	}
	
	unsigned short Material::NumSupportedTechniques::get()
	{
		return static_cast<const Ogre::Material*>(_native)->getNumSupportedTechniques( );
	}
	
	unsigned short Material::NumTechniques::get()
	{
		return static_cast<const Ogre::Material*>(_native)->getNumTechniques( );
	}
	
	bool Material::ReceiveShadows::get()
	{
		return static_cast<const Ogre::Material*>(_native)->getReceiveShadows( );
	}
	void Material::ReceiveShadows::set( bool enabled )
	{
		static_cast<Ogre::Material*>(_native)->setReceiveShadows( enabled );
	}
	
	bool Material::TransparencyCastsShadows::get()
	{
		return static_cast<const Ogre::Material*>(_native)->getTransparencyCastsShadows( );
	}
	void Material::TransparencyCastsShadows::set( bool enabled )
	{
		static_cast<Ogre::Material*>(_native)->setTransparencyCastsShadows( enabled );
	}
	
	String^ Material::UnsupportedTechniquesExplanation::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Material*>(_native)->getUnsupportedTechniquesExplanation( ) );
	}
	
	
	Mogre::Technique^ Material::CreateTechnique( )
	{
		return static_cast<Ogre::Material*>(_native)->createTechnique( );
	}
	
	Mogre::Technique^ Material::GetTechnique( unsigned short index )
	{
		return static_cast<Ogre::Material*>(_native)->getTechnique( index );
	}
	
	Mogre::Technique^ Material::GetTechnique( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::Material*>(_native)->getTechnique( o_name );
	}
	
	void Material::RemoveTechnique( unsigned short index )
	{
		static_cast<Ogre::Material*>(_native)->removeTechnique( index );
	}
	
	void Material::RemoveAllTechniques( )
	{
		static_cast<Ogre::Material*>(_native)->removeAllTechniques( );
	}
	
	Mogre::Material::TechniqueIterator^ Material::GetTechniqueIterator( )
	{
		return static_cast<Ogre::Material*>(_native)->getTechniqueIterator( );
	}
	
	Mogre::Material::TechniqueIterator^ Material::GetSupportedTechniqueIterator( )
	{
		return static_cast<Ogre::Material*>(_native)->getSupportedTechniqueIterator( );
	}
	
	Mogre::Technique^ Material::GetSupportedTechnique( unsigned short index )
	{
		return static_cast<Ogre::Material*>(_native)->getSupportedTechnique( index );
	}
	
	unsigned short Material::GetNumLodLevels( unsigned short schemeIndex )
	{
		return static_cast<const Ogre::Material*>(_native)->getNumLodLevels( schemeIndex );
	}
	
	unsigned short Material::GetNumLodLevels( String^ schemeName )
	{
		DECLARE_NATIVE_STRING( o_schemeName, schemeName )
	
		return static_cast<const Ogre::Material*>(_native)->getNumLodLevels( o_schemeName );
	}
	
	Mogre::Technique^ Material::GetBestTechnique( unsigned short lodIndex )
	{
		return static_cast<Ogre::Material*>(_native)->getBestTechnique( lodIndex );
	}
	Mogre::Technique^ Material::GetBestTechnique( )
	{
		return static_cast<Ogre::Material*>(_native)->getBestTechnique( );
	}
	
	Mogre::MaterialPtr^ Material::Clone( String^ newName, bool changeGroup, String^ newGroup )
	{
		DECLARE_NATIVE_STRING( o_newName, newName )
		DECLARE_NATIVE_STRING( o_newGroup, newGroup )
	
		return static_cast<const Ogre::Material*>(_native)->clone( o_newName, changeGroup, o_newGroup );
	}
	Mogre::MaterialPtr^ Material::Clone( String^ newName, bool changeGroup )
	{
		DECLARE_NATIVE_STRING( o_newName, newName )
	
		return static_cast<const Ogre::Material*>(_native)->clone( o_newName, changeGroup );
	}
	Mogre::MaterialPtr^ Material::Clone( String^ newName )
	{
		DECLARE_NATIVE_STRING( o_newName, newName )
	
		return static_cast<const Ogre::Material*>(_native)->clone( o_newName );
	}
	
	void Material::CopyDetailsTo( Mogre::MaterialPtr^ mat )
	{
		static_cast<const Ogre::Material*>(_native)->copyDetailsTo( (Ogre::MaterialPtr&)mat );
	}
	
	void Material::Compile( bool autoManageTextureUnits )
	{
		static_cast<Ogre::Material*>(_native)->compile( autoManageTextureUnits );
	}
	void Material::Compile( )
	{
		static_cast<Ogre::Material*>(_native)->compile( );
	}
	
	void Material::SetPointSize( Mogre::Real ps )
	{
		static_cast<Ogre::Material*>(_native)->setPointSize( ps );
	}
	
	void Material::SetAmbient( Mogre::Real red, Mogre::Real green, Mogre::Real blue )
	{
		static_cast<Ogre::Material*>(_native)->setAmbient( red, green, blue );
	}
	
	void Material::SetAmbient( Mogre::ColourValue ambient )
	{
		static_cast<Ogre::Material*>(_native)->setAmbient( ambient );
	}
	
	void Material::SetDiffuse( Mogre::Real red, Mogre::Real green, Mogre::Real blue, Mogre::Real alpha )
	{
		static_cast<Ogre::Material*>(_native)->setDiffuse( red, green, blue, alpha );
	}
	
	void Material::SetDiffuse( Mogre::ColourValue diffuse )
	{
		static_cast<Ogre::Material*>(_native)->setDiffuse( diffuse );
	}
	
	void Material::SetSpecular( Mogre::Real red, Mogre::Real green, Mogre::Real blue, Mogre::Real alpha )
	{
		static_cast<Ogre::Material*>(_native)->setSpecular( red, green, blue, alpha );
	}
	
	void Material::SetSpecular( Mogre::ColourValue specular )
	{
		static_cast<Ogre::Material*>(_native)->setSpecular( specular );
	}
	
	void Material::SetShininess( Mogre::Real val )
	{
		static_cast<Ogre::Material*>(_native)->setShininess( val );
	}
	
	void Material::SetSelfIllumination( Mogre::Real red, Mogre::Real green, Mogre::Real blue )
	{
		static_cast<Ogre::Material*>(_native)->setSelfIllumination( red, green, blue );
	}
	
	void Material::SetSelfIllumination( Mogre::ColourValue selfIllum )
	{
		static_cast<Ogre::Material*>(_native)->setSelfIllumination( selfIllum );
	}
	
	void Material::SetDepthCheckEnabled( bool enabled )
	{
		static_cast<Ogre::Material*>(_native)->setDepthCheckEnabled( enabled );
	}
	
	void Material::SetDepthWriteEnabled( bool enabled )
	{
		static_cast<Ogre::Material*>(_native)->setDepthWriteEnabled( enabled );
	}
	
	void Material::SetDepthFunction( Mogre::CompareFunction func )
	{
		static_cast<Ogre::Material*>(_native)->setDepthFunction( (Ogre::CompareFunction)func );
	}
	
	void Material::SetColourWriteEnabled( bool enabled )
	{
		static_cast<Ogre::Material*>(_native)->setColourWriteEnabled( enabled );
	}
	
	void Material::SetCullingMode( Mogre::CullingMode mode )
	{
		static_cast<Ogre::Material*>(_native)->setCullingMode( (Ogre::CullingMode)mode );
	}
	
	void Material::SetManualCullingMode( Mogre::ManualCullingMode mode )
	{
		static_cast<Ogre::Material*>(_native)->setManualCullingMode( (Ogre::ManualCullingMode)mode );
	}
	
	void Material::SetLightingEnabled( bool enabled )
	{
		static_cast<Ogre::Material*>(_native)->setLightingEnabled( enabled );
	}
	
	void Material::SetShadingMode( Mogre::ShadeOptions mode )
	{
		static_cast<Ogre::Material*>(_native)->setShadingMode( (Ogre::ShadeOptions)mode );
	}
	
	void Material::SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart, Mogre::Real linearEnd )
	{
		static_cast<Ogre::Material*>(_native)->setFog( overrideScene, (Ogre::FogMode)mode, colour, expDensity, linearStart, linearEnd );
	}
	void Material::SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart )
	{
		static_cast<Ogre::Material*>(_native)->setFog( overrideScene, (Ogre::FogMode)mode, colour, expDensity, linearStart );
	}
	void Material::SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity )
	{
		static_cast<Ogre::Material*>(_native)->setFog( overrideScene, (Ogre::FogMode)mode, colour, expDensity );
	}
	void Material::SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour )
	{
		static_cast<Ogre::Material*>(_native)->setFog( overrideScene, (Ogre::FogMode)mode, colour );
	}
	void Material::SetFog( bool overrideScene, Mogre::FogMode mode )
	{
		static_cast<Ogre::Material*>(_native)->setFog( overrideScene, (Ogre::FogMode)mode );
	}
	void Material::SetFog( bool overrideScene )
	{
		static_cast<Ogre::Material*>(_native)->setFog( overrideScene );
	}
	
	void Material::SetDepthBias( float constantBias, float slopeScaleBias )
	{
		static_cast<Ogre::Material*>(_native)->setDepthBias( constantBias, slopeScaleBias );
	}
	
	void Material::SetTextureFiltering( Mogre::TextureFilterOptions filterType )
	{
		static_cast<Ogre::Material*>(_native)->setTextureFiltering( (Ogre::TextureFilterOptions)filterType );
	}
	
	void Material::SetTextureAnisotropy( int maxAniso )
	{
		static_cast<Ogre::Material*>(_native)->setTextureAnisotropy( maxAniso );
	}
	
	void Material::SetSceneBlending( Mogre::SceneBlendType sbt )
	{
		static_cast<Ogre::Material*>(_native)->setSceneBlending( (Ogre::SceneBlendType)sbt );
	}
	
	void Material::SetSceneBlending( Mogre::SceneBlendFactor sourceFactor, Mogre::SceneBlendFactor destFactor )
	{
		static_cast<Ogre::Material*>(_native)->setSceneBlending( (Ogre::SceneBlendFactor)sourceFactor, (Ogre::SceneBlendFactor)destFactor );
	}
	
	void Material::_notifyNeedsRecompile( )
	{
		static_cast<Ogre::Material*>(_native)->_notifyNeedsRecompile( );
	}
	
	void Material::SetLodLevels( Mogre::Material::Const_LodDistanceList^ lodDistances )
	{
		static_cast<Ogre::Material*>(_native)->setLodLevels( lodDistances );
	}
	
	Mogre::Material::LodDistanceIterator^ Material::GetLodDistanceIterator( )
	{
		return static_cast<const Ogre::Material*>(_native)->getLodDistanceIterator( );
	}
	
	unsigned short Material::GetLodIndex( Mogre::Real d )
	{
		return static_cast<const Ogre::Material*>(_native)->getLodIndex( d );
	}
	
	unsigned short Material::GetLodIndexSquaredDepth( Mogre::Real squaredDepth )
	{
		return static_cast<const Ogre::Material*>(_native)->getLodIndexSquaredDepth( squaredDepth );
	}
	
	void Material::Touch( )
	{
		static_cast<Ogre::Material*>(_native)->touch( );
	}
	
	bool Material::ApplyTextureAliases( Mogre::Const_AliasTextureNamePairList^ aliasList, bool apply )
	{
		return static_cast<const Ogre::Material*>(_native)->applyTextureAliases( aliasList, apply );
	}
	bool Material::ApplyTextureAliases( Mogre::Const_AliasTextureNamePairList^ aliasList )
	{
		return static_cast<const Ogre::Material*>(_native)->applyTextureAliases( aliasList );
	}
	
	
	//Protected Declarations
	
	

}
