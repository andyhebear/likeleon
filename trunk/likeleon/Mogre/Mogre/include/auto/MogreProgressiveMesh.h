/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreProgressiveMesh.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//ProgressiveMesh
	//################################################################
	
	public ref class ProgressiveMesh : public Wrapper
	{
		//Nested Types
		public: ref class LODFaceList;
	
		public: enum class VertexReductionQuota
		{
			VRQ_CONSTANT = Ogre::ProgressiveMesh::VRQ_CONSTANT,
			VRQ_PROPORTIONAL = Ogre::ProgressiveMesh::VRQ_PROPORTIONAL
		};
	
		#define STLDECL_MANAGEDTYPE Mogre::IndexData^
		#define STLDECL_NATIVETYPE Ogre::IndexData*
		public: INC_DECLARE_STLVECTOR( LODFaceList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ProgressiveMesh( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		ProgressiveMesh( Mogre::VertexData^ vertexData, Mogre::IndexData^ indexData );
	
	
		void AddExtraVertexPositionBuffer( Mogre::VertexData^ vertexData );
	
		void Build( Mogre::ushort numLevels, Mogre::ProgressiveMesh::LODFaceList^ outList, Mogre::ProgressiveMesh::VertexReductionQuota quota, Mogre::Real reductionValue );
		void Build( Mogre::ushort numLevels, Mogre::ProgressiveMesh::LODFaceList^ outList, Mogre::ProgressiveMesh::VertexReductionQuota quota );
		void Build( Mogre::ushort numLevels, Mogre::ProgressiveMesh::LODFaceList^ outList );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( ProgressiveMesh )
	
		//Protected Declarations
	protected public:
	
	};
	

}
