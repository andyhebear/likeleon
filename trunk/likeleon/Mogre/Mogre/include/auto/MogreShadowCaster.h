/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreShadowCaster.h"
#include "MogreRenderable.h"
#include "MogrePrerequisites.h"
#include "MogreCommon.h"
#include "MogrePlane.h"
#include "MogreGpuProgram.h"

namespace Mogre
{
	public enum class ShadowRenderableFlags
	{
		SRF_INCLUDE_LIGHT_CAP = Ogre::SRF_INCLUDE_LIGHT_CAP,
		SRF_INCLUDE_DARK_CAP = Ogre::SRF_INCLUDE_DARK_CAP,
		SRF_EXTRUDE_TO_INFINITY = Ogre::SRF_EXTRUDE_TO_INFINITY
	};
	
	//################################################################
	//ShadowRenderable
	//################################################################
	
	public ref class ShadowRenderable : public Wrapper, public IRenderable
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ShadowRenderable( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::Renderable* _IRenderable_GetNativePtr() = IRenderable::_GetNativePtr;
	
	
		//Public Declarations
	public:
	
	
		property bool IsLightCapSeparate
		{
		public:
			bool get();
		}
	
		property bool IsVisible
		{
		public:
			bool get();
		}
	
		property Mogre::ShadowRenderable^ LightCapRenderable
		{
		public:
			Mogre::ShadowRenderable^ get();
		}
	
		property Mogre::RenderOperation^ RenderOperationForUpdate
		{
		public:
			Mogre::RenderOperation^ get();
		}
	
		property Mogre::Quaternion WorldOrientation
		{
		public:
			virtual Mogre::Quaternion get();
		}
	
		property Mogre::Vector3 WorldPosition
		{
		public:
			virtual Mogre::Vector3 get();
		}
	
		void SetMaterial( Mogre::MaterialPtr^ mat );
	
		virtual Mogre::MaterialPtr^ GetMaterial( );
	
		virtual void GetRenderOperation( Mogre::RenderOperation^ op );
	
		virtual void GetWorldTransforms( Mogre::Matrix4::NativeValue* xform );
	
		virtual Mogre::Real GetSquaredViewDepth( Mogre::Camera^ param1 );
	
		virtual Mogre::Const_LightList^ GetLights( );
	
		//------------------------------------------------------------
		// Implementation for IRenderable
		//------------------------------------------------------------
	
		property bool CastsShadows
		{
		public:
			virtual bool get();
		}
	
		property bool NormaliseNormals
		{
		public:
			virtual bool get();
		}
	
		property unsigned short NumWorldTransforms
		{
		public:
			virtual unsigned short get();
		}
	
		property bool PolygonModeOverrideable
		{
		public:
			virtual bool get();
		public:
			virtual void set(bool override);
		}
	
		property Mogre::Technique^ Technique
		{
		public:
			virtual Mogre::Technique^ get();
		}
	
		property bool UseIdentityProjection
		{
		public:
			bool get();
		public:
			void set(bool useIdentityProjection);
		}
	
		property bool UseIdentityView
		{
		public:
			bool get();
		public:
			void set(bool useIdentityView);
		}
	
	public:
		virtual Mogre::Const_PlaneList^ GetClipPlanes( );
	
	public:
		void SetCustomParameter( size_t index, Mogre::Vector4 value );
	
	public:
		Mogre::Vector4 GetCustomParameter( size_t index );
	
	public:
		virtual void _updateCustomGpuParameter( Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( ShadowRenderable )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//ShadowCaster
	//################################################################
	
	public ref class ShadowCaster : public Wrapper
	{
		//Nested Types
		public: ref class ShadowRenderableList;
	
		#define STLDECL_MANAGEDTYPE Mogre::ShadowRenderable^
		#define STLDECL_NATIVETYPE Ogre::ShadowRenderable*
		public: INC_DECLARE_STLVECTOR( ShadowRenderableList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		public: INC_DECLARE_ITERATOR( ShadowRenderableListIterator, Ogre::ShadowCaster::ShadowRenderableListIterator, Mogre::ShadowCaster::ShadowRenderableList, Mogre::ShadowRenderable^, Ogre::ShadowRenderable* )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ShadowCaster( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property bool CastShadows
		{
		public:
			bool get();
		}
	
		property Mogre::EdgeData^ EdgeList
		{
		public:
			Mogre::EdgeData^ get();
		}
	
		property bool HasEdgeList
		{
		public:
			bool get();
		}
	
		property Mogre::AxisAlignedBox^ LightCapBounds
		{
		public:
			Mogre::AxisAlignedBox^ get();
		}
	
		Mogre::AxisAlignedBox^ GetWorldBoundingBox( bool derive );
		Mogre::AxisAlignedBox^ GetWorldBoundingBox( );
	
		Mogre::AxisAlignedBox^ GetDarkCapBounds( Mogre::Light^ light, Mogre::Real dirLightExtrusionDist );
	
		Mogre::ShadowCaster::ShadowRenderableListIterator^ GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDistance, unsigned long flags );
		Mogre::ShadowCaster::ShadowRenderableListIterator^ GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDistance );
	
		Mogre::Real GetPointExtrusionDistance( Mogre::Light^ l );
	
		static void ExtrudeVertices( Mogre::HardwareVertexBufferSharedPtr^ vertexBuffer, size_t originalVertexCount, Mogre::Vector4 lightPos, Mogre::Real extrudeDist );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( ShadowCaster )
	
		//Protected Declarations
	protected public:
	
	};
	

}
