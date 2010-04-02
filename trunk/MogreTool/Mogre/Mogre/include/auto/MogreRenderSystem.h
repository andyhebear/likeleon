/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreRenderSystem.h"
#include "MogrePrerequisites.h"
#include "MogreCommon.h"
#include "MogreHardwareVertexBuffer.h"
#include "MogreConfigOptionMap.h"
#include "MogreTexture.h"
#include "MogrePixelFormat.h"
#include "MogreBlendMode.h"
#include "MogreTextureUnitState.h"
#include "MogrePlatform.h"
#include "MogreGpuProgram.h"
#include "MogrePlane.h"
#include "MogreStringVector.h"

namespace Mogre
{
	public enum class StencilOperation
	{
		SOP_KEEP = Ogre::SOP_KEEP,
		SOP_ZERO = Ogre::SOP_ZERO,
		SOP_REPLACE = Ogre::SOP_REPLACE,
		SOP_INCREMENT = Ogre::SOP_INCREMENT,
		SOP_DECREMENT = Ogre::SOP_DECREMENT,
		SOP_INCREMENT_WRAP = Ogre::SOP_INCREMENT_WRAP,
		SOP_DECREMENT_WRAP = Ogre::SOP_DECREMENT_WRAP,
		SOP_INVERT = Ogre::SOP_INVERT
	};
	
	public enum class TexCoordCalcMethod
	{
		TEXCALC_NONE = Ogre::TEXCALC_NONE,
		TEXCALC_ENVIRONMENT_MAP = Ogre::TEXCALC_ENVIRONMENT_MAP,
		TEXCALC_ENVIRONMENT_MAP_PLANAR = Ogre::TEXCALC_ENVIRONMENT_MAP_PLANAR,
		TEXCALC_ENVIRONMENT_MAP_REFLECTION = Ogre::TEXCALC_ENVIRONMENT_MAP_REFLECTION,
		TEXCALC_ENVIRONMENT_MAP_NORMAL = Ogre::TEXCALC_ENVIRONMENT_MAP_NORMAL,
		TEXCALC_PROJECTIVE_TEXTURE = Ogre::TEXCALC_PROJECTIVE_TEXTURE
	};
	
	interface class IRenderSystem_Listener_Receiver
	{
		void EventOccurred( String^ eventName, Mogre::Const_NameValuePairList^ parameters );
	
	};
	
	//################################################################
	//Listener
	//################################################################
	
	class RenderSystem_Listener_Director : public Ogre::RenderSystem::Listener
	{
		//Nested Types
	
		//Private Declarations
	private:
		gcroot<IRenderSystem_Listener_Receiver^> _receiver;
	
		//Internal Declarations
	
		//Public Declarations
	public:
		RenderSystem_Listener_Director( IRenderSystem_Listener_Receiver^ recv )
			: _receiver(recv), doCallForEventOccurred(false)
		{
		}
	
		bool doCallForEventOccurred;
	
		virtual void eventOccurred( const Ogre::String& eventName, const Ogre::NameValuePairList* parameters ) override;
	
	
		//Protected Declarations
	
	};
	
	//################################################################
	//RenderSystem
	//################################################################
	
