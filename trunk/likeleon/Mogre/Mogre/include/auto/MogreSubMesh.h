/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreSubMesh.h"
#include "MogreVertexBoneAssignment.h"
#include "MogrePrerequisites.h"
#include "MogreRenderOperation.h"
#include "MogreAnimationTrack.h"

namespace Mogre
{
	//################################################################
	//SubMesh
	//################################################################
	
	public ref class SubMesh : public INativePointer
	{
		//Nested Types
		public: ref class IndexMap;
		public: ref class VertexBoneAssignmentList;
	
		#define STLDECL_MANAGEDTYPE unsigned short
		#define STLDECL_NATIVETYPE unsigned short
		public: INC_DECLARE_STLVECTOR( IndexMap, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDKEY size_t
		#define STLDECL_MANAGEDVALUE Mogre::VertexBoneAssignment
		#define STLDECL_NATIVEKEY size_t
		#define STLDECL_NATIVEVALUE Ogre::VertexBoneAssignment
		public: INC_DECLARE_STLMULTIMAP( VertexBoneAssignmentList, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		public: INC_DECLARE_MAP_ITERATOR( BoneAssignmentIterator, Ogre::SubMesh::BoneAssignmentIterator, Mogre::SubMesh::VertexBoneAssignmentList, Mogre::VertexBoneAssignment, Ogre::VertexBoneAssignment, size_t, size_t )
	
		public: INC_DECLARE_MAP_ITERATOR( AliasTextureIterator, Ogre::SubMesh::AliasTextureIterator, Mogre::AliasTextureNamePairList, String^, Ogre::String, String^, Ogre::String )
	
		#define STLDECL_MANAGEDTYPE Mogre::Vector3
		#define STLDECL_NATIVETYPE Ogre::Vector3
		public: INC_DECLARE_STLVECTOR( STLVector_Vector3, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
		//Cached fields
		Mogre::SubMesh::IndexMap^ _blendIndexToBoneIndexMap;
		STLVector_Vector3^ _extremityPoints;
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		SubMesh( Ogre::SubMesh* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~SubMesh()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::SubMesh* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		SubMesh( );
	
	
		property bool useSharedVertices
		{
		public:
			bool get();
		public:
			void set(bool value);
		}
	
		property Mogre::RenderOperation::OperationTypes operationType
		{
		public:
			Mogre::RenderOperation::OperationTypes get();
		public:
			void set(Mogre::RenderOperation::OperationTypes value);
		}
	
		property Mogre::VertexData^ vertexData
		{
		public:
			Mogre::VertexData^ get();
		public:
			void set(Mogre::VertexData^ value);
		}
	
		property Mogre::IndexData^ indexData
		{
		public:
			Mogre::IndexData^ get();
		public:
			void set(Mogre::IndexData^ value);
		}
	
		property Mogre::SubMesh::IndexMap^ blendIndexToBoneIndexMap
		{
		public:
			Mogre::SubMesh::IndexMap^ get();
		}
	
		property STLVector_Vector3^ extremityPoints
		{
		public:
			STLVector_Vector3^ get();
		}
	
		property Mogre::Mesh^ parent
		{
		public:
			Mogre::Mesh^ get();
		public:
			void set(Mogre::Mesh^ value);
		}
	
		property bool HasTextureAliases
		{
		public:
			bool get();
		}
	
		property bool IsMatInitialised
		{
		public:
			bool get();
		}
	
		property String^ MaterialName
		{
		public:
			String^ get();
		public:
			void set(String^ matName);
		}
	
		property size_t TextureAliasCount
		{
		public:
			size_t get();
		}
	
		property Mogre::VertexAnimationType VertexAnimationType
		{
		public:
			Mogre::VertexAnimationType get();
		}
	
		void _getRenderOperation( Mogre::RenderOperation^ rend, Mogre::ushort lodIndex );
		void _getRenderOperation( Mogre::RenderOperation^ rend );
	
		void AddBoneAssignment( Mogre::VertexBoneAssignment vertBoneAssign );
	
		void ClearBoneAssignments( );
	
		Mogre::SubMesh::BoneAssignmentIterator^ GetBoneAssignmentIterator( );
	
		void _compileBoneAssignments( );
	
		Mogre::SubMesh::AliasTextureIterator^ GetAliasTextureIterator( );
	
		void AddTextureAlias( String^ aliasName, String^ textureName );
	
		void RemoveTextureAlias( String^ aliasName );
	
		void RemoveAllTextureAliases( );
	
		bool UpdateMaterialUsingTextureAliases( );
	
		void GenerateExtremes( size_t count );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( SubMesh )
	
		//Protected Declarations
	protected public:
	
	};
	

}
