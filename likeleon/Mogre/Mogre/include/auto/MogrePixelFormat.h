/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgrePixelFormat.h"
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"

namespace Mogre
{
	public enum class PixelComponentType
	{
		PCT_BYTE = Ogre::PCT_BYTE,
		PCT_SHORT = Ogre::PCT_SHORT,
		PCT_FLOAT16 = Ogre::PCT_FLOAT16,
		PCT_FLOAT32 = Ogre::PCT_FLOAT32,
		PCT_COUNT = Ogre::PCT_COUNT
	};
	
	public enum class PixelFormatFlags
	{
		PFF_HASALPHA = Ogre::PFF_HASALPHA,
		PFF_COMPRESSED = Ogre::PFF_COMPRESSED,
		PFF_FLOAT = Ogre::PFF_FLOAT,
		PFF_DEPTH = Ogre::PFF_DEPTH,
		PFF_NATIVEENDIAN = Ogre::PFF_NATIVEENDIAN,
		PFF_LUMINANCE = Ogre::PFF_LUMINANCE
	};
	
	public enum class PixelFormat
	{
		PF_UNKNOWN = Ogre::PF_UNKNOWN,
		PF_L8 = Ogre::PF_L8,
		PF_BYTE_L = Ogre::PF_BYTE_L,
		PF_L16 = Ogre::PF_L16,
		PF_SHORT_L = Ogre::PF_SHORT_L,
		PF_A8 = Ogre::PF_A8,
		PF_BYTE_A = Ogre::PF_BYTE_A,
		PF_A4L4 = Ogre::PF_A4L4,
		PF_BYTE_LA = Ogre::PF_BYTE_LA,
		PF_R5G6B5 = Ogre::PF_R5G6B5,
		PF_B5G6R5 = Ogre::PF_B5G6R5,
		PF_R3G3B2 = Ogre::PF_R3G3B2,
		PF_A4R4G4B4 = Ogre::PF_A4R4G4B4,
		PF_A1R5G5B5 = Ogre::PF_A1R5G5B5,
		PF_R8G8B8 = Ogre::PF_R8G8B8,
		PF_B8G8R8 = Ogre::PF_B8G8R8,
		PF_A8R8G8B8 = Ogre::PF_A8R8G8B8,
		PF_A8B8G8R8 = Ogre::PF_A8B8G8R8,
		PF_B8G8R8A8 = Ogre::PF_B8G8R8A8,
		PF_R8G8B8A8 = Ogre::PF_R8G8B8A8,
		PF_X8R8G8B8 = Ogre::PF_X8R8G8B8,
		PF_X8B8G8R8 = Ogre::PF_X8B8G8R8,
		PF_BYTE_RGB = Ogre::PF_BYTE_RGB,
		PF_BYTE_BGR = Ogre::PF_BYTE_BGR,
		PF_BYTE_BGRA = Ogre::PF_BYTE_BGRA,
		PF_BYTE_RGBA = Ogre::PF_BYTE_RGBA,
		PF_A2R10G10B10 = Ogre::PF_A2R10G10B10,
		PF_A2B10G10R10 = Ogre::PF_A2B10G10R10,
		PF_DXT1 = Ogre::PF_DXT1,
		PF_DXT2 = Ogre::PF_DXT2,
		PF_DXT3 = Ogre::PF_DXT3,
		PF_DXT4 = Ogre::PF_DXT4,
		PF_DXT5 = Ogre::PF_DXT5,
		PF_FLOAT16_R = Ogre::PF_FLOAT16_R,
		PF_FLOAT16_RGB = Ogre::PF_FLOAT16_RGB,
		PF_FLOAT16_RGBA = Ogre::PF_FLOAT16_RGBA,
		PF_FLOAT32_R = Ogre::PF_FLOAT32_R,
		PF_FLOAT32_RGB = Ogre::PF_FLOAT32_RGB,
		PF_FLOAT32_RGBA = Ogre::PF_FLOAT32_RGBA,
		PF_FLOAT16_GR = Ogre::PF_FLOAT16_GR,
		PF_FLOAT32_GR = Ogre::PF_FLOAT32_GR,
		PF_DEPTH = Ogre::PF_DEPTH,
		PF_SHORT_RGBA = Ogre::PF_SHORT_RGBA,
		PF_SHORT_GR = Ogre::PF_SHORT_GR,
		PF_SHORT_RGB = Ogre::PF_SHORT_RGB,
		PF_COUNT = Ogre::PF_COUNT
	};
	