	public ref class RenderSystem : public Wrapper, public IRenderSystem_Listener_Receiver
	{
		//Nested Types
		public: ref class Listener;
	
		public: ref class Listener abstract sealed
		{
		public:
			delegate static void EventOccurredHandler( String^ eventName, Mogre::Const_NameValuePairList^ parameters );
		};
	
		public: INC_DECLARE_MAP_ITERATOR( RenderTargetIterator, Ogre::RenderSystem::RenderTargetIterator, Mogre::RenderTargetMap, Mogre::RenderTarget^, Ogre::RenderTarget*, String^, Ogre::String )
	
		//Private Declarations
	private protected:
		
		//Event and Listener fields
		RenderSystem_Listener_Director* _listener;
		Mogre::RenderSystem::Listener::EventOccurredHandler^ _eventOccurred;
	
	
		//Internal Declarations
	public protected:
		RenderSystem( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		~RenderSystem()
		{
			if (_listener != 0)
			{
				if (_native != 0) static_cast<Ogre::RenderSystem*>(_native)->removeListener(_listener);
				delete _listener; _listener = 0;
			}
		}
	
	
		//Public Declarations
	public:
	
	
		event Mogre::RenderSystem::Listener::EventOccurredHandler^ EventOccurred
		{
			void add(Mogre::RenderSystem::Listener::EventOccurredHandler^ hnd)
			{
				if (_eventOccurred == CLR_NULL)
				{
					if (_listener == 0)
					{
						_listener = new RenderSystem_Listener_Director(this);
						static_cast<Ogre::RenderSystem*>(_native)->addListener(_listener);
					}
					_listener->doCallForEventOccurred = true;
				}
				_eventOccurred += hnd;
			}
			void remove(Mogre::RenderSystem::Listener::EventOccurredHandler^ hnd)
			{
				_eventOccurred -= hnd;
				if (_eventOccurred == CLR_NULL) _listener->doCallForEventOccurred = false;
			}
		private:
			void raise( String^ eventName, Mogre::Const_NameValuePairList^ parameters )
			{
				if (_eventOccurred)
					_eventOccurred->Invoke( eventName, parameters );
			}
		}
	
	
		property Mogre::RenderSystemCapabilities^ Capabilities
		{
		public:
			Mogre::RenderSystemCapabilities^ get();
		}
	
		property Mogre::VertexElementType ColourVertexElementType
		{
		public:
			Mogre::VertexElementType get();
		}
	
		property Mogre::Real HorizontalTexelOffset
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real MaximumDepthInputValue
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real MinimumDepthInputValue
		{
		public:
			Mogre::Real get();
		}
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		property Mogre::Real VerticalTexelOffset
		{
		public:
			Mogre::Real get();
		}
	
		property bool WaitForVerticalBlank
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property bool WBufferEnabled
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		Mogre::ConfigOptionMap^ GetConfigOptions( );
	
		void SetConfigOption( String^ name, String^ value );
	
		Mogre::HardwareOcclusionQuery^ CreateHardwareOcclusionQuery( );
	
		void DestroyHardwareOcclusionQuery( Mogre::HardwareOcclusionQuery^ hq );
	
		String^ ValidateConfigOptions( );
	
		Mogre::RenderWindow^ Initialise( bool autoCreateWindow, String^ windowTitle );
		Mogre::RenderWindow^ Initialise( bool autoCreateWindow );
	
		void Reinitialise( );
	
		void Shutdown( );
	
		void SetAmbientLight( float r, float g, float b );
	
		void SetShadingType( Mogre::ShadeOptions so );
	
		void SetLightingEnabled( bool enabled );
	
		Mogre::RenderWindow^ CreateRenderWindow( String^ name, unsigned int width, unsigned int height, bool fullScreen, Mogre::Const_NameValuePairList^ miscParams );
		Mogre::RenderWindow^ CreateRenderWindow( String^ name, unsigned int width, unsigned int height, bool fullScreen );
	
		Mogre::RenderTexture^ CreateRenderTexture( String^ name, unsigned int width, unsigned int height, Mogre::TextureType texType, Mogre::PixelFormat internalFormat, Mogre::Const_NameValuePairList^ miscParams );
		Mogre::RenderTexture^ CreateRenderTexture( String^ name, unsigned int width, unsigned int height, Mogre::TextureType texType, Mogre::PixelFormat internalFormat );
		Mogre::RenderTexture^ CreateRenderTexture( String^ name, unsigned int width, unsigned int height, Mogre::TextureType texType );
		Mogre::RenderTexture^ CreateRenderTexture( String^ name, unsigned int width, unsigned int height );
	
		Mogre::MultiRenderTarget^ CreateMultiRenderTarget( String^ name );
	
		void DestroyRenderWindow( String^ name );
	
		void DestroyRenderTexture( String^ name );
	
		void DestroyRenderTarget( String^ name );
	
		void AttachRenderTarget( Mogre::RenderTarget^ target );
	
		Mogre::RenderTarget^ GetRenderTarget( String^ name );
	
		Mogre::RenderTarget^ DetachRenderTarget( String^ name );
	
		Mogre::RenderSystem::RenderTargetIterator^ GetRenderTargetIterator( );
	
		String^ GetErrorDescription( long errorNumber );
	
		void _useLights( Mogre::Const_LightList^ lights, unsigned short limit );
	
		void _setWorldMatrix( Mogre::Matrix4^ m );
	
		void _setWorldMatrices( const Mogre::Matrix4::NativeValue* m, unsigned short count );
	
		void _setViewMatrix( Mogre::Matrix4^ m );
	
		void _setProjectionMatrix( Mogre::Matrix4^ m );
	
		void _setTextureUnitSettings( size_t texUnit, Mogre::TextureUnitState^ tl );
	
		void _disableTextureUnit( size_t texUnit );
	
		void _disableTextureUnitsFrom( size_t texUnit );
	
		void _setSurfaceParams( Mogre::ColourValue ambient, Mogre::ColourValue diffuse, Mogre::ColourValue specular, Mogre::ColourValue emissive, Mogre::Real shininess, Mogre::TrackVertexColourType tracking );
		void _setSurfaceParams( Mogre::ColourValue ambient, Mogre::ColourValue diffuse, Mogre::ColourValue specular, Mogre::ColourValue emissive, Mogre::Real shininess );
	
		void _setPointSpritesEnabled( bool enabled );
	
		void _setPointParameters( Mogre::Real size, bool attenuationEnabled, Mogre::Real constant, Mogre::Real linear, Mogre::Real quadratic, Mogre::Real minSize, Mogre::Real maxSize );
	
		void _setTexture( size_t unit, bool enabled, Mogre::TexturePtr^ texPtr );
	
		void _setTexture( size_t unit, bool enabled, String^ texname );
	
		void _setVertexTexture( size_t unit, Mogre::TexturePtr^ tex );
	
		void _setTextureCoordSet( size_t unit, size_t index );
	
		void _setTextureCoordCalculation( size_t unit, Mogre::TexCoordCalcMethod m, Mogre::Frustum^ frustum );
		void _setTextureCoordCalculation( size_t unit, Mogre::TexCoordCalcMethod m );
	
		void _setTextureBlendMode( size_t unit, Mogre::LayerBlendModeEx_NativePtr bm );
	
		void _setTextureUnitFiltering( size_t unit, Mogre::FilterOptions minFilter, Mogre::FilterOptions magFilter, Mogre::FilterOptions mipFilter );
	
		void _setTextureUnitFiltering( size_t unit, Mogre::FilterType ftype, Mogre::FilterOptions filter );
	
		void _setTextureLayerAnisotropy( size_t unit, unsigned int maxAnisotropy );
	
		void _setTextureAddressingMode( size_t unit, Mogre::TextureUnitState::UVWAddressingMode uvw );
	
		void _setTextureBorderColour( size_t unit, Mogre::ColourValue colour );
	
		void _setTextureMipmapBias( size_t unit, float bias );
	
		void _setTextureMatrix( size_t unit, Mogre::Matrix4^ xform );
	
		void _setSceneBlending( Mogre::SceneBlendFactor sourceFactor, Mogre::SceneBlendFactor destFactor );
	
		void _setAlphaRejectSettings( Mogre::CompareFunction func, unsigned char value );
	
		void _beginFrame( );
	
		void _endFrame( );
	
		void _setViewport( Mogre::Viewport^ vp );
	
		Mogre::Viewport^ _getViewport( );
	
		void _setCullingMode( Mogre::CullingMode mode );
	
		Mogre::CullingMode _getCullingMode( );
	
		void _setDepthBufferParams( bool depthTest, bool depthWrite, Mogre::CompareFunction depthFunction );
		void _setDepthBufferParams( bool depthTest, bool depthWrite );
		void _setDepthBufferParams( bool depthTest );
		void _setDepthBufferParams( );
	
		void _setDepthBufferCheckEnabled( bool enabled );
		void _setDepthBufferCheckEnabled( );
	
		void _setDepthBufferWriteEnabled( bool enabled );
		void _setDepthBufferWriteEnabled( );
	
		void _setDepthBufferFunction( Mogre::CompareFunction func );
		void _setDepthBufferFunction( );
	
		void _setColourBufferWriteEnabled( bool red, bool green, bool blue, bool alpha );
	
		void _setDepthBias( float constantBias, float slopeScaleBias );
		void _setDepthBias( float constantBias );
	
		void _setFog( Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart, Mogre::Real linearEnd );
		void _setFog( Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart );
		void _setFog( Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity );
		void _setFog( Mogre::FogMode mode, Mogre::ColourValue colour );
		void _setFog( Mogre::FogMode mode );
		void _setFog( );
	
		void _beginGeometryCount( );
	
		unsigned int _getFaceCount( );
	
		unsigned int _getBatchCount( );
	
		unsigned int _getVertexCount( );
	
		void ConvertColourValue( Mogre::ColourValue colour, [Out] Mogre::uint32% pDest );
	
		void _convertProjectionMatrix( Mogre::Matrix4^ matrix, Mogre::Matrix4^ dest, bool forGpuProgram );
		void _convertProjectionMatrix( Mogre::Matrix4^ matrix, Mogre::Matrix4^ dest );
	
		void _makeProjectionMatrix( Mogre::Radian fovy, Mogre::Real aspect, Mogre::Real nearPlane, Mogre::Real farPlane, Mogre::Matrix4^ dest, bool forGpuProgram );
		void _makeProjectionMatrix( Mogre::Radian fovy, Mogre::Real aspect, Mogre::Real nearPlane, Mogre::Real farPlane, Mogre::Matrix4^ dest );
	
		void _makeProjectionMatrix( Mogre::Real left, Mogre::Real right, Mogre::Real bottom, Mogre::Real top, Mogre::Real nearPlane, Mogre::Real farPlane, Mogre::Matrix4^ dest, bool forGpuProgram );
		void _makeProjectionMatrix( Mogre::Real left, Mogre::Real right, Mogre::Real bottom, Mogre::Real top, Mogre::Real nearPlane, Mogre::Real farPlane, Mogre::Matrix4^ dest );
	
		void _makeOrthoMatrix( Mogre::Radian fovy, Mogre::Real aspect, Mogre::Real nearPlane, Mogre::Real farPlane, Mogre::Matrix4^ dest, bool forGpuProgram );
		void _makeOrthoMatrix( Mogre::Radian fovy, Mogre::Real aspect, Mogre::Real nearPlane, Mogre::Real farPlane, Mogre::Matrix4^ dest );
	
		void _applyObliqueDepthProjection( Mogre::Matrix4^ matrix, Mogre::Plane plane, bool forGpuProgram );
	
		void _setPolygonMode( Mogre::PolygonMode level );
	
		void SetStencilCheckEnabled( bool enabled );
	
		void SetStencilBufferParams( Mogre::CompareFunction func, Mogre::uint32 refValue, Mogre::uint32 mask, Mogre::StencilOperation stencilFailOp, Mogre::StencilOperation depthFailOp, Mogre::StencilOperation passOp, bool twoSidedOperation );
		void SetStencilBufferParams( Mogre::CompareFunction func, Mogre::uint32 refValue, Mogre::uint32 mask, Mogre::StencilOperation stencilFailOp, Mogre::StencilOperation depthFailOp, Mogre::StencilOperation passOp );
		void SetStencilBufferParams( Mogre::CompareFunction func, Mogre::uint32 refValue, Mogre::uint32 mask, Mogre::StencilOperation stencilFailOp, Mogre::StencilOperation depthFailOp );
		void SetStencilBufferParams( Mogre::CompareFunction func, Mogre::uint32 refValue, Mogre::uint32 mask, Mogre::StencilOperation stencilFailOp );
		void SetStencilBufferParams( Mogre::CompareFunction func, Mogre::uint32 refValue, Mogre::uint32 mask );
		void SetStencilBufferParams( Mogre::CompareFunction func, Mogre::uint32 refValue );
		void SetStencilBufferParams( Mogre::CompareFunction func );
		void SetStencilBufferParams( );
	
		void SetVertexDeclaration( Mogre::VertexDeclaration^ decl );
	
		void SetVertexBufferBinding( Mogre::VertexBufferBinding^ binding );
	
		void SetNormaliseNormals( bool normalise );
	
		void _render( Mogre::RenderOperation^ op );
	
		void BindGpuProgram( Mogre::GpuProgram^ prg );
	
		void BindGpuProgramParameters( Mogre::GpuProgramType gptype, Mogre::GpuProgramParametersSharedPtr^ params );
	
		void BindGpuProgramPassIterationParameters( Mogre::GpuProgramType gptype );
	
		void UnbindGpuProgram( Mogre::GpuProgramType gptype );
	
		bool IsGpuProgramBound( Mogre::GpuProgramType gptype );
	
		void SetClipPlanes( Mogre::Const_PlaneList^ clipPlanes );
	
		void _initRenderTargets( );
	
		void _notifyCameraRemoved( Mogre::Camera^ cam );
	
		void _updateAllRenderTargets( );
	
		void SetClipPlane( Mogre::ushort index, Mogre::Plane p );
	
		void SetClipPlane( Mogre::ushort index, Mogre::Real A, Mogre::Real B, Mogre::Real C, Mogre::Real D );
	
		void EnableClipPlane( Mogre::ushort index, bool enable );
	
		void SetInvertVertexWinding( bool invert );
	
		void SetScissorTest( bool enabled, size_t left, size_t top, size_t right, size_t bottom );
		void SetScissorTest( bool enabled, size_t left, size_t top, size_t right );
		void SetScissorTest( bool enabled, size_t left, size_t top );
		void SetScissorTest( bool enabled, size_t left );
		void SetScissorTest( bool enabled );
	
		void ClearFrameBuffer( unsigned int buffers, Mogre::ColourValue colour, Mogre::Real depth, unsigned short stencil );
		void ClearFrameBuffer( unsigned int buffers, Mogre::ColourValue colour, Mogre::Real depth );
		void ClearFrameBuffer( unsigned int buffers, Mogre::ColourValue colour );
		void ClearFrameBuffer( unsigned int buffers );
	
		void SetCurrentPassIterationCount( size_t count );
	
		Mogre::Const_StringVector^ GetRenderSystemEvents( );
	
		void PreExtraThreadsStarted( );
	
		void PostExtraThreadsStarted( );
	
		void RegisterThread( );
	
		void UnregisterThread( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( RenderSystem )
	
		//Protected Declarations
	protected public:
		virtual void OnEventOccurred( String^ eventName, Mogre::Const_NameValuePairList^ parameters ) = IRenderSystem_Listener_Receiver::EventOccurred
		{
			EventOccurred( eventName, parameters );
		}
	
	
	
	};
	
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::RenderTarget^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::RenderTarget*
	INC_DECLARE_STLMAP( RenderTargetMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public, private )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDKEY Mogre::uchar
	#define STLDECL_MANAGEDVALUE Mogre::RenderTarget^
	#define STLDECL_NATIVEKEY Ogre::uchar
	#define STLDECL_NATIVEVALUE Ogre::RenderTarget*
	INC_DECLARE_STLMULTIMAP( RenderTargetPriorityMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public, private )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	

}
