/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreFrustum.h"
#include "MogreRenderable.h"
#include "MogreMovableObject.h"
#include "MogrePrerequisites.h"
#include "MogreCommon.h"
#include "MogrePlane.h"
#include "MogreGpuProgram.h"

namespace Mogre
{
	public enum class FrustumPlane
	{
		FRUSTUM_PLANE_NEAR = Ogre::FRUSTUM_PLANE_NEAR,
		FRUSTUM_PLANE_FAR = Ogre::FRUSTUM_PLANE_FAR,
		FRUSTUM_PLANE_LEFT = Ogre::FRUSTUM_PLANE_LEFT,
		FRUSTUM_PLANE_RIGHT = Ogre::FRUSTUM_PLANE_RIGHT,
		FRUSTUM_PLANE_TOP = Ogre::FRUSTUM_PLANE_TOP,
		FRUSTUM_PLANE_BOTTOM = Ogre::FRUSTUM_PLANE_BOTTOM
	};
	
	public enum class ProjectionType
	{
		PT_ORTHOGRAPHIC = Ogre::PT_ORTHOGRAPHIC,
		PT_PERSPECTIVE = Ogre::PT_PERSPECTIVE
	};
	
	//################################################################
	//Frustum
	//################################################################
	
	public ref class Frustum : public MovableObject, public IRenderable
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Frustum( CLRObject* obj ) : MovableObject(obj)
		{
		}
	
		virtual Ogre::Renderable* _IRenderable_GetNativePtr() = IRenderable::_GetNativePtr;
	
	
		//Public Declarations
	public:
		Frustum( );
	
	
		static property Mogre::Real INFINITE_FAR_PLANE_ADJUST
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real AspectRatio
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real ratio);
		}
	
		property Mogre::AxisAlignedBox^ BoundingBox
		{
		public:
			Mogre::AxisAlignedBox^ get();
		}
	
		property Mogre::Real BoundingRadius
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real FarClipDistance
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real farDist);
		}
	
		property Mogre::Real FocalLength
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real focalLength);
		}
	
		property Mogre::Radian FOVy
		{
		public:
			Mogre::Radian get();
		public:
			void set(Mogre::Radian fovy);
		}
	
		property Mogre::Vector2 FrustumOffset
		{
		public:
			Mogre::Vector2 get();
		public:
			void set(Mogre::Vector2 offset);
		}
	
		property const Mogre::Plane* FrustumPlanes
		{
		public:
			const Mogre::Plane* get();
		}
	
		property bool IsCustomNearClipPlaneEnabled
		{
		public:
			bool get();
		}
	
		property bool IsCustomProjectionMatrixEnabled
		{
		public:
			bool get();
		}
	
		property bool IsCustomViewMatrixEnabled
		{
		public:
			bool get();
		}
	
		property bool IsReflected
		{
		public:
			bool get();
		}
	
		property String^ MovableType
		{
		public:
			String^ get();
		}
	
		property Mogre::Real NearClipDistance
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real nearDist);
		}
	
		property Mogre::Matrix4^ ProjectionMatrix
		{
		public:
			Mogre::Matrix4^ get();
		}
	
		property Mogre::Matrix4^ ProjectionMatrixRS
		{
		public:
			Mogre::Matrix4^ get();
		}
	
		property Mogre::Matrix4^ ProjectionMatrixWithRSDepth
		{
		public:
			Mogre::Matrix4^ get();
		}
	
		property Mogre::ProjectionType ProjectionType
		{
		public:
			Mogre::ProjectionType get();
		public:
			void set(Mogre::ProjectionType pt);
		}
	
		property Mogre::Matrix4^ ReflectionMatrix
		{
		public:
			Mogre::Matrix4^ get();
		}
	
		property Mogre::Plane ReflectionPlane
		{
		public:
			Mogre::Plane get();
		}
	
		property Mogre::Matrix4^ ViewMatrix
		{
		public:
			Mogre::Matrix4^ get();
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
	
		property const Mogre::Vector3* WorldSpaceCorners
		{
		public:
			const Mogre::Vector3* get();
		}
	
		void SetFrustumOffset( Mogre::Real horizontal, Mogre::Real vertical );
		void SetFrustumOffset( Mogre::Real horizontal );
		void SetFrustumOffset( );
	
		void SetCustomViewMatrix( bool enable, Mogre::Matrix4^ viewMatrix );
		void SetCustomViewMatrix( bool enable );
	
		void SetCustomProjectionMatrix( bool enable, Mogre::Matrix4^ projectionMatrix );
		void SetCustomProjectionMatrix( bool enable );
	
		Mogre::Plane GetFrustumPlane( unsigned short plane );
	
		bool IsVisible( Mogre::AxisAlignedBox^ bound, [Out] Mogre::FrustumPlane% culledBy );
		bool IsVisible( Mogre::AxisAlignedBox^ bound );
	
		bool IsVisible( Mogre::Sphere bound, [Out] Mogre::FrustumPlane% culledBy );
		bool IsVisible( Mogre::Sphere bound );
	
		bool IsVisible( Mogre::Vector3 vert, [Out] Mogre::FrustumPlane% culledBy );
		bool IsVisible( Mogre::Vector3 vert );
	
		void _updateRenderQueue( Mogre::RenderQueue^ queue );
	
		void _notifyCurrentCamera( Mogre::Camera^ cam );
	
		virtual Mogre::MaterialPtr^ GetMaterial( );
	
		virtual void GetRenderOperation( Mogre::RenderOperation^ op );
	
		virtual void GetWorldTransforms( Mogre::Matrix4::NativeValue* xform );
	
		virtual Mogre::Real GetSquaredViewDepth( Mogre::Camera^ cam );
	
		virtual Mogre::Const_LightList^ GetLights( );
	
		void EnableReflection( Mogre::Plane p );
	
		void EnableReflection( Mogre::MovablePlane^ p );
	
		void DisableReflection( );
	
		bool ProjectSphere( Mogre::Sphere sphere, [Out] Mogre::Real% left, [Out] Mogre::Real% top, [Out] Mogre::Real% right, [Out] Mogre::Real% bottom );
	
		void EnableCustomNearClipPlane( Mogre::MovablePlane^ plane );
	
		void EnableCustomNearClipPlane( Mogre::Plane plane );
	
		void DisableCustomNearClipPlane( );
	
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
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Frustum )
	
		//Protected Declarations
	protected public:
	
	};
	

}
