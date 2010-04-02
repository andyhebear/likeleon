/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgrePatchMesh.h"
#include "MogreMesh.h"
#include "MogrePrerequisites.h"
#include "MogreResource.h"
#include "MogrePatchSurface.h"
#include "MogreHardwareBuffer.h"

namespace Mogre
{
	//################################################################
	//PatchMesh
	//################################################################
	
	public ref class PatchMesh : public Mesh
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PatchMesh( CLRObject* obj ) : Mesh(obj)
		{
		}
	
	
		//Public Declarations
	public:
		PatchMesh( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group );
	
	
		void Define( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel, Mogre::PatchSurface::VisibleSide visibleSide, Mogre::HardwareBuffer::Usage vbUsage, Mogre::HardwareBuffer::Usage ibUsage, bool vbUseShadow, bool ibUseShadow );
		void Define( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel, Mogre::PatchSurface::VisibleSide visibleSide, Mogre::HardwareBuffer::Usage vbUsage, Mogre::HardwareBuffer::Usage ibUsage, bool vbUseShadow );
		void Define( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel, Mogre::PatchSurface::VisibleSide visibleSide, Mogre::HardwareBuffer::Usage vbUsage, Mogre::HardwareBuffer::Usage ibUsage );
		void Define( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel, Mogre::PatchSurface::VisibleSide visibleSide, Mogre::HardwareBuffer::Usage vbUsage );
		void Define( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel, Mogre::PatchSurface::VisibleSide visibleSide );
		void Define( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel );
		void Define( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel );
		void Define( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height );
	
		void SetSubdivision( Mogre::Real factor );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( PatchMesh )
	
		//Protected Declarations
	protected public:
	
	};
	
	public ref class PatchMeshPtr : public PatchMesh
	{
	public protected:
			Ogre::PatchMeshPtr* _sharedPtr;
	
		PatchMeshPtr(Ogre::PatchMeshPtr& sharedPtr) : PatchMesh( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::PatchMeshPtr(sharedPtr);
		}
	
		!PatchMeshPtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~PatchMeshPtr()
		{
			this->!PatchMeshPtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( PatchMeshPtr )
	
		PatchMeshPtr(PatchMesh^ obj) : PatchMesh( obj->_native )
		{
			_sharedPtr = new Ogre::PatchMeshPtr( static_cast<Ogre::PatchMesh*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			PatchMeshPtr^ clr = dynamic_cast<PatchMeshPtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(PatchMeshPtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (PatchMeshPtr^ val1, PatchMeshPtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (PatchMeshPtr^ val1, PatchMeshPtr^ val2)
		{
			return !(val1 == val2);
		}
	
		virtual int GetHashCode() override
		{
			return reinterpret_cast<int>( _native );
		}
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_sharedPtr; }
		}
	
		property bool Unique
		{
			bool get()
			{
				return (*_sharedPtr).unique();
			}
		}
	
		property int UseCount
		{
			int get()
			{
				return (*_sharedPtr).useCount();
			}
		}
	
		property PatchMesh^ Target
		{
			PatchMesh^ get()
			{
				return static_cast<Ogre::PatchMesh*>(_native);
			}
		}
	};
	
	

}
