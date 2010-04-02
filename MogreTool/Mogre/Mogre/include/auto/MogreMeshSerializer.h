/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreMeshSerializer.h"
#include "MogreSerializer.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//MeshSerializer
	//################################################################
	
	public ref class MeshSerializer : public Serializer
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		MeshSerializer( CLRObject* obj ) : Serializer(obj)
		{
		}
	
	
		//Public Declarations
	public:
		MeshSerializer( );
	
	
		void ExportMesh( Mogre::Mesh^ pMesh, String^ filename, Mogre::Serializer::Endian endianMode );
		void ExportMesh( Mogre::Mesh^ pMesh, String^ filename );
	
		void ImportMesh( Mogre::DataStreamPtr^ stream, Mogre::Mesh^ pDest );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( MeshSerializer )
	
		//Protected Declarations
	protected public:
	
	};
	

}
