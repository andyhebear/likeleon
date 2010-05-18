/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreMeshManager.h"
#include "MogreResource.h"
#include "MogreResourceManager.h"
#include "MogrePrerequisites.h"
#include "MogreHardwareBuffer.h"
#include "MogrePatchSurface.h"

namespace Mogre
{
	//################################################################
	//MeshManager
	//################################################################
	
	public ref class MeshManager : public ResourceManager, public IManualResourceLoader
	{
		//Nested Types
	
		
		        public: generic<typename T> where T : value class
		        Mogre::PatchMeshPtr^ CreateBezierPatch( String^ name, String^ groupName, array<T>^ controlPointArray, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel, Mogre::PatchSurface::VisibleSide visibleSide, Mogre::HardwareBuffer::Usage vbUsage, Mogre::HardwareBuffer::Usage ibUsage, bool vbUseShadow, bool ibUseShadow );
		      
	
		//Private Declarations
	private protected:
		static MeshManager^ _singleton;
	
		//Internal Declarations
	public protected:
		MeshManager( Ogre::MeshManager* obj ) : ResourceManager(obj)
		{
		}
	
		virtual Ogre::ManualResourceLoader* _IManualResourceLoader_GetNativePtr() = IManualResourceLoader::_GetNativePtr;
	
	
		//Public Declarations
	public:
		MeshManager( );
	
		static property MeshManager^ Singleton
		{
			MeshManager^ get()
			{
				if (_singleton == CLR_NULL)
				{
					Ogre::MeshManager* ptr = Ogre::MeshManager::getSingletonPtr();
					if ( ptr ) _singleton = gcnew MeshManager( ptr );
				}
				return _singleton;
			}
		}
	
		property Mogre::Real BoundsPaddingFactor
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real paddingFactor);
		}
	
		property bool PrepareAllMeshesForShadowVolumes
		{
		public:
			bool get();
		public:
			void set(bool enable);
		}
	
		void _initialise( );
	
		Mogre::MeshPtr^ Load( String^ filename, String^ groupName, Mogre::HardwareBuffer::Usage vertexBufferUsage, Mogre::HardwareBuffer::Usage indexBufferUsage, bool vertexBufferShadowed, bool indexBufferShadowed );
		Mogre::MeshPtr^ Load( String^ filename, String^ groupName, Mogre::HardwareBuffer::Usage vertexBufferUsage, Mogre::HardwareBuffer::Usage indexBufferUsage, bool vertexBufferShadowed );
		Mogre::MeshPtr^ Load( String^ filename, String^ groupName, Mogre::HardwareBuffer::Usage vertexBufferUsage, Mogre::HardwareBuffer::Usage indexBufferUsage );
		Mogre::MeshPtr^ Load( String^ filename, String^ groupName, Mogre::HardwareBuffer::Usage vertexBufferUsage );
		Mogre::MeshPtr^ Load( String^ filename, String^ groupName );
	
		Mogre::MeshPtr^ CreateManual( String^ name, String^ groupName, Mogre::IManualResourceLoader^ loader );
		Mogre::MeshPtr^ CreateManual( String^ name, String^ groupName );
	
		Mogre::MeshPtr^ CreatePlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real uTile, Mogre::Real vTile, Mogre::Vector3 upVector, Mogre::HardwareBuffer::Usage vertexBufferUsage, Mogre::HardwareBuffer::Usage indexBufferUsage, bool vertexShadowBuffer, bool indexShadowBuffer );
		Mogre::MeshPtr^ CreatePlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real uTile, Mogre::Real vTile, Mogre::Vector3 upVector, Mogre::HardwareBuffer::Usage vertexBufferUsage, Mogre::HardwareBuffer::Usage indexBufferUsage, bool vertexShadowBuffer );
		Mogre::MeshPtr^ CreatePlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real uTile, Mogre::Real vTile, Mogre::Vector3 upVector, Mogre::HardwareBuffer::Usage vertexBufferUsage, Mogre::HardwareBuffer::Usage indexBufferUsage );
		Mogre::MeshPtr^ CreatePlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real uTile, Mogre::Real vTile, Mogre::Vector3 upVector, Mogre::HardwareBuffer::Usage vertexBufferUsage );
		Mogre::MeshPtr^ CreatePlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real uTile, Mogre::Real vTile, Mogre::Vector3 upVector );
		Mogre::MeshPtr^ CreatePlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real uTile, Mogre::Real vTile );
		Mogre::MeshPtr^ CreatePlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real uTile );
		Mogre::MeshPtr^ CreatePlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, int xsegments, int ysegments, bool normals, int numTexCoordSets );
		Mogre::MeshPtr^ CreatePlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, int xsegments, int ysegments, bool normals );
		Mogre::MeshPtr^ CreatePlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, int xsegments, int ysegments );
		Mogre::MeshPtr^ CreatePlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, int xsegments );
		Mogre::MeshPtr^ CreatePlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height );
	
		Mogre::MeshPtr^ CreateCurvedIllusionPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real curvature, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real uTile, Mogre::Real vTile, Mogre::Vector3 upVector, Mogre::Quaternion orientation, Mogre::HardwareBuffer::Usage vertexBufferUsage, Mogre::HardwareBuffer::Usage indexBufferUsage, bool vertexShadowBuffer, bool indexShadowBuffer, int ySegmentsToKeep );
		Mogre::MeshPtr^ CreateCurvedIllusionPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real curvature, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real uTile, Mogre::Real vTile, Mogre::Vector3 upVector, Mogre::Quaternion orientation, Mogre::HardwareBuffer::Usage vertexBufferUsage, Mogre::HardwareBuffer::Usage indexBufferUsage, bool vertexShadowBuffer, bool indexShadowBuffer );
		Mogre::MeshPtr^ CreateCurvedIllusionPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real curvature, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real uTile, Mogre::Real vTile, Mogre::Vector3 upVector, Mogre::Quaternion orientation, Mogre::HardwareBuffer::Usage vertexBufferUsage, Mogre::HardwareBuffer::Usage indexBufferUsage, bool vertexShadowBuffer );
		Mogre::MeshPtr^ CreateCurvedIllusionPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real curvature, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real uTile, Mogre::Real vTile, Mogre::Vector3 upVector, Mogre::Quaternion orientation, Mogre::HardwareBuffer::Usage vertexBufferUsage, Mogre::HardwareBuffer::Usage indexBufferUsage );
		Mogre::MeshPtr^ CreateCurvedIllusionPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real curvature, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real uTile, Mogre::Real vTile, Mogre::Vector3 upVector, Mogre::Quaternion orientation, Mogre::HardwareBuffer::Usage vertexBufferUsage );
		Mogre::MeshPtr^ CreateCurvedIllusionPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real curvature, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real uTile, Mogre::Real vTile, Mogre::Vector3 upVector, Mogre::Quaternion orientation );
		Mogre::MeshPtr^ CreateCurvedIllusionPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real curvature, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real uTile, Mogre::Real vTile, Mogre::Vector3 upVector );
		Mogre::MeshPtr^ CreateCurvedIllusionPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real curvature, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real uTile, Mogre::Real vTile );
		Mogre::MeshPtr^ CreateCurvedIllusionPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real curvature, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real uTile );
		Mogre::MeshPtr^ CreateCurvedIllusionPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real curvature, int xsegments, int ysegments, bool normals, int numTexCoordSets );
		Mogre::MeshPtr^ CreateCurvedIllusionPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real curvature, int xsegments, int ysegments, bool normals );
		Mogre::MeshPtr^ CreateCurvedIllusionPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real curvature, int xsegments, int ysegments );
		Mogre::MeshPtr^ CreateCurvedIllusionPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real curvature, int xsegments );
		Mogre::MeshPtr^ CreateCurvedIllusionPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real curvature );
	
		Mogre::MeshPtr^ CreateCurvedPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real bow, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real xTile, Mogre::Real yTile, Mogre::Vector3 upVector, Mogre::HardwareBuffer::Usage vertexBufferUsage, Mogre::HardwareBuffer::Usage indexBufferUsage, bool vertexShadowBuffer, bool indexShadowBuffer );
		Mogre::MeshPtr^ CreateCurvedPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real bow, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real xTile, Mogre::Real yTile, Mogre::Vector3 upVector, Mogre::HardwareBuffer::Usage vertexBufferUsage, Mogre::HardwareBuffer::Usage indexBufferUsage, bool vertexShadowBuffer );
		Mogre::MeshPtr^ CreateCurvedPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real bow, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real xTile, Mogre::Real yTile, Mogre::Vector3 upVector, Mogre::HardwareBuffer::Usage vertexBufferUsage, Mogre::HardwareBuffer::Usage indexBufferUsage );
		Mogre::MeshPtr^ CreateCurvedPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real bow, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real xTile, Mogre::Real yTile, Mogre::Vector3 upVector, Mogre::HardwareBuffer::Usage vertexBufferUsage );
		Mogre::MeshPtr^ CreateCurvedPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real bow, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real xTile, Mogre::Real yTile, Mogre::Vector3 upVector );
		Mogre::MeshPtr^ CreateCurvedPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real bow, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real xTile, Mogre::Real yTile );
		Mogre::MeshPtr^ CreateCurvedPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real bow, int xsegments, int ysegments, bool normals, int numTexCoordSets, Mogre::Real xTile );
		Mogre::MeshPtr^ CreateCurvedPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real bow, int xsegments, int ysegments, bool normals, int numTexCoordSets );
		Mogre::MeshPtr^ CreateCurvedPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real bow, int xsegments, int ysegments, bool normals );
		Mogre::MeshPtr^ CreateCurvedPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real bow, int xsegments, int ysegments );
		Mogre::MeshPtr^ CreateCurvedPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real bow, int xsegments );
		Mogre::MeshPtr^ CreateCurvedPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height, Mogre::Real bow );
		Mogre::MeshPtr^ CreateCurvedPlane( String^ name, String^ groupName, Mogre::Plane plane, Mogre::Real width, Mogre::Real height );
	
		Mogre::PatchMeshPtr^ CreateBezierPatch( String^ name, String^ groupName, void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel, Mogre::PatchSurface::VisibleSide visibleSide, Mogre::HardwareBuffer::Usage vbUsage, Mogre::HardwareBuffer::Usage ibUsage, bool vbUseShadow, bool ibUseShadow );
		Mogre::PatchMeshPtr^ CreateBezierPatch( String^ name, String^ groupName, void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel, Mogre::PatchSurface::VisibleSide visibleSide, Mogre::HardwareBuffer::Usage vbUsage, Mogre::HardwareBuffer::Usage ibUsage, bool vbUseShadow );
		Mogre::PatchMeshPtr^ CreateBezierPatch( String^ name, String^ groupName, void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel, Mogre::PatchSurface::VisibleSide visibleSide, Mogre::HardwareBuffer::Usage vbUsage, Mogre::HardwareBuffer::Usage ibUsage );
		Mogre::PatchMeshPtr^ CreateBezierPatch( String^ name, String^ groupName, void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel, Mogre::PatchSurface::VisibleSide visibleSide, Mogre::HardwareBuffer::Usage vbUsage );
		Mogre::PatchMeshPtr^ CreateBezierPatch( String^ name, String^ groupName, void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel, Mogre::PatchSurface::VisibleSide visibleSide );
		Mogre::PatchMeshPtr^ CreateBezierPatch( String^ name, String^ groupName, void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel, size_t vMaxSubdivisionLevel );
		Mogre::PatchMeshPtr^ CreateBezierPatch( String^ name, String^ groupName, void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height, size_t uMaxSubdivisionLevel );
		Mogre::PatchMeshPtr^ CreateBezierPatch( String^ name, String^ groupName, void* controlPointBuffer, Mogre::VertexDeclaration^ declaration, size_t width, size_t height );
	
		virtual void LoadResource( Mogre::Resource^ res );
	
		//------------------------------------------------------------
		// Implementation for IManualResourceLoader
		//------------------------------------------------------------
	
	
		//Protected Declarations
	protected public:
	
	};
	

}
