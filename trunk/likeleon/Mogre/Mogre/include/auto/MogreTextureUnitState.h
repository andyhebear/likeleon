/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreTextureUnitState.h"
#include "MogrePrerequisites.h"
#include "MogreCommon.h"
#include "MogreBlendMode.h"
#include "MogrePixelFormat.h"
#include "MogreTexture.h"

namespace Mogre
{
	//################################################################
	//TextureUnitState
	//################################################################
	
	public ref class TextureUnitState : public INativePointer
	{
		//Nested Types
		public: ref class EffectMap;
	
		public: enum class TextureEffectType
		{
			ET_ENVIRONMENT_MAP = Ogre::TextureUnitState::ET_ENVIRONMENT_MAP,
			ET_PROJECTIVE_TEXTURE = Ogre::TextureUnitState::ET_PROJECTIVE_TEXTURE,
			ET_UVSCROLL = Ogre::TextureUnitState::ET_UVSCROLL,
			ET_USCROLL = Ogre::TextureUnitState::ET_USCROLL,
			ET_VSCROLL = Ogre::TextureUnitState::ET_VSCROLL,
			ET_ROTATE = Ogre::TextureUnitState::ET_ROTATE,
			ET_TRANSFORM = Ogre::TextureUnitState::ET_TRANSFORM
		};
	
		public: enum class EnvMapType
		{
			ENV_PLANAR = Ogre::TextureUnitState::ENV_PLANAR,
			ENV_CURVED = Ogre::TextureUnitState::ENV_CURVED,
			ENV_REFLECTION = Ogre::TextureUnitState::ENV_REFLECTION,
			ENV_NORMAL = Ogre::TextureUnitState::ENV_NORMAL
		};
	
		public: enum class TextureTransformType
		{
			TT_TRANSLATE_U = Ogre::TextureUnitState::TT_TRANSLATE_U,
			TT_TRANSLATE_V = Ogre::TextureUnitState::TT_TRANSLATE_V,
			TT_SCALE_U = Ogre::TextureUnitState::TT_SCALE_U,
			TT_SCALE_V = Ogre::TextureUnitState::TT_SCALE_V,
			TT_ROTATE = Ogre::TextureUnitState::TT_ROTATE
		};
	
		public: enum class TextureAddressingMode
		{
			TAM_WRAP = Ogre::TextureUnitState::TAM_WRAP,
			TAM_MIRROR = Ogre::TextureUnitState::TAM_MIRROR,
			TAM_CLAMP = Ogre::TextureUnitState::TAM_CLAMP,
			TAM_BORDER = Ogre::TextureUnitState::TAM_BORDER
		};
	
		public: enum class TextureCubeFace
		{
			CUBE_FRONT = Ogre::TextureUnitState::CUBE_FRONT,
			CUBE_BACK = Ogre::TextureUnitState::CUBE_BACK,
			CUBE_LEFT = Ogre::TextureUnitState::CUBE_LEFT,
			CUBE_RIGHT = Ogre::TextureUnitState::CUBE_RIGHT,
			CUBE_UP = Ogre::TextureUnitState::CUBE_UP,
			CUBE_DOWN = Ogre::TextureUnitState::CUBE_DOWN
		};
	
		public: enum class BindingType
		{
			BT_FRAGMENT = Ogre::TextureUnitState::BT_FRAGMENT,
			BT_VERTEX = Ogre::TextureUnitState::BT_VERTEX
		};
	
		public: enum class ContentType
		{
			CONTENT_NAMED = Ogre::TextureUnitState::CONTENT_NAMED,
			CONTENT_SHADOW = Ogre::TextureUnitState::CONTENT_SHADOW
		};
	
		//################################################################
		//TextureEffect_NativePtr
		//################################################################
	
		public: value class TextureEffect_NativePtr
		{
			//Nested Types
	
			//Private Declarations
		private protected:
			Ogre::TextureUnitState::TextureEffect* _native;
	
			//Internal Declarations
		public protected:
	
			//Public Declarations
		public:
	
	
			property Mogre::TextureUnitState::TextureEffectType type
			{
			public:
				Mogre::TextureUnitState::TextureEffectType get();
			public:
				void set(Mogre::TextureUnitState::TextureEffectType value);
			}
	
			property int subtype
			{
			public:
				int get();
			public:
				void set(int value);
			}
	
			property Mogre::Real arg1
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			property Mogre::Real arg2
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			property Mogre::WaveformType waveType
			{
			public:
				Mogre::WaveformType get();
			public:
				void set(Mogre::WaveformType value);
			}
	
			property Mogre::Real base
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			property Mogre::Real frequency
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			property Mogre::Real phase
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			property Mogre::Real amplitude
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			property Mogre::Frustum^ frustum
			{
			public:
				Mogre::Frustum^ get();
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( TextureUnitState::TextureEffect_NativePtr, Ogre::TextureUnitState::TextureEffect )
	
	
			property IntPtr NativePtr
			{
				IntPtr get() { return (IntPtr)_native; }
			}
	
			static TextureEffect_NativePtr Create();
	
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
		//UVWAddressingMode
		//################################################################
	
		public: value class UVWAddressingMode
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
	
			//Public Declarations
		public:
	
	
			Mogre::TextureUnitState::TextureAddressingMode u;
	
			Mogre::TextureUnitState::TextureAddressingMode v;
	
			Mogre::TextureUnitState::TextureAddressingMode w;
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_VALUECLASS( TextureUnitState::UVWAddressingMode )
	
			//Protected Declarations
		protected public:
	
		};
	
		#define STLDECL_MANAGEDKEY Mogre::TextureUnitState::TextureEffectType
		#define STLDECL_MANAGEDVALUE Mogre::TextureUnitState::TextureEffect_NativePtr
		#define STLDECL_NATIVEKEY Ogre::TextureUnitState::TextureEffectType
		#define STLDECL_NATIVEVALUE Ogre::TextureUnitState::TextureEffect
		public: INC_DECLARE_STLMULTIMAP( EffectMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		//Private Declarations
	private protected:
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		TextureUnitState( Ogre::TextureUnitState* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~TextureUnitState()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::TextureUnitState* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		TextureUnitState( Mogre::Pass^ parent );
		TextureUnitState( Mogre::Pass^ parent, Mogre::TextureUnitState^ oth );
		TextureUnitState( Mogre::Pass^ parent, String^ texName, unsigned int texCoordSet );
		TextureUnitState( Mogre::Pass^ parent, String^ texName );
	
	
		property Mogre::LayerBlendModeEx_NativePtr AlphaBlendMode
		{
		public:
			Mogre::LayerBlendModeEx_NativePtr get();
		}
	
		property Mogre::Real AnimationDuration
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::SceneBlendFactor ColourBlendFallbackDest
		{
		public:
			Mogre::SceneBlendFactor get();
		}
	
		property Mogre::SceneBlendFactor ColourBlendFallbackSrc
		{
		public:
			Mogre::SceneBlendFactor get();
		}
	
		property Mogre::LayerBlendModeEx_NativePtr ColourBlendMode
		{
		public:
			Mogre::LayerBlendModeEx_NativePtr get();
		}
	
		property unsigned int CurrentFrame
		{
		public:
			unsigned int get();
		public:
			void set(unsigned int frameNumber);
		}
	
		property Mogre::PixelFormat DesiredFormat
		{
		public:
			Mogre::PixelFormat get();
		public:
			void set(Mogre::PixelFormat desiredFormat);
		}
	
		property bool HasViewRelativeTextureCoordinateGeneration
		{
		public:
			bool get();
		}
	
		property bool IsAlpha
		{
		public:
			bool get();
		public:
			void set(bool isAlpha);
		}
	
		property bool IsBlank
		{
		public:
			bool get();
		}
	
		property bool IsCubic
		{
		public:
			bool get();
		}
	
		property bool IsLoaded
		{
		public:
			bool get();
		}
	
		property bool IsTextureLoadFailing
		{
		public:
			bool get();
		}
	
		property String^ Name
		{
		public:
			String^ get();
		public:
			void set(String^ name);
		}
	
		property unsigned int NumFrames
		{
		public:
			unsigned int get();
		}
	
		property int NumMipmaps
		{
		public:
			int get();
		public:
			void set(int numMipmaps);
		}
	
		property Mogre::Pass^ Parent
		{
		public:
			Mogre::Pass^ get();
		}
	
		property unsigned int TextureAnisotropy
		{
		public:
			unsigned int get();
		public:
			void set(unsigned int maxAniso);
		}
	
		property Mogre::ColourValue TextureBorderColour
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue colour);
		}
	
		property unsigned int TextureCoordSet
		{
		public:
			unsigned int get();
		public:
			void set(unsigned int set);
		}
	
		property float TextureMipmapBias
		{
		public:
			float get();
		public:
			void set(float bias);
		}
	
		property String^ TextureName
		{
		public:
			String^ get();
		}
	
		property String^ TextureNameAlias
		{
		public:
			String^ get();
		public:
			void set(String^ name);
		}
	
		property Mogre::Radian TextureRotate
		{
		public:
			Mogre::Radian get();
		public:
			void set(Mogre::Radian angle);
		}
	
		property Mogre::Matrix4^ TextureTransform
		{
		public:
			Mogre::Matrix4^ get();
		public:
			void set(Mogre::Matrix4^ xform);
		}
	
		property Mogre::TextureType TextureType
		{
		public:
			Mogre::TextureType get();
		}
	
		property Mogre::Real TextureUScale
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		property Mogre::Real TextureUScroll
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		property Mogre::Real TextureVScale
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		property Mogre::Real TextureVScroll
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		void CopyTo(TextureUnitState^ dest)
		{
			if (_native == NULL) throw gcnew Exception("The underlying native object for the caller is null.");
			if (dest->_native == NULL) throw gcnew ArgumentException("The underlying native object for parameter 'dest' is null.");
	
			*(dest->_native) = *_native;
		}
	
		void SetTextureName( String^ name, Mogre::TextureType ttype );
		void SetTextureName( String^ name );
	
		void SetCubicTextureName( String^ name, bool forUVW );
		void SetCubicTextureName( String^ name );
	
		void SetCubicTextureName( array<String^>^ names, bool forUVW );
		void SetCubicTextureName( array<String^>^ names );
	
		void SetAnimatedTextureName( String^ name, unsigned int numFrames, Mogre::Real duration );
		void SetAnimatedTextureName( String^ name, unsigned int numFrames );
	
		void SetAnimatedTextureName( array<String^>^ names, unsigned int numFrames, Mogre::Real duration );
		void SetAnimatedTextureName( array<String^>^ names, unsigned int numFrames );
	
		Pair<size_t, size_t> GetTextureDimensions( unsigned int frame );
		Pair<size_t, size_t> GetTextureDimensions( );
	
		String^ GetFrameTextureName( unsigned int frameNumber );
	
		void SetFrameTextureName( String^ name, unsigned int frameNumber );
	
		void AddFrameTextureName( String^ name );
	
		void DeleteFrameTextureName( size_t frameNumber );
	
		void SetBindingType( Mogre::TextureUnitState::BindingType bt );
	
		Mogre::TextureUnitState::BindingType GetBindingType( );
	
		void SetContentType( Mogre::TextureUnitState::ContentType ct );
	
		Mogre::TextureUnitState::ContentType GetContentType( );
	
		bool Is3D( );
	
		void SetTextureScroll( Mogre::Real u, Mogre::Real v );
	
		void SetTextureScale( Mogre::Real uScale, Mogre::Real vScale );
	
		Mogre::TextureUnitState::UVWAddressingMode GetTextureAddressingMode( );
	
		void SetTextureAddressingMode( Mogre::TextureUnitState::TextureAddressingMode tam );
	
		void SetTextureAddressingMode( Mogre::TextureUnitState::TextureAddressingMode u, Mogre::TextureUnitState::TextureAddressingMode v, Mogre::TextureUnitState::TextureAddressingMode w );
	
		void SetTextureAddressingMode( Mogre::TextureUnitState::UVWAddressingMode uvw );
	
		void SetColourOperationEx( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1, Mogre::LayerBlendSource source2, Mogre::ColourValue arg1, Mogre::ColourValue arg2, Mogre::Real manualBlend );
		void SetColourOperationEx( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1, Mogre::LayerBlendSource source2, Mogre::ColourValue arg1, Mogre::ColourValue arg2 );
		void SetColourOperationEx( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1, Mogre::LayerBlendSource source2, Mogre::ColourValue arg1 );
		void SetColourOperationEx( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1, Mogre::LayerBlendSource source2 );
		void SetColourOperationEx( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1 );
		void SetColourOperationEx( Mogre::LayerBlendOperationEx op );
	
		void SetColourOperation( Mogre::LayerBlendOperation op );
	
		void SetColourOpMultipassFallback( Mogre::SceneBlendFactor sourceFactor, Mogre::SceneBlendFactor destFactor );
	
		void SetAlphaOperation( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1, Mogre::LayerBlendSource source2, Mogre::Real arg1, Mogre::Real arg2, Mogre::Real manualBlend );
		void SetAlphaOperation( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1, Mogre::LayerBlendSource source2, Mogre::Real arg1, Mogre::Real arg2 );
		void SetAlphaOperation( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1, Mogre::LayerBlendSource source2, Mogre::Real arg1 );
		void SetAlphaOperation( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1, Mogre::LayerBlendSource source2 );
		void SetAlphaOperation( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1 );
		void SetAlphaOperation( Mogre::LayerBlendOperationEx op );
	
		void AddEffect( Mogre::TextureUnitState::TextureEffect_NativePtr effect );
	
		void SetEnvironmentMap( bool enable, Mogre::TextureUnitState::EnvMapType envMapType );
		void SetEnvironmentMap( bool enable );
	
		void SetScrollAnimation( Mogre::Real uSpeed, Mogre::Real vSpeed );
	
		void SetRotateAnimation( Mogre::Real speed );
	
		void SetTransformAnimation( Mogre::TextureUnitState::TextureTransformType ttype, Mogre::WaveformType waveType, Mogre::Real base, Mogre::Real frequency, Mogre::Real phase, Mogre::Real amplitude );
		void SetTransformAnimation( Mogre::TextureUnitState::TextureTransformType ttype, Mogre::WaveformType waveType, Mogre::Real base, Mogre::Real frequency, Mogre::Real phase );
		void SetTransformAnimation( Mogre::TextureUnitState::TextureTransformType ttype, Mogre::WaveformType waveType, Mogre::Real base, Mogre::Real frequency );
		void SetTransformAnimation( Mogre::TextureUnitState::TextureTransformType ttype, Mogre::WaveformType waveType, Mogre::Real base );
		void SetTransformAnimation( Mogre::TextureUnitState::TextureTransformType ttype, Mogre::WaveformType waveType );
	
		void SetProjectiveTexturing( bool enabled, Mogre::Frustum^ projectionSettings );
		void SetProjectiveTexturing( bool enabled );
	
		void RemoveAllEffects( );
	
		void RemoveEffect( Mogre::TextureUnitState::TextureEffectType type );
	
		void SetBlank( );
	
		void RetryTextureLoad( );
	
		Mogre::TextureUnitState::Const_EffectMap^ GetEffects( );
	
		void SetTextureFiltering( Mogre::TextureFilterOptions filterType );
	
		void SetTextureFiltering( Mogre::FilterType ftype, Mogre::FilterOptions opts );
	
		void SetTextureFiltering( Mogre::FilterOptions minFilter, Mogre::FilterOptions magFilter, Mogre::FilterOptions mipFilter );
	
		Mogre::FilterOptions GetTextureFiltering( Mogre::FilterType ftpye );
	
		void _load( );
	
		void _unload( );
	
		void _notifyNeedsRecompile( );
	
		bool ApplyTextureAliases( Mogre::Const_AliasTextureNamePairList^ aliasList, bool apply );
		bool ApplyTextureAliases( Mogre::Const_AliasTextureNamePairList^ aliasList );
	
		void _notifyParent( Mogre::Pass^ parent );
	
		Mogre::TexturePtr^ _getTexturePtr( );
	
		Mogre::TexturePtr^ _getTexturePtr( size_t frame );
	
		void _setTexturePtr( Mogre::TexturePtr^ texptr );
	
		void _setTexturePtr( Mogre::TexturePtr^ texptr, size_t frame );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( TextureUnitState )
	
		//Protected Declarations
	protected public:
	
	};
	

}
