/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreImage.h"
#include "MogrePrerequisites.h"
#include "MogrePixelFormat.h"

namespace Mogre
{
	public enum class ImageFlags
	{
		IF_COMPRESSED = Ogre::IF_COMPRESSED,
		IF_CUBEMAP = Ogre::IF_CUBEMAP,
		IF_3D_TEXTURE = Ogre::IF_3D_TEXTURE
	};
	
	//################################################################
	//Image
	//################################################################
	
	public ref class Image : public INativePointer
	{
		//Nested Types
	
		public: typedef Mogre::Box Box;
	
		public: typedef Mogre::Rect Rect;
	
		public: enum class Filter
		{
			FILTER_NEAREST = Ogre::Image::FILTER_NEAREST,
			FILTER_LINEAR = Ogre::Image::FILTER_LINEAR,
			FILTER_BILINEAR = Ogre::Image::FILTER_BILINEAR,
			FILTER_BOX = Ogre::Image::FILTER_BOX,
			FILTER_TRIANGLE = Ogre::Image::FILTER_TRIANGLE,
			FILTER_BICUBIC = Ogre::Image::FILTER_BICUBIC
		};
	
		//Private Declarations
	private protected:
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		Image( Ogre::Image* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~Image()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::Image* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		Image( );
		Image( Mogre::Image^ img );
	
	
		property Mogre::uchar BPP
		{
		public:
			Mogre::uchar get();
		}
	
		property Mogre::uchar* Data
		{
		public:
			Mogre::uchar* get();
		}
	
		property size_t Depth
		{
		public:
			size_t get();
		}
	
		property Mogre::PixelFormat Format
		{
		public:
			Mogre::PixelFormat get();
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
		}
	
		property size_t RowSpan
		{
		public:
			size_t get();
		}
	
		property size_t Size
		{
		public:
			size_t get();
		}
	
		property size_t Width
		{
		public:
			size_t get();
		}
	
		void CopyTo(Image^ dest)
		{
			if (_native == NULL) throw gcnew Exception("The underlying native object for the caller is null.");
			if (dest->_native == NULL) throw gcnew ArgumentException("The underlying native object for parameter 'dest' is null.");
	
			*(dest->_native) = *_native;
		}
	
		Mogre::Image^ FlipAroundY( );
	
		Mogre::Image^ FlipAroundX( );
	
		Mogre::Image^ LoadDynamicImage( Mogre::uchar* pData, size_t uWidth, size_t uHeight, size_t depth, Mogre::PixelFormat eFormat, bool autoDelete, size_t numFaces, size_t numMipMaps );
		Mogre::Image^ LoadDynamicImage( Mogre::uchar* pData, size_t uWidth, size_t uHeight, size_t depth, Mogre::PixelFormat eFormat, bool autoDelete, size_t numFaces );
		Mogre::Image^ LoadDynamicImage( Mogre::uchar* pData, size_t uWidth, size_t uHeight, size_t depth, Mogre::PixelFormat eFormat, bool autoDelete );
		Mogre::Image^ LoadDynamicImage( Mogre::uchar* pData, size_t uWidth, size_t uHeight, size_t depth, Mogre::PixelFormat eFormat );
	
		Mogre::Image^ LoadDynamicImage( Mogre::uchar* pData, size_t uWidth, size_t uHeight, Mogre::PixelFormat eFormat );
	
		Mogre::Image^ LoadRawData( Mogre::DataStreamPtr^ stream, size_t uWidth, size_t uHeight, size_t uDepth, Mogre::PixelFormat eFormat, size_t numFaces, size_t numMipMaps );
		Mogre::Image^ LoadRawData( Mogre::DataStreamPtr^ stream, size_t uWidth, size_t uHeight, size_t uDepth, Mogre::PixelFormat eFormat, size_t numFaces );
		Mogre::Image^ LoadRawData( Mogre::DataStreamPtr^ stream, size_t uWidth, size_t uHeight, size_t uDepth, Mogre::PixelFormat eFormat );
	
		Mogre::Image^ LoadRawData( Mogre::DataStreamPtr^ stream, size_t uWidth, size_t uHeight, Mogre::PixelFormat eFormat );
	
		Mogre::Image^ Load( String^ strFileName, String^ groupName );
	
		Mogre::Image^ Load( Mogre::DataStreamPtr^ stream, String^ type );
	
		void Save( String^ filename );
	
		bool HasFlag( Mogre::ImageFlags imgFlag );
	
		Mogre::ColourValue GetColourAt( int x, int y, int z );
	
		Mogre::PixelBox GetPixelBox( size_t face, size_t mipmap );
		Mogre::PixelBox GetPixelBox( size_t face );
		Mogre::PixelBox GetPixelBox( );
	
		void Resize( Mogre::ushort width, Mogre::ushort height, Mogre::Image::Filter filter );
		void Resize( Mogre::ushort width, Mogre::ushort height );
	
		static void ApplyGamma( [Out] Mogre::uchar% buffer, Mogre::Real gamma, size_t size, Mogre::uchar bpp );
	
		static void Scale( Mogre::PixelBox src, Mogre::PixelBox dst, Mogre::Image::Filter filter );
		static void Scale( Mogre::PixelBox src, Mogre::PixelBox dst );
	
		static size_t CalculateSize( size_t mipmaps, size_t faces, size_t width, size_t height, size_t depth, Mogre::PixelFormat format );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( Image )
	
		//Protected Declarations
	protected public:
	
	};
	
	#define STLDECL_MANAGEDTYPE Mogre::Image^
	#define STLDECL_NATIVETYPE Ogre::Image*
	INC_DECLARE_STLVECTOR( ImagePtrList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE Mogre::Image^
	#define STLDECL_NATIVETYPE const Ogre::Image*
	INC_DECLARE_STLVECTOR( ConstImagePtrList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	

}
