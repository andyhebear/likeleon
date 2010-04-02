/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreEdgeListBuilder.h"

namespace Mogre
{
	//################################################################
	//EdgeData
	//################################################################
	
	public ref class EdgeData : public INativePointer
	{
		//Nested Types
		public: ref class TriangleFaceNormalList;
		public: ref class TriangleLightFacingList;
		public: ref class TriangleList;
		public: ref class EdgeList;
		public: ref class EdgeGroupList;
	
		//################################################################
		//Edge_NativePtr
		//################################################################
	
		public: value class Edge_NativePtr
		{
			//Nested Types
	
			//Private Declarations
		private protected:
			Ogre::EdgeData::Edge* _native;
	
			//Internal Declarations
		public protected:
	
			//Public Declarations
		public:
	
	
			property size_t* triIndex
			{
			public:
				size_t* get();
			}
	
			property size_t* vertIndex
			{
			public:
				size_t* get();
			}
	
			property size_t* sharedVertIndex
			{
			public:
				size_t* get();
			}
	
			property bool degenerate
			{
			public:
				bool get();
			public:
				void set(bool value);
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( EdgeData::Edge_NativePtr, Ogre::EdgeData::Edge )
	
	
			property IntPtr NativePtr
			{
				IntPtr get() { return (IntPtr)_native; }
			}
	
			static Edge_NativePtr Create();
	
			void DestroyNativePtr()
			{
				if (_native)  { delete _native; _native = 0; }
			}
	
			property bool IsNull
			{
				bool get() { return (_native == 0); }
			}
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//EdgeGroup_NativePtr
		//################################################################
	
		public: value class EdgeGroup_NativePtr
		{
			//Nested Types
	
			//Private Declarations
		private protected:
			Ogre::EdgeData::EdgeGroup* _native;
	
			//Internal Declarations
		public protected:
	
			//Public Declarations
		public:
	
	
			property size_t vertexSet
			{
			public:
				size_t get();
			public:
				void set(size_t value);
			}
	
			property Mogre::VertexData^ vertexData
			{
			public:
				Mogre::VertexData^ get();
			}
	
			property size_t triStart
			{
			public:
				size_t get();
			public:
				void set(size_t value);
			}
	
			property size_t triCount
			{
			public:
				size_t get();
			public:
				void set(size_t value);
			}
	
			property Mogre::EdgeData::EdgeList^ edges
			{
			public:
				Mogre::EdgeData::EdgeList^ get();
			public:
				void set(Mogre::EdgeData::EdgeList^ value);
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( EdgeData::EdgeGroup_NativePtr, Ogre::EdgeData::EdgeGroup )
	
	
			property IntPtr NativePtr
			{
				IntPtr get() { return (IntPtr)_native; }
			}
	
			static EdgeGroup_NativePtr Create();
	
			void DestroyNativePtr()
			{
				if (_native)  { delete _native; _native = 0; }
			}
	
			property bool IsNull
			{
				bool get() { return (_native == 0); }
			}
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//Triangle_NativePtr
		//################################################################
	
		public: value class Triangle_NativePtr
		{
			//Nested Types
	
			//Private Declarations
		private protected:
			Ogre::EdgeData::Triangle* _native;
	
			//Internal Declarations
		public protected:
	
			//Public Declarations
		public:
	
	
			property size_t indexSet
			{
			public:
				size_t get();
			public:
				void set(size_t value);
			}
	
			property size_t vertexSet
			{
			public:
				size_t get();
			public:
				void set(size_t value);
			}
	
			property size_t* vertIndex
			{
			public:
				size_t* get();
			}
	
			property size_t* sharedVertIndex
			{
			public:
				size_t* get();
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( EdgeData::Triangle_NativePtr, Ogre::EdgeData::Triangle )
	
	
			property IntPtr NativePtr
			{
				IntPtr get() { return (IntPtr)_native; }
			}
	
			static Triangle_NativePtr Create();
	
			void DestroyNativePtr()
			{
				if (_native)  { delete _native; _native = 0; }
			}
	
			property bool IsNull
			{
				bool get() { return (_native == 0); }
			}
	
			//Protected Declarations
		protected public:
	
		};
	
		#define STLDECL_MANAGEDTYPE Mogre::Vector4
		#define STLDECL_NATIVETYPE Ogre::Vector4
		public: INC_DECLARE_STLVECTOR( TriangleFaceNormalList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDTYPE char
		#define STLDECL_NATIVETYPE char
		public: INC_DECLARE_STLVECTOR( TriangleLightFacingList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDTYPE Mogre::EdgeData::Triangle_NativePtr
		#define STLDECL_NATIVETYPE Ogre::EdgeData::Triangle
		public: INC_DECLARE_STLVECTOR( TriangleList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDTYPE Mogre::EdgeData::Edge_NativePtr
		#define STLDECL_NATIVETYPE Ogre::EdgeData::Edge
		public: INC_DECLARE_STLVECTOR( EdgeList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDTYPE Mogre::EdgeData::EdgeGroup_NativePtr
		#define STLDECL_NATIVETYPE Ogre::EdgeData::EdgeGroup
		public: INC_DECLARE_STLVECTOR( EdgeGroupList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
		//Cached fields
		Mogre::EdgeData::TriangleList^ _triangles;
		Mogre::EdgeData::TriangleLightFacingList^ _triangleLightFacings;
		Mogre::EdgeData::EdgeGroupList^ _edgeGroups;
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		EdgeData( Ogre::EdgeData* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~EdgeData()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::EdgeData* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		EdgeData();
	
	
		property Mogre::EdgeData::TriangleList^ triangles
		{
		public:
			Mogre::EdgeData::TriangleList^ get();
		}
	
		property Mogre::EdgeData::TriangleLightFacingList^ triangleLightFacings
		{
		public:
			Mogre::EdgeData::TriangleLightFacingList^ get();
		}
	
		property Mogre::EdgeData::EdgeGroupList^ edgeGroups
		{
		public:
			Mogre::EdgeData::EdgeGroupList^ get();
		}
	
		property bool isClosed
		{
		public:
			bool get();
		public:
			void set(bool value);
		}
	
		void UpdateTriangleLightFacing( Mogre::Vector4 lightPos );
	
		void UpdateFaceNormals( size_t vertexSet, Mogre::HardwareVertexBufferSharedPtr^ positionBuffer );
	
		void Log( Mogre::Log^ log );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( EdgeData )
	
		//Protected Declarations
	protected public:
	
	};
	

}
