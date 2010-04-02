/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreVertexIndexData.h"
#include "MogrePrerequisites.h"
#include "MogreHardwareVertexBuffer.h"
#include "MogreHardwareBuffer.h"

namespace Mogre
{
	//################################################################
	//VertexData
	//################################################################
	
	public ref class VertexData : public INativePointer
	{
		//Nested Types
		public: ref class HardwareAnimationDataList;
	
		//################################################################
		//HardwareAnimationData_NativePtr
		//################################################################
	
		public: value class HardwareAnimationData_NativePtr
		{
			//Nested Types
	
			//Private Declarations
		private protected:
			Ogre::VertexData::HardwareAnimationData* _native;
	
			//Internal Declarations
		public protected:
	
			//Public Declarations
		public:
	
	
			property Mogre::VertexElement^ targetVertexElement
			{
			public:
				Mogre::VertexElement^ get();
			}
	
			property Mogre::Real parametric
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( VertexData::HardwareAnimationData_NativePtr, Ogre::VertexData::HardwareAnimationData )
	
	
			property IntPtr NativePtr
			{
				IntPtr get() { return (IntPtr)_native; }
			}
	
			static HardwareAnimationData_NativePtr Create();
	
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
	
		#define STLDECL_MANAGEDTYPE Mogre::VertexData::HardwareAnimationData_NativePtr
		#define STLDECL_NATIVETYPE Ogre::VertexData::HardwareAnimationData
		public: INC_DECLARE_STLVECTOR( HardwareAnimationDataList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
		//Cached fields
		Mogre::VertexData::HardwareAnimationDataList^ _hwAnimationDataList;
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		VertexData( Ogre::VertexData* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~VertexData()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::VertexData* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		VertexData( );
	
	
		property Mogre::VertexDeclaration^ vertexDeclaration
		{
		public:
			Mogre::VertexDeclaration^ get();
		public:
			void set(Mogre::VertexDeclaration^ value);
		}
	
		property Mogre::VertexBufferBinding^ vertexBufferBinding
		{
		public:
			Mogre::VertexBufferBinding^ get();
		public:
			void set(Mogre::VertexBufferBinding^ value);
		}
	
		property size_t vertexStart
		{
		public:
			size_t get();
		public:
			void set(size_t value);
		}
	
		property size_t vertexCount
		{
		public:
			size_t get();
		public:
			void set(size_t value);
		}
	
		property Mogre::VertexData::HardwareAnimationDataList^ hwAnimationDataList
		{
		public:
			Mogre::VertexData::HardwareAnimationDataList^ get();
		}
	
		property size_t hwAnimDataItemsUsed
		{
		public:
			size_t get();
		public:
			void set(size_t value);
		}
	
		property Mogre::HardwareVertexBufferSharedPtr^ hardwareShadowVolWBuffer
		{
		public:
			Mogre::HardwareVertexBufferSharedPtr^ get();
		public:
			void set(Mogre::HardwareVertexBufferSharedPtr^ value);
		}
	
		Mogre::VertexData^ Clone( bool copyData );
		Mogre::VertexData^ Clone( );
	
		void PrepareForShadowVolume( );
	
		void ReorganiseBuffers( Mogre::VertexDeclaration^ newDeclaration, Mogre::Const_BufferUsageList^ bufferUsage );
	
		void ReorganiseBuffers( Mogre::VertexDeclaration^ newDeclaration );
	
		void CloseGapsInBindings( );
	
		void RemoveUnusedBuffers( );
	
		void ConvertPackedColour( Mogre::VertexElementType srcType, Mogre::VertexElementType destType );
	
		void AllocateHardwareAnimationElements( Mogre::ushort count );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( VertexData )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//IndexData
	//################################################################
	
	public ref class IndexData : public INativePointer
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		IndexData( Ogre::IndexData* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~IndexData()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::IndexData* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		IndexData( );
	
	
		property Mogre::HardwareIndexBufferSharedPtr^ indexBuffer
		{
		public:
			Mogre::HardwareIndexBufferSharedPtr^ get();
		public:
			void set(Mogre::HardwareIndexBufferSharedPtr^ value);
		}
	
		property size_t indexStart
		{
		public:
			size_t get();
		public:
			void set(size_t value);
		}
	
		property size_t indexCount
		{
		public:
			size_t get();
		public:
			void set(size_t value);
		}
	
		Mogre::IndexData^ Clone( bool copyData );
		Mogre::IndexData^ Clone( );
	
		void OptimiseVertexCacheTriList( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( IndexData )
	
		//Protected Declarations
	protected public:
	
	};
	
	#define STLDECL_MANAGEDTYPE Mogre::HardwareBuffer::Usage
	#define STLDECL_NATIVETYPE Ogre::HardwareBuffer::Usage
	INC_DECLARE_STLVECTOR( BufferUsageList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	

}
