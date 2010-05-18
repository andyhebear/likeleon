/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreCamera.h"
#include "MogreFrustum.h"
#include "MogrePrerequisites.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//Camera
	//################################################################
	
	public ref class Camera : public Frustum
	{
		//Nested Types
	
		#define STLDECL_MANAGEDTYPE Mogre::Plane
		#define STLDECL_NATIVETYPE Ogre::Plane
		public: INC_DECLARE_STLVECTOR( STLVector_Plane, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Camera( CLRObject* obj ) : Frustum(obj)
		{
		}
	
	
		//Public Declarations
	public:
		Camera( String^ name, Mogre::SceneManager^ sm );
	
	
		property bool AutoAspectRatio
		{
		public:
			bool get();
		public:
			void set(bool autoratio);
		}
	
		property Mogre::Vector3 AutoTrackOffset
		{
		public:
			Mogre::Vector3 get();
		}
	
		property Mogre::SceneNode^ AutoTrackTarget
		{
		public:
			Mogre::SceneNode^ get();
		}
	
		property Mogre::Real BoundingRadius
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Frustum^ CullingFrustum
		{
		public:
			Mogre::Frustum^ get();
		public:
			void set(Mogre::Frustum^ frustum);
		}
	
		property Mogre::Vector3 DerivedDirection
		{
		public:
			Mogre::Vector3 get();
		}
	
		property Mogre::Quaternion DerivedOrientation
		{
		public:
			Mogre::Quaternion get();
		}
	
		property Mogre::Vector3 DerivedPosition
		{
		public:
			Mogre::Vector3 get();
		}
	
		property Mogre::Vector3 DerivedRight
		{
		public:
			Mogre::Vector3 get();
		}
	
		property Mogre::Vector3 DerivedUp
		{
		public:
			Mogre::Vector3 get();
		}
	
		property Mogre::Vector3 Direction
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 vec);
		}
	
		property Mogre::Real FarClipDistance
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real farDist);
		}
	
		property bool IsWindowSet
		{
		public:
			bool get();
		}
	
		property Mogre::Real LodBias
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real factor);
		}
	
		property String^ MovableType
		{
		public:
			String^ get();
		}
	
		property String^ Name
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
	
		property Mogre::Quaternion Orientation
		{
		public:
			Mogre::Quaternion get();
		public:
			void set(Mogre::Quaternion q);
		}
	
		property Mogre::PolygonMode PolygonMode
		{
		public:
			Mogre::PolygonMode get();
		public:
			void set(Mogre::PolygonMode sd);
		}
	
		property Mogre::Vector3 Position
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 vec);
		}
	
		property Mogre::Vector3 RealDirection
		{
		public:
			Mogre::Vector3 get();
		}
	
		property Mogre::Quaternion RealOrientation
		{
		public:
			Mogre::Quaternion get();
		}
	
		property Mogre::Vector3 RealPosition
		{
		public:
			Mogre::Vector3 get();
		}
	
		property Mogre::Vector3 RealRight
		{
		public:
			Mogre::Vector3 get();
		}
	
		property Mogre::Vector3 RealUp
		{
		public:
			Mogre::Vector3 get();
		}
	
		property Mogre::Vector3 Right
		{
		public:
			Mogre::Vector3 get();
		}
	
		property Mogre::SceneManager^ SceneManager
		{
		public:
			Mogre::SceneManager^ get();
		}
	
		property Mogre::Vector3 Up
		{
		public:
			Mogre::Vector3 get();
		}
	
		property bool UseRenderingDistance
		{
		public:
			bool get();
		public:
			void set(bool use);
		}
	
		property Mogre::Matrix4^ ViewMatrix
		{
		public:
			Mogre::Matrix4^ get();
		}
	
		property Mogre::Viewport^ Viewport
		{
		public:
			Mogre::Viewport^ get();
		}
	
		property const Mogre::Vector3* WorldSpaceCorners
		{
		public:
			const Mogre::Vector3* get();
		}
	
		void SetPosition( Mogre::Real x, Mogre::Real y, Mogre::Real z );
	
		void Move( Mogre::Vector3 vec );
	
		void MoveRelative( Mogre::Vector3 vec );
	
		void SetDirection( Mogre::Real x, Mogre::Real y, Mogre::Real z );
	
		void LookAt( Mogre::Vector3 targetPoint );
	
		void LookAt( Mogre::Real x, Mogre::Real y, Mogre::Real z );
	
		void Roll( Mogre::Radian angle );
	
		void Yaw( Mogre::Radian angle );
	
		void Pitch( Mogre::Radian angle );
	
		void Rotate( Mogre::Vector3 axis, Mogre::Radian angle );
	
		void Rotate( Mogre::Quaternion q );
	
		void SetFixedYawAxis( bool useFixed, Mogre::Vector3 fixedAxis );
		void SetFixedYawAxis( bool useFixed );
	
		void _renderScene( Mogre::Viewport^ vp, bool includeOverlays );
	
		void _notifyRenderedFaces( unsigned int numfaces );
	
		void _notifyRenderedBatches( unsigned int numbatches );
	
		unsigned int _getNumRenderedFaces( );
	
		unsigned int _getNumRenderedBatches( );
	
		void SetAutoTracking( bool enabled, Mogre::SceneNode^ target, Mogre::Vector3 offset );
		void SetAutoTracking( bool enabled, Mogre::SceneNode^ target );
		void SetAutoTracking( bool enabled );
	
		Mogre::Ray GetCameraToViewportRay( Mogre::Real screenx, Mogre::Real screeny );
	
		Mogre::Real _getLodBiasInverse( );
	
		void _autoTrack( );
	
		void SetWindow( Mogre::Real Left, Mogre::Real Top, Mogre::Real Right, Mogre::Real Bottom );
	
		void ResetWindow( );
	
		Const_STLVector_Plane^ GetWindowPlanes( );
	
		void _notifyViewport( Mogre::Viewport^ viewport );
	
		
		          void ForwardIntersect(Mogre::Plane worldPlane, [Out] array<Mogre::Vector4>^% intersect3d);
		        
	
	
		bool IsVisible( Mogre::AxisAlignedBox^ bound, [Out] Mogre::FrustumPlane% culledBy );
		bool IsVisible( Mogre::AxisAlignedBox^ bound );
	
		bool IsVisible( Mogre::Sphere bound, [Out] Mogre::FrustumPlane% culledBy );
		bool IsVisible( Mogre::Sphere bound );
	
		bool IsVisible( Mogre::Vector3 vert, [Out] Mogre::FrustumPlane% culledBy );
		bool IsVisible( Mogre::Vector3 vert );
	
		Mogre::Plane GetFrustumPlane( unsigned short plane );
	
		bool ProjectSphere( Mogre::Sphere sphere, [Out] Mogre::Real% left, [Out] Mogre::Real% top, [Out] Mogre::Real% right, [Out] Mogre::Real% bottom );
	
		Mogre::Matrix4^ GetViewMatrix( bool ownFrustumOnly );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Camera )
	
		//Protected Declarations
	protected public:
	
	};
	

}
