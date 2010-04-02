/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreCodec.h"
#include "MogreDataStream.h"
#include "MogreStringVector.h"

namespace Mogre
{
	//################################################################
	//Codec
	//################################################################
	
	//Nested Types
	//################################################################
	//CodecData
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Codec::CodecData::CodecData() : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::Codec::CodecData();
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	String^ Codec::CodecData::DataType( )
	{
		return TO_CLR_STRING( static_cast<const Ogre::Codec::CodecData*>(_native)->dataType( ) );
	}
	
	
	//Protected Declarations
	
	
	CPP_DECLARE_MAP_ITERATOR_NOCONSTRUCTOR( Codec::, CodecIterator, Ogre::Codec::CodecIterator, Mogre::Codec::CodecList, Mogre::Codec^, Ogre::Codec*, String^, Ogre::String )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	String^ Codec::DataType::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Codec*>(_native)->getDataType( ) );
	}
	
	String^ Codec::Type::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Codec*>(_native)->getType( ) );
	}
	
	Mogre::DataStreamPtr^ Codec::Code( Mogre::MemoryDataStreamPtr^ input, Mogre::Codec::CodecDataPtr^ pData )
	{
		return static_cast<const Ogre::Codec*>(_native)->code( (Ogre::MemoryDataStreamPtr&)input, (Ogre::Codec::CodecDataPtr&)pData );
	}
	
	void Codec::CodeToFile( Mogre::MemoryDataStreamPtr^ input, String^ outFileName, Mogre::Codec::CodecDataPtr^ pData )
	{
		DECLARE_NATIVE_STRING( o_outFileName, outFileName )
	
		static_cast<const Ogre::Codec*>(_native)->codeToFile( (Ogre::MemoryDataStreamPtr&)input, o_outFileName, (Ogre::Codec::CodecDataPtr&)pData );
	}
	
	Pair<Mogre::MemoryDataStreamPtr^, Mogre::Codec::CodecDataPtr^> Codec::Decode( Mogre::DataStreamPtr^ input )
	{
		return ToManaged<Pair<Mogre::MemoryDataStreamPtr^, Mogre::Codec::CodecDataPtr^>, Ogre::Codec::DecodeResult>( static_cast<const Ogre::Codec*>(_native)->decode( (Ogre::DataStreamPtr&)input ) );
	}
	
	void Codec::RegisterCodec( Mogre::Codec^ pCodec )
	{
		Ogre::Codec::registerCodec( pCodec );
	}
	
	void Codec::UnRegisterCodec( Mogre::Codec^ pCodec )
	{
		Ogre::Codec::unRegisterCodec( pCodec );
	}
	
	Mogre::Codec::CodecIterator^ Codec::GetCodecIterator( )
	{
		return Ogre::Codec::getCodecIterator( );
	}
	
	Mogre::StringVector^ Codec::GetExtensions( )
	{
		return Mogre::StringVector::ByValue( Ogre::Codec::getExtensions( ) );
	}
	
	Mogre::Codec^ Codec::GetCodec( String^ extension )
	{
		DECLARE_NATIVE_STRING( o_extension, extension )
	
		return Ogre::Codec::getCodec( o_extension );
	}
	
	
	//Protected Declarations
	
	

}
