/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreImageCodec.h"
#include "MogreCodec.h"
#include "MogrePrerequisites.h"
#include "MogrePixelFormat.h"

namespace Mogre
{
	//################################################################
	//ImageCodec
	//################################################################
	
	public ref class ImageCodec : public Codec
	{
		//Nested Types
		public: ref class ImageData;
	
		//################################################################
		//ImageData
		//################################################################
	
		public: ref class ImageData : public CodecData
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			ImageData( CLRObject* obj ) : CodecData(obj)
			{
			}
	
	
			//Public Declarations
		public:
			ImageData( );
	
	
			property size_t height
			{
			public:
				size_t get();
			public:
				void set(size_t value);
			}
	
			property size_t width
			{
			public:
				size_t get();
			public:
				void set(size_t value);
			}
	
			property size_t depth
			{
			public:
				size_t get();
			public:
				void set(size_t value);
			}
	
			property size_t size
			{
			public:
				size_t get();
			public:
				void set(size_t value);
			}
	
			property Mogre::ushort num_mipmaps
			{
			public:
				Mogre::ushort get();
			public:
				void set(Mogre::ushort value);
			}
	
			property Mogre::uint flags
			{
			public:
				Mogre::uint get();
			public:
				void set(Mogre::uint value);
			}
	
			property Mogre::PixelFormat format
			{
			public:
				Mogre::PixelFormat get();
			public:
				void set(Mogre::PixelFormat value);
			}
	
			String^ DataType( );
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS( ImageCodec::ImageData )
	
			//Protected Declarations
		protected public:
	
		};
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ImageCodec( CLRObject* obj ) : Codec(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property String^ DataType
		{
		public:
			String^ get();
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( ImageCodec )
	
		//Protected Declarations
	protected public:
	
	};
	

}
