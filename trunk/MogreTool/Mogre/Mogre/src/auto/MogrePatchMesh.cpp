/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogrePatchMesh.h"
#include "MogreResourceManager.h"
#include "MogreHardwareVertexBuffer.h"

namespace Mogre
{
	//################################################################
	//PatchMesh
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	PatchMesh::PatchMesh( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group ) : Mesh((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
		DECLARE_NATIVE_STRING( o_group, group )
	
		_native = new Ogre::PatchMesh( creator, o_name, handle, o_group);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	void PatchMesh::Define( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel, Mogre::PatchSurface::VisibleSide visibleSide, Mogre::HardwareBuffer::Usage vbUsage, Mogre::HardwareBuffer::Usage ibUsage, bool vbUseShadow, bool ibUseShadow )
	{
		static_cast<Ogre::PatchMesh*>(_native)->define( controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, (Ogre::PatchSurface::VisibleSide)visibleSide, (Ogre::HardwareBuffer::Usage)vbUsage, (Ogre::HardwareBuffer::Usage)ibUsage, vbUseShadow, ibUseShadow );
	}
	void PatchMesh::Define( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel, Mogre::PatchSurface::VisibleSide visibleSide, Mogre::HardwareBuffer::Usage vbUsage, Mogre::HardwareBuffer::Usage ibUsage, bool vbUseShadow )
	{
		static_cast<Ogre::PatchMesh*>(_native)->define( controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, (Ogre::PatchSurface::VisibleSide)visibleSide, (Ogre::HardwareBuffer::Usage)vbUsage, (Ogre::HardwareBuffer::Usage)ibUsage, vbUseShadow );
	}
	void PatchMesh::Define( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel, Mogre::PatchSurface::VisibleSide visibleSide, Mogre::HardwareBuffer::Usage vbUsage, Mogre::HardwareBuffer::Usage ibUsage )
	{
		static_cast<Ogre::PatchMesh*>(_native)->define( controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, (Ogre::PatchSurface::VisibleSide)visibleSide, (Ogre::HardwareBuffer::Usage)vbUsage, (Ogre::HardwareBuffer::Usage)ibUsage );
	}
	void PatchMesh::Define( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel, Mogre::PatchSurface::VisibleSide visibleSide, Mogre::HardwareBuffer::Usage vbUsage )
	{
		static_cast<Ogre::PatchMesh*>(_native)->define( controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, (Ogre::PatchSurface::VisibleSide)visibleSide, (Ogre::HardwareBuffer::Usage)vbUsage );
	}
	void PatchMesh::Define( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel, Mogre::PatchSurface::VisibleSide visibleSide )
	{
		static_cast<Ogre::PatchMesh*>(_native)->define( controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel, (Ogre::PatchSurface::VisibleSide)visibleSide );
	}
	void PatchMesh::Define( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel )
	{
		static_cast<Ogre::PatchMesh*>(_native)->define( controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel, vMaxSubdivisionLevel );
	}
	void PatchMesh::Define( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel )
	{
		static_cast<Ogre::PatchMesh*>(_native)->define( controlPointBuffer, declaration, width, height, uMaxSubdivisionLevel );
	}
	void PatchMesh::Define( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height )
	{
		static_cast<Ogre::PatchMesh*>(_native)->define( controlPointBuffer, declaration, width, height );
	}
	
	void PatchMesh::SetSubdivision( Mogre::Real factor )
	{
		static_cast<Ogre::PatchMesh*>(_native)->setSubdivision( factor );
	}
	
	
	//Protected Declarations
	
	

}
