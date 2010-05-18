/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreTextureUnitState.h"
#include "MogreFrustum.h"
#include "MogrePass.h"
#include "MogreCommon.h"
#include "MogreTexture.h"

namespace Mogre
{
	//################################################################
	//TextureUnitState
	//################################################################
	
	//Nested Types
	//################################################################
	//TextureEffect_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	Mogre::TextureUnitState::TextureEffectType TextureUnitState::TextureEffect_NativePtr::type::get()
	{
		return (Mogre::TextureUnitState::TextureEffectType)_native->type;
	}
	void TextureUnitState::TextureEffect_NativePtr::type::set( Mogre::TextureUnitState::TextureEffectType value )
	{
		_native->type = (Ogre::TextureUnitState::TextureEffectType)value;
	}
	
	int TextureUnitState::TextureEffect_NativePtr::subtype::get()
	{
		return _native->subtype;
	}
	void TextureUnitState::TextureEffect_NativePtr::subtype::set( int value )
	{
		_native->subtype = value;
	}
	
	Mogre::Real TextureUnitState::TextureEffect_NativePtr::arg1::get()
	{
		return _native->arg1;
	}
	void TextureUnitState::TextureEffect_NativePtr::arg1::set( Mogre::Real value )
	{
		_native->arg1 = value;
	}
	
	Mogre::Real TextureUnitState::TextureEffect_NativePtr::arg2::get()
	{
		return _native->arg2;
	}
	void TextureUnitState::TextureEffect_NativePtr::arg2::set( Mogre::Real value )
	{
		_native->arg2 = value;
	}
	
	Mogre::WaveformType TextureUnitState::TextureEffect_NativePtr::waveType::get()
	{
		return (Mogre::WaveformType)_native->waveType;
	}
	void TextureUnitState::TextureEffect_NativePtr::waveType::set( Mogre::WaveformType value )
	{
		_native->waveType = (Ogre::WaveformType)value;
	}
	
	Mogre::Real TextureUnitState::TextureEffect_NativePtr::base::get()
	{
		return _native->base;
	}
	void TextureUnitState::TextureEffect_NativePtr::base::set( Mogre::Real value )
	{
		_native->base = value;
	}
	
	Mogre::Real TextureUnitState::TextureEffect_NativePtr::frequency::get()
	{
		return _native->frequency;
	}
	void TextureUnitState::TextureEffect_NativePtr::frequency::set( Mogre::Real value )
	{
		_native->frequency = value;
	}
	
	Mogre::Real TextureUnitState::TextureEffect_NativePtr::phase::get()
	{
		return _native->phase;
	}
	void TextureUnitState::TextureEffect_NativePtr::phase::set( Mogre::Real value )
	{
		_native->phase = value;
	}
	
	Mogre::Real TextureUnitState::TextureEffect_NativePtr::amplitude::get()
	{
		return _native->amplitude;
	}
	void TextureUnitState::TextureEffect_NativePtr::amplitude::set( Mogre::Real value )
	{
		_native->amplitude = value;
	}
	
