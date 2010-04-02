/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreTechnique.h"
#include "MogrePass.h"
#include "MogreMaterial.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//Technique
	//################################################################
	
	//Nested Types
	CPP_DECLARE_ITERATOR_NOCONSTRUCTOR( Technique::, PassIterator, Ogre::Technique::PassIterator, Mogre::Technique::Passes, Mogre::Pass^, Ogre::Pass* )
	
	CPP_DECLARE_ITERATOR( Technique::, IlluminationPassIterator, Ogre::Technique::IlluminationPassIterator, Mogre::IlluminationPassList, Mogre::IlluminationPass_NativePtr, Ogre::IlluminationPass*,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Technique::Technique( Mogre::Material^ parent )
	{
		_createdByCLR = true;
		_native = new Ogre::Technique( parent);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	Technique::Technique( Mogre::Material^ parent, Mogre::Technique^ oth )
	{
		_createdByCLR = true;
		_native = new Ogre::Technique( parent, oth);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	bool Technique::HasColourWriteDisabled::get()
	{
		return static_cast<const Ogre::Technique*>(_native)->hasColourWriteDisabled( );
	}
	
	bool Technique::IsDepthCheckEnabled::get()
	{
		return static_cast<const Ogre::Technique*>(_native)->isDepthCheckEnabled( );
	}
	
	bool Technique::IsDepthWriteEnabled::get()
	{
		return static_cast<const Ogre::Technique*>(_native)->isDepthWriteEnabled( );
	}
	
	bool Technique::IsLoaded::get()
	{
		return static_cast<const Ogre::Technique*>(_native)->isLoaded( );
	}
	
	bool Technique::IsSupported::get()
	{
		return static_cast<const Ogre::Technique*>(_native)->isSupported( );
	}
	
	bool Technique::IsTransparent::get()
	{
		return static_cast<const Ogre::Technique*>(_native)->isTransparent( );
	}
	
	unsigned short Technique::LodIndex::get()
	{
		return static_cast<const Ogre::Technique*>(_native)->getLodIndex( );
	}
	void Technique::LodIndex::set( unsigned short index )
	{
		static_cast<Ogre::Technique*>(_native)->setLodIndex( index );
	}
	
	String^ Technique::Name::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Technique*>(_native)->getName( ) );
	}
	void Technique::Name::set( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::Technique*>(_native)->setName( o_name );
	}
	
	unsigned short Technique::NumPasses::get()
	{
		return static_cast<const Ogre::Technique*>(_native)->getNumPasses( );
	}
	
	Mogre::Material^ Technique::Parent::get()
	{
		return static_cast<const Ogre::Technique*>(_native)->getParent( );
	}
	
	String^ Technique::ResourceGroup::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Technique*>(_native)->getResourceGroup( ) );
	}
	
	String^ Technique::SchemeName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Technique*>(_native)->getSchemeName( ) );
	}
	void Technique::SchemeName::set( String^ schemeName )
	{
		DECLARE_NATIVE_STRING( o_schemeName, schemeName )
	
		static_cast<Ogre::Technique*>(_native)->setSchemeName( o_schemeName );
	}
	
	String^ Technique::_compile( bool autoManageTextureUnits )
	{
		return TO_CLR_STRING( static_cast<Ogre::Technique*>(_native)->_compile( autoManageTextureUnits ) );
	}
	
	void Technique::_compileIlluminationPasses( )
	{
		static_cast<Ogre::Technique*>(_native)->_compileIlluminationPasses( );
	}
	
	Mogre::Pass^ Technique::CreatePass( )
	{
		return static_cast<Ogre::Technique*>(_native)->createPass( );
	}
	
	Mogre::Pass^ Technique::GetPass( unsigned short index )
	{
		return static_cast<Ogre::Technique*>(_native)->getPass( index );
	}
	
	Mogre::Pass^ Technique::GetPass( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::Technique*>(_native)->getPass( o_name );
	}
	
	void Technique::RemovePass( unsigned short index )
	{
		static_cast<Ogre::Technique*>(_native)->removePass( index );
	}
	
	void Technique::RemoveAllPasses( )
	{
		static_cast<Ogre::Technique*>(_native)->removeAllPasses( );
	}
	
	bool Technique::MovePass( unsigned short sourceIndex, unsigned short destinationIndex )
	{
		return static_cast<Ogre::Technique*>(_native)->movePass( sourceIndex, destinationIndex );
	}
	
	Mogre::Technique::PassIterator^ Technique::GetPassIterator( )
	{
		return static_cast<Ogre::Technique*>(_native)->getPassIterator( );
	}
	
	Mogre::Technique::IlluminationPassIterator^ Technique::GetIlluminationPassIterator( )
	{
		return static_cast<Ogre::Technique*>(_native)->getIlluminationPassIterator( );
	}
	
	
	void Technique::_load( )
	{
		static_cast<Ogre::Technique*>(_native)->_load( );
	}
	
	void Technique::_unload( )
	{
		static_cast<Ogre::Technique*>(_native)->_unload( );
	}
	
	void Technique::_notifyNeedsRecompile( )
	{
		static_cast<Ogre::Technique*>(_native)->_notifyNeedsRecompile( );
	}
	
	void Technique::SetPointSize( Mogre::Real ps )
	{
		static_cast<Ogre::Technique*>(_native)->setPointSize( ps );
	}
	
	void Technique::SetAmbient( Mogre::Real red, Mogre::Real green, Mogre::Real blue )
	{
		static_cast<Ogre::Technique*>(_native)->setAmbient( red, green, blue );
	}
	
	void Technique::SetAmbient( Mogre::ColourValue ambient )
	{
		static_cast<Ogre::Technique*>(_native)->setAmbient( ambient );
	}
	
	void Technique::SetDiffuse( Mogre::Real red, Mogre::Real green, Mogre::Real blue, Mogre::Real alpha )
	{
		static_cast<Ogre::Technique*>(_native)->setDiffuse( red, green, blue, alpha );
	}
	
	void Technique::SetDiffuse( Mogre::ColourValue diffuse )
	{
		static_cast<Ogre::Technique*>(_native)->setDiffuse( diffuse );
	}
	
	void Technique::SetSpecular( Mogre::Real red, Mogre::Real green, Mogre::Real blue, Mogre::Real alpha )
	{
		static_cast<Ogre::Technique*>(_native)->setSpecular( red, green, blue, alpha );
	}
	
	void Technique::SetSpecular( Mogre::ColourValue specular )
	{
		static_cast<Ogre::Technique*>(_native)->setSpecular( specular );
	}
	
	void Technique::SetShininess( Mogre::Real val )
	{
		static_cast<Ogre::Technique*>(_native)->setShininess( val );
	}
	
	void Technique::SetSelfIllumination( Mogre::Real red, Mogre::Real green, Mogre::Real blue )
	{
		static_cast<Ogre::Technique*>(_native)->setSelfIllumination( red, green, blue );
	}
	
	void Technique::SetSelfIllumination( Mogre::ColourValue selfIllum )
	{
		static_cast<Ogre::Technique*>(_native)->setSelfIllumination( selfIllum );
	}
	
	void Technique::SetDepthCheckEnabled( bool enabled )
	{
		static_cast<Ogre::Technique*>(_native)->setDepthCheckEnabled( enabled );
	}
	
	void Technique::SetDepthWriteEnabled( bool enabled )
	{
		static_cast<Ogre::Technique*>(_native)->setDepthWriteEnabled( enabled );
	}
	
	void Technique::SetDepthFunction( Mogre::CompareFunction func )
	{
		static_cast<Ogre::Technique*>(_native)->setDepthFunction( (Ogre::CompareFunction)func );
	}
	
	void Technique::SetColourWriteEnabled( bool enabled )
	{
		static_cast<Ogre::Technique*>(_native)->setColourWriteEnabled( enabled );
	}
	
	void Technique::SetCullingMode( Mogre::CullingMode mode )
	{
		static_cast<Ogre::Technique*>(_native)->setCullingMode( (Ogre::CullingMode)mode );
	}
	
	void Technique::SetManualCullingMode( Mogre::ManualCullingMode mode )
	{
		static_cast<Ogre::Technique*>(_native)->setManualCullingMode( (Ogre::ManualCullingMode)mode );
	}
	
	void Technique::SetLightingEnabled( bool enabled )
	{
		static_cast<Ogre::Technique*>(_native)->setLightingEnabled( enabled );
	}
	
	void Technique::SetShadingMode( Mogre::ShadeOptions mode )
	{
		static_cast<Ogre::Technique*>(_native)->setShadingMode( (Ogre::ShadeOptions)mode );
	}
	
	void Technique::SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart, Mogre::Real linearEnd )
	{
		static_cast<Ogre::Technique*>(_native)->setFog( overrideScene, (Ogre::FogMode)mode, colour, expDensity, linearStart, linearEnd );
	}
	void Technique::SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart )
	{
		static_cast<Ogre::Technique*>(_native)->setFog( overrideScene, (Ogre::FogMode)mode, colour, expDensity, linearStart );
	}
	void Technique::SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity )
	{
		static_cast<Ogre::Technique*>(_native)->setFog( overrideScene, (Ogre::FogMode)mode, colour, expDensity );
	}
	void Technique::SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour )
	{
		static_cast<Ogre::Technique*>(_native)->setFog( overrideScene, (Ogre::FogMode)mode, colour );
	}
	void Technique::SetFog( bool overrideScene, Mogre::FogMode mode )
	{
		static_cast<Ogre::Technique*>(_native)->setFog( overrideScene, (Ogre::FogMode)mode );
	}
	void Technique::SetFog( bool overrideScene )
	{
		static_cast<Ogre::Technique*>(_native)->setFog( overrideScene );
	}
	
	void Technique::SetDepthBias( float constantBias, float slopeScaleBias )
	{
		static_cast<Ogre::Technique*>(_native)->setDepthBias( constantBias, slopeScaleBias );
	}
	
	void Technique::SetTextureFiltering( Mogre::TextureFilterOptions filterType )
	{
		static_cast<Ogre::Technique*>(_native)->setTextureFiltering( (Ogre::TextureFilterOptions)filterType );
	}
	
	void Technique::SetTextureAnisotropy( unsigned int maxAniso )
	{
		static_cast<Ogre::Technique*>(_native)->setTextureAnisotropy( maxAniso );
	}
	
	void Technique::SetSceneBlending( Mogre::SceneBlendType sbt )
	{
		static_cast<Ogre::Technique*>(_native)->setSceneBlending( (Ogre::SceneBlendType)sbt );
	}
	
	void Technique::SetSceneBlending( Mogre::SceneBlendFactor sourceFactor, Mogre::SceneBlendFactor destFactor )
	{
		static_cast<Ogre::Technique*>(_native)->setSceneBlending( (Ogre::SceneBlendFactor)sourceFactor, (Ogre::SceneBlendFactor)destFactor );
	}
	
	unsigned short Technique::_getSchemeIndex( )
	{
		return static_cast<const Ogre::Technique*>(_native)->_getSchemeIndex( );
	}
	
	bool Technique::ApplyTextureAliases( Mogre::Const_AliasTextureNamePairList^ aliasList, bool apply )
	{
		return static_cast<const Ogre::Technique*>(_native)->applyTextureAliases( aliasList, apply );
	}
	bool Technique::ApplyTextureAliases( Mogre::Const_AliasTextureNamePairList^ aliasList )
	{
		return static_cast<const Ogre::Technique*>(_native)->applyTextureAliases( aliasList );
	}
	
	
	//Protected Declarations
	
	

}
