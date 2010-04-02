/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreCamera.h"
#include "MogreSceneManager.h"
#include "MogreSceneNode.h"
#include "MogreFrustum.h"
#include "MogreViewport.h"

namespace Mogre
{
	//################################################################
	//Camera
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Mogre::Plane
	#define STLDECL_NATIVETYPE Ogre::Plane
	CPP_DECLARE_STLVECTOR( Camera::, STLVector_Plane, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Camera::Camera( String^ name, Mogre::SceneManager^ sm ) : Frustum((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::Camera( o_name, sm);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	bool Camera::AutoAspectRatio::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getAutoAspectRatio( );
	}
	void Camera::AutoAspectRatio::set( bool autoratio )
	{
		static_cast<Ogre::Camera*>(_native)->setAutoAspectRatio( autoratio );
	}
	
	Mogre::Vector3 Camera::AutoTrackOffset::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getAutoTrackOffset( );
	}
	
	Mogre::SceneNode^ Camera::AutoTrackTarget::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getAutoTrackTarget( );
	}
	
	Mogre::Real Camera::BoundingRadius::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getBoundingRadius( );
	}
	
	Mogre::Frustum^ Camera::CullingFrustum::get()
	{
		return static_cast<Ogre::Camera*>(_native)->getCullingFrustum( );
	}
	void Camera::CullingFrustum::set( Mogre::Frustum^ frustum )
	{
		static_cast<Ogre::Camera*>(_native)->setCullingFrustum( frustum );
	}
	
	Mogre::Vector3 Camera::DerivedDirection::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getDerivedDirection( );
	}
	
	Mogre::Quaternion Camera::DerivedOrientation::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getDerivedOrientation( );
	}
	
	Mogre::Vector3 Camera::DerivedPosition::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getDerivedPosition( );
	}
	
	Mogre::Vector3 Camera::DerivedRight::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getDerivedRight( );
	}
	
	Mogre::Vector3 Camera::DerivedUp::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getDerivedUp( );
	}
	
	Mogre::Vector3 Camera::Direction::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getDirection( );
	}
	void Camera::Direction::set( Mogre::Vector3 vec )
	{
		static_cast<Ogre::Camera*>(_native)->setDirection( vec );
	}
	
	Mogre::Real Camera::FarClipDistance::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getFarClipDistance( );
	}
	void Camera::FarClipDistance::set( Mogre::Real farDist )
	{
		static_cast<Ogre::Camera*>(_native)->setFarClipDistance( farDist );
	}
	
	bool Camera::IsWindowSet::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->isWindowSet( );
	}
	
	Mogre::Real Camera::LodBias::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getLodBias( );
	}
	void Camera::LodBias::set( Mogre::Real factor )
	{
		static_cast<Ogre::Camera*>(_native)->setLodBias( factor );
	}
	
	String^ Camera::MovableType::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Camera*>(_native)->getMovableType( ) );
	}
	
	String^ Camera::Name::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Camera*>(_native)->getName( ) );
	}
	
	Mogre::Real Camera::NearClipDistance::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getNearClipDistance( );
	}
	void Camera::NearClipDistance::set( Mogre::Real nearDist )
	{
		static_cast<Ogre::Camera*>(_native)->setNearClipDistance( nearDist );
	}
	
	Mogre::Quaternion Camera::Orientation::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getOrientation( );
	}
	void Camera::Orientation::set( Mogre::Quaternion q )
	{
		static_cast<Ogre::Camera*>(_native)->setOrientation( q );
	}
	
	Mogre::PolygonMode Camera::PolygonMode::get()
	{
		return (Mogre::PolygonMode)static_cast<const Ogre::Camera*>(_native)->getPolygonMode( );
	}
	void Camera::PolygonMode::set( Mogre::PolygonMode sd )
	{
		static_cast<Ogre::Camera*>(_native)->setPolygonMode( (Ogre::PolygonMode)sd );
	}
	
	Mogre::Vector3 Camera::Position::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getPosition( );
	}
	void Camera::Position::set( Mogre::Vector3 vec )
	{
		static_cast<Ogre::Camera*>(_native)->setPosition( vec );
	}
	
	Mogre::Vector3 Camera::RealDirection::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getRealDirection( );
	}
	
	Mogre::Quaternion Camera::RealOrientation::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getRealOrientation( );
	}
	
	Mogre::Vector3 Camera::RealPosition::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getRealPosition( );
	}
	
	Mogre::Vector3 Camera::RealRight::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getRealRight( );
	}
	
	Mogre::Vector3 Camera::RealUp::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getRealUp( );
	}
	
	Mogre::Vector3 Camera::Right::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getRight( );
	}
	
	Mogre::SceneManager^ Camera::SceneManager::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getSceneManager( );
	}
	
	Mogre::Vector3 Camera::Up::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getUp( );
	}
	
	bool Camera::UseRenderingDistance::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getUseRenderingDistance( );
	}
	void Camera::UseRenderingDistance::set( bool use )
	{
		static_cast<Ogre::Camera*>(_native)->setUseRenderingDistance( use );
	}
	
	Mogre::Matrix4^ Camera::ViewMatrix::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getViewMatrix( );
	}
	
	Mogre::Viewport^ Camera::Viewport::get()
	{
		return static_cast<const Ogre::Camera*>(_native)->getViewport( );
	}
	
	const Mogre::Vector3* Camera::WorldSpaceCorners::get()
	{
		return reinterpret_cast<const Mogre::Vector3*>(static_cast<const Ogre::Camera*>(_native)->getWorldSpaceCorners( ));
	}
	
	void Camera::SetPosition( Mogre::Real x, Mogre::Real y, Mogre::Real z )
	{
		static_cast<Ogre::Camera*>(_native)->setPosition( x, y, z );
	}
	
	void Camera::Move( Mogre::Vector3 vec )
	{
		static_cast<Ogre::Camera*>(_native)->move( vec );
	}
	
	void Camera::MoveRelative( Mogre::Vector3 vec )
	{
		static_cast<Ogre::Camera*>(_native)->moveRelative( vec );
	}
	
	void Camera::SetDirection( Mogre::Real x, Mogre::Real y, Mogre::Real z )
	{
		static_cast<Ogre::Camera*>(_native)->setDirection( x, y, z );
	}
	
	void Camera::LookAt( Mogre::Vector3 targetPoint )
	{
		static_cast<Ogre::Camera*>(_native)->lookAt( targetPoint );
	}
	
	void Camera::LookAt( Mogre::Real x, Mogre::Real y, Mogre::Real z )
	{
		static_cast<Ogre::Camera*>(_native)->lookAt( x, y, z );
	}
	
	void Camera::Roll( Mogre::Radian angle )
	{
		static_cast<Ogre::Camera*>(_native)->roll( angle );
	}
	
	void Camera::Yaw( Mogre::Radian angle )
	{
		static_cast<Ogre::Camera*>(_native)->yaw( angle );
	}
	
	void Camera::Pitch( Mogre::Radian angle )
	{
		static_cast<Ogre::Camera*>(_native)->pitch( angle );
	}
	
	void Camera::Rotate( Mogre::Vector3 axis, Mogre::Radian angle )
	{
		static_cast<Ogre::Camera*>(_native)->rotate( axis, angle );
	}
	
	void Camera::Rotate( Mogre::Quaternion q )
	{
		static_cast<Ogre::Camera*>(_native)->rotate( q );
	}
	
	void Camera::SetFixedYawAxis( bool useFixed, Mogre::Vector3 fixedAxis )
	{
		static_cast<Ogre::Camera*>(_native)->setFixedYawAxis( useFixed, fixedAxis );
	}
	void Camera::SetFixedYawAxis( bool useFixed )
	{
		static_cast<Ogre::Camera*>(_native)->setFixedYawAxis( useFixed );
	}
	
	void Camera::_renderScene( Mogre::Viewport^ vp, bool includeOverlays )
	{
		static_cast<Ogre::Camera*>(_native)->_renderScene( vp, includeOverlays );
	}
	
	void Camera::_notifyRenderedFaces( unsigned int numfaces )
	{
		static_cast<Ogre::Camera*>(_native)->_notifyRenderedFaces( numfaces );
	}
	
	void Camera::_notifyRenderedBatches( unsigned int numbatches )
	{
		static_cast<Ogre::Camera*>(_native)->_notifyRenderedBatches( numbatches );
	}
	
	unsigned int Camera::_getNumRenderedFaces( )
	{
		return static_cast<const Ogre::Camera*>(_native)->_getNumRenderedFaces( );
	}
	
	unsigned int Camera::_getNumRenderedBatches( )
	{
		return static_cast<const Ogre::Camera*>(_native)->_getNumRenderedBatches( );
	}
	
	void Camera::SetAutoTracking( bool enabled, Mogre::SceneNode^ target, Mogre::Vector3 offset )
	{
		static_cast<Ogre::Camera*>(_native)->setAutoTracking( enabled, target, offset );
	}
	void Camera::SetAutoTracking( bool enabled, Mogre::SceneNode^ target )
	{
		static_cast<Ogre::Camera*>(_native)->setAutoTracking( enabled, target );
	}
	void Camera::SetAutoTracking( bool enabled )
	{
		static_cast<Ogre::Camera*>(_native)->setAutoTracking( enabled );
	}
	
	Mogre::Ray Camera::GetCameraToViewportRay( Mogre::Real screenx, Mogre::Real screeny )
	{
		return static_cast<const Ogre::Camera*>(_native)->getCameraToViewportRay( screenx, screeny );
	}
	
	Mogre::Real Camera::_getLodBiasInverse( )
	{
		return static_cast<const Ogre::Camera*>(_native)->_getLodBiasInverse( );
	}
	
	void Camera::_autoTrack( )
	{
		static_cast<Ogre::Camera*>(_native)->_autoTrack( );
	}
	
	void Camera::SetWindow( Mogre::Real Left, Mogre::Real Top, Mogre::Real Right, Mogre::Real Bottom )
	{
		static_cast<Ogre::Camera*>(_native)->setWindow( Left, Top, Right, Bottom );
	}
	
	void Camera::ResetWindow( )
	{
		static_cast<Ogre::Camera*>(_native)->resetWindow( );
	}
	
	Camera::Const_STLVector_Plane^ Camera::GetWindowPlanes( )
	{
		return static_cast<const Ogre::Camera*>(_native)->getWindowPlanes( );
	}
	
	void Camera::_notifyViewport( Mogre::Viewport^ viewport )
	{
		static_cast<Ogre::Camera*>(_native)->_notifyViewport( viewport );
	}
	
	
	          void Camera::ForwardIntersect(Mogre::Plane worldPlane, array<Mogre::Vector4>^% intersect3d)
	          {
	          std::vector<Ogre::Vector4> vec;
	          static_cast<Ogre::Camera*>(_native)->forwardIntersect( worldPlane, &vec);
	          intersect3d = GetArrayFromVector<Mogre::Vector4, std::vector<Ogre::Vector4> >(vec);
	          }
	        
	
	
	bool Camera::IsVisible( Mogre::AxisAlignedBox^ bound, [Out] Mogre::FrustumPlane% culledBy )
	{
		pin_ptr<Mogre::FrustumPlane> p_culledBy = &culledBy;
	
		return static_cast<const Ogre::Camera*>(_native)->isVisible( (Ogre::AxisAlignedBox)bound, (Ogre::FrustumPlane*)p_culledBy );
	}
	bool Camera::IsVisible( Mogre::AxisAlignedBox^ bound )
	{
		return static_cast<const Ogre::Camera*>(_native)->isVisible( (Ogre::AxisAlignedBox)bound );
	}
	
	bool Camera::IsVisible( Mogre::Sphere bound, [Out] Mogre::FrustumPlane% culledBy )
	{
		pin_ptr<Mogre::FrustumPlane> p_culledBy = &culledBy;
	
		return static_cast<const Ogre::Camera*>(_native)->isVisible( bound, (Ogre::FrustumPlane*)p_culledBy );
	}
	bool Camera::IsVisible( Mogre::Sphere bound )
	{
		return static_cast<const Ogre::Camera*>(_native)->isVisible( bound );
	}
	
	bool Camera::IsVisible( Mogre::Vector3 vert, [Out] Mogre::FrustumPlane% culledBy )
	{
		pin_ptr<Mogre::FrustumPlane> p_culledBy = &culledBy;
	
		return static_cast<const Ogre::Camera*>(_native)->isVisible( vert, (Ogre::FrustumPlane*)p_culledBy );
	}
	bool Camera::IsVisible( Mogre::Vector3 vert )
	{
		return static_cast<const Ogre::Camera*>(_native)->isVisible( vert );
	}
	
	Mogre::Plane Camera::GetFrustumPlane( unsigned short plane )
	{
		return static_cast<const Ogre::Camera*>(_native)->getFrustumPlane( plane );
	}
	
	bool Camera::ProjectSphere( Mogre::Sphere sphere, [Out] Mogre::Real% left, [Out] Mogre::Real% top, [Out] Mogre::Real% right, [Out] Mogre::Real% bottom )
	{
		pin_ptr<Mogre::Real> p_left = &left;
		pin_ptr<Mogre::Real> p_top = &top;
		pin_ptr<Mogre::Real> p_right = &right;
		pin_ptr<Mogre::Real> p_bottom = &bottom;
	
		return static_cast<const Ogre::Camera*>(_native)->projectSphere( sphere, p_left, p_top, p_right, p_bottom );
	}
	
	Mogre::Matrix4^ Camera::GetViewMatrix( bool ownFrustumOnly )
	{
		return static_cast<const Ogre::Camera*>(_native)->getViewMatrix( ownFrustumOnly );
	}
	
	
	//Protected Declarations
	
	

}
