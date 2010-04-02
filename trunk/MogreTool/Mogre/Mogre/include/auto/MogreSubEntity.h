/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreSubEntity.h"
#include "MogreRenderable.h"
#include "MogrePrerequisites.h"
#include "MogreCommon.h"
#include "MogreGpuProgram.h"
#include "MogrePlane.h"

namespace Mogre
{
	//################################################################
	//SubEntity
	//################################################################
	
	public ref class SubEntity : public Wrapper, public IRenderable
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		SubEntity( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::Renderable* _IRenderable_GetNativePtr() = IRenderable::_GetNativePtr;
	
	
		//Public Declarations
	public:
	
	
		property bool CastsShadows
		{
		public:
			virtual bool get();
		}
	
		property bool IsVisible
		{
		public:
			bool get();
		}
	
		property String^ MaterialName
		{
		public:
			String^ get();
		public:
			void set(String^ name);
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
	
		property Mogre::Entity^ Parent
		{
		public:
			Mogre::Entity^ get();
		}
	
		property Mogre::SubMesh^ SubMesh
		{
		public:
			Mogre::SubMesh^ get();
		}
	
		property Mogre::Technique^ Technique
		{
		public:
			virtual Mogre::Technique^ get();
		}
	
		property Mogre::VertexData^ VertexDataForBinding
		{
		public:
			Mogre::VertexData^ get();
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
	
		void SetVisible( bool visible );
	
		virtual Mogre::MaterialPtr^ GetMaterial( );
	
		virtual void GetRenderOperation( Mogre::RenderOperation^ op );
	
		virtual void GetWorldTransforms( Mogre::Matrix4::NativeValue* xform );
	
		virtual Mogre::Real GetSquaredViewDepth( Mogre::Camera^ cam );
	
		virtual Mogre::Const_LightList^ GetLights( );
	
		Mogre::VertexData^ _getSkelAnimVertexData( );
	
		Mogre::VertexData^ _getSoftwareVertexAnimVertexData( );
	
		Mogre::VertexData^ _getHardwareVertexAnimVertexData( );
	
		void _markBuffersUnusedForAnimation( );
	
		void _markBuffersUsedForAnimation( );
	
		bool _getBuffersMarkedForAnimation( );
	
		void _restoreBuffersForUnusedAnimation( bool hardwareAnimation );
	
		virtual void _updateCustomGpuParameter( Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params );
	
		void _invalidateCameraCache( );
	
		//------------------------------------------------------------
		// Implementation for IRenderable
		//------------------------------------------------------------
	
		property bool PolygonModeOverrideable
		{
		public:
			virtual bool get();
		public:
			virtual void set(bool override);
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
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( SubEntity )
	
		//Protected Declarations
	protected public:
	
	};
	

}
