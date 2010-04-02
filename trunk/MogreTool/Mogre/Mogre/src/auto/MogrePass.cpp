/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogrePass.h"
#include "MogreTechnique.h"
#include "MogreTextureUnitState.h"
#include "MogreGpuProgram.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//IlluminationPass_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	Mogre::IlluminationStage IlluminationPass_NativePtr::stage::get()
	{
		return (Mogre::IlluminationStage)_native->stage;
	}
	void IlluminationPass_NativePtr::stage::set( Mogre::IlluminationStage value )
	{
		_native->stage = (Ogre::IlluminationStage)value;
	}
	
	Mogre::Pass^ IlluminationPass_NativePtr::pass::get()
	{
		return _native->pass;
	}
	void IlluminationPass_NativePtr::pass::set( Mogre::Pass^ value )
	{
		_native->pass = value;
	}
	
	bool IlluminationPass_NativePtr::destroyOnShutdown::get()
	{
		return _native->destroyOnShutdown;
	}
	void IlluminationPass_NativePtr::destroyOnShutdown::set( bool value )
	{
		_native->destroyOnShutdown = value;
	}
	
	Mogre::Pass^ IlluminationPass_NativePtr::originalPass::get()
	{
		return _native->originalPass;
	}
	void IlluminationPass_NativePtr::originalPass::set( Mogre::Pass^ value )
	{
		_native->originalPass = value;
	}
	
	
	Mogre::IlluminationPass_NativePtr IlluminationPass_NativePtr::Create()
	{
		IlluminationPass_NativePtr ptr;
		ptr._native = new Ogre::IlluminationPass();
		return ptr;
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//Pass
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Mogre::Pass^
	#define STLDECL_NATIVETYPE Ogre::Pass*
	CPP_DECLARE_STLSET( Pass::, PassSet, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	CPP_DECLARE_ITERATOR_NOCONSTRUCTOR( Pass::, TextureUnitStateIterator, Ogre::Pass::TextureUnitStateIterator, Mogre::Pass::TextureUnitStates, Mogre::TextureUnitState^, Ogre::TextureUnitState* )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Pass::Pass( Mogre::Technique^ parent, unsigned short index )
	{
		_createdByCLR = true;
		_native = new Ogre::Pass( parent, index);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	Pass::Pass( Mogre::Technique^ parent, unsigned short index, Mogre::Pass^ oth )
	{
		_createdByCLR = true;
		_native = new Ogre::Pass( parent, index, oth);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::CompareFunction Pass::AlphaRejectFunction::get()
	{
		return (Mogre::CompareFunction)static_cast<const Ogre::Pass*>(_native)->getAlphaRejectFunction( );
	}
	void Pass::AlphaRejectFunction::set( Mogre::CompareFunction func )
	{
		static_cast<Ogre::Pass*>(_native)->setAlphaRejectFunction( (Ogre::CompareFunction)func );
	}
	
	unsigned char Pass::AlphaRejectValue::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getAlphaRejectValue( );
	}
	void Pass::AlphaRejectValue::set( unsigned char val )
	{
		static_cast<Ogre::Pass*>(_native)->setAlphaRejectValue( val );
	}
	
	Mogre::ColourValue Pass::Ambient::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getAmbient( );
	}
	void Pass::Ambient::set( Mogre::ColourValue ambient )
	{
		static_cast<Ogre::Pass*>(_native)->setAmbient( ambient );
	}
	
	bool Pass::ColourWriteEnabled::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getColourWriteEnabled( );
	}
	void Pass::ColourWriteEnabled::set( bool enabled )
	{
		static_cast<Ogre::Pass*>(_native)->setColourWriteEnabled( enabled );
	}
	
	Mogre::CullingMode Pass::CullingMode::get()
	{
		return (Mogre::CullingMode)static_cast<const Ogre::Pass*>(_native)->getCullingMode( );
	}
	void Pass::CullingMode::set( Mogre::CullingMode mode )
	{
		static_cast<Ogre::Pass*>(_native)->setCullingMode( (Ogre::CullingMode)mode );
	}
	
	float Pass::DepthBiasConstant::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getDepthBiasConstant( );
	}
	
	float Pass::DepthBiasSlopeScale::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getDepthBiasSlopeScale( );
	}
	
	bool Pass::DepthCheckEnabled::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getDepthCheckEnabled( );
	}
	void Pass::DepthCheckEnabled::set( bool enabled )
	{
		static_cast<Ogre::Pass*>(_native)->setDepthCheckEnabled( enabled );
	}
	
	Mogre::CompareFunction Pass::DepthFunction::get()
	{
		return (Mogre::CompareFunction)static_cast<const Ogre::Pass*>(_native)->getDepthFunction( );
	}
	void Pass::DepthFunction::set( Mogre::CompareFunction func )
	{
		static_cast<Ogre::Pass*>(_native)->setDepthFunction( (Ogre::CompareFunction)func );
	}
	
	bool Pass::DepthWriteEnabled::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getDepthWriteEnabled( );
	}
	void Pass::DepthWriteEnabled::set( bool enabled )
	{
		static_cast<Ogre::Pass*>(_native)->setDepthWriteEnabled( enabled );
	}
	
	Mogre::SceneBlendFactor Pass::DestBlendFactor::get()
	{
		return (Mogre::SceneBlendFactor)static_cast<const Ogre::Pass*>(_native)->getDestBlendFactor( );
	}
	
	Mogre::ColourValue Pass::Diffuse::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getDiffuse( );
	}
	void Pass::Diffuse::set( Mogre::ColourValue diffuse )
	{
		static_cast<Ogre::Pass*>(_native)->setDiffuse( diffuse );
	}
	
	Mogre::ColourValue Pass::FogColour::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getFogColour( );
	}
	
	Mogre::Real Pass::FogDensity::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getFogDensity( );
	}
	
	Mogre::Real Pass::FogEnd::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getFogEnd( );
	}
	
	Mogre::FogMode Pass::FogMode::get()
	{
		return (Mogre::FogMode)static_cast<const Ogre::Pass*>(_native)->getFogMode( );
	}
	
	bool Pass::FogOverride::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getFogOverride( );
	}
	
	Mogre::Real Pass::FogStart::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getFogStart( );
	}
	
	String^ Pass::FragmentProgramName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Pass*>(_native)->getFragmentProgramName( ) );
	}
	
	bool Pass::HasFragmentProgram::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->hasFragmentProgram( );
	}
	
	Mogre::uint32 Pass::Hash::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getHash( );
	}
	
	bool Pass::HasShadowCasterVertexProgram::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->hasShadowCasterVertexProgram( );
	}
	
	bool Pass::HasShadowReceiverFragmentProgram::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->hasShadowReceiverFragmentProgram( );
	}
	
	bool Pass::HasShadowReceiverVertexProgram::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->hasShadowReceiverVertexProgram( );
	}
	
	bool Pass::HasVertexProgram::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->hasVertexProgram( );
	}
	
	unsigned short Pass::Index::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getIndex( );
	}
	
	bool Pass::IsAmbientOnly::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->isAmbientOnly( );
	}
	
	bool Pass::IsLoaded::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->isLoaded( );
	}
	
	bool Pass::IsPointAttenuationEnabled::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->isPointAttenuationEnabled( );
	}
	
	bool Pass::IsProgrammable::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->isProgrammable( );
	}
	
	bool Pass::IsTransparent::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->isTransparent( );
	}
	
	bool Pass::IteratePerLight::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getIteratePerLight( );
	}
	
	unsigned short Pass::LightCountPerIteration::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getLightCountPerIteration( );
	}
	void Pass::LightCountPerIteration::set( unsigned short c )
	{
		static_cast<Ogre::Pass*>(_native)->setLightCountPerIteration( c );
	}
	
	bool Pass::LightingEnabled::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getLightingEnabled( );
	}
	void Pass::LightingEnabled::set( bool enabled )
	{
		static_cast<Ogre::Pass*>(_native)->setLightingEnabled( enabled );
	}
	
	Mogre::ManualCullingMode Pass::ManualCullingMode::get()
	{
		return (Mogre::ManualCullingMode)static_cast<const Ogre::Pass*>(_native)->getManualCullingMode( );
	}
	void Pass::ManualCullingMode::set( Mogre::ManualCullingMode mode )
	{
		static_cast<Ogre::Pass*>(_native)->setManualCullingMode( (Ogre::ManualCullingMode)mode );
	}
	
	unsigned short Pass::MaxSimultaneousLights::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getMaxSimultaneousLights( );
	}
	void Pass::MaxSimultaneousLights::set( unsigned short maxLights )
	{
		static_cast<Ogre::Pass*>(_native)->setMaxSimultaneousLights( maxLights );
	}
	
	String^ Pass::Name::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Pass*>(_native)->getName( ) );
	}
	void Pass::Name::set( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::Pass*>(_native)->setName( o_name );
	}
	
	unsigned short Pass::NumTextureUnitStates::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getNumTextureUnitStates( );
	}
	
	Mogre::Light::LightTypes Pass::OnlyLightType::get()
	{
		return (Mogre::Light::LightTypes)static_cast<const Ogre::Pass*>(_native)->getOnlyLightType( );
	}
	
	Mogre::Technique^ Pass::Parent::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getParent( );
	}
	
	size_t Pass::PassIterationCount::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getPassIterationCount( );
	}
	
	Mogre::Real Pass::PointAttenuationConstant::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getPointAttenuationConstant( );
	}
	
	Mogre::Real Pass::PointAttenuationLinear::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getPointAttenuationLinear( );
	}
	
	Mogre::Real Pass::PointAttenuationQuadratic::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getPointAttenuationQuadratic( );
	}
	
	Mogre::Real Pass::PointMaxSize::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getPointMaxSize( );
	}
	void Pass::PointMaxSize::set( Mogre::Real max )
	{
		static_cast<Ogre::Pass*>(_native)->setPointMaxSize( max );
	}
	
	Mogre::Real Pass::PointMinSize::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getPointMinSize( );
	}
	void Pass::PointMinSize::set( Mogre::Real min )
	{
		static_cast<Ogre::Pass*>(_native)->setPointMinSize( min );
	}
	
	Mogre::Real Pass::PointSize::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getPointSize( );
	}
	void Pass::PointSize::set( Mogre::Real ps )
	{
		static_cast<Ogre::Pass*>(_native)->setPointSize( ps );
	}
	
	bool Pass::PointSpritesEnabled::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getPointSpritesEnabled( );
	}
	void Pass::PointSpritesEnabled::set( bool enabled )
	{
		static_cast<Ogre::Pass*>(_native)->setPointSpritesEnabled( enabled );
	}
	
	Mogre::PolygonMode Pass::PolygonMode::get()
	{
		return (Mogre::PolygonMode)static_cast<const Ogre::Pass*>(_native)->getPolygonMode( );
	}
	void Pass::PolygonMode::set( Mogre::PolygonMode mode )
	{
		static_cast<Ogre::Pass*>(_native)->setPolygonMode( (Ogre::PolygonMode)mode );
	}
	
	String^ Pass::ResourceGroup::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Pass*>(_native)->getResourceGroup( ) );
	}
	
	bool Pass::RunOnlyForOneLightType::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getRunOnlyForOneLightType( );
	}
	
	Mogre::ColourValue Pass::SelfIllumination::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getSelfIllumination( );
	}
	void Pass::SelfIllumination::set( Mogre::ColourValue selfIllum )
	{
		static_cast<Ogre::Pass*>(_native)->setSelfIllumination( selfIllum );
	}
	
	Mogre::ShadeOptions Pass::ShadingMode::get()
	{
		return (Mogre::ShadeOptions)static_cast<const Ogre::Pass*>(_native)->getShadingMode( );
	}
	void Pass::ShadingMode::set( Mogre::ShadeOptions mode )
	{
		static_cast<Ogre::Pass*>(_native)->setShadingMode( (Ogre::ShadeOptions)mode );
	}
	
	String^ Pass::ShadowCasterVertexProgramName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Pass*>(_native)->getShadowCasterVertexProgramName( ) );
	}
	
	String^ Pass::ShadowReceiverFragmentProgramName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Pass*>(_native)->getShadowReceiverFragmentProgramName( ) );
	}
	
	String^ Pass::ShadowReceiverVertexProgramName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Pass*>(_native)->getShadowReceiverVertexProgramName( ) );
	}
	
	Mogre::Real Pass::Shininess::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getShininess( );
	}
	void Pass::Shininess::set( Mogre::Real val )
	{
		static_cast<Ogre::Pass*>(_native)->setShininess( val );
	}
	
	Mogre::SceneBlendFactor Pass::SourceBlendFactor::get()
	{
		return (Mogre::SceneBlendFactor)static_cast<const Ogre::Pass*>(_native)->getSourceBlendFactor( );
	}
	
	Mogre::ColourValue Pass::Specular::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getSpecular( );
	}
	void Pass::Specular::set( Mogre::ColourValue specular )
	{
		static_cast<Ogre::Pass*>(_native)->setSpecular( specular );
	}
	
	unsigned short Pass::StartLight::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getStartLight( );
	}
	void Pass::StartLight::set( unsigned short startLight )
	{
		static_cast<Ogre::Pass*>(_native)->setStartLight( startLight );
	}
	
	Mogre::TrackVertexColourType Pass::VertexColourTracking::get()
	{
		return static_cast<const Ogre::Pass*>(_native)->getVertexColourTracking( );
	}
	void Pass::VertexColourTracking::set( Mogre::TrackVertexColourType tracking )
	{
		static_cast<Ogre::Pass*>(_native)->setVertexColourTracking( tracking );
	}
	
	String^ Pass::VertexProgramName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Pass*>(_native)->getVertexProgramName( ) );
	}
	
	
	void Pass::SetAmbient( Mogre::Real red, Mogre::Real green, Mogre::Real blue )
	{
		static_cast<Ogre::Pass*>(_native)->setAmbient( red, green, blue );
	}
	
	void Pass::SetDiffuse( Mogre::Real red, Mogre::Real green, Mogre::Real blue, Mogre::Real alpha )
	{
		static_cast<Ogre::Pass*>(_native)->setDiffuse( red, green, blue, alpha );
	}
	
	void Pass::SetSpecular( Mogre::Real red, Mogre::Real green, Mogre::Real blue, Mogre::Real alpha )
	{
		static_cast<Ogre::Pass*>(_native)->setSpecular( red, green, blue, alpha );
	}
	
	void Pass::SetSelfIllumination( Mogre::Real red, Mogre::Real green, Mogre::Real blue )
	{
		static_cast<Ogre::Pass*>(_native)->setSelfIllumination( red, green, blue );
	}
	
	void Pass::SetPointAttenuation( bool enabled, Mogre::Real constant, Mogre::Real linear, Mogre::Real quadratic )
	{
		static_cast<Ogre::Pass*>(_native)->setPointAttenuation( enabled, constant, linear, quadratic );
	}
	void Pass::SetPointAttenuation( bool enabled, Mogre::Real constant, Mogre::Real linear )
	{
		static_cast<Ogre::Pass*>(_native)->setPointAttenuation( enabled, constant, linear );
	}
	void Pass::SetPointAttenuation( bool enabled, Mogre::Real constant )
	{
		static_cast<Ogre::Pass*>(_native)->setPointAttenuation( enabled, constant );
	}
	void Pass::SetPointAttenuation( bool enabled )
	{
		static_cast<Ogre::Pass*>(_native)->setPointAttenuation( enabled );
	}
	
	Mogre::TextureUnitState^ Pass::CreateTextureUnitState( )
	{
		return static_cast<Ogre::Pass*>(_native)->createTextureUnitState( );
	}
	
	Mogre::TextureUnitState^ Pass::CreateTextureUnitState( String^ textureName, unsigned short texCoordSet )
	{
		DECLARE_NATIVE_STRING( o_textureName, textureName )
	
		return static_cast<Ogre::Pass*>(_native)->createTextureUnitState( o_textureName, texCoordSet );
	}
	Mogre::TextureUnitState^ Pass::CreateTextureUnitState( String^ textureName )
	{
		DECLARE_NATIVE_STRING( o_textureName, textureName )
	
		return static_cast<Ogre::Pass*>(_native)->createTextureUnitState( o_textureName );
	}
	
	void Pass::AddTextureUnitState( Mogre::TextureUnitState^ state )
	{
		static_cast<Ogre::Pass*>(_native)->addTextureUnitState( state );
	}
	
	Mogre::TextureUnitState^ Pass::GetTextureUnitState( unsigned short index )
	{
		return static_cast<Ogre::Pass*>(_native)->getTextureUnitState( index );
	}
	
	Mogre::TextureUnitState^ Pass::GetTextureUnitState( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::Pass*>(_native)->getTextureUnitState( o_name );
	}
	
	unsigned short Pass::GetTextureUnitStateIndex( Mogre::TextureUnitState^ state )
	{
		return static_cast<const Ogre::Pass*>(_native)->getTextureUnitStateIndex( state );
	}
	
	Mogre::Pass::TextureUnitStateIterator^ Pass::GetTextureUnitStateIterator( )
	{
		return static_cast<Ogre::Pass*>(_native)->getTextureUnitStateIterator( );
	}
	
	void Pass::RemoveTextureUnitState( unsigned short index )
	{
		static_cast<Ogre::Pass*>(_native)->removeTextureUnitState( index );
	}
	
	void Pass::RemoveAllTextureUnitStates( )
	{
		static_cast<Ogre::Pass*>(_native)->removeAllTextureUnitStates( );
	}
	
	void Pass::SetSceneBlending( Mogre::SceneBlendType sbt )
	{
		static_cast<Ogre::Pass*>(_native)->setSceneBlending( (Ogre::SceneBlendType)sbt );
	}
	
	void Pass::SetSceneBlending( Mogre::SceneBlendFactor sourceFactor, Mogre::SceneBlendFactor destFactor )
	{
		static_cast<Ogre::Pass*>(_native)->setSceneBlending( (Ogre::SceneBlendFactor)sourceFactor, (Ogre::SceneBlendFactor)destFactor );
	}
	
	void Pass::SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart, Mogre::Real linearEnd )
	{
		static_cast<Ogre::Pass*>(_native)->setFog( overrideScene, (Ogre::FogMode)mode, colour, expDensity, linearStart, linearEnd );
	}
	void Pass::SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart )
	{
		static_cast<Ogre::Pass*>(_native)->setFog( overrideScene, (Ogre::FogMode)mode, colour, expDensity, linearStart );
	}
	void Pass::SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity )
	{
		static_cast<Ogre::Pass*>(_native)->setFog( overrideScene, (Ogre::FogMode)mode, colour, expDensity );
	}
	void Pass::SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour )
	{
		static_cast<Ogre::Pass*>(_native)->setFog( overrideScene, (Ogre::FogMode)mode, colour );
	}
	void Pass::SetFog( bool overrideScene, Mogre::FogMode mode )
	{
		static_cast<Ogre::Pass*>(_native)->setFog( overrideScene, (Ogre::FogMode)mode );
	}
	void Pass::SetFog( bool overrideScene )
	{
		static_cast<Ogre::Pass*>(_native)->setFog( overrideScene );
	}
	
	void Pass::SetDepthBias( float constantBias, float slopeScaleBias )
	{
		static_cast<Ogre::Pass*>(_native)->setDepthBias( constantBias, slopeScaleBias );
	}
	void Pass::SetDepthBias( float constantBias )
	{
		static_cast<Ogre::Pass*>(_native)->setDepthBias( constantBias );
	}
	
	void Pass::SetAlphaRejectSettings( Mogre::CompareFunction func, unsigned char value )
	{
		static_cast<Ogre::Pass*>(_native)->setAlphaRejectSettings( (Ogre::CompareFunction)func, value );
	}
	
	void Pass::SetIteratePerLight( bool enabled, bool onlyForOneLightType, Mogre::Light::LightTypes lightType )
	{
		static_cast<Ogre::Pass*>(_native)->setIteratePerLight( enabled, onlyForOneLightType, (Ogre::Light::LightTypes)lightType );
	}
	void Pass::SetIteratePerLight( bool enabled, bool onlyForOneLightType )
	{
		static_cast<Ogre::Pass*>(_native)->setIteratePerLight( enabled, onlyForOneLightType );
	}
	void Pass::SetIteratePerLight( bool enabled )
	{
		static_cast<Ogre::Pass*>(_native)->setIteratePerLight( enabled );
	}
	
	void Pass::SetVertexProgram( String^ name, bool resetParams )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::Pass*>(_native)->setVertexProgram( o_name, resetParams );
	}
	void Pass::SetVertexProgram( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::Pass*>(_native)->setVertexProgram( o_name );
	}
	
	void Pass::SetVertexProgramParameters( Mogre::GpuProgramParametersSharedPtr^ params )
	{
		static_cast<Ogre::Pass*>(_native)->setVertexProgramParameters( (Ogre::GpuProgramParametersSharedPtr)params );
	}
	
	Mogre::GpuProgramParametersSharedPtr^ Pass::GetVertexProgramParameters( )
	{
		return static_cast<const Ogre::Pass*>(_native)->getVertexProgramParameters( );
	}
	
	Mogre::GpuProgramPtr^ Pass::GetVertexProgram( )
	{
		return static_cast<const Ogre::Pass*>(_native)->getVertexProgram( );
	}
	
	void Pass::SetShadowCasterVertexProgram( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::Pass*>(_native)->setShadowCasterVertexProgram( o_name );
	}
	
	void Pass::SetShadowCasterVertexProgramParameters( Mogre::GpuProgramParametersSharedPtr^ params )
	{
		static_cast<Ogre::Pass*>(_native)->setShadowCasterVertexProgramParameters( (Ogre::GpuProgramParametersSharedPtr)params );
	}
	
	Mogre::GpuProgramParametersSharedPtr^ Pass::GetShadowCasterVertexProgramParameters( )
	{
		return static_cast<const Ogre::Pass*>(_native)->getShadowCasterVertexProgramParameters( );
	}
	
	Mogre::GpuProgramPtr^ Pass::GetShadowCasterVertexProgram( )
	{
		return static_cast<const Ogre::Pass*>(_native)->getShadowCasterVertexProgram( );
	}
	
	void Pass::SetShadowReceiverVertexProgram( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::Pass*>(_native)->setShadowReceiverVertexProgram( o_name );
	}
	
	void Pass::SetShadowReceiverVertexProgramParameters( Mogre::GpuProgramParametersSharedPtr^ params )
	{
		static_cast<Ogre::Pass*>(_native)->setShadowReceiverVertexProgramParameters( (Ogre::GpuProgramParametersSharedPtr)params );
	}
	
	void Pass::SetShadowReceiverFragmentProgram( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::Pass*>(_native)->setShadowReceiverFragmentProgram( o_name );
	}
	
	void Pass::SetShadowReceiverFragmentProgramParameters( Mogre::GpuProgramParametersSharedPtr^ params )
	{
		static_cast<Ogre::Pass*>(_native)->setShadowReceiverFragmentProgramParameters( (Ogre::GpuProgramParametersSharedPtr)params );
	}
	
	Mogre::GpuProgramParametersSharedPtr^ Pass::GetShadowReceiverVertexProgramParameters( )
	{
		return static_cast<const Ogre::Pass*>(_native)->getShadowReceiverVertexProgramParameters( );
	}
	
	Mogre::GpuProgramPtr^ Pass::GetShadowReceiverVertexProgram( )
	{
		return static_cast<const Ogre::Pass*>(_native)->getShadowReceiverVertexProgram( );
	}
	
	Mogre::GpuProgramParametersSharedPtr^ Pass::GetShadowReceiverFragmentProgramParameters( )
	{
		return static_cast<const Ogre::Pass*>(_native)->getShadowReceiverFragmentProgramParameters( );
	}
	
	Mogre::GpuProgramPtr^ Pass::GetShadowReceiverFragmentProgram( )
	{
		return static_cast<const Ogre::Pass*>(_native)->getShadowReceiverFragmentProgram( );
	}
	
	void Pass::SetFragmentProgram( String^ name, bool resetParams )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::Pass*>(_native)->setFragmentProgram( o_name, resetParams );
	}
	void Pass::SetFragmentProgram( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::Pass*>(_native)->setFragmentProgram( o_name );
	}
	
	void Pass::SetFragmentProgramParameters( Mogre::GpuProgramParametersSharedPtr^ params )
	{
		static_cast<Ogre::Pass*>(_native)->setFragmentProgramParameters( (Ogre::GpuProgramParametersSharedPtr)params );
	}
	
	Mogre::GpuProgramParametersSharedPtr^ Pass::GetFragmentProgramParameters( )
	{
		return static_cast<const Ogre::Pass*>(_native)->getFragmentProgramParameters( );
	}
	
	Mogre::GpuProgramPtr^ Pass::GetFragmentProgram( )
	{
		return static_cast<const Ogre::Pass*>(_native)->getFragmentProgram( );
	}
	
	Mogre::Pass^ Pass::_split( unsigned short numUnits )
	{
		return static_cast<Ogre::Pass*>(_native)->_split( numUnits );
	}
	
	void Pass::_notifyIndex( unsigned short index )
	{
		static_cast<Ogre::Pass*>(_native)->_notifyIndex( index );
	}
	
	void Pass::_load( )
	{
		static_cast<Ogre::Pass*>(_native)->_load( );
	}
	
	void Pass::_unload( )
	{
		static_cast<Ogre::Pass*>(_native)->_unload( );
	}
	
	void Pass::_dirtyHash( )
	{
		static_cast<Ogre::Pass*>(_native)->_dirtyHash( );
	}
	
	void Pass::_recalculateHash( )
	{
		static_cast<Ogre::Pass*>(_native)->_recalculateHash( );
	}
	
	void Pass::_notifyNeedsRecompile( )
	{
		static_cast<Ogre::Pass*>(_native)->_notifyNeedsRecompile( );
	}
	
	unsigned short Pass::_getTextureUnitWithContentTypeIndex( Mogre::TextureUnitState::ContentType contentType, unsigned short index )
	{
		return static_cast<const Ogre::Pass*>(_native)->_getTextureUnitWithContentTypeIndex( (Ogre::TextureUnitState::ContentType)contentType, index );
	}
	
	void Pass::SetTextureFiltering( Mogre::TextureFilterOptions filterType )
	{
		static_cast<Ogre::Pass*>(_native)->setTextureFiltering( (Ogre::TextureFilterOptions)filterType );
	}
	
	void Pass::SetTextureAnisotropy( unsigned int maxAniso )
	{
		static_cast<Ogre::Pass*>(_native)->setTextureAnisotropy( maxAniso );
	}
	
	void Pass::QueueForDeletion( )
	{
		static_cast<Ogre::Pass*>(_native)->queueForDeletion( );
	}
	
	void Pass::SetPassIterationCount( size_t count )
	{
		static_cast<Ogre::Pass*>(_native)->setPassIterationCount( count );
	}
	
	bool Pass::ApplyTextureAliases( Mogre::Const_AliasTextureNamePairList^ aliasList, bool apply )
	{
		return static_cast<const Ogre::Pass*>(_native)->applyTextureAliases( aliasList, apply );
	}
	bool Pass::ApplyTextureAliases( Mogre::Const_AliasTextureNamePairList^ aliasList )
	{
		return static_cast<const Ogre::Pass*>(_native)->applyTextureAliases( aliasList );
	}
	
	Mogre::Pass::Const_PassSet^ Pass::GetDirtyHashList( )
	{
		return Ogre::Pass::getDirtyHashList( );
	}
	
	Mogre::Pass::Const_PassSet^ Pass::GetPassGraveyard( )
	{
		return Ogre::Pass::getPassGraveyard( );
	}
	
	void Pass::ClearDirtyHashList( )
	{
		Ogre::Pass::clearDirtyHashList( );
	}
	
	void Pass::ProcessPendingPassUpdates( )
	{
		Ogre::Pass::processPendingPassUpdates( );
	}
	
	void Pass::SetHashFunction( Mogre::Pass::BuiltinHashFunction builtin )
	{
		Ogre::Pass::setHashFunction( (Ogre::Pass::BuiltinHashFunction)builtin );
	}
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDTYPE Mogre::IlluminationPass_NativePtr
	#define STLDECL_NATIVETYPE Ogre::IlluminationPass*
	CPP_DECLARE_STLVECTOR( , IlluminationPassList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	

}
