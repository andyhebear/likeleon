/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreProgressiveMesh.h"
#include "MogreVertexIndexData.h"

namespace Mogre
{
	//################################################################
	//ProgressiveMesh
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Mogre::IndexData^
	#define STLDECL_NATIVETYPE Ogre::IndexData*
	CPP_DECLARE_STLVECTOR( ProgressiveMesh::, LODFaceList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	ProgressiveMesh::ProgressiveMesh( Mogre::VertexData^ vertexData, Mogre::IndexData^ indexData ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::ProgressiveMesh( vertexData, indexData);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	void ProgressiveMesh::AddExtraVertexPositionBuffer( Mogre::VertexData^ vertexData )
	{
		static_cast<Ogre::ProgressiveMesh*>(_native)->addExtraVertexPositionBuffer( vertexData );
	}
	
	void ProgressiveMesh::Build( Mogre::ushort numLevels, Mogre::ProgressiveMesh::LODFaceList^ outList, Mogre::ProgressiveMesh::VertexReductionQuota quota, Mogre::Real reductionValue )
	{
		static_cast<Ogre::ProgressiveMesh*>(_native)->build( numLevels, outList, (Ogre::ProgressiveMesh::VertexReductionQuota)quota, reductionValue );
	}
	void ProgressiveMesh::Build( Mogre::ushort numLevels, Mogre::ProgressiveMesh::LODFaceList^ outList, Mogre::ProgressiveMesh::VertexReductionQuota quota )
	{
		static_cast<Ogre::ProgressiveMesh*>(_native)->build( numLevels, outList, (Ogre::ProgressiveMesh::VertexReductionQuota)quota );
	}
	void ProgressiveMesh::Build( Mogre::ushort numLevels, Mogre::ProgressiveMesh::LODFaceList^ outList )
	{
		static_cast<Ogre::ProgressiveMesh*>(_native)->build( numLevels, outList );
	}
	
	
	//Protected Declarations
	
	

}