	Mogre::Frustum^ TextureUnitState::TextureEffect_NativePtr::frustum::get()
	{
		return _native->frustum;
	}
	
	
	Mogre::TextureUnitState::TextureEffect_NativePtr TextureUnitState::TextureEffect_NativePtr::Create()
	{
		TextureEffect_NativePtr ptr;
		ptr._native = new Ogre::TextureUnitState::TextureEffect();
		return ptr;
	}
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDKEY Mogre::TextureUnitState::TextureEffectType
	#define STLDECL_MANAGEDVALUE Mogre::TextureUnitState::TextureEffect_NativePtr
	#define STLDECL_NATIVEKEY Ogre::TextureUnitState::TextureEffectType
	#define STLDECL_NATIVEVALUE Ogre::TextureUnitState::TextureEffect
	CPP_DECLARE_STLMULTIMAP( TextureUnitState::, EffectMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	TextureUnitState::TextureUnitState( Mogre::Pass^ parent )
	{
		_createdByCLR = true;
		_native = new Ogre::TextureUnitState( parent);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	TextureUnitState::TextureUnitState( Mogre::Pass^ parent, Mogre::TextureUnitState^ oth )
	{
		_createdByCLR = true;
		_native = new Ogre::TextureUnitState( parent, oth);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	TextureUnitState::TextureUnitState( Mogre::Pass^ parent, String^ texName, unsigned int texCoordSet )
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_texName, texName )
	
		_native = new Ogre::TextureUnitState( parent, o_texName, texCoordSet);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	TextureUnitState::TextureUnitState( Mogre::Pass^ parent, String^ texName )
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_texName, texName )
	
		_native = new Ogre::TextureUnitState( parent, o_texName);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::LayerBlendModeEx_NativePtr TextureUnitState::AlphaBlendMode::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getAlphaBlendMode( );
	}
	
