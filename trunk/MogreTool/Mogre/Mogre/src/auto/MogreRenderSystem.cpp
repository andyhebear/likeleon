/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreRenderSystem.h"
#include "MogreRenderSystemCapabilities.h"
#include "MogreConfigOptionMap.h"
#include "MogreHardwareOcclusionQuery.h"
#include "MogreRenderWindow.h"
#include "MogreCommon.h"
#include "MogreRenderTexture.h"
#include "MogreRenderTarget.h"
#include "MogreTextureUnitState.h"
#include "MogreTexture.h"
#include "MogreFrustum.h"
#include "MogreViewport.h"
#include "MogreHardwareVertexBuffer.h"
#include "MogreRenderOperation.h"
#include "MogreGpuProgram.h"
#include "MogrePlane.h"
#include "MogreCamera.h"
#include "MogreStringVector.h"

namespace Mogre
{
	//################################################################
	//Listener
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	void RenderSystem_Listener_Director::eventOccurred( const Ogre::String& eventName, const Ogre::NameValuePairList* parameters )
	{
		if (doCallForEventOccurred)
		{
			_receiver->EventOccurred( TO_CLR_STRING( eventName ), parameters );
		}
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//RenderSystem
	//################################################################
	
	//Nested Types
	CPP_DECLARE_MAP_ITERATOR( RenderSystem::, RenderTargetIterator, Ogre::RenderSystem::RenderTargetIterator, Mogre::RenderTargetMap, Mogre::RenderTarget^, Ogre::RenderTarget*, String^, Ogre::String,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Mogre::RenderSystemCapabilities^ RenderSystem::Capabilities::get()
	{
		return static_cast<const Ogre::RenderSystem*>(_native)->getCapabilities( );
	}
	
	Mogre::VertexElementType RenderSystem::ColourVertexElementType::get()
	{
		return (Mogre::VertexElementType)static_cast<const Ogre::RenderSystem*>(_native)->getColourVertexElementType( );
	}
	
	Mogre::Real RenderSystem::HorizontalTexelOffset::get()
	{
		return static_cast<Ogre::RenderSystem*>(_native)->getHorizontalTexelOffset( );
	}
	
	Mogre::Real RenderSystem::MaximumDepthInputValue::get()
	{
		return static_cast<Ogre::RenderSystem*>(_native)->getMaximumDepthInputValue( );
	}
	
	Mogre::Real RenderSystem::MinimumDepthInputValue::get()
	{
		return static_cast<Ogre::RenderSystem*>(_native)->getMinimumDepthInputValue( );
	}
	
	String^ RenderSystem::Name::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::RenderSystem*>(_native)->getName( ) );
	}
	
	Mogre::Real RenderSystem::VerticalTexelOffset::get()
	{
		return static_cast<Ogre::RenderSystem*>(_native)->getVerticalTexelOffset( );
	}
	
