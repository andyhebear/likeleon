/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreSubMesh.h"
#include "MogreCommon.h"
#include "MogreVertexIndexData.h"
#include "MogreMesh.h"
#include "MogreRenderOperation.h"

namespace Mogre
{
	//################################################################
	//SubMesh
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE unsigned short
	#define STLDECL_NATIVETYPE unsigned short
	CPP_DECLARE_STLVECTOR( SubMesh::, IndexMap, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDKEY size_t
	#define STLDECL_MANAGEDVALUE Mogre::VertexBoneAssignment
	#define STLDECL_NATIVEKEY size_t
	#define STLDECL_NATIVEVALUE Ogre::VertexBoneAssignment
	CPP_DECLARE_STLMULTIMAP( SubMesh::, VertexBoneAssignmentList, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	CPP_DECLARE_MAP_ITERATOR( SubMesh::, BoneAssignmentIterator, Ogre::SubMesh::BoneAssignmentIterator, Mogre::SubMesh::VertexBoneAssignmentList, Mogre::VertexBoneAssignment, Ogre::VertexBoneAssignment, size_t, size_t,  )
	
	CPP_DECLARE_MAP_ITERATOR( SubMesh::, AliasTextureIterator, Ogre::SubMesh::AliasTextureIterator, Mogre::AliasTextureNamePairList, String^, Ogre::String, String^, Ogre::String,  )
	
	#define STLDECL_MANAGEDTYPE Mogre::Vector3
	#define STLDECL_NATIVETYPE Ogre::Vector3
	CPP_DECLARE_STLVECTOR( SubMesh::, STLVector_Vector3, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	SubMesh::SubMesh( )
	{
		_createdByCLR = true;
		_native = new Ogre::SubMesh();
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	bool SubMesh::useSharedVertices::get()
	{
		return static_cast<Ogre::SubMesh*>(_native)->useSharedVertices;
	}
	void SubMesh::useSharedVertices::set( bool value )
	{
		static_cast<Ogre::SubMesh*>(_native)->useSharedVertices = value;
	}
	
	Mogre::RenderOperation::OperationTypes SubMesh::operationType::get()
	{
		return (Mogre::RenderOperation::OperationTypes)static_cast<Ogre::SubMesh*>(_native)->operationType;
	}
	void SubMesh::operationType::set( Mogre::RenderOperation::OperationTypes value )
	{
		static_cast<Ogre::SubMesh*>(_native)->operationType = (Ogre::RenderOperation::OperationType)value;
	}
	
	Mogre::VertexData^ SubMesh::vertexData::get()
	{
		return static_cast<Ogre::SubMesh*>(_native)->vertexData;
	}
	void SubMesh::vertexData::set( Mogre::VertexData^ value )
	{
		static_cast<Ogre::SubMesh*>(_native)->vertexData = value;
	}
	
	Mogre::IndexData^ SubMesh::indexData::get()
	{
		return static_cast<Ogre::SubMesh*>(_native)->indexData;
	}
	void SubMesh::indexData::set( Mogre::IndexData^ value )
	{
		static_cast<Ogre::SubMesh*>(_native)->indexData = value;
	}
	
	Mogre::SubMesh::IndexMap^ SubMesh::blendIndexToBoneIndexMap::get()
	{
		return ( CLR_NULL == _blendIndexToBoneIndexMap ) ? (_blendIndexToBoneIndexMap = static_cast<Ogre::SubMesh*>(_native)->blendIndexToBoneIndexMap) : _blendIndexToBoneIndexMap;
	}
	
	SubMesh::STLVector_Vector3^ SubMesh::extremityPoints::get()
	{
		return ( CLR_NULL == _extremityPoints ) ? (_extremityPoints = static_cast<Ogre::SubMesh*>(_native)->extremityPoints) : _extremityPoints;
	}
	
	Mogre::Mesh^ SubMesh::parent::get()
	{
		return static_cast<Ogre::SubMesh*>(_native)->parent;
	}
	void SubMesh::parent::set( Mogre::Mesh^ value )
	{
		static_cast<Ogre::SubMesh*>(_native)->parent = value;
	}
	
	bool SubMesh::HasTextureAliases::get()
	{
		return static_cast<const Ogre::SubMesh*>(_native)->hasTextureAliases( );
	}
	
	bool SubMesh::IsMatInitialised::get()
	{
		return static_cast<const Ogre::SubMesh*>(_native)->isMatInitialised( );
	}
	
	String^ SubMesh::MaterialName::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::SubMesh*>(_native)->getMaterialName( ) );
	}
	void SubMesh::MaterialName::set( String^ matName )
	{
		DECLARE_NATIVE_STRING( o_matName, matName )
	
		static_cast<Ogre::SubMesh*>(_native)->setMaterialName( o_matName );
	}
	
	size_t SubMesh::TextureAliasCount::get()
	{
		return static_cast<const Ogre::SubMesh*>(_native)->getTextureAliasCount( );
	}
	
	Mogre::VertexAnimationType SubMesh::VertexAnimationType::get()
	{
		return (Mogre::VertexAnimationType)static_cast<const Ogre::SubMesh*>(_native)->getVertexAnimationType( );
	}
	
	void SubMesh::_getRenderOperation( Mogre::RenderOperation^ rend, Mogre::ushort lodIndex )
	{
		static_cast<Ogre::SubMesh*>(_native)->_getRenderOperation( rend, lodIndex );
	}
	void SubMesh::_getRenderOperation( Mogre::RenderOperation^ rend )
	{
		static_cast<Ogre::SubMesh*>(_native)->_getRenderOperation( rend );
	}
	
	void SubMesh::AddBoneAssignment( Mogre::VertexBoneAssignment vertBoneAssign )
	{
		static_cast<Ogre::SubMesh*>(_native)->addBoneAssignment( vertBoneAssign );
	}
	
	void SubMesh::ClearBoneAssignments( )
	{
		static_cast<Ogre::SubMesh*>(_native)->clearBoneAssignments( );
	}
	
	Mogre::SubMesh::BoneAssignmentIterator^ SubMesh::GetBoneAssignmentIterator( )
	{
		return static_cast<Ogre::SubMesh*>(_native)->getBoneAssignmentIterator( );
	}
	
	void SubMesh::_compileBoneAssignments( )
	{
		static_cast<Ogre::SubMesh*>(_native)->_compileBoneAssignments( );
	}
	
	Mogre::SubMesh::AliasTextureIterator^ SubMesh::GetAliasTextureIterator( )
	{
		return static_cast<const Ogre::SubMesh*>(_native)->getAliasTextureIterator( );
	}
	
	void SubMesh::AddTextureAlias( String^ aliasName, String^ textureName )
	{
		DECLARE_NATIVE_STRING( o_aliasName, aliasName )
		DECLARE_NATIVE_STRING( o_textureName, textureName )
	
		static_cast<Ogre::SubMesh*>(_native)->addTextureAlias( o_aliasName, o_textureName );
	}
	
	void SubMesh::RemoveTextureAlias( String^ aliasName )
	{
		DECLARE_NATIVE_STRING( o_aliasName, aliasName )
	
		static_cast<Ogre::SubMesh*>(_native)->removeTextureAlias( o_aliasName );
	}
	
	void SubMesh::RemoveAllTextureAliases( )
	{
		static_cast<Ogre::SubMesh*>(_native)->removeAllTextureAliases( );
	}
	
	bool SubMesh::UpdateMaterialUsingTextureAliases( )
	{
		return static_cast<Ogre::SubMesh*>(_native)->updateMaterialUsingTextureAliases( );
	}
	
	void SubMesh::GenerateExtremes( size_t count )
	{
		static_cast<Ogre::SubMesh*>(_native)->generateExtremes( count );
	}
	
	
	//Protected Declarations
	
	

}
