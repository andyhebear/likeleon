/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreSkeletonSerializer.h"
#include "MogreSerializer.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//SkeletonSerializer
	//################################################################
	
	public ref class SkeletonSerializer : public Serializer
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		SkeletonSerializer( CLRObject* obj ) : Serializer(obj)
		{
		}
	
	
		//Public Declarations
	public:
		SkeletonSerializer( );
	
	
		void ExportSkeleton( Mogre::Skeleton^ pSkeleton, String^ filename, Mogre::Serializer::Endian endianMode );
		void ExportSkeleton( Mogre::Skeleton^ pSkeleton, String^ filename );
	
		void ImportSkeleton( Mogre::DataStreamPtr^ stream, Mogre::Skeleton^ pDest );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( SkeletonSerializer )
	
		//Protected Declarations
	protected public:
	
	};
	

}