	bool RenderSystem::WaitForVerticalBlank::get()
	{
		return static_cast<const Ogre::RenderSystem*>(_native)->getWaitForVerticalBlank( );
	}
	void RenderSystem::WaitForVerticalBlank::set( bool enabled )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setWaitForVerticalBlank( enabled );
	}
	
	bool RenderSystem::WBufferEnabled::get()
	{
		return static_cast<const Ogre::RenderSystem*>(_native)->getWBufferEnabled( );
	}
	void RenderSystem::WBufferEnabled::set( bool enabled )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setWBufferEnabled( enabled );
	}
	
	Mogre::ConfigOptionMap^ RenderSystem::GetConfigOptions( )
	{
		return static_cast<Ogre::RenderSystem*>(_native)->getConfigOptions( );
	}
	
	void RenderSystem::SetConfigOption( String^ name, String^ value )
	{
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_value, value )
	
		static_cast<Ogre::RenderSystem*>(_native)->setConfigOption( o_name, o_value );
	}
	
	Mogre::HardwareOcclusionQuery^ RenderSystem::CreateHardwareOcclusionQuery( )
	{
		return static_cast<Ogre::RenderSystem*>(_native)->createHardwareOcclusionQuery( );
	}
	
	void RenderSystem::DestroyHardwareOcclusionQuery( Mogre::HardwareOcclusionQuery^ hq )
	{
		static_cast<Ogre::RenderSystem*>(_native)->destroyHardwareOcclusionQuery( hq );
	}
	
	String^ RenderSystem::ValidateConfigOptions( )
	{
		return TO_CLR_STRING( static_cast<Ogre::RenderSystem*>(_native)->validateConfigOptions( ) );
	}
	
	Mogre::RenderWindow^ RenderSystem::Initialise( bool autoCreateWindow, String^ windowTitle )
	{
		DECLARE_NATIVE_STRING( o_windowTitle, windowTitle )
	
		return static_cast<Ogre::RenderSystem*>(_native)->initialise( autoCreateWindow, o_windowTitle );
	}
	Mogre::RenderWindow^ RenderSystem::Initialise( bool autoCreateWindow )
	{
		return static_cast<Ogre::RenderSystem*>(_native)->initialise( autoCreateWindow );
	}
	
	void RenderSystem::Reinitialise( )
	{
		static_cast<Ogre::RenderSystem*>(_native)->reinitialise( );
	}
	
	void RenderSystem::Shutdown( )
	{
		static_cast<Ogre::RenderSystem*>(_native)->shutdown( );
	}
	
	void RenderSystem::SetAmbientLight( float r, float g, float b )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setAmbientLight( r, g, b );
	}
	
	void RenderSystem::SetShadingType( Mogre::ShadeOptions so )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setShadingType( (Ogre::ShadeOptions)so );
	}
	
	void RenderSystem::SetLightingEnabled( bool enabled )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setLightingEnabled( enabled );
	}
	
	Mogre::RenderWindow^ RenderSystem::CreateRenderWindow( String^ name, unsigned int width, unsigned int height, bool fullScreen, Mogre::Const_NameValuePairList^ miscParams )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::RenderSystem*>(_native)->createRenderWindow( o_name, width, height, fullScreen, miscParams );
	}
	Mogre::RenderWindow^ RenderSystem::CreateRenderWindow( String^ name, unsigned int width, unsigned int height, bool fullScreen )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::RenderSystem*>(_native)->createRenderWindow( o_name, width, height, fullScreen );
	}
	
	Mogre::RenderTexture^ RenderSystem::CreateRenderTexture( String^ name, unsigned int width, unsigned int height, Mogre::TextureType texType, Mogre::PixelFormat internalFormat, Mogre::Const_NameValuePairList^ miscParams )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::RenderSystem*>(_native)->createRenderTexture( o_name, width, height, (Ogre::TextureType)texType, (Ogre::PixelFormat)internalFormat, miscParams );
	}
	Mogre::RenderTexture^ RenderSystem::CreateRenderTexture( String^ name, unsigned int width, unsigned int height, Mogre::TextureType texType, Mogre::PixelFormat internalFormat )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::RenderSystem*>(_native)->createRenderTexture( o_name, width, height, (Ogre::TextureType)texType, (Ogre::PixelFormat)internalFormat );
	}
	Mogre::RenderTexture^ RenderSystem::CreateRenderTexture( String^ name, unsigned int width, unsigned int height, Mogre::TextureType texType )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::RenderSystem*>(_native)->createRenderTexture( o_name, width, height, (Ogre::TextureType)texType );
	}
	Mogre::RenderTexture^ RenderSystem::CreateRenderTexture( String^ name, unsigned int width, unsigned int height )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::RenderSystem*>(_native)->createRenderTexture( o_name, width, height );
	}
	
	Mogre::MultiRenderTarget^ RenderSystem::CreateMultiRenderTarget( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::RenderSystem*>(_native)->createMultiRenderTarget( o_name );
	}
	
	void RenderSystem::DestroyRenderWindow( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::RenderSystem*>(_native)->destroyRenderWindow( o_name );
	}
	
	void RenderSystem::DestroyRenderTexture( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::RenderSystem*>(_native)->destroyRenderTexture( o_name );
	}
	
	void RenderSystem::DestroyRenderTarget( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::RenderSystem*>(_native)->destroyRenderTarget( o_name );
	}
	
	void RenderSystem::AttachRenderTarget( Mogre::RenderTarget^ target )
	{
		static_cast<Ogre::RenderSystem*>(_native)->attachRenderTarget( target );
	}
	
	Mogre::RenderTarget^ RenderSystem::GetRenderTarget( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::RenderSystem*>(_native)->getRenderTarget( o_name );
	}
	
	Mogre::RenderTarget^ RenderSystem::DetachRenderTarget( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		return static_cast<Ogre::RenderSystem*>(_native)->detachRenderTarget( o_name );
	}
	
	Mogre::RenderSystem::RenderTargetIterator^ RenderSystem::GetRenderTargetIterator( )
	{
		return static_cast<Ogre::RenderSystem*>(_native)->getRenderTargetIterator( );
	}
	
	String^ RenderSystem::GetErrorDescription( long errorNumber )
	{
		return TO_CLR_STRING( static_cast<const Ogre::RenderSystem*>(_native)->getErrorDescription( errorNumber ) );
	}
	
	void RenderSystem::_useLights( Mogre::Const_LightList^ lights, unsigned short limit )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_useLights( lights, limit );
	}
	
	void RenderSystem::_setWorldMatrix( Mogre::Matrix4^ m )
	{
		pin_ptr<Ogre::Matrix4> p_m = interior_ptr<Ogre::Matrix4>(&m->m00);
	
		static_cast<Ogre::RenderSystem*>(_native)->_setWorldMatrix( *p_m );
	}
	
	void RenderSystem::_setWorldMatrices( const Mogre::Matrix4::NativeValue* m, unsigned short count )
	{
		const Ogre::Matrix4* o_m = reinterpret_cast<const Ogre::Matrix4*>(m);
	
		static_cast<Ogre::RenderSystem*>(_native)->_setWorldMatrices( o_m, count );
	}
	
	void RenderSystem::_setViewMatrix( Mogre::Matrix4^ m )
	{
		pin_ptr<Ogre::Matrix4> p_m = interior_ptr<Ogre::Matrix4>(&m->m00);
	
		static_cast<Ogre::RenderSystem*>(_native)->_setViewMatrix( *p_m );
	}
	
	void RenderSystem::_setProjectionMatrix( Mogre::Matrix4^ m )
	{
		pin_ptr<Ogre::Matrix4> p_m = interior_ptr<Ogre::Matrix4>(&m->m00);
	
		static_cast<Ogre::RenderSystem*>(_native)->_setProjectionMatrix( *p_m );
	}
	
	void RenderSystem::_setTextureUnitSettings( size_t texUnit, Mogre::TextureUnitState^ tl )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setTextureUnitSettings( texUnit, tl );
	}
	
	void RenderSystem::_disableTextureUnit( size_t texUnit )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_disableTextureUnit( texUnit );
	}
	
	void RenderSystem::_disableTextureUnitsFrom( size_t texUnit )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_disableTextureUnitsFrom( texUnit );
	}
	
	void RenderSystem::_setSurfaceParams( Mogre::ColourValue ambient, Mogre::ColourValue diffuse, Mogre::ColourValue specular, Mogre::ColourValue emissive, Mogre::Real shininess, Mogre::TrackVertexColourType tracking )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setSurfaceParams( ambient, diffuse, specular, emissive, shininess, tracking );
	}
	void RenderSystem::_setSurfaceParams( Mogre::ColourValue ambient, Mogre::ColourValue diffuse, Mogre::ColourValue specular, Mogre::ColourValue emissive, Mogre::Real shininess )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setSurfaceParams( ambient, diffuse, specular, emissive, shininess );
	}
	
	void RenderSystem::_setPointSpritesEnabled( bool enabled )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setPointSpritesEnabled( enabled );
	}
	
	void RenderSystem::_setPointParameters( Mogre::Real size, bool attenuationEnabled, Mogre::Real constant, Mogre::Real linear, Mogre::Real quadratic, Mogre::Real minSize, Mogre::Real maxSize )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setPointParameters( size, attenuationEnabled, constant, linear, quadratic, minSize, maxSize );
	}
	
	void RenderSystem::_setTexture( size_t unit, bool enabled, Mogre::TexturePtr^ texPtr )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setTexture( unit, enabled, (const Ogre::TexturePtr&)texPtr );
	}
	
	void RenderSystem::_setTexture( size_t unit, bool enabled, String^ texname )
	{
		DECLARE_NATIVE_STRING( o_texname, texname )
	
		static_cast<Ogre::RenderSystem*>(_native)->_setTexture( unit, enabled, o_texname );
	}
	
	void RenderSystem::_setVertexTexture( size_t unit, Mogre::TexturePtr^ tex )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setVertexTexture( unit, (const Ogre::TexturePtr&)tex );
	}
	
	void RenderSystem::_setTextureCoordSet( size_t unit, size_t index )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setTextureCoordSet( unit, index );
	}
	
	void RenderSystem::_setTextureCoordCalculation( size_t unit, Mogre::TexCoordCalcMethod m, Mogre::Frustum^ frustum )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setTextureCoordCalculation( unit, (Ogre::TexCoordCalcMethod)m, frustum );
	}
	void RenderSystem::_setTextureCoordCalculation( size_t unit, Mogre::TexCoordCalcMethod m )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setTextureCoordCalculation( unit, (Ogre::TexCoordCalcMethod)m );
	}
	
	void RenderSystem::_setTextureBlendMode( size_t unit, Mogre::LayerBlendModeEx_NativePtr bm )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setTextureBlendMode( unit, bm );
	}
	
	void RenderSystem::_setTextureUnitFiltering( size_t unit, Mogre::FilterOptions minFilter, Mogre::FilterOptions magFilter, Mogre::FilterOptions mipFilter )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setTextureUnitFiltering( unit, (Ogre::FilterOptions)minFilter, (Ogre::FilterOptions)magFilter, (Ogre::FilterOptions)mipFilter );
	}
	
	void RenderSystem::_setTextureUnitFiltering( size_t unit, Mogre::FilterType ftype, Mogre::FilterOptions filter )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setTextureUnitFiltering( unit, (Ogre::FilterType)ftype, (Ogre::FilterOptions)filter );
	}
	
	void RenderSystem::_setTextureLayerAnisotropy( size_t unit, unsigned int maxAnisotropy )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setTextureLayerAnisotropy( unit, maxAnisotropy );
	}
	
	void RenderSystem::_setTextureAddressingMode( size_t unit, Mogre::TextureUnitState::UVWAddressingMode uvw )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setTextureAddressingMode( unit, uvw );
	}
	
	void RenderSystem::_setTextureBorderColour( size_t unit, Mogre::ColourValue colour )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setTextureBorderColour( unit, colour );
	}
	
	void RenderSystem::_setTextureMipmapBias( size_t unit, float bias )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setTextureMipmapBias( unit, bias );
	}
	
	void RenderSystem::_setTextureMatrix( size_t unit, Mogre::Matrix4^ xform )
	{
		pin_ptr<Ogre::Matrix4> p_xform = interior_ptr<Ogre::Matrix4>(&xform->m00);
	
		static_cast<Ogre::RenderSystem*>(_native)->_setTextureMatrix( unit, *p_xform );
	}
	
	void RenderSystem::_setSceneBlending( Mogre::SceneBlendFactor sourceFactor, Mogre::SceneBlendFactor destFactor )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setSceneBlending( (Ogre::SceneBlendFactor)sourceFactor, (Ogre::SceneBlendFactor)destFactor );
	}
	
	void RenderSystem::_setAlphaRejectSettings( Mogre::CompareFunction func, unsigned char value )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setAlphaRejectSettings( (Ogre::CompareFunction)func, value );
	}
	
	void RenderSystem::_beginFrame( )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_beginFrame( );
	}
	
	void RenderSystem::_endFrame( )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_endFrame( );
	}
	
	void RenderSystem::_setViewport( Mogre::Viewport^ vp )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setViewport( vp );
	}
	
	Mogre::Viewport^ RenderSystem::_getViewport( )
	{
		return static_cast<Ogre::RenderSystem*>(_native)->_getViewport( );
	}
	
	void RenderSystem::_setCullingMode( Mogre::CullingMode mode )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setCullingMode( (Ogre::CullingMode)mode );
	}
	
	Mogre::CullingMode RenderSystem::_getCullingMode( )
	{
		return (Mogre::CullingMode)static_cast<const Ogre::RenderSystem*>(_native)->_getCullingMode( );
	}
	
	void RenderSystem::_setDepthBufferParams( bool depthTest, bool depthWrite, Mogre::CompareFunction depthFunction )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setDepthBufferParams( depthTest, depthWrite, (Ogre::CompareFunction)depthFunction );
	}
	void RenderSystem::_setDepthBufferParams( bool depthTest, bool depthWrite )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setDepthBufferParams( depthTest, depthWrite );
	}
	void RenderSystem::_setDepthBufferParams( bool depthTest )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setDepthBufferParams( depthTest );
	}
	void RenderSystem::_setDepthBufferParams( )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setDepthBufferParams( );
	}
	
	void RenderSystem::_setDepthBufferCheckEnabled( bool enabled )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setDepthBufferCheckEnabled( enabled );
	}
	void RenderSystem::_setDepthBufferCheckEnabled( )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setDepthBufferCheckEnabled( );
	}
	
	void RenderSystem::_setDepthBufferWriteEnabled( bool enabled )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setDepthBufferWriteEnabled( enabled );
	}
	void RenderSystem::_setDepthBufferWriteEnabled( )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setDepthBufferWriteEnabled( );
	}
	
	void RenderSystem::_setDepthBufferFunction( Mogre::CompareFunction func )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setDepthBufferFunction( (Ogre::CompareFunction)func );
	}
	void RenderSystem::_setDepthBufferFunction( )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setDepthBufferFunction( );
	}
	
	void RenderSystem::_setColourBufferWriteEnabled( bool red, bool green, bool blue, bool alpha )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setColourBufferWriteEnabled( red, green, blue, alpha );
	}
	
	void RenderSystem::_setDepthBias( float constantBias, float slopeScaleBias )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setDepthBias( constantBias, slopeScaleBias );
	}
	void RenderSystem::_setDepthBias( float constantBias )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setDepthBias( constantBias );
	}
	
	void RenderSystem::_setFog( Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart, Mogre::Real linearEnd )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setFog( (Ogre::FogMode)mode, colour, expDensity, linearStart, linearEnd );
	}
	void RenderSystem::_setFog( Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setFog( (Ogre::FogMode)mode, colour, expDensity, linearStart );
	}
	void RenderSystem::_setFog( Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setFog( (Ogre::FogMode)mode, colour, expDensity );
	}
	void RenderSystem::_setFog( Mogre::FogMode mode, Mogre::ColourValue colour )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setFog( (Ogre::FogMode)mode, colour );
	}
	void RenderSystem::_setFog( Mogre::FogMode mode )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setFog( (Ogre::FogMode)mode );
	}
	void RenderSystem::_setFog( )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setFog( );
	}
	
	void RenderSystem::_beginGeometryCount( )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_beginGeometryCount( );
	}
	
	unsigned int RenderSystem::_getFaceCount( )
	{
		return static_cast<const Ogre::RenderSystem*>(_native)->_getFaceCount( );
	}
	
	unsigned int RenderSystem::_getBatchCount( )
	{
		return static_cast<const Ogre::RenderSystem*>(_native)->_getBatchCount( );
	}
	
	unsigned int RenderSystem::_getVertexCount( )
	{
		return static_cast<const Ogre::RenderSystem*>(_native)->_getVertexCount( );
	}
	
	void RenderSystem::ConvertColourValue( Mogre::ColourValue colour, [Out] Mogre::uint32% pDest )
	{
		pin_ptr<Mogre::uint32> p_pDest = &pDest;
	
		static_cast<Ogre::RenderSystem*>(_native)->convertColourValue( colour, p_pDest );
	}
	
	void RenderSystem::_convertProjectionMatrix( Mogre::Matrix4^ matrix, Mogre::Matrix4^ dest, bool forGpuProgram )
	{
		pin_ptr<Ogre::Matrix4> p_matrix = interior_ptr<Ogre::Matrix4>(&matrix->m00);
		pin_ptr<Ogre::Matrix4> p_dest = interior_ptr<Ogre::Matrix4>(&dest->m00);
	
		static_cast<Ogre::RenderSystem*>(_native)->_convertProjectionMatrix( *p_matrix, *p_dest, forGpuProgram );
	}
	void RenderSystem::_convertProjectionMatrix( Mogre::Matrix4^ matrix, Mogre::Matrix4^ dest )
	{
		pin_ptr<Ogre::Matrix4> p_matrix = interior_ptr<Ogre::Matrix4>(&matrix->m00);
		pin_ptr<Ogre::Matrix4> p_dest = interior_ptr<Ogre::Matrix4>(&dest->m00);
	
		static_cast<Ogre::RenderSystem*>(_native)->_convertProjectionMatrix( *p_matrix, *p_dest );
	}
	
	void RenderSystem::_makeProjectionMatrix( Mogre::Radian fovy, Mogre::Real aspect, Mogre::Real nearPlane, Mogre::Real farPlane, Mogre::Matrix4^ dest, bool forGpuProgram )
	{
		pin_ptr<Ogre::Matrix4> p_dest = interior_ptr<Ogre::Matrix4>(&dest->m00);
	
		static_cast<Ogre::RenderSystem*>(_native)->_makeProjectionMatrix( fovy, aspect, nearPlane, farPlane, *p_dest, forGpuProgram );
	}
	void RenderSystem::_makeProjectionMatrix( Mogre::Radian fovy, Mogre::Real aspect, Mogre::Real nearPlane, Mogre::Real farPlane, Mogre::Matrix4^ dest )
	{
		pin_ptr<Ogre::Matrix4> p_dest = interior_ptr<Ogre::Matrix4>(&dest->m00);
	
		static_cast<Ogre::RenderSystem*>(_native)->_makeProjectionMatrix( fovy, aspect, nearPlane, farPlane, *p_dest );
	}
	
	void RenderSystem::_makeProjectionMatrix( Mogre::Real left, Mogre::Real right, Mogre::Real bottom, Mogre::Real top, Mogre::Real nearPlane, Mogre::Real farPlane, Mogre::Matrix4^ dest, bool forGpuProgram )
	{
		pin_ptr<Ogre::Matrix4> p_dest = interior_ptr<Ogre::Matrix4>(&dest->m00);
	
		static_cast<Ogre::RenderSystem*>(_native)->_makeProjectionMatrix( left, right, bottom, top, nearPlane, farPlane, *p_dest, forGpuProgram );
	}
	void RenderSystem::_makeProjectionMatrix( Mogre::Real left, Mogre::Real right, Mogre::Real bottom, Mogre::Real top, Mogre::Real nearPlane, Mogre::Real farPlane, Mogre::Matrix4^ dest )
	{
		pin_ptr<Ogre::Matrix4> p_dest = interior_ptr<Ogre::Matrix4>(&dest->m00);
	
		static_cast<Ogre::RenderSystem*>(_native)->_makeProjectionMatrix( left, right, bottom, top, nearPlane, farPlane, *p_dest );
	}
	
	void RenderSystem::_makeOrthoMatrix( Mogre::Radian fovy, Mogre::Real aspect, Mogre::Real nearPlane, Mogre::Real farPlane, Mogre::Matrix4^ dest, bool forGpuProgram )
	{
		pin_ptr<Ogre::Matrix4> p_dest = interior_ptr<Ogre::Matrix4>(&dest->m00);
	
		static_cast<Ogre::RenderSystem*>(_native)->_makeOrthoMatrix( fovy, aspect, nearPlane, farPlane, *p_dest, forGpuProgram );
	}
	void RenderSystem::_makeOrthoMatrix( Mogre::Radian fovy, Mogre::Real aspect, Mogre::Real nearPlane, Mogre::Real farPlane, Mogre::Matrix4^ dest )
	{
		pin_ptr<Ogre::Matrix4> p_dest = interior_ptr<Ogre::Matrix4>(&dest->m00);
	
		static_cast<Ogre::RenderSystem*>(_native)->_makeOrthoMatrix( fovy, aspect, nearPlane, farPlane, *p_dest );
	}
	
	void RenderSystem::_applyObliqueDepthProjection( Mogre::Matrix4^ matrix, Mogre::Plane plane, bool forGpuProgram )
	{
		pin_ptr<Ogre::Matrix4> p_matrix = interior_ptr<Ogre::Matrix4>(&matrix->m00);
	
		static_cast<Ogre::RenderSystem*>(_native)->_applyObliqueDepthProjection( *p_matrix, plane, forGpuProgram );
	}
	
	void RenderSystem::_setPolygonMode( Mogre::PolygonMode level )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_setPolygonMode( (Ogre::PolygonMode)level );
	}
	
	void RenderSystem::SetStencilCheckEnabled( bool enabled )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setStencilCheckEnabled( enabled );
	}
	
	void RenderSystem::SetStencilBufferParams( Mogre::CompareFunction func, Mogre::uint32 refValue, Mogre::uint32 mask, Mogre::StencilOperation stencilFailOp, Mogre::StencilOperation depthFailOp, Mogre::StencilOperation passOp, bool twoSidedOperation )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setStencilBufferParams( (Ogre::CompareFunction)func, refValue, mask, (Ogre::StencilOperation)stencilFailOp, (Ogre::StencilOperation)depthFailOp, (Ogre::StencilOperation)passOp, twoSidedOperation );
	}
	void RenderSystem::SetStencilBufferParams( Mogre::CompareFunction func, Mogre::uint32 refValue, Mogre::uint32 mask, Mogre::StencilOperation stencilFailOp, Mogre::StencilOperation depthFailOp, Mogre::StencilOperation passOp )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setStencilBufferParams( (Ogre::CompareFunction)func, refValue, mask, (Ogre::StencilOperation)stencilFailOp, (Ogre::StencilOperation)depthFailOp, (Ogre::StencilOperation)passOp );
	}
	void RenderSystem::SetStencilBufferParams( Mogre::CompareFunction func, Mogre::uint32 refValue, Mogre::uint32 mask, Mogre::StencilOperation stencilFailOp, Mogre::StencilOperation depthFailOp )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setStencilBufferParams( (Ogre::CompareFunction)func, refValue, mask, (Ogre::StencilOperation)stencilFailOp, (Ogre::StencilOperation)depthFailOp );
	}
	void RenderSystem::SetStencilBufferParams( Mogre::CompareFunction func, Mogre::uint32 refValue, Mogre::uint32 mask, Mogre::StencilOperation stencilFailOp )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setStencilBufferParams( (Ogre::CompareFunction)func, refValue, mask, (Ogre::StencilOperation)stencilFailOp );
	}
	void RenderSystem::SetStencilBufferParams( Mogre::CompareFunction func, Mogre::uint32 refValue, Mogre::uint32 mask )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setStencilBufferParams( (Ogre::CompareFunction)func, refValue, mask );
	}
	void RenderSystem::SetStencilBufferParams( Mogre::CompareFunction func, Mogre::uint32 refValue )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setStencilBufferParams( (Ogre::CompareFunction)func, refValue );
	}
	void RenderSystem::SetStencilBufferParams( Mogre::CompareFunction func )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setStencilBufferParams( (Ogre::CompareFunction)func );
	}
	void RenderSystem::SetStencilBufferParams( )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setStencilBufferParams( );
	}
	
	void RenderSystem::SetVertexDeclaration( Mogre::VertexDeclaration^ decl )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setVertexDeclaration( decl );
	}
	
	void RenderSystem::SetVertexBufferBinding( Mogre::VertexBufferBinding^ binding )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setVertexBufferBinding( binding );
	}
	
	void RenderSystem::SetNormaliseNormals( bool normalise )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setNormaliseNormals( normalise );
	}
	
	void RenderSystem::_render( Mogre::RenderOperation^ op )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_render( op );
	}
	
	void RenderSystem::BindGpuProgram( Mogre::GpuProgram^ prg )
	{
		static_cast<Ogre::RenderSystem*>(_native)->bindGpuProgram( prg );
	}
	
	void RenderSystem::BindGpuProgramParameters( Mogre::GpuProgramType gptype, Mogre::GpuProgramParametersSharedPtr^ params )
	{
		static_cast<Ogre::RenderSystem*>(_native)->bindGpuProgramParameters( (Ogre::GpuProgramType)gptype, (Ogre::GpuProgramParametersSharedPtr)params );
	}
	
	void RenderSystem::BindGpuProgramPassIterationParameters( Mogre::GpuProgramType gptype )
	{
		static_cast<Ogre::RenderSystem*>(_native)->bindGpuProgramPassIterationParameters( (Ogre::GpuProgramType)gptype );
	}
	
	void RenderSystem::UnbindGpuProgram( Mogre::GpuProgramType gptype )
	{
		static_cast<Ogre::RenderSystem*>(_native)->unbindGpuProgram( (Ogre::GpuProgramType)gptype );
	}
	
	bool RenderSystem::IsGpuProgramBound( Mogre::GpuProgramType gptype )
	{
		return static_cast<Ogre::RenderSystem*>(_native)->isGpuProgramBound( (Ogre::GpuProgramType)gptype );
	}
	
	void RenderSystem::SetClipPlanes( Mogre::Const_PlaneList^ clipPlanes )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setClipPlanes( clipPlanes );
	}
	
	void RenderSystem::_initRenderTargets( )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_initRenderTargets( );
	}
	
	void RenderSystem::_notifyCameraRemoved( Mogre::Camera^ cam )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_notifyCameraRemoved( cam );
	}
	
	void RenderSystem::_updateAllRenderTargets( )
	{
		static_cast<Ogre::RenderSystem*>(_native)->_updateAllRenderTargets( );
	}
	
	void RenderSystem::SetClipPlane( Mogre::ushort index, Mogre::Plane p )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setClipPlane( index, p );
	}
	
	void RenderSystem::SetClipPlane( Mogre::ushort index, Mogre::Real A, Mogre::Real B, Mogre::Real C, Mogre::Real D )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setClipPlane( index, A, B, C, D );
	}
	
	void RenderSystem::EnableClipPlane( Mogre::ushort index, bool enable )
	{
		static_cast<Ogre::RenderSystem*>(_native)->enableClipPlane( index, enable );
	}
	
	void RenderSystem::SetInvertVertexWinding( bool invert )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setInvertVertexWinding( invert );
	}
	
	void RenderSystem::SetScissorTest( bool enabled, size_t left, size_t top, size_t right, size_t bottom )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setScissorTest( enabled, left, top, right, bottom );
	}
	void RenderSystem::SetScissorTest( bool enabled, size_t left, size_t top, size_t right )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setScissorTest( enabled, left, top, right );
	}
	void RenderSystem::SetScissorTest( bool enabled, size_t left, size_t top )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setScissorTest( enabled, left, top );
	}
	void RenderSystem::SetScissorTest( bool enabled, size_t left )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setScissorTest( enabled, left );
	}
	void RenderSystem::SetScissorTest( bool enabled )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setScissorTest( enabled );
	}
	
	void RenderSystem::ClearFrameBuffer( unsigned int buffers, Mogre::ColourValue colour, Mogre::Real depth, unsigned short stencil )
	{
		static_cast<Ogre::RenderSystem*>(_native)->clearFrameBuffer( buffers, colour, depth, stencil );
	}
	void RenderSystem::ClearFrameBuffer( unsigned int buffers, Mogre::ColourValue colour, Mogre::Real depth )
	{
		static_cast<Ogre::RenderSystem*>(_native)->clearFrameBuffer( buffers, colour, depth );
	}
	void RenderSystem::ClearFrameBuffer( unsigned int buffers, Mogre::ColourValue colour )
	{
		static_cast<Ogre::RenderSystem*>(_native)->clearFrameBuffer( buffers, colour );
	}
	void RenderSystem::ClearFrameBuffer( unsigned int buffers )
	{
		static_cast<Ogre::RenderSystem*>(_native)->clearFrameBuffer( buffers );
	}
	
	void RenderSystem::SetCurrentPassIterationCount( size_t count )
	{
		static_cast<Ogre::RenderSystem*>(_native)->setCurrentPassIterationCount( count );
	}
	
	Mogre::Const_StringVector^ RenderSystem::GetRenderSystemEvents( )
	{
		return static_cast<const Ogre::RenderSystem*>(_native)->getRenderSystemEvents( );
	}
	
	void RenderSystem::PreExtraThreadsStarted( )
	{
		static_cast<Ogre::RenderSystem*>(_native)->preExtraThreadsStarted( );
	}
	
	void RenderSystem::PostExtraThreadsStarted( )
	{
		static_cast<Ogre::RenderSystem*>(_native)->postExtraThreadsStarted( );
	}
	
	void RenderSystem::RegisterThread( )
	{
		static_cast<Ogre::RenderSystem*>(_native)->registerThread( );
	}
	
	void RenderSystem::UnregisterThread( )
	{
		static_cast<Ogre::RenderSystem*>(_native)->unregisterThread( );
	}
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::RenderTarget^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::RenderTarget*
	CPP_DECLARE_STLMAP( , RenderTargetMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDKEY Mogre::uchar
	#define STLDECL_MANAGEDVALUE Mogre::RenderTarget^
	#define STLDECL_NATIVEKEY Ogre::uchar
	#define STLDECL_NATIVEVALUE Ogre::RenderTarget*
	CPP_DECLARE_STLMULTIMAP( , RenderTargetPriorityMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	

}
