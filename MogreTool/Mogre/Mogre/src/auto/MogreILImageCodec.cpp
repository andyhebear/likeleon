/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreILImageCodec.h"
#include "MogreDataStream.h"

namespace Mogre
{
	//################################################################
	//ILImageCodec
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	String^ ILImageCodec::Type::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::ILImageCodec*>(_native)->getType( ) );
	}
	
	Mogre::DataStreamPtr^ ILImageCodec::Code( Mogre::MemoryDataStreamPtr^ input, Mogre::Codec::CodecDataPtr^ pData )
	{
		return static_cast<const Ogre::ILImageCodec*>(_native)->code( (Ogre::MemoryDataStreamPtr&)input, (Ogre::Codec::CodecDataPtr&)pData );
	}
	
	void ILImageCodec::CodeToFile( Mogre::MemoryDataStreamPtr^ input, String^ outFileName, Mogre::Codec::CodecDataPtr^ pData )
	{
		DECLARE_NATIVE_STRING( o_outFileName, outFileName )
	
		static_cast<const Ogre::ILImageCodec*>(_native)->codeToFile( (Ogre::MemoryDataStreamPtr&)input, o_outFileName, (Ogre::Codec::CodecDataPtr&)pData );
	}
	
	Pair<Mogre::MemoryDataStreamPtr^, Mogre::Codec::CodecDataPtr^> ILImageCodec::Decode( Mogre::DataStreamPtr^ input )
	{
		return ToManaged<Pair<Mogre::MemoryDataStreamPtr^, Mogre::Codec::CodecDataPtr^>, Ogre::Codec::DecodeResult>( static_cast<const Ogre::ILImageCodec*>(_native)->decode( (Ogre::DataStreamPtr&)input ) );
	}
	
	void ILImageCodec::InitialiseIL( )
	{
		static_cast<Ogre::ILImageCodec*>(_native)->initialiseIL( );
	}
	
	
	//Protected Declarations
	
	

}
