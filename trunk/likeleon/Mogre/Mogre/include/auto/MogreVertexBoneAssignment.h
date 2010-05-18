/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreVertexBoneAssignment.h"

namespace Mogre
{
	//################################################################
	//VertexBoneAssignment
	//################################################################
	
	public value class VertexBoneAssignment
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		unsigned int vertexIndex;
	
		unsigned short boneIndex;
	
		Mogre::Real weight;
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_VALUECLASS( VertexBoneAssignment )
	
		//Protected Declarations
	protected public:
	
	};
	
	typedef Mogre::VertexBoneAssignment VertexBoneAssignment;
	

}
