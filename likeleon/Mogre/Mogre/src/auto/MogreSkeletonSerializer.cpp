/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreSkeletonSerializer.h"
#include "MogreSkeleton.h"
#include "MogreDataStream.h"

namespace Mogre
{
	//################################################################
	//SkeletonSerializer
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	SkeletonSerializer::SkeletonSerializer( ) : Serializer((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::SkeletonSerializer();
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	void SkeletonSerializer::ExportSkeleton( Mogre::Skeleton^ pSkeleton, String^ filename, Mogre::Serializer::Endian endianMode )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
	
		static_cast<Ogre::SkeletonSerializer*>(_native)->exportSkeleton( pSkeleton, o_filename, (Ogre::Serializer::Endian)endianMode );
	}
	void SkeletonSerializer::ExportSkeleton( Mogre::Skeleton^ pSkeleton, String^ filename )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
	
		static_cast<Ogre::SkeletonSerializer*>(_native)->exportSkeleton( pSkeleton, o_filename );
	}
	
	void SkeletonSerializer::ImportSkeleton( Mogre::DataStreamPtr^ stream, Mogre::Skeleton^ pDest )
	{
		static_cast<Ogre::SkeletonSerializer*>(_native)->importSkeleton( (Ogre::DataStreamPtr&)stream, pDest );
	}
	
	
	//Protected Declarations
	
	

}
