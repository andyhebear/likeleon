/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreDDSCodec.h"
#include "MogreDataStream.h"

namespace Mogre
{
	//################################################################
	//DDSCodec
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	String^ DDSCodec::Type::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::DDSCodec*>(_native)->getType( ) );
	}
	
	Mogre::DataStreamPtr^ DDSCodec::Code( Mogre::MemoryDataStreamPtr^ input, Mogre::Codec::CodecDataPtr^ pData )
	{
		return static_cast<const Ogre::DDSCodec*>(_native)->code( (Ogre::MemoryDataStreamPtr&)input, (Ogre::Codec::CodecDataPtr&)pData );
	}
	
	void DDSCodec::CodeToFile( Mogre::MemoryDataStreamPtr^ input, String^ outFileName, Mogre::Codec::CodecDataPtr^ pData )
	{
		DECLARE_NATIVE_STRING( o_outFileName, outFileName )
	
		static_cast<const Ogre::DDSCodec*>(_native)->codeToFile( (Ogre::MemoryDataStreamPtr&)input, o_outFileName, (Ogre::Codec::CodecDataPtr&)pData );
	}
	
	Pair<Mogre::MemoryDataStreamPtr^, Mogre::Codec::CodecDataPtr^> DDSCodec::Decode( Mogre::DataStreamPtr^ input )
	{
		return ToManaged<Pair<Mogre::MemoryDataStreamPtr^, Mogre::Codec::CodecDataPtr^>, Ogre::Codec::DecodeResult>( static_cast<const Ogre::DDSCodec*>(_native)->decode( (Ogre::DataStreamPtr&)input ) );
	}
	
	void DDSCodec::Startup( )
	{
		Ogre::DDSCodec::startup( );
	}
	
	void DDSCodec::Shutdown( )
	{
		Ogre::DDSCodec::shutdown( );
	}
	
	
	//Protected Declarations
	
	

}
