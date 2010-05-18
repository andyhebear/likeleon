/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreILImageCodec.h"
#include "MogreImageCodec.h"
#include "MogrePrerequisites.h"
#include "MogreCodec.h"

namespace Mogre
{
	//################################################################
	//ILImageCodec
	//################################################################
	
	public ref class ILImageCodec : public ImageCodec
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ILImageCodec( CLRObject* obj ) : ImageCodec(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property String^ Type
		{
		public:
			String^ get();
		}
	
		Mogre::DataStreamPtr^ Code( Mogre::MemoryDataStreamPtr^ input, Mogre::Codec::CodecDataPtr^ pData );
	
		void CodeToFile( Mogre::MemoryDataStreamPtr^ input, String^ outFileName, Mogre::Codec::CodecDataPtr^ pData );
	
		Pair<Mogre::MemoryDataStreamPtr^, Mogre::Codec::CodecDataPtr^> Decode( Mogre::DataStreamPtr^ input );
	
		void InitialiseIL( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( ILImageCodec )
	
		//Protected Declarations
	protected public:
	
	};
	

}
