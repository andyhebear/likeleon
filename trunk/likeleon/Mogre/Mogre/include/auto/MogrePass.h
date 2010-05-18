/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgrePass.h"
#include "MogreCommon.h"
#include "MogreBlendMode.h"
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"
#include "MogreLight.h"
#include "MogreTextureUnitState.h"

namespace Mogre
{
	public enum class IlluminationStage
	{
		IS_AMBIENT = Ogre::IS_AMBIENT,
		IS_PER_LIGHT = Ogre::IS_PER_LIGHT,
		IS_DECAL = Ogre::IS_DECAL
	};
	
	//################################################################
	//IlluminationPass_NativePtr
	//################################################################
	
	public value class IlluminationPass_NativePtr
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		Ogre::IlluminationPass* _native;
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		property Mogre::IlluminationStage stage
		{
		public:
			Mogre::IlluminationStage get();
		public:
			void set(Mogre::IlluminationStage value);
		}
	
		property Mogre::Pass^ pass
		{
		public:
			Mogre::Pass^ get();
		public:
			void set(Mogre::Pass^ value);
		}
	
		property bool destroyOnShutdown
		{
		public:
			bool get();
		public:
			void set(bool value);
		}
	
		property Mogre::Pass^ originalPass
		{
		public:
			Mogre::Pass^ get();
		public:
			void set(Mogre::Pass^ value);
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( IlluminationPass_NativePtr, Ogre::IlluminationPass )
	
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_native; }
		}
	
		static IlluminationPass_NativePtr Create();
	
		void DestroyNativePtr()
		{
			if (_native)  { delete _native; _native = 0; }
		}
	
		property bool IsNull
		{
			bool get() { return (_native == 0); }
		}
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//Pass
	//################################################################
	
	public ref class Pass : public INativePointer
	{
		//Nested Types
		public: ref class PassSet;
	
		public: enum class BuiltinHashFunction
		{
			MIN_TEXTURE_CHANGE = Ogre::Pass::MIN_TEXTURE_CHANGE,
			MIN_GPU_PROGRAM_CHANGE = Ogre::Pass::MIN_GPU_PROGRAM_CHANGE
		};
	
		#define STLDECL_MANAGEDTYPE Mogre::Pass^
		#define STLDECL_NATIVETYPE Ogre::Pass*
		public: INC_DECLARE_STLSET( PassSet, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		public: INC_DECLARE_ITERATOR_NOCONSTRUCTOR( TextureUnitStateIterator, Ogre::Pass::TextureUnitStateIterator, Mogre::Pass::TextureUnitStates, Mogre::TextureUnitState^, Ogre::TextureUnitState* )
	
		//Private Declarations
	private protected:
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		Pass( Ogre::Pass* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~Pass()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::Pass* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		Pass( Mogre::Technique^ parent, unsigned short index );
		Pass( Mogre::Technique^ parent, unsigned short index, Mogre::Pass^ oth );
	
	
		property Mogre::CompareFunction AlphaRejectFunction
		{
		public:
			Mogre::CompareFunction get();
		public:
			void set(Mogre::CompareFunction func);
		}
	
		property unsigned char AlphaRejectValue
		{
		public:
			unsigned char get();
		public:
			void set(unsigned char val);
		}
	
		property Mogre::ColourValue Ambient
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue ambient);
		}
	
		property bool ColourWriteEnabled
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property Mogre::CullingMode CullingMode
		{
		public:
			Mogre::CullingMode get();
		public:
			void set(Mogre::CullingMode mode);
		}
	
		property float DepthBiasConstant
		{
		public:
			float get();
		}
	
		property float DepthBiasSlopeScale
		{
		public:
			float get();
		}
	
		property bool DepthCheckEnabled
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property Mogre::CompareFunction DepthFunction
		{
		public:
			Mogre::CompareFunction get();
		public:
			void set(Mogre::CompareFunction func);
		}
	
		property bool DepthWriteEnabled
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property Mogre::SceneBlendFactor DestBlendFactor
		{
		public:
			Mogre::SceneBlendFactor get();
		}
	
		property Mogre::ColourValue Diffuse
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue diffuse);
		}
	
		property Mogre::ColourValue FogColour
		{
		public:
			Mogre::ColourValue get();
		}
	
		property Mogre::Real FogDensity
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real FogEnd
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::FogMode FogMode
		{
		public:
			Mogre::FogMode get();
		}
	
		property bool FogOverride
		{
		public:
			bool get();
		}
	
		property Mogre::Real FogStart
		{
		public:
			Mogre::Real get();
		}
	
		property String^ FragmentProgramName
		{
		public:
			String^ get();
		}
	
		property bool HasFragmentProgram
		{
		public:
			bool get();
		}
	
		property Mogre::uint32 Hash
		{
		public:
			Mogre::uint32 get();
		}
	
		property bool HasShadowCasterVertexProgram
		{
		public:
			bool get();
		}
	
		property bool HasShadowReceiverFragmentProgram
		{
		public:
			bool get();
		}
	
		property bool HasShadowReceiverVertexProgram
		{
		public:
			bool get();
		}
	
		property bool HasVertexProgram
		{
		public:
			bool get();
		}
	
		property unsigned short Index
		{
		public:
			unsigned short get();
		}
	
		property bool IsAmbientOnly
		{
		public:
			bool get();
		}
	
		property bool IsLoaded
		{
		public:
			bool get();
		}
	
		property bool IsPointAttenuationEnabled
		{
		public:
			bool get();
		}
	
		property bool IsProgrammable
		{
		public:
			bool get();
		}
	
		property bool IsTransparent
		{
		public:
			bool get();
		}
	
		property bool IteratePerLight
		{
		public:
			bool get();
		}
	
		property unsigned short LightCountPerIteration
		{
		public:
			unsigned short get();
		public:
			void set(unsigned short c);
		}
	
		property bool LightingEnabled
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property Mogre::ManualCullingMode ManualCullingMode
		{
		public:
			Mogre::ManualCullingMode get();
		public:
			void set(Mogre::ManualCullingMode mode);
		}
	
		property unsigned short MaxSimultaneousLights
		{
		public:
			unsigned short get();
		public:
			void set(unsigned short maxLights);
		}
	
		property String^ Name
		{
		public:
			String^ get();
		public:
			void set(String^ name);
		}
	
		property unsigned short NumTextureUnitStates
		{
		public:
			unsigned short get();
		}
	
		property Mogre::Light::LightTypes OnlyLightType
		{
		public:
			Mogre::Light::LightTypes get();
		}
	
		property Mogre::Technique^ Parent
		{
		public:
			Mogre::Technique^ get();
		}
	
		property size_t PassIterationCount
		{
		public:
			size_t get();
		}
	
		property Mogre::Real PointAttenuationConstant
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real PointAttenuationLinear
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real PointAttenuationQuadratic
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real PointMaxSize
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real max);
		}
	
		property Mogre::Real PointMinSize
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real min);
		}
	
		property Mogre::Real PointSize
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real ps);
		}
	
		property bool PointSpritesEnabled
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property Mogre::PolygonMode PolygonMode
		{
		public:
			Mogre::PolygonMode get();
		public:
			void set(Mogre::PolygonMode mode);
		}
	
		property String^ ResourceGroup
		{
		public:
			String^ get();
		}
	
		property bool RunOnlyForOneLightType
		{
		public:
			bool get();
		}
	
		property Mogre::ColourValue SelfIllumination
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue selfIllum);
		}
	
		property Mogre::ShadeOptions ShadingMode
		{
		public:
			Mogre::ShadeOptions get();
		public:
			void set(Mogre::ShadeOptions mode);
		}
	
		property String^ ShadowCasterVertexProgramName
		{
		public:
			String^ get();
		}
	
		property String^ ShadowReceiverFragmentProgramName
		{
		public:
			String^ get();
		}
	
		property String^ ShadowReceiverVertexProgramName
		{
		public:
			String^ get();
		}
	
		property Mogre::Real Shininess
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real val);
		}
	
		property Mogre::SceneBlendFactor SourceBlendFactor
		{
		public:
			Mogre::SceneBlendFactor get();
		}
	
		property Mogre::ColourValue Specular
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue specular);
		}
	
		property unsigned short StartLight
		{
		public:
			unsigned short get();
		public:
			void set(unsigned short startLight);
		}
	
		property Mogre::TrackVertexColourType VertexColourTracking
		{
		public:
			Mogre::TrackVertexColourType get();
		public:
			void set(Mogre::TrackVertexColourType tracking);
		}
	
		property String^ VertexProgramName
		{
		public:
			String^ get();
		}
	
		void CopyTo(Pass^ dest)
		{
			if (_native == NULL) throw gcnew Exception("The underlying native object for the caller is null.");
			if (dest->_native == NULL) throw gcnew ArgumentException("The underlying native object for parameter 'dest' is null.");
	
			*(dest->_native) = *_native;
		}
	
		void SetAmbient( Mogre::Real red, Mogre::Real green, Mogre::Real blue );
	
		void SetDiffuse( Mogre::Real red, Mogre::Real green, Mogre::Real blue, Mogre::Real alpha );
	
		void SetSpecular( Mogre::Real red, Mogre::Real green, Mogre::Real blue, Mogre::Real alpha );
	
		void SetSelfIllumination( Mogre::Real red, Mogre::Real green, Mogre::Real blue );
	
		void SetPointAttenuation( bool enabled, Mogre::Real constant, Mogre::Real linear, Mogre::Real quadratic );
		void SetPointAttenuation( bool enabled, Mogre::Real constant, Mogre::Real linear );
		void SetPointAttenuation( bool enabled, Mogre::Real constant );
		void SetPointAttenuation( bool enabled );
	
		Mogre::TextureUnitState^ CreateTextureUnitState( );
	
		Mogre::TextureUnitState^ CreateTextureUnitState( String^ textureName, unsigned short texCoordSet );
		Mogre::TextureUnitState^ CreateTextureUnitState( String^ textureName );
	
		void AddTextureUnitState( Mogre::TextureUnitState^ state );
	
		Mogre::TextureUnitState^ GetTextureUnitState( unsigned short index );
	
		Mogre::TextureUnitState^ GetTextureUnitState( String^ name );
	
		unsigned short GetTextureUnitStateIndex( Mogre::TextureUnitState^ state );
	
		Mogre::Pass::TextureUnitStateIterator^ GetTextureUnitStateIterator( );
	
		void RemoveTextureUnitState( unsigned short index );
	
		void RemoveAllTextureUnitStates( );
	
		void SetSceneBlending( Mogre::SceneBlendType sbt );
	
		void SetSceneBlending( Mogre::SceneBlendFactor sourceFactor, Mogre::SceneBlendFactor destFactor );
	
		void SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart, Mogre::Real linearEnd );
		void SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart );
		void SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity );
		void SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour );
		void SetFog( bool overrideScene, Mogre::FogMode mode );
		void SetFog( bool overrideScene );
	
		void SetDepthBias( float constantBias, float slopeScaleBias );
		void SetDepthBias( float constantBias );
	
		void SetAlphaRejectSettings( Mogre::CompareFunction func, unsigned char value );
	
		void SetIteratePerLight( bool enabled, bool onlyForOneLightType, Mogre::Light::LightTypes lightType );
		void SetIteratePerLight( bool enabled, bool onlyForOneLightType );
		void SetIteratePerLight( bool enabled );
	
		void SetVertexProgram( String^ name, bool resetParams );
		void SetVertexProgram( String^ name );
	
		void SetVertexProgramParameters( Mogre::GpuProgramParametersSharedPtr^ params );
	
		Mogre::GpuProgramParametersSharedPtr^ GetVertexProgramParameters( );
	
		Mogre::GpuProgramPtr^ GetVertexProgram( );
	
		void SetShadowCasterVertexProgram( String^ name );
	
		void SetShadowCasterVertexProgramParameters( Mogre::GpuProgramParametersSharedPtr^ params );
	
		Mogre::GpuProgramParametersSharedPtr^ GetShadowCasterVertexProgramParameters( );
	
		Mogre::GpuProgramPtr^ GetShadowCasterVertexProgram( );
	
		void SetShadowReceiverVertexProgram( String^ name );
	
		void SetShadowReceiverVertexProgramParameters( Mogre::GpuProgramParametersSharedPtr^ params );
	
		void SetShadowReceiverFragmentProgram( String^ name );
	
		void SetShadowReceiverFragmentProgramParameters( Mogre::GpuProgramParametersSharedPtr^ params );
	
		Mogre::GpuProgramParametersSharedPtr^ GetShadowReceiverVertexProgramParameters( );
	
		Mogre::GpuProgramPtr^ GetShadowReceiverVertexProgram( );
	
		Mogre::GpuProgramParametersSharedPtr^ GetShadowReceiverFragmentProgramParameters( );
	
		Mogre::GpuProgramPtr^ GetShadowReceiverFragmentProgram( );
	
		void SetFragmentProgram( String^ name, bool resetParams );
		void SetFragmentProgram( String^ name );
	
		void SetFragmentProgramParameters( Mogre::GpuProgramParametersSharedPtr^ params );
	
		Mogre::GpuProgramParametersSharedPtr^ GetFragmentProgramParameters( );
	
		Mogre::GpuProgramPtr^ GetFragmentProgram( );
	
		Mogre::Pass^ _split( unsigned short numUnits );
	
		void _notifyIndex( unsigned short index );
	
		void _load( );
	
		void _unload( );
	
		void _dirtyHash( );
	
		void _recalculateHash( );
	
		void _notifyNeedsRecompile( );
	
		unsigned short _getTextureUnitWithContentTypeIndex( Mogre::TextureUnitState::ContentType contentType, unsigned short index );
	
		void SetTextureFiltering( Mogre::TextureFilterOptions filterType );
	
		void SetTextureAnisotropy( unsigned int maxAniso );
	
		void QueueForDeletion( );
	
		void SetPassIterationCount( size_t count );
	
		bool ApplyTextureAliases( Mogre::Const_AliasTextureNamePairList^ aliasList, bool apply );
		bool ApplyTextureAliases( Mogre::Const_AliasTextureNamePairList^ aliasList );
	
		static Mogre::Pass::Const_PassSet^ GetDirtyHashList( );
	
		static Mogre::Pass::Const_PassSet^ GetPassGraveyard( );
	
		static void ClearDirtyHashList( );
	
		static void ProcessPendingPassUpdates( );
	
		static void SetHashFunction( Mogre::Pass::BuiltinHashFunction builtin );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( Pass )
	
		//Protected Declarations
	protected public:
	
	};
	
	#define STLDECL_MANAGEDTYPE Mogre::IlluminationPass_NativePtr
	#define STLDECL_NATIVETYPE Ogre::IlluminationPass*
	INC_DECLARE_STLVECTOR( IlluminationPassList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	

}
