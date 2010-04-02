/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreMaterial.h"
#include "MogreResource.h"
#include "MogrePrerequisites.h"
#include "MogreCommon.h"
#include "MogreBlendMode.h"

namespace Mogre
{
	//################################################################
	//Material
	//################################################################
	
	public ref class Material : public Resource
	{
		//Nested Types
		public: ref class LodDistanceList;
	
		#define STLDECL_MANAGEDTYPE Mogre::Real
		#define STLDECL_NATIVETYPE Ogre::Real
		public: INC_DECLARE_STLVECTOR( LodDistanceList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		public: INC_DECLARE_ITERATOR( LodDistanceIterator, Ogre::Material::LodDistanceIterator, Mogre::Material::LodDistanceList, Mogre::Real, Ogre::Real )
	
		public: INC_DECLARE_ITERATOR_NOCONSTRUCTOR( TechniqueIterator, Ogre::Material::TechniqueIterator, Mogre::Material::Techniques, Mogre::Technique^, Ogre::Technique* )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Material( CLRObject* obj ) : Resource(obj)
		{
		}
	
	
		//Public Declarations
	public:
		Material( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader );
		Material( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual );
		Material( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group );
	
	
		property bool CompilationRequired
		{
		public:
			bool get();
		}
	
		property bool IsTransparent
		{
		public:
			bool get();
		}
	
		property unsigned short NumSupportedTechniques
		{
		public:
			unsigned short get();
		}
	
		property unsigned short NumTechniques
		{
		public:
			unsigned short get();
		}
	
		property bool ReceiveShadows
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property bool TransparencyCastsShadows
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property String^ UnsupportedTechniquesExplanation
		{
		public:
			String^ get();
		}
	
		void CopyTo(Material^ dest)
		{
			if (_native == NULL) throw gcnew Exception("The underlying native object for the caller is null.");
			if (dest->_native == NULL) throw gcnew ArgumentException("The underlying native object for parameter 'dest' is null.");
	
			*(dest->_native) = *_native;
		}
	
		Mogre::Technique^ CreateTechnique( );
	
		Mogre::Technique^ GetTechnique( unsigned short index );
	
		Mogre::Technique^ GetTechnique( String^ name );
	
		void RemoveTechnique( unsigned short index );
	
		void RemoveAllTechniques( );
	
		Mogre::Material::TechniqueIterator^ GetTechniqueIterator( );
	
		Mogre::Material::TechniqueIterator^ GetSupportedTechniqueIterator( );
	
		Mogre::Technique^ GetSupportedTechnique( unsigned short index );
	
		unsigned short GetNumLodLevels( unsigned short schemeIndex );
	
		unsigned short GetNumLodLevels( String^ schemeName );
	
		Mogre::Technique^ GetBestTechnique( unsigned short lodIndex );
		Mogre::Technique^ GetBestTechnique( );
	
		Mogre::MaterialPtr^ Clone( String^ newName, bool changeGroup, String^ newGroup );
		Mogre::MaterialPtr^ Clone( String^ newName, bool changeGroup );
		Mogre::MaterialPtr^ Clone( String^ newName );
	
		void CopyDetailsTo( Mogre::MaterialPtr^ mat );
	
		void Compile( bool autoManageTextureUnits );
		void Compile( );
	
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
	
		void SetTextureAnisotropy( int maxAniso );
	
		void SetSceneBlending( Mogre::SceneBlendType sbt );
	
		void SetSceneBlending( Mogre::SceneBlendFactor sourceFactor, Mogre::SceneBlendFactor destFactor );
	
		void _notifyNeedsRecompile( );
	
		void SetLodLevels( Mogre::Material::Const_LodDistanceList^ lodDistances );
	
		Mogre::Material::LodDistanceIterator^ GetLodDistanceIterator( );
	
		unsigned short GetLodIndex( Mogre::Real d );
	
		unsigned short GetLodIndexSquaredDepth( Mogre::Real squaredDepth );
	
		void Touch( );
	
		bool ApplyTextureAliases( Mogre::Const_AliasTextureNamePairList^ aliasList, bool apply );
		bool ApplyTextureAliases( Mogre::Const_AliasTextureNamePairList^ aliasList );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Material )
	
		//Protected Declarations
	protected public:
	
	};
	
	public ref class MaterialPtr : public Material
	{
	public protected:
			Ogre::MaterialPtr* _sharedPtr;
	
		MaterialPtr(Ogre::MaterialPtr& sharedPtr) : Material( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::MaterialPtr(sharedPtr);
		}
	
		!MaterialPtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~MaterialPtr()
		{
			this->!MaterialPtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( MaterialPtr )
	
		static MaterialPtr^ FromResourcePtr( ResourcePtr^ ptr )
		{
			return (MaterialPtr^) ptr;
		}
	
		static operator MaterialPtr^ ( ResourcePtr^ ptr )
		{
			if (CLR_NULL == ptr) return nullptr;
			void* castptr = dynamic_cast<Ogre::Material*>(ptr->_native);
			if (castptr == 0) throw gcnew InvalidCastException("The underlying type of the ResourcePtr object is not of type Material.");
			return gcnew MaterialPtr( (Ogre::MaterialPtr) *(ptr->_sharedPtr) );
		}
	
		MaterialPtr(Material^ obj) : Material( obj->_native )
		{
			_sharedPtr = new Ogre::MaterialPtr( static_cast<Ogre::Material*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			MaterialPtr^ clr = dynamic_cast<MaterialPtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(MaterialPtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (MaterialPtr^ val1, MaterialPtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (MaterialPtr^ val1, MaterialPtr^ val2)
		{
			return !(val1 == val2);
		}
	
		virtual int GetHashCode() override
		{
			return reinterpret_cast<int>( _native );
		}
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_sharedPtr; }
		}
	
		property bool Unique
		{
			bool get()
			{
				return (*_sharedPtr).unique();
			}
		}
	
		property int UseCount
		{
			int get()
			{
				return (*_sharedPtr).useCount();
			}
		}
	
		property Material^ Target
		{
			Material^ get()
			{
				return static_cast<Ogre::Material*>(_native);
			}
		}
	};
	
	

}
