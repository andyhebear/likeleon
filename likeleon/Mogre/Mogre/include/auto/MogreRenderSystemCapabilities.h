/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreRenderSystemCapabilities.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	public enum class Capabilities
	{
		RSC_AUTOMIPMAP = Ogre::RSC_AUTOMIPMAP,
		RSC_BLENDING = Ogre::RSC_BLENDING,
		RSC_ANISOTROPY = Ogre::RSC_ANISOTROPY,
		RSC_DOT3 = Ogre::RSC_DOT3,
		RSC_CUBEMAPPING = Ogre::RSC_CUBEMAPPING,
		RSC_HWSTENCIL = Ogre::RSC_HWSTENCIL,
		RSC_VBO = Ogre::RSC_VBO,
		RSC_VERTEX_PROGRAM = Ogre::RSC_VERTEX_PROGRAM,
		RSC_FRAGMENT_PROGRAM = Ogre::RSC_FRAGMENT_PROGRAM,
		RSC_TEXTURE_COMPRESSION = Ogre::RSC_TEXTURE_COMPRESSION,
		RSC_TEXTURE_COMPRESSION_DXT = Ogre::RSC_TEXTURE_COMPRESSION_DXT,
		RSC_TEXTURE_COMPRESSION_VTC = Ogre::RSC_TEXTURE_COMPRESSION_VTC,
		RSC_SCISSOR_TEST = Ogre::RSC_SCISSOR_TEST,
		RSC_TWO_SIDED_STENCIL = Ogre::RSC_TWO_SIDED_STENCIL,
		RSC_STENCIL_WRAP = Ogre::RSC_STENCIL_WRAP,
		RSC_HWOCCLUSION = Ogre::RSC_HWOCCLUSION,
		RSC_USER_CLIP_PLANES = Ogre::RSC_USER_CLIP_PLANES,
		RSC_VERTEX_FORMAT_UBYTE4 = Ogre::RSC_VERTEX_FORMAT_UBYTE4,
		RSC_INFINITE_FAR_PLANE = Ogre::RSC_INFINITE_FAR_PLANE,
		RSC_HWRENDER_TO_TEXTURE = Ogre::RSC_HWRENDER_TO_TEXTURE,
		RSC_TEXTURE_FLOAT = Ogre::RSC_TEXTURE_FLOAT,
		RSC_NON_POWER_OF_2_TEXTURES = Ogre::RSC_NON_POWER_OF_2_TEXTURES,
		RSC_TEXTURE_3D = Ogre::RSC_TEXTURE_3D,
		RSC_POINT_SPRITES = Ogre::RSC_POINT_SPRITES,
		RSC_POINT_EXTENDED_PARAMETERS = Ogre::RSC_POINT_EXTENDED_PARAMETERS,
		RSC_VERTEX_TEXTURE_FETCH = Ogre::RSC_VERTEX_TEXTURE_FETCH,
		RSC_MIPMAP_LOD_BIAS = Ogre::RSC_MIPMAP_LOD_BIAS
	};
	
	//################################################################
	//RenderSystemCapabilities
	//################################################################
	
	public ref class RenderSystemCapabilities : public INativePointer
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		RenderSystemCapabilities( Ogre::RenderSystemCapabilities* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~RenderSystemCapabilities()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::RenderSystemCapabilities* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		RenderSystemCapabilities( );
	
	
		property Mogre::ushort FragmentProgramConstantBoolCount
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort c);
		}
	
		property Mogre::ushort FragmentProgramConstantFloatCount
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort c);
		}
	
		property Mogre::ushort FragmentProgramConstantIntCount
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort c);
		}
	
		property String^ MaxFragmentProgramVersion
		{
		public:
			String^ get();
		public:
			void set(String^ ver);
		}
	
		property Mogre::Real MaxPointSize
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real s);
		}
	
		property String^ MaxVertexProgramVersion
		{
		public:
			String^ get();
		public:
			void set(String^ ver);
		}
	
		property bool NonPOW2TexturesLimited
		{
		public:
			bool get();
		public:
			void set(bool l);
		}
	
		property Mogre::ushort NumTextureUnits
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort num);
		}
	
		property Mogre::ushort NumVertexTextureUnits
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort n);
		}
	
		property Mogre::ushort NumWorldMatricies
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort num);
		}
	
		property Mogre::ushort StencilBufferBitDepth
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort num);
		}
	
		property Mogre::ushort VertexProgramConstantBoolCount
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort c);
		}
	
		property Mogre::ushort VertexProgramConstantFloatCount
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort c);
		}
	
		property Mogre::ushort VertexProgramConstantIntCount
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort c);
		}
	
		property bool VertexTextureUnitsShared
		{
		public:
			bool get();
		public:
			void set(bool shared);
		}
	
		void SetNumVertexBlendMatrices( Mogre::ushort num );
	
		void SetNumMultiRenderTargets( Mogre::ushort num );
	
		Mogre::ushort NumVertexBlendMatrices( );
	
		Mogre::ushort NumMultiRenderTargets( );
	
		void SetCapability( Mogre::Capabilities c );
	
		bool HasCapability( Mogre::Capabilities c );
	
		void Log( Mogre::Log^ pLog );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( RenderSystemCapabilities )
	
		//Protected Declarations
	protected public:
	
	};
	

}
