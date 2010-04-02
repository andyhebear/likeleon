/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreMeshSerializer.h"
#include "MogreMesh.h"
#include "MogreDataStream.h"

namespace Mogre
{
	//################################################################
	//MeshSerializer
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	MeshSerializer::MeshSerializer( ) : Serializer((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::MeshSerializer();
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	void MeshSerializer::ExportMesh( Mogre::Mesh^ pMesh, String^ filename, Mogre::Serializer::Endian endianMode )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
	
		static_cast<Ogre::MeshSerializer*>(_native)->exportMesh( pMesh, o_filename, (Ogre::Serializer::Endian)endianMode );
	}
	void MeshSerializer::ExportMesh( Mogre::Mesh^ pMesh, String^ filename )
	{
		DECLARE_NATIVE_STRING( o_filename, filename )
	
		static_cast<Ogre::MeshSerializer*>(_native)->exportMesh( pMesh, o_filename );
	}
	
	void MeshSerializer::ImportMesh( Mogre::DataStreamPtr^ stream, Mogre::Mesh^ pDest )
	{
		static_cast<Ogre::MeshSerializer*>(_native)->importMesh( (Ogre::DataStreamPtr&)stream, pDest );
	}
	
	
	//Protected Declarations
	
	

}
