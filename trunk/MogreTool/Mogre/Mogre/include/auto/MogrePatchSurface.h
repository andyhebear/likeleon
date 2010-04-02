/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgrePatchSurface.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//PatchSurface
	//################################################################
	
	public ref class PatchSurface : public INativePointer
	{
		//Nested Types
	
		public: enum class PatchSurfaceType
		{
			PST_BEZIER = Ogre::PatchSurface::PST_BEZIER
		};
	
		public: enum class VisibleSide
		{
			VS_FRONT = Ogre::PatchSurface::VS_FRONT,
			VS_BACK = Ogre::PatchSurface::VS_BACK,
			VS_BOTH = Ogre::PatchSurface::VS_BOTH
		};
	
		//Private Declarations
	private protected:
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		PatchSurface( Ogre::PatchSurface* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~PatchSurface()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::PatchSurface* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		PatchSurface( );
	
	
		property Mogre::Real BoundingSphereRadius
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::AxisAlignedBox^ Bounds
		{
		public:
			Mogre::AxisAlignedBox^ get();
		}
	
		property size_t CurrentIndexCount
		{
		public:
			size_t get();
		}
	
		property size_t IndexOffset
		{
		public:
			size_t get();
		}
	
		property size_t RequiredIndexCount
		{
		public:
			size_t get();
		}
	
		property size_t RequiredVertexCount
		{
		public:
			size_t get();
		}
	
		property Mogre::Real SubdivisionFactor
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real factor);
		}
	
		property size_t VertexOffset
		{
		public:
			size_t get();
		}
	
		void DefineSurface( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, Mogre::PatchSurface::PatchSurfaceType pType, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel, Mogre::PatchSurface::VisibleSide visibleSide );
		void DefineSurface( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, Mogre::PatchSurface::PatchSurfaceType pType, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel );
		void DefineSurface( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, Mogre::PatchSurface::PatchSurfaceType pType, size_t uMaxSubdivisionLevel );
		void DefineSurface( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, Mogre::PatchSurface::PatchSurfaceType pType );
		void DefineSurface( void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height );
	
		void Build( Mogre::HardwareVertexBufferSharedPtr^ destVertexBuffer, size_t vertexStart, Mogre::HardwareIndexBufferSharedPtr^ destIndexBuffer, size_t indexStart );
	
		void* GetControlPointBuffer( );
	
		void NotifyControlPointBufferDeallocated( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( PatchSurface )
	
		//Protected Declarations
	protected public:
	
	};
	

}
