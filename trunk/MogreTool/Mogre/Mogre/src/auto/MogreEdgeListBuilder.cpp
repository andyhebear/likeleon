/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreEdgeListBuilder.h"
#include "MogreVertexIndexData.h"
#include "MogreHardwareVertexBuffer.h"
#include "MogreLog.h"

namespace Mogre
{
	//################################################################
	//EdgeData
	//################################################################
	
	//Nested Types
	//################################################################
	//Edge_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	size_t* EdgeData::Edge_NativePtr::triIndex::get()
	{
		return _native->triIndex;
	}
	
	size_t* EdgeData::Edge_NativePtr::vertIndex::get()
	{
		return _native->vertIndex;
	}
	
	size_t* EdgeData::Edge_NativePtr::sharedVertIndex::get()
	{
		return _native->sharedVertIndex;
	}
	
	bool EdgeData::Edge_NativePtr::degenerate::get()
	{
		return _native->degenerate;
	}
	void EdgeData::Edge_NativePtr::degenerate::set( bool value )
	{
		_native->degenerate = value;
	}
	
	
	Mogre::EdgeData::Edge_NativePtr EdgeData::Edge_NativePtr::Create()
	{
		Edge_NativePtr ptr;
		ptr._native = new Ogre::EdgeData::Edge();
		return ptr;
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//EdgeGroup_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	size_t EdgeData::EdgeGroup_NativePtr::vertexSet::get()
	{
		return _native->vertexSet;
	}
	void EdgeData::EdgeGroup_NativePtr::vertexSet::set( size_t value )
	{
		_native->vertexSet = value;
	}
	
	Mogre::VertexData^ EdgeData::EdgeGroup_NativePtr::vertexData::get()
	{
		return _native->vertexData;
	}
	
	size_t EdgeData::EdgeGroup_NativePtr::triStart::get()
	{
		return _native->triStart;
	}
	void EdgeData::EdgeGroup_NativePtr::triStart::set( size_t value )
	{
		_native->triStart = value;
	}
	
	size_t EdgeData::EdgeGroup_NativePtr::triCount::get()
	{
		return _native->triCount;
	}
	void EdgeData::EdgeGroup_NativePtr::triCount::set( size_t value )
	{
		_native->triCount = value;
	}
	
	Mogre::EdgeData::EdgeList^ EdgeData::EdgeGroup_NativePtr::edges::get()
	{
		return Mogre::EdgeData::EdgeList::ByValue( _native->edges );
	}
	void EdgeData::EdgeGroup_NativePtr::edges::set( Mogre::EdgeData::EdgeList^ value )
	{
		_native->edges = value;
	}
	
	
	Mogre::EdgeData::EdgeGroup_NativePtr EdgeData::EdgeGroup_NativePtr::Create()
	{
		EdgeGroup_NativePtr ptr;
		ptr._native = new Ogre::EdgeData::EdgeGroup();
		return ptr;
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//Triangle_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	size_t EdgeData::Triangle_NativePtr::indexSet::get()
	{
		return _native->indexSet;
	}
	void EdgeData::Triangle_NativePtr::indexSet::set( size_t value )
	{
		_native->indexSet = value;
	}
	
	size_t EdgeData::Triangle_NativePtr::vertexSet::get()
	{
		return _native->vertexSet;
	}
	void EdgeData::Triangle_NativePtr::vertexSet::set( size_t value )
	{
		_native->vertexSet = value;
	}
	
	size_t* EdgeData::Triangle_NativePtr::vertIndex::get()
	{
		return _native->vertIndex;
	}
	
	size_t* EdgeData::Triangle_NativePtr::sharedVertIndex::get()
	{
		return _native->sharedVertIndex;
	}
	
	
	Mogre::EdgeData::Triangle_NativePtr EdgeData::Triangle_NativePtr::Create()
	{
		Triangle_NativePtr ptr;
		ptr._native = new Ogre::EdgeData::Triangle();
		return ptr;
	}
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDTYPE Mogre::Vector4
	#define STLDECL_NATIVETYPE Ogre::Vector4
	CPP_DECLARE_STLVECTOR( EdgeData::, TriangleFaceNormalList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE char
	#define STLDECL_NATIVETYPE char
	CPP_DECLARE_STLVECTOR( EdgeData::, TriangleLightFacingList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE Mogre::EdgeData::Triangle_NativePtr
	#define STLDECL_NATIVETYPE Ogre::EdgeData::Triangle
	CPP_DECLARE_STLVECTOR( EdgeData::, TriangleList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE Mogre::EdgeData::Edge_NativePtr
	#define STLDECL_NATIVETYPE Ogre::EdgeData::Edge
	CPP_DECLARE_STLVECTOR( EdgeData::, EdgeList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE Mogre::EdgeData::EdgeGroup_NativePtr
	#define STLDECL_NATIVETYPE Ogre::EdgeData::EdgeGroup
	CPP_DECLARE_STLVECTOR( EdgeData::, EdgeGroupList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	EdgeData::EdgeData()
	{
		_createdByCLR = true;
		_native = new Ogre::EdgeData();
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::EdgeData::TriangleList^ EdgeData::triangles::get()
	{
		return ( CLR_NULL == _triangles ) ? (_triangles = static_cast<Ogre::EdgeData*>(_native)->triangles) : _triangles;
	}
	
	Mogre::EdgeData::TriangleLightFacingList^ EdgeData::triangleLightFacings::get()
	{
		return ( CLR_NULL == _triangleLightFacings ) ? (_triangleLightFacings = static_cast<Ogre::EdgeData*>(_native)->triangleLightFacings) : _triangleLightFacings;
	}
	
	Mogre::EdgeData::EdgeGroupList^ EdgeData::edgeGroups::get()
	{
		return ( CLR_NULL == _edgeGroups ) ? (_edgeGroups = static_cast<Ogre::EdgeData*>(_native)->edgeGroups) : _edgeGroups;
	}
	
	bool EdgeData::isClosed::get()
	{
		return static_cast<Ogre::EdgeData*>(_native)->isClosed;
	}
	void EdgeData::isClosed::set( bool value )
	{
		static_cast<Ogre::EdgeData*>(_native)->isClosed = value;
	}
	
	void EdgeData::UpdateTriangleLightFacing( Mogre::Vector4 lightPos )
	{
		static_cast<Ogre::EdgeData*>(_native)->updateTriangleLightFacing( lightPos );
	}
	
	void EdgeData::UpdateFaceNormals( size_t vertexSet, Mogre::HardwareVertexBufferSharedPtr^ positionBuffer )
	{
		static_cast<Ogre::EdgeData*>(_native)->updateFaceNormals( vertexSet, (const Ogre::HardwareVertexBufferSharedPtr&)positionBuffer );
	}
	
	void EdgeData::Log( Mogre::Log^ log )
	{
		static_cast<Ogre::EdgeData*>(_native)->log( log );
	}
	
	
	//Protected Declarations
	
	

}