	//################################################################
	//PixelUtil
	//################################################################
	
	public ref class PixelUtil
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PixelUtil( Ogre::PixelUtil* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~PixelUtil()
		{
			this->!PixelUtil();
		}
		!PixelUtil()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::PixelUtil* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		PixelUtil();
	
	
		static size_t GetNumElemBytes( Mogre::PixelFormat format );
	
		static size_t GetNumElemBits( Mogre::PixelFormat format );
	
		static size_t GetMemorySize( size_t width, size_t height, size_t depth, Mogre::PixelFormat format );
	
		static unsigned int GetFlags( Mogre::PixelFormat format );
	
		static bool HasAlpha( Mogre::PixelFormat format );
	
		static bool IsFloatingPoint( Mogre::PixelFormat format );
	
		static bool IsCompressed( Mogre::PixelFormat format );
	
		static bool IsDepth( Mogre::PixelFormat format );
	
		static bool IsNativeEndian( Mogre::PixelFormat format );
	
		static bool IsLuminance( Mogre::PixelFormat format );
	
		static bool IsValidExtent( size_t width, size_t height, size_t depth, Mogre::PixelFormat format );
	
		
		          static void GetBitDepths( Mogre::PixelFormat format, [Out] array<int>^% rgba );
		        
	
	
		
		          static void GetBitMasks( Mogre::PixelFormat format, [Out] array<uint32>^% rgba );
		        
	
	
		static String^ GetFormatName( Mogre::PixelFormat srcformat );
	
		static bool IsAccessible( Mogre::PixelFormat srcformat );
	
		static Mogre::PixelComponentType GetComponentType( Mogre::PixelFormat fmt );
	
		static size_t GetComponentCount( Mogre::PixelFormat fmt );
	
		static Mogre::PixelFormat GetFormatFromName( String^ name, bool accessibleOnly, bool caseSensitive );
		static Mogre::PixelFormat GetFormatFromName( String^ name, bool accessibleOnly );
		static Mogre::PixelFormat GetFormatFromName( String^ name );
	
		static String^ GetBNFExpressionOfPixelFormats( bool accessibleOnly );
		static String^ GetBNFExpressionOfPixelFormats( );
	
		static Mogre::PixelFormat GetFormatForBitDepths( Mogre::PixelFormat fmt, Mogre::ushort integerBits, Mogre::ushort floatBits );
	
		static void PackColour( Mogre::ColourValue colour, Mogre::PixelFormat pf, void* dest );
	
		static void PackColour( Mogre::uint8 r, Mogre::uint8 g, Mogre::uint8 b, Mogre::uint8 a, Mogre::PixelFormat pf, void* dest );
	
		static void PackColour( float r, float g, float b, float a, Mogre::PixelFormat pf, void* dest );
	
		static void UnpackColour( Mogre::ColourValue* colour, Mogre::PixelFormat pf, const void* src );
	
		static void UnpackColour( [Out] Mogre::uint8% r, [Out] Mogre::uint8% g, [Out] Mogre::uint8% b, [Out] Mogre::uint8% a, Mogre::PixelFormat pf, const void* src );
	
		static void UnpackColour( [Out] float% r, [Out] float% g, [Out] float% b, [Out] float% a, Mogre::PixelFormat pf, const void* src );
	
		static void BulkPixelConversion( void* src, Mogre::PixelFormat srcFormat, void* dest, Mogre::PixelFormat dstFormat, unsigned int count );
	
		static void BulkPixelConversion( Mogre::PixelBox src, Mogre::PixelBox dst );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( PixelUtil )
	
		//Protected Declarations
	protected public:
	
	};
	

}
