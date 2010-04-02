/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogrePatchSurface.h"
#include "MogreHardwareVertexBuffer.h"
#include "MogreHardwareIndexBuffer.h"

namespace Mogre
{
	//################################################################
	//PatchSurface
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	PatchSurface::PatchSurface( )
	{
		_createdByCLR = true;
		_native = new Ogre::PatchSurface();
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::Real PatchSurface::BoundingSphereRadius::get()
	{
		return static_cast<const Ogre::PatchSurface*>(_native)->getBoundingSphereRadius( );
	}
	
	Mogre::AxisAlignedBox^ PatchSurface::Bounds::get()
	{
		return static_cast<const Ogre::PatchSurface*>(_native)->getBounds( );
	}
	
	size_t PatchSurface::CurrentIndexCount::get()
	{
		return static_cast<const Ogre::PatchSurface*>(_native)->getCurrentIndexCount( );
	}
	
	size_t PatchSurface::IndexOffset::get()
	{
		return static_cast<const Ogre::PatchSurface*>(_native)->getIndexOffset( );
	}
	
	size_t PatchSurface::RequiredIndexCount::get()
	{
		return static_cast<const Ogre::PatchSurface*>(_native)->getRequiredIndexCount( );
	}
	
	size_t PatchSurface::RequiredVertexCount::get()
	{
		return static_cast<const Ogre::PatchSurface*>(_native)->getRequiredVertexCount( );
	}
	
	Mogre::Real PatchSurface::SubdivisionFactor::get()
	{
		return static_cast<const Ogre::PatchSurface*>(_native)->getSubdivisionFactor( );
	}
	void PatchSurface::SubdivisionFactor::set( Mogre::Real factor )
	{
		static_cast<Ogre::PatchSurface*>(_native)->setSubdivisionFactor( factor );
	}
	
	size_t PatchSurface::VertexOffset::get()
	{
		return static_cast<const Ogre::PatchSurface*>(_native)->getVertexOffset( );
	}
	
	void PatchSurface::DefineSurface( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, Mogre::PatchSurface::PatchSurfaceType pType, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel, Mogre::PatchSurface::VisibleSide visibleSide )
	{
		static_cast<Ogre::PatchSurface*>(_native)->defineSurface( controlPointBuffer, declaration, width, height, (Ogre::PatchSurface::PatchSurfaceType)pType, uMaxSubdivisionLevel, vMaxSubdivisionLevel, (Ogre::PatchSurface::VisibleSide)visibleSide );
	}
	void PatchSurface::DefineSurface( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, Mogre::PatchSurface::PatchSurfaceType pType, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel )
	{
		static_cast<Ogre::PatchSurface*>(_native)->defineSurface( controlPointBuffer, declaration, width, height, (Ogre::PatchSurface::PatchSurfaceType)pType, uMaxSubdivisionLevel, vMaxSubdivisionLevel );
	}
	void PatchSurface::DefineSurface( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, Mogre::PatchSurface::PatchSurfaceType pType, size_t uMaxSubdivisionLevel )
	{
		static_cast<Ogre::PatchSurface*>(_native)->defineSurface( controlPointBuffer, declaration, width, height, (Ogre::PatchSurface::PatchSurfaceType)pType, uMaxSubdivisionLevel );
	}
	void PatchSurface::DefineSurface( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, Mogre::PatchSurface::PatchSurfaceType pType )
	{
		static_cast<Ogre::PatchSurface*>(_native)->defineSurface( controlPointBuffer, declaration, width, height, (Ogre::PatchSurface::PatchSurfaceType)pType );
	}
	void PatchSurface::DefineSurface( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height )
	{
		static_cast<Ogre::PatchSurface*>(_native)->defineSurface( controlPointBuffer, declaration, width, height );
	}
	
	void PatchSurface::Build( Mogre::HardwareVertexBufferSharedPtr^ destVertexBuffer, size_t vertexStart, Mogre::HardwareIndexBufferSharedPtr^ destIndexBuffer, size_t indexStart )
	{
		static_cast<Ogre::PatchSurface*>(_native)->build( (Ogre::HardwareVertexBufferSharedPtr)destVertexBuffer, vertexStart, (Ogre::HardwareIndexBufferSharedPtr)destIndexBuffer, indexStart );
	}
	
	void* PatchSurface::GetControlPointBuffer( )
	{
		return static_cast<const Ogre::PatchSurface*>(_native)->getControlPointBuffer( );
	}
	
	void PatchSurface::NotifyControlPointBufferDeallocated( )
	{
		static_cast<Ogre::PatchSurface*>(_native)->notifyControlPointBufferDeallocated( );
	}
	
	
	//Protected Declarations
	
	

}
