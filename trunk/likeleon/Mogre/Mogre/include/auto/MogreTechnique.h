/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreTechnique.h"
#include "MogrePass.h"
#include "MogrePrerequisites.h"
#include "MogreCommon.h"
#include "MogreBlendMode.h"

namespace Mogre
{
	//################################################################
	//Technique
	//################################################################
	
	public ref class Technique : public INativePointer
	{
		//Nested Types
	
		public: INC_DECLARE_ITERATOR_NOCONSTRUCTOR( PassIterator, Ogre::Technique::PassIterator, Mogre::Technique::Passes, Mogre::Pass^, Ogre::Pass* )
	
		public: INC_DECLARE_ITERATOR( IlluminationPassIterator, Ogre::Technique::IlluminationPassIterator, Mogre::IlluminationPassList, Mogre::IlluminationPass_NativePtr, Ogre::IlluminationPass* )
	
		//Private Declarations
	private protected:
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		Technique( Ogre::Technique* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~Technique()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::Technique* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		Technique( Mogre::Material^ parent );
		Technique( Mogre::Material^ parent, Mogre::Technique^ oth );
	
	
		property bool HasColourWriteDisabled
		{
		public:
			bool get();
		}
	
		property bool IsDepthCheckEnabled
		{
		public:
			bool get();
		}
	
		property bool IsDepthWriteEnabled
		{
		public:
			bool get();
		}
	
		property bool IsLoaded
		{
		public:
			bool get();
		}
	
		property bool IsSupported
		{
		public:
			bool get();
		}
	
		property bool IsTransparent
		{
		public:
			bool get();
		}
	
		property unsigned short LodIndex
		{
		public:
			unsigned short get();
		public:
			void set(unsigned short index);
		}
	
		property String^ Name
		{
		public:
			String^ get();
		public:
			void set(String^ name);
		}
	
		property unsigned short NumPasses
		{
		public:
			unsigned short get();
		}
	
		property Mogre::Material^ Parent
		{
		public:
			Mogre::Material^ get();
		}
	
		property String^ ResourceGroup
		{
		public:
			String^ get();
		}
	
		property String^ SchemeName
		{
		public:
			String^ get();
		public:
			void set(String^ schemeName);
		}
	
		String^ _compile( bool autoManageTextureUnits );
	
		void _compileIlluminationPasses( );
	
		Mogre::Pass^ CreatePass( );
	
		Mogre::Pass^ GetPass( unsigned short index );
	
		Mogre::Pass^ GetPass( String^ name );
	
		void RemovePass( unsigned short index );
	
		void RemoveAllPasses( );
	
		bool MovePass( unsigned short sourceIndex, unsigned short destinationIndex );
	
		Mogre::Technique::PassIterator^ GetPassIterator( );
	
		Mogre::Technique::IlluminationPassIterator^ GetIlluminationPassIterator( );
	
		void CopyTo(Technique^ dest)
		{
			if (_native == NULL) throw gcnew Exception("The underlying native object for the caller is null.");
			if (dest->_native == NULL) throw gcnew ArgumentException("The underlying native object for parameter 'dest' is null.");
	
			*(dest->_native) = *_native;
		}
	
		void _load( );
	
		void _unload( );
	
		void _notifyNeedsRecompile( );
	
		void SetPointSize( Mogre::Real ps );
	
		void SetAmbient( Mogre::Real red, Mogre::Real green, Mogre::Real blue );
	
		void SetAmbient( Mogre::ColourValue ambient );
	
		void SetDiffuse( Mogre::Real red, Mogre::Real green, Mogre::Real blue, Mogre::Real alpha );
	
		void SetDiffuse( Mogre::ColourValue diffuse );
	
		void SetSpecular( Mogre::Real red, Mogre::Real green, Mogre::Real blue, Mogre::Real alpha );
	
		void SetSpecular( Mogre::ColourValue specular );
	
		void SetShininess( Mogre::Real val );
	
		void SetSelfIllumination( Mogre::Real red, Mogre::Real green, Mogre::Real blue );
	
		void SetSelfIllumination( Mogre::ColourValue selfIllum );
	
		void SetDepthCheckEnabled( bool enabled );
	
		void SetDepthWriteEnabled( bool enabled );
	
		void SetDepthFunction( Mogre::CompareFunction func );
	
		void SetColourWriteEnabled( bool enabled );
	
		void SetCullingMode( Mogre::CullingMode mode );
	
		void SetManualCullingMode( Mogre::ManualCullingMode mode );
	
		void SetLightingEnabled( bool enabled );
	
		void SetShadingMode( Mogre::ShadeOptions mode );
	
		void SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart, Mogre::Real linearEnd );
		void SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart );
		void SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity );
		void SetFog( bool overrideScene, Mogre::FogMode mode, Mogre::ColourValue colour );
		void SetFog( bool overrideScene, Mogre::FogMode mode );
		void SetFog( bool overrideScene );
	
		void SetDepthBias( float constantBias, float slopeScaleBias );
	
		void SetTextureFiltering( Mogre::TextureFilterOptions filterType );
	
		void SetTextureAnisotropy( unsigned int maxAniso );
	
		void SetSceneBlending( Mogre::SceneBlendType sbt );
	
		void SetSceneBlending( Mogre::SceneBlendFactor sourceFactor, Mogre::SceneBlendFactor destFactor );
	
		unsigned short _getSchemeIndex( );
	
		bool ApplyTextureAliases( Mogre::Const_AliasTextureNamePairList^ aliasList, bool apply );
		bool ApplyTextureAliases( Mogre::Const_AliasTextureNamePairList^ aliasList );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( Technique )
	
		//Protected Declarations
	protected public:
	
	};
	

}
