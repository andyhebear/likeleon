/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreTexture.h"
#include "MogreResource.h"
#include "MogrePrerequisites.h"
#include "MogrePixelFormat.h"
#include "MogreImage.h"

namespace Mogre
{
	public enum class TextureMipmap
	{
		MIP_UNLIMITED = Ogre::MIP_UNLIMITED,
		MIP_DEFAULT = Ogre::MIP_DEFAULT
	};
	
	public enum class TextureType
	{
		TEX_TYPE_1D = Ogre::TEX_TYPE_1D,
		TEX_TYPE_2D = Ogre::TEX_TYPE_2D,
		TEX_TYPE_3D = Ogre::TEX_TYPE_3D,
		TEX_TYPE_CUBE_MAP = Ogre::TEX_TYPE_CUBE_MAP
	};
	
	public enum class TextureUsage
	{
		TU_STATIC = Ogre::TU_STATIC,
		TU_DYNAMIC = Ogre::TU_DYNAMIC,
		TU_WRITE_ONLY = Ogre::TU_WRITE_ONLY,
		TU_STATIC_WRITE_ONLY = Ogre::TU_STATIC_WRITE_ONLY,
		TU_DYNAMIC_WRITE_ONLY = Ogre::TU_DYNAMIC_WRITE_ONLY,
		TU_DYNAMIC_WRITE_ONLY_DISCARDABLE = Ogre::TU_DYNAMIC_WRITE_ONLY_DISCARDABLE,
		TU_AUTOMIPMAP = Ogre::TU_AUTOMIPMAP,
		TU_RENDERTARGET = Ogre::TU_RENDERTARGET,
		TU_DEFAULT = Ogre::TU_DEFAULT
	};
	
	//################################################################
	//Texture
	//################################################################
	
	public ref class Texture : public Resource
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Texture( CLRObject* obj ) : Resource(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property size_t Depth
		{
		public:
			size_t get();
		public:
			void set(size_t d);
		}
	
		property Mogre::ushort DesiredFloatBitDepth
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort bits);
		}
	
		property Mogre::PixelFormat DesiredFormat
		{
		public:
			Mogre::PixelFormat get();
		}
	
		property Mogre::ushort DesiredIntegerBitDepth
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort bits);
		}
	
		property Mogre::PixelFormat Format
		{
		public:
			Mogre::PixelFormat get();
		public:
			void set(Mogre::PixelFormat pf);
		}
	
		property float Gamma
		{
		public:
			float get();
		public:
			void set(float g);
		}
	
		property bool HasAlpha
		{
		public:
			bool get();
		}
	
		property size_t Height
		{
		public:
			size_t get();
		public:
			void set(size_t h);
		}
	
		property bool MipmapsHardwareGenerated
		{
		public:
			bool get();
		}
	
		property size_t NumFaces
		{
		public:
			size_t get();
		}
	
		property size_t NumMipmaps
		{
		public:
			size_t get();
		public:
			void set(size_t num);
		}
	
		property size_t SrcDepth
		{
		public:
			size_t get();
		}
	
		property Mogre::PixelFormat SrcFormat
		{
		public:
			Mogre::PixelFormat get();
		}
	
		property size_t SrcHeight
		{
		public:
			size_t get();
		}
	
		property size_t SrcWidth
		{
		public:
			size_t get();
		}
	
		property Mogre::TextureType TextureType
		{
		public:
			Mogre::TextureType get();
		public:
			void set(Mogre::TextureType ttype);
		}
	
		property bool TreatLuminanceAsAlpha
		{
		public:
			bool get();
		public:
			void set(bool asAlpha);
		}
	
		property int Usage
		{
		public:
			int get();
		public:
			void set(int u);
		}
	
		property size_t Width
		{
		public:
			size_t get();
		public:
			void set(size_t w);
		}
	
		void CreateInternalResources( );
	
		void FreeInternalResources( );
	
		void CopyToTexture( Mogre::TexturePtr^ target );
	
		void LoadImage( Mogre::Image^ img );
	
		void LoadRawData( Mogre::DataStreamPtr^ stream, Mogre::ushort uWidth, Mogre::ushort uHeight, Mogre::PixelFormat eFormat );
	
		void _loadImages( Mogre::Const_ConstImagePtrList^ images );
	
		void SetDesiredBitDepths( Mogre::ushort integerBits, Mogre::ushort floatBits );
	
		Mogre::HardwarePixelBufferSharedPtr^ GetBuffer( size_t face, size_t mipmap );
		Mogre::HardwarePixelBufferSharedPtr^ GetBuffer( size_t face );
		Mogre::HardwarePixelBufferSharedPtr^ GetBuffer( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Texture )
	
		//Protected Declarations
	protected public:
	
	};
	
	public ref class TexturePtr : public Texture
	{
	public protected:
			Ogre::TexturePtr* _sharedPtr;
	
		TexturePtr(Ogre::TexturePtr& sharedPtr) : Texture( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::TexturePtr(sharedPtr);
		}
	
		!TexturePtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~TexturePtr()
		{
			this->!TexturePtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( TexturePtr )
	
		static TexturePtr^ FromResourcePtr( ResourcePtr^ ptr )
		{
			return (TexturePtr^) ptr;
		}
	
		static operator TexturePtr^ ( ResourcePtr^ ptr )
		{
			if (CLR_NULL == ptr) return nullptr;
			void* castptr = dynamic_cast<Ogre::Texture*>(ptr->_native);
			if (castptr == 0) throw gcnew InvalidCastException("The underlying type of the ResourcePtr object is not of type Texture.");
			return gcnew TexturePtr( (Ogre::TexturePtr) *(ptr->_sharedPtr) );
		}
	
		TexturePtr(Texture^ obj) : Texture( obj->_native )
		{
			_sharedPtr = new Ogre::TexturePtr( static_cast<Ogre::Texture*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			TexturePtr^ clr = dynamic_cast<TexturePtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(TexturePtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (TexturePtr^ val1, TexturePtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (TexturePtr^ val1, TexturePtr^ val2)
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
	
		property Texture^ Target
		{
			Texture^ get()
			{
				return static_cast<Ogre::Texture*>(_native);
			}
		}
	};
	
	

}