	Mogre::Real TextureUnitState::AnimationDuration::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getAnimationDuration( );
	}
	
	Mogre::SceneBlendFactor TextureUnitState::ColourBlendFallbackDest::get()
	{
		return (Mogre::SceneBlendFactor)static_cast<const Ogre::TextureUnitState*>(_native)->getColourBlendFallbackDest( );
	}
	
	Mogre::SceneBlendFactor TextureUnitState::ColourBlendFallbackSrc::get()
	{
		return (Mogre::SceneBlendFactor)static_cast<const Ogre::TextureUnitState*>(_native)->getColourBlendFallbackSrc( );
	}
	
	Mogre::LayerBlendModeEx_NativePtr TextureUnitState::ColourBlendMode::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getColourBlendMode( );
	}
	
	unsigned int TextureUnitState::CurrentFrame::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getCurrentFrame( );
	}
	void TextureUnitState::CurrentFrame::set( unsigned int frameNumber )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setCurrentFrame( frameNumber );
	}
	
	Mogre::PixelFormat TextureUnitState::DesiredFormat::get()
	{
		return (Mogre::PixelFormat)static_cast<const Ogre::TextureUnitState*>(_native)->getDesiredFormat( );
	}
	void TextureUnitState::DesiredFormat::set( Mogre::PixelFormat desiredFormat )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setDesiredFormat( (Ogre::PixelFormat)desiredFormat );
	}
	
	bool TextureUnitState::HasViewRelativeTextureCoordinateGeneration::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->hasViewRelativeTextureCoordinateGeneration( );
	}
	
	bool TextureUnitState::IsAlpha::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getIsAlpha( );
	}
	void TextureUnitState::IsAlpha::set( bool isAlpha )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setIsAlpha( isAlpha );
	}
	
	bool TextureUnitState::IsBlank::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->isBlank( );
	}
	
	bool TextureUnitState::IsCubic::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->isCubic( );
	}
	
	bool TextureUnitState::IsLoaded::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->isLoaded( );
	}
	
	bool TextureUnitState::IsTextureLoadFailing::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->isTextureLoadFailing( );
	}
	
	String^ TextureUnitState::Name::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::TextureUnitState*>(_native)->getName( ) );
	}
	void TextureUnitState::Name::set( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::TextureUnitState*>(_native)->setName( o_name );
	}
	
	unsigned int TextureUnitState::NumFrames::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getNumFrames( );
	}
	
	int TextureUnitState::NumMipmaps::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getNumMipmaps( );
	}
	void TextureUnitState::NumMipmaps::set( int numMipmaps )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setNumMipmaps( numMipmaps );
	}
	
	Mogre::Pass^ TextureUnitState::Parent::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getParent( );
	}
	
	unsigned int TextureUnitState::TextureAnisotropy::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getTextureAnisotropy( );
	}
	void TextureUnitState::TextureAnisotropy::set( unsigned int maxAniso )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureAnisotropy( maxAniso );
	}
	
	Mogre::ColourValue TextureUnitState::TextureBorderColour::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getTextureBorderColour( );
	}
	void TextureUnitState::TextureBorderColour::set( Mogre::ColourValue colour )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureBorderColour( colour );
	}
	
	unsigned int TextureUnitState::TextureCoordSet::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getTextureCoordSet( );
	}
	void TextureUnitState::TextureCoordSet::set( unsigned int set )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureCoordSet( set );
	}
	
	float TextureUnitState::TextureMipmapBias::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getTextureMipmapBias( );
	}
	void TextureUnitState::TextureMipmapBias::set( float bias )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureMipmapBias( bias );
	}
	
	String^ TextureUnitState::TextureName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::TextureUnitState*>(_native)->getTextureName( ) );
	}
	
	String^ TextureUnitState::TextureNameAlias::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::TextureUnitState*>(_native)->getTextureNameAlias( ) );
	}
	void TextureUnitState::TextureNameAlias::set( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureNameAlias( o_name );
	}
	
	Mogre::Radian TextureUnitState::TextureRotate::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getTextureRotate( );
	}
	void TextureUnitState::TextureRotate::set( Mogre::Radian angle )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureRotate( angle );
	}
	
	Mogre::Matrix4^ TextureUnitState::TextureTransform::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getTextureTransform( );
	}
	void TextureUnitState::TextureTransform::set( Mogre::Matrix4^ xform )
	{
		pin_ptr<Ogre::Matrix4> p_xform = interior_ptr<Ogre::Matrix4>(&xform->m00);
	
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureTransform( *p_xform );
	}
	
	Mogre::TextureType TextureUnitState::TextureType::get()
	{
		return (Mogre::TextureType)static_cast<const Ogre::TextureUnitState*>(_native)->getTextureType( );
	}
	
	Mogre::Real TextureUnitState::TextureUScale::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getTextureUScale( );
	}
	void TextureUnitState::TextureUScale::set( Mogre::Real value )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureUScale( value );
	}
	
	Mogre::Real TextureUnitState::TextureUScroll::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getTextureUScroll( );
	}
	void TextureUnitState::TextureUScroll::set( Mogre::Real value )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureUScroll( value );
	}
	
	Mogre::Real TextureUnitState::TextureVScale::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getTextureVScale( );
	}
	void TextureUnitState::TextureVScale::set( Mogre::Real value )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureVScale( value );
	}
	
	Mogre::Real TextureUnitState::TextureVScroll::get()
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getTextureVScroll( );
	}
	void TextureUnitState::TextureVScroll::set( Mogre::Real value )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureVScroll( value );
	}
	
	
	void TextureUnitState::SetTextureName( String^ name, Mogre::TextureType ttype )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureName( o_name, (Ogre::TextureType)ttype );
	}
	void TextureUnitState::SetTextureName( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureName( o_name );
	}
	
	void TextureUnitState::SetCubicTextureName( String^ name, bool forUVW )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::TextureUnitState*>(_native)->setCubicTextureName( o_name, forUVW );
	}
	void TextureUnitState::SetCubicTextureName( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::TextureUnitState*>(_native)->setCubicTextureName( o_name );
	}
	
	void TextureUnitState::SetCubicTextureName( array<String^>^ names, bool forUVW )
	{
		Ogre::String* arr_names = new Ogre::String[names->Length];
		for (int i=0; i < names->Length; i++)
		{
			SET_NATIVE_STRING( arr_names[i], names[i] )
		}
	
		static_cast<Ogre::TextureUnitState*>(_native)->setCubicTextureName( arr_names, forUVW );
		delete[] arr_names;
	
	}
	void TextureUnitState::SetCubicTextureName( array<String^>^ names )
	{
		Ogre::String* arr_names = new Ogre::String[names->Length];
		for (int i=0; i < names->Length; i++)
		{
			SET_NATIVE_STRING( arr_names[i], names[i] )
		}
	
		static_cast<Ogre::TextureUnitState*>(_native)->setCubicTextureName( arr_names );
		delete[] arr_names;
	
	}
	
	void TextureUnitState::SetAnimatedTextureName( String^ name, unsigned int numFrames, Mogre::Real duration )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::TextureUnitState*>(_native)->setAnimatedTextureName( o_name, numFrames, duration );
	}
	void TextureUnitState::SetAnimatedTextureName( String^ name, unsigned int numFrames )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::TextureUnitState*>(_native)->setAnimatedTextureName( o_name, numFrames );
	}
	
	void TextureUnitState::SetAnimatedTextureName( array<String^>^ names, unsigned int numFrames, Mogre::Real duration )
	{
		Ogre::String* arr_names = new Ogre::String[names->Length];
		for (int i=0; i < names->Length; i++)
		{
			SET_NATIVE_STRING( arr_names[i], names[i] )
		}
	
		static_cast<Ogre::TextureUnitState*>(_native)->setAnimatedTextureName( arr_names, numFrames, duration );
		delete[] arr_names;
	
	}
	void TextureUnitState::SetAnimatedTextureName( array<String^>^ names, unsigned int numFrames )
	{
		Ogre::String* arr_names = new Ogre::String[names->Length];
		for (int i=0; i < names->Length; i++)
		{
			SET_NATIVE_STRING( arr_names[i], names[i] )
		}
	
		static_cast<Ogre::TextureUnitState*>(_native)->setAnimatedTextureName( arr_names, numFrames );
		delete[] arr_names;
	
	}
	
	Pair<size_t, size_t> TextureUnitState::GetTextureDimensions( unsigned int frame )
	{
		return ToManaged<Pair<size_t, size_t>, std::pair<size_t,size_t>>( static_cast<const Ogre::TextureUnitState*>(_native)->getTextureDimensions( frame ) );
	}
	Pair<size_t, size_t> TextureUnitState::GetTextureDimensions( )
	{
		return ToManaged<Pair<size_t, size_t>, std::pair<size_t,size_t>>( static_cast<const Ogre::TextureUnitState*>(_native)->getTextureDimensions( ) );
	}
	
	String^ TextureUnitState::GetFrameTextureName( unsigned int frameNumber )
	{
		return TO_CLR_STRING( static_cast<const Ogre::TextureUnitState*>(_native)->getFrameTextureName( frameNumber ) );
	}
	
	void TextureUnitState::SetFrameTextureName( String^ name, unsigned int frameNumber )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::TextureUnitState*>(_native)->setFrameTextureName( o_name, frameNumber );
	}
	
	void TextureUnitState::AddFrameTextureName( String^ name )
	{
		DECLARE_NATIVE_STRING( o_name, name )
	
		static_cast<Ogre::TextureUnitState*>(_native)->addFrameTextureName( o_name );
	}
	
	void TextureUnitState::DeleteFrameTextureName( size_t frameNumber )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->deleteFrameTextureName( frameNumber );
	}
	
	void TextureUnitState::SetBindingType( Mogre::TextureUnitState::BindingType bt )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setBindingType( (Ogre::TextureUnitState::BindingType)bt );
	}
	
	Mogre::TextureUnitState::BindingType TextureUnitState::GetBindingType( )
	{
		return (Mogre::TextureUnitState::BindingType)static_cast<const Ogre::TextureUnitState*>(_native)->getBindingType( );
	}
	
	void TextureUnitState::SetContentType( Mogre::TextureUnitState::ContentType ct )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setContentType( (Ogre::TextureUnitState::ContentType)ct );
	}
	
	Mogre::TextureUnitState::ContentType TextureUnitState::GetContentType( )
	{
		return (Mogre::TextureUnitState::ContentType)static_cast<const Ogre::TextureUnitState*>(_native)->getContentType( );
	}
	
	bool TextureUnitState::Is3D( )
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->is3D( );
	}
	
	void TextureUnitState::SetTextureScroll( Mogre::Real u, Mogre::Real v )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureScroll( u, v );
	}
	
	void TextureUnitState::SetTextureScale( Mogre::Real uScale, Mogre::Real vScale )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureScale( uScale, vScale );
	}
	
	Mogre::TextureUnitState::UVWAddressingMode TextureUnitState::GetTextureAddressingMode( )
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getTextureAddressingMode( );
	}
	
	void TextureUnitState::SetTextureAddressingMode( Mogre::TextureUnitState::TextureAddressingMode tam )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureAddressingMode( (Ogre::TextureUnitState::TextureAddressingMode)tam );
	}
	
	void TextureUnitState::SetTextureAddressingMode( Mogre::TextureUnitState::TextureAddressingMode u, Mogre::TextureUnitState::TextureAddressingMode v, Mogre::TextureUnitState::TextureAddressingMode w )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureAddressingMode( (Ogre::TextureUnitState::TextureAddressingMode)u, (Ogre::TextureUnitState::TextureAddressingMode)v, (Ogre::TextureUnitState::TextureAddressingMode)w );
	}
	
	void TextureUnitState::SetTextureAddressingMode( Mogre::TextureUnitState::UVWAddressingMode uvw )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureAddressingMode( uvw );
	}
	
	void TextureUnitState::SetColourOperationEx( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1, Mogre::LayerBlendSource source2, Mogre::ColourValue arg1, Mogre::ColourValue arg2, Mogre::Real manualBlend )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setColourOperationEx( (Ogre::LayerBlendOperationEx)op, (Ogre::LayerBlendSource)source1, (Ogre::LayerBlendSource)source2, arg1, arg2, manualBlend );
	}
	void TextureUnitState::SetColourOperationEx( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1, Mogre::LayerBlendSource source2, Mogre::ColourValue arg1, Mogre::ColourValue arg2 )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setColourOperationEx( (Ogre::LayerBlendOperationEx)op, (Ogre::LayerBlendSource)source1, (Ogre::LayerBlendSource)source2, arg1, arg2 );
	}
	void TextureUnitState::SetColourOperationEx( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1, Mogre::LayerBlendSource source2, Mogre::ColourValue arg1 )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setColourOperationEx( (Ogre::LayerBlendOperationEx)op, (Ogre::LayerBlendSource)source1, (Ogre::LayerBlendSource)source2, arg1 );
	}
	void TextureUnitState::SetColourOperationEx( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1, Mogre::LayerBlendSource source2 )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setColourOperationEx( (Ogre::LayerBlendOperationEx)op, (Ogre::LayerBlendSource)source1, (Ogre::LayerBlendSource)source2 );
	}
	void TextureUnitState::SetColourOperationEx( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1 )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setColourOperationEx( (Ogre::LayerBlendOperationEx)op, (Ogre::LayerBlendSource)source1 );
	}
	void TextureUnitState::SetColourOperationEx( Mogre::LayerBlendOperationEx op )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setColourOperationEx( (Ogre::LayerBlendOperationEx)op );
	}
	
	void TextureUnitState::SetColourOperation( Mogre::LayerBlendOperation op )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setColourOperation( (Ogre::LayerBlendOperation)op );
	}
	
	void TextureUnitState::SetColourOpMultipassFallback( Mogre::SceneBlendFactor sourceFactor, Mogre::SceneBlendFactor destFactor )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setColourOpMultipassFallback( (Ogre::SceneBlendFactor)sourceFactor, (Ogre::SceneBlendFactor)destFactor );
	}
	
	void TextureUnitState::SetAlphaOperation( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1, Mogre::LayerBlendSource source2, Mogre::Real arg1, Mogre::Real arg2, Mogre::Real manualBlend )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setAlphaOperation( (Ogre::LayerBlendOperationEx)op, (Ogre::LayerBlendSource)source1, (Ogre::LayerBlendSource)source2, arg1, arg2, manualBlend );
	}
	void TextureUnitState::SetAlphaOperation( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1, Mogre::LayerBlendSource source2, Mogre::Real arg1, Mogre::Real arg2 )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setAlphaOperation( (Ogre::LayerBlendOperationEx)op, (Ogre::LayerBlendSource)source1, (Ogre::LayerBlendSource)source2, arg1, arg2 );
	}
	void TextureUnitState::SetAlphaOperation( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1, Mogre::LayerBlendSource source2, Mogre::Real arg1 )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setAlphaOperation( (Ogre::LayerBlendOperationEx)op, (Ogre::LayerBlendSource)source1, (Ogre::LayerBlendSource)source2, arg1 );
	}
	void TextureUnitState::SetAlphaOperation( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1, Mogre::LayerBlendSource source2 )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setAlphaOperation( (Ogre::LayerBlendOperationEx)op, (Ogre::LayerBlendSource)source1, (Ogre::LayerBlendSource)source2 );
	}
	void TextureUnitState::SetAlphaOperation( Mogre::LayerBlendOperationEx op, Mogre::LayerBlendSource source1 )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setAlphaOperation( (Ogre::LayerBlendOperationEx)op, (Ogre::LayerBlendSource)source1 );
	}
	void TextureUnitState::SetAlphaOperation( Mogre::LayerBlendOperationEx op )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setAlphaOperation( (Ogre::LayerBlendOperationEx)op );
	}
	
	void TextureUnitState::AddEffect( Mogre::TextureUnitState::TextureEffect_NativePtr effect )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->addEffect( effect );
	}
	
	void TextureUnitState::SetEnvironmentMap( bool enable, Mogre::TextureUnitState::EnvMapType envMapType )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setEnvironmentMap( enable, (Ogre::TextureUnitState::EnvMapType)envMapType );
	}
	void TextureUnitState::SetEnvironmentMap( bool enable )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setEnvironmentMap( enable );
	}
	
	void TextureUnitState::SetScrollAnimation( Mogre::Real uSpeed, Mogre::Real vSpeed )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setScrollAnimation( uSpeed, vSpeed );
	}
	
	void TextureUnitState::SetRotateAnimation( Mogre::Real speed )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setRotateAnimation( speed );
	}
	
	void TextureUnitState::SetTransformAnimation( Mogre::TextureUnitState::TextureTransformType ttype, Mogre::WaveformType waveType, Mogre::Real base, Mogre::Real frequency, Mogre::Real phase, Mogre::Real amplitude )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTransformAnimation( (Ogre::TextureUnitState::TextureTransformType)ttype, (Ogre::WaveformType)waveType, base, frequency, phase, amplitude );
	}
	void TextureUnitState::SetTransformAnimation( Mogre::TextureUnitState::TextureTransformType ttype, Mogre::WaveformType waveType, Mogre::Real base, Mogre::Real frequency, Mogre::Real phase )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTransformAnimation( (Ogre::TextureUnitState::TextureTransformType)ttype, (Ogre::WaveformType)waveType, base, frequency, phase );
	}
	void TextureUnitState::SetTransformAnimation( Mogre::TextureUnitState::TextureTransformType ttype, Mogre::WaveformType waveType, Mogre::Real base, Mogre::Real frequency )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTransformAnimation( (Ogre::TextureUnitState::TextureTransformType)ttype, (Ogre::WaveformType)waveType, base, frequency );
	}
	void TextureUnitState::SetTransformAnimation( Mogre::TextureUnitState::TextureTransformType ttype, Mogre::WaveformType waveType, Mogre::Real base )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTransformAnimation( (Ogre::TextureUnitState::TextureTransformType)ttype, (Ogre::WaveformType)waveType, base );
	}
	void TextureUnitState::SetTransformAnimation( Mogre::TextureUnitState::TextureTransformType ttype, Mogre::WaveformType waveType )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTransformAnimation( (Ogre::TextureUnitState::TextureTransformType)ttype, (Ogre::WaveformType)waveType );
	}
	
	void TextureUnitState::SetProjectiveTexturing( bool enabled, Mogre::Frustum^ projectionSettings )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setProjectiveTexturing( enabled, projectionSettings );
	}
	void TextureUnitState::SetProjectiveTexturing( bool enabled )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setProjectiveTexturing( enabled );
	}
	
	void TextureUnitState::RemoveAllEffects( )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->removeAllEffects( );
	}
	
	void TextureUnitState::RemoveEffect( Mogre::TextureUnitState::TextureEffectType type )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->removeEffect( (Ogre::TextureUnitState::TextureEffectType)type );
	}
	
	void TextureUnitState::SetBlank( )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setBlank( );
	}
	
	void TextureUnitState::RetryTextureLoad( )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->retryTextureLoad( );
	}
	
	Mogre::TextureUnitState::Const_EffectMap^ TextureUnitState::GetEffects( )
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->getEffects( );
	}
	
	void TextureUnitState::SetTextureFiltering( Mogre::TextureFilterOptions filterType )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureFiltering( (Ogre::TextureFilterOptions)filterType );
	}
	
	void TextureUnitState::SetTextureFiltering( Mogre::FilterType ftype, Mogre::FilterOptions opts )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureFiltering( (Ogre::FilterType)ftype, (Ogre::FilterOptions)opts );
	}
	
	void TextureUnitState::SetTextureFiltering( Mogre::FilterOptions minFilter, Mogre::FilterOptions magFilter, Mogre::FilterOptions mipFilter )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->setTextureFiltering( (Ogre::FilterOptions)minFilter, (Ogre::FilterOptions)magFilter, (Ogre::FilterOptions)mipFilter );
	}
	
	Mogre::FilterOptions TextureUnitState::GetTextureFiltering( Mogre::FilterType ftpye )
	{
		return (Mogre::FilterOptions)static_cast<const Ogre::TextureUnitState*>(_native)->getTextureFiltering( (Ogre::FilterType)ftpye );
	}
	
	void TextureUnitState::_load( )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->_load( );
	}
	
	void TextureUnitState::_unload( )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->_unload( );
	}
	
	void TextureUnitState::_notifyNeedsRecompile( )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->_notifyNeedsRecompile( );
	}
	
	bool TextureUnitState::ApplyTextureAliases( Mogre::Const_AliasTextureNamePairList^ aliasList, bool apply )
	{
		return static_cast<Ogre::TextureUnitState*>(_native)->applyTextureAliases( aliasList, apply );
	}
	bool TextureUnitState::ApplyTextureAliases( Mogre::Const_AliasTextureNamePairList^ aliasList )
	{
		return static_cast<Ogre::TextureUnitState*>(_native)->applyTextureAliases( aliasList );
	}
	
	void TextureUnitState::_notifyParent( Mogre::Pass^ parent )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->_notifyParent( parent );
	}
	
	Mogre::TexturePtr^ TextureUnitState::_getTexturePtr( )
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->_getTexturePtr( );
	}
	
	Mogre::TexturePtr^ TextureUnitState::_getTexturePtr( size_t frame )
	{
		return static_cast<const Ogre::TextureUnitState*>(_native)->_getTexturePtr( frame );
	}
	
	void TextureUnitState::_setTexturePtr( Mogre::TexturePtr^ texptr )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->_setTexturePtr( (const Ogre::TexturePtr&)texptr );
	}
	
	void TextureUnitState::_setTexturePtr( Mogre::TexturePtr^ texptr, size_t frame )
	{
		static_cast<Ogre::TextureUnitState*>(_native)->_setTexturePtr( (const Ogre::TexturePtr&)texptr, frame );
	}
	
	
	//Protected Declarations
	
	

}
