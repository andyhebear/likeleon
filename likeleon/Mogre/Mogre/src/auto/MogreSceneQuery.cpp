/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreSceneQuery.h"
#include "MogreRenderOperation.h"
#include "MogreSceneManager.h"
#include "MogreMovableObject.h"
#include "MogrePlaneBoundedVolume.h"

namespace Mogre
{
	//################################################################
	//SceneQuery
	//################################################################
	
	//Nested Types
	//################################################################
	//WorldFragment
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Mogre::Plane
	#define STLDECL_NATIVETYPE Ogre::Plane
	CPP_DECLARE_STLLIST( SceneQuery::WorldFragment::, STLList_Plane, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	SceneQuery::WorldFragment::WorldFragment()
	{
		_createdByCLR = true;
		_native = new Ogre::SceneQuery::WorldFragment();
	}
	
	Mogre::SceneQuery::WorldFragmentType SceneQuery::WorldFragment::fragmentType::get()
	{
		return (Mogre::SceneQuery::WorldFragmentType)static_cast<Ogre::SceneQuery::WorldFragment*>(_native)->fragmentType;
	}
	void SceneQuery::WorldFragment::fragmentType::set( Mogre::SceneQuery::WorldFragmentType value )
	{
		static_cast<Ogre::SceneQuery::WorldFragment*>(_native)->fragmentType = (Ogre::SceneQuery::WorldFragmentType)value;
	}
	
	Mogre::Vector3 SceneQuery::WorldFragment::singleIntersection::get()
	{
		return static_cast<Ogre::SceneQuery::WorldFragment*>(_native)->singleIntersection;
	}
	void SceneQuery::WorldFragment::singleIntersection::set( Mogre::Vector3 value )
	{
		static_cast<Ogre::SceneQuery::WorldFragment*>(_native)->singleIntersection = value;
	}
	
	SceneQuery::WorldFragment::STLList_Plane^ SceneQuery::WorldFragment::planes::get()
	{
		return ( CLR_NULL == _planes ) ? (_planes = static_cast<Ogre::SceneQuery::WorldFragment*>(_native)->planes) : _planes;
	}
	
	void* SceneQuery::WorldFragment::geometry::get()
	{
		return static_cast<Ogre::SceneQuery::WorldFragment*>(_native)->geometry;
	}
	void SceneQuery::WorldFragment::geometry::set( void* value )
	{
		static_cast<Ogre::SceneQuery::WorldFragment*>(_native)->geometry = value;
	}
	
	Mogre::RenderOperation^ SceneQuery::WorldFragment::renderOp::get()
	{
		return static_cast<Ogre::SceneQuery::WorldFragment*>(_native)->renderOp;
	}
	void SceneQuery::WorldFragment::renderOp::set( Mogre::RenderOperation^ value )
	{
		static_cast<Ogre::SceneQuery::WorldFragment*>(_native)->renderOp = value;
	}
	
	
	//Protected Declarations
	
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	SceneQuery::SceneQuery( Mogre::SceneManager^ mgr ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::SceneQuery( mgr);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::uint32 SceneQuery::QueryMask::get()
	{
		return static_cast<const Ogre::SceneQuery*>(_native)->getQueryMask( );
	}
	void SceneQuery::QueryMask::set( Mogre::uint32 mask )
	{
		static_cast<Ogre::SceneQuery*>(_native)->setQueryMask( mask );
	}
	
	Mogre::uint32 SceneQuery::QueryTypeMask::get()
	{
		return static_cast<const Ogre::SceneQuery*>(_native)->getQueryTypeMask( );
	}
	void SceneQuery::QueryTypeMask::set( Mogre::uint32 mask )
	{
		static_cast<Ogre::SceneQuery*>(_native)->setQueryTypeMask( mask );
	}
	
	void SceneQuery::SetWorldFragmentType( Mogre::SceneQuery::WorldFragmentType wft )
	{
		static_cast<Ogre::SceneQuery*>(_native)->setWorldFragmentType( (Ogre::SceneQuery::WorldFragmentType)wft );
	}
	
	Mogre::SceneQuery::WorldFragmentType SceneQuery::GetWorldFragmentType( )
	{
		return (Mogre::SceneQuery::WorldFragmentType)static_cast<const Ogre::SceneQuery*>(_native)->getWorldFragmentType( );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//ISceneQueryListener
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::SceneQueryListener* SceneQueryListener::_ISceneQueryListener_GetNativePtr()
	{
		return static_cast<Ogre::SceneQueryListener*>( static_cast<SceneQueryListener_Proxy*>(_native) );
	}
	
	
	//Public Declarations
	SceneQueryListener::SceneQueryListener() : Wrapper( (CLRObject*)0 )
	{
		_createdByCLR = true;
		Type^ thisType = this->GetType();
		_isOverriden = true;  //it's abstract or interface so it must be overriden
		SceneQueryListener_Proxy* proxy = new SceneQueryListener_Proxy(this);
		proxy->_overriden = Implementation::SubclassingManager::Instance->GetOverridenMethodsArrayPointer(thisType, SceneQueryListener::typeid, 0);
		_native = proxy;
	
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	
	
	
	//Protected Declarations
	
	
	
	//################################################################
	//SceneQueryResult
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	SceneQueryResult::SceneQueryResult()
	{
		_createdByCLR = true;
		_native = new Ogre::SceneQueryResult();
	}
	
	Mogre::SceneQueryResultMovableList^ SceneQueryResult::movables::get()
	{
		return ( CLR_NULL == _movables ) ? (_movables = static_cast<Ogre::SceneQueryResult*>(_native)->movables) : _movables;
	}
	
	Mogre::SceneQueryResultWorldFragmentList^ SceneQueryResult::worldFragments::get()
	{
		return ( CLR_NULL == _worldFragments ) ? (_worldFragments = static_cast<Ogre::SceneQueryResult*>(_native)->worldFragments) : _worldFragments;
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//RegionSceneQuery
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::SceneQueryListener* RegionSceneQuery::_ISceneQueryListener_GetNativePtr()
	{
		return static_cast<Ogre::SceneQueryListener*>( static_cast<Ogre::RegionSceneQuery*>(_native) );
	}
	
	
	//Public Declarations
	Mogre::SceneQueryResult^ RegionSceneQuery::LastResults::get()
	{
		return static_cast<const Ogre::RegionSceneQuery*>(_native)->getLastResults( );
	}
	
	Mogre::SceneQueryResult^ RegionSceneQuery::Execute( )
	{
		return static_cast<Ogre::RegionSceneQuery*>(_native)->execute( );
	}
	
	void RegionSceneQuery::Execute( Mogre::ISceneQueryListener^ listener )
	{
		static_cast<Ogre::RegionSceneQuery*>(_native)->execute( listener );
	}
	
	void RegionSceneQuery::ClearResults( )
	{
		static_cast<Ogre::RegionSceneQuery*>(_native)->clearResults( );
	}
	
	bool RegionSceneQuery::QueryResult( Mogre::MovableObject^ first )
	{
		return static_cast<Ogre::RegionSceneQuery*>(_native)->queryResult( first );
	}
	
	bool RegionSceneQuery::QueryResult( Mogre::SceneQuery::WorldFragment^ fragment )
	{
		return static_cast<Ogre::RegionSceneQuery*>(_native)->queryResult( fragment );
	}
	
	//------------------------------------------------------------
	// Implementation for ISceneQueryListener
	//------------------------------------------------------------
	
	
	//Protected Declarations
	
	
	//################################################################
	//AxisAlignedBoxSceneQuery
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Mogre::AxisAlignedBox^ AxisAlignedBoxSceneQuery::Box::get()
	{
		return static_cast<const Ogre::AxisAlignedBoxSceneQuery*>(_native)->getBox( );
	}
	void AxisAlignedBoxSceneQuery::Box::set( Mogre::AxisAlignedBox^ box )
	{
		static_cast<Ogre::AxisAlignedBoxSceneQuery*>(_native)->setBox( (Ogre::AxisAlignedBox)box );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//SphereSceneQuery
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Mogre::Sphere SphereSceneQuery::Sphere::get()
	{
		return static_cast<const Ogre::SphereSceneQuery*>(_native)->getSphere( );
	}
	void SphereSceneQuery::Sphere::set( Mogre::Sphere sphere )
	{
		static_cast<Ogre::SphereSceneQuery*>(_native)->setSphere( sphere );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//PlaneBoundedVolumeListSceneQuery
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	void PlaneBoundedVolumeListSceneQuery::SetVolumes( Mogre::Const_PlaneBoundedVolumeList^ volumes )
	{
		static_cast<Ogre::PlaneBoundedVolumeListSceneQuery*>(_native)->setVolumes( volumes );
	}
	
	Mogre::Const_PlaneBoundedVolumeList^ PlaneBoundedVolumeListSceneQuery::GetVolumes( )
	{
		return static_cast<const Ogre::PlaneBoundedVolumeListSceneQuery*>(_native)->getVolumes( );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//IRaySceneQueryListener
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::RaySceneQueryListener* RaySceneQueryListener::_IRaySceneQueryListener_GetNativePtr()
	{
		return static_cast<Ogre::RaySceneQueryListener*>( static_cast<RaySceneQueryListener_Proxy*>(_native) );
	}
	
	
	//Public Declarations
	RaySceneQueryListener::RaySceneQueryListener() : Wrapper( (CLRObject*)0 )
	{
		_createdByCLR = true;
		Type^ thisType = this->GetType();
		_isOverriden = true;  //it's abstract or interface so it must be overriden
		RaySceneQueryListener_Proxy* proxy = new RaySceneQueryListener_Proxy(this);
		proxy->_overriden = Implementation::SubclassingManager::Instance->GetOverridenMethodsArrayPointer(thisType, RaySceneQueryListener::typeid, 0);
		_native = proxy;
	
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	
	
	
	//Protected Declarations
	
	
	
	//################################################################
	//RaySceneQueryResultEntry
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	RaySceneQueryResultEntry::RaySceneQueryResultEntry()
	{
		_createdByCLR = true;
		_native = new Ogre::RaySceneQueryResultEntry();
	}
	
	Mogre::Real RaySceneQueryResultEntry::distance::get()
	{
		return static_cast<Ogre::RaySceneQueryResultEntry*>(_native)->distance;
	}
	void RaySceneQueryResultEntry::distance::set( Mogre::Real value )
	{
		static_cast<Ogre::RaySceneQueryResultEntry*>(_native)->distance = value;
	}
	
	Mogre::MovableObject^ RaySceneQueryResultEntry::movable::get()
	{
		return static_cast<Ogre::RaySceneQueryResultEntry*>(_native)->movable;
	}
	void RaySceneQueryResultEntry::movable::set( Mogre::MovableObject^ value )
	{
		static_cast<Ogre::RaySceneQueryResultEntry*>(_native)->movable = value;
	}
	
	Mogre::SceneQuery::WorldFragment^ RaySceneQueryResultEntry::worldFragment::get()
	{
		return static_cast<Ogre::RaySceneQueryResultEntry*>(_native)->worldFragment;
	}
	void RaySceneQueryResultEntry::worldFragment::set( Mogre::SceneQuery::WorldFragment^ value )
	{
		static_cast<Ogre::RaySceneQueryResultEntry*>(_native)->worldFragment = value;
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//RaySceneQuery
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::RaySceneQueryListener* RaySceneQuery::_IRaySceneQueryListener_GetNativePtr()
	{
		return static_cast<Ogre::RaySceneQueryListener*>( static_cast<Ogre::RaySceneQuery*>(_native) );
	}
	
	
	//Public Declarations
	Mogre::ushort RaySceneQuery::MaxResults::get()
	{
		return static_cast<const Ogre::RaySceneQuery*>(_native)->getMaxResults( );
	}
	
	Mogre::Ray RaySceneQuery::Ray::get()
	{
		return static_cast<const Ogre::RaySceneQuery*>(_native)->getRay( );
	}
	void RaySceneQuery::Ray::set( Mogre::Ray ray )
	{
		static_cast<Ogre::RaySceneQuery*>(_native)->setRay( ray );
	}
	
	bool RaySceneQuery::SortByDistance::get()
	{
		return static_cast<const Ogre::RaySceneQuery*>(_native)->getSortByDistance( );
	}
	
	void RaySceneQuery::SetSortByDistance( bool sort, Mogre::ushort maxresults )
	{
		static_cast<Ogre::RaySceneQuery*>(_native)->setSortByDistance( sort, maxresults );
	}
	void RaySceneQuery::SetSortByDistance( bool sort )
	{
		static_cast<Ogre::RaySceneQuery*>(_native)->setSortByDistance( sort );
	}
	
	Mogre::RaySceneQueryResult^ RaySceneQuery::Execute( )
	{
		return static_cast<Ogre::RaySceneQuery*>(_native)->execute( );
	}
	
	void RaySceneQuery::Execute( Mogre::IRaySceneQueryListener^ listener )
	{
		static_cast<Ogre::RaySceneQuery*>(_native)->execute( listener );
	}
	
	Mogre::RaySceneQueryResult^ RaySceneQuery::GetLastResults( )
	{
		return static_cast<Ogre::RaySceneQuery*>(_native)->getLastResults( );
	}
	
	void RaySceneQuery::ClearResults( )
	{
		static_cast<Ogre::RaySceneQuery*>(_native)->clearResults( );
	}
	
	bool RaySceneQuery::QueryResult( Mogre::MovableObject^ obj, Mogre::Real distance )
	{
		return static_cast<Ogre::RaySceneQuery*>(_native)->queryResult( obj, distance );
	}
	
	bool RaySceneQuery::QueryResult( Mogre::SceneQuery::WorldFragment^ fragment, Mogre::Real distance )
	{
		return static_cast<Ogre::RaySceneQuery*>(_native)->queryResult( fragment, distance );
	}
	
	//------------------------------------------------------------
	// Implementation for IRaySceneQueryListener
	//------------------------------------------------------------
	
	
	//Protected Declarations
	
	
	//################################################################
	//IIntersectionSceneQueryListener
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::IntersectionSceneQueryListener* IntersectionSceneQueryListener::_IIntersectionSceneQueryListener_GetNativePtr()
	{
		return static_cast<Ogre::IntersectionSceneQueryListener*>( static_cast<IntersectionSceneQueryListener_Proxy*>(_native) );
	}
	
	
	//Public Declarations
	IntersectionSceneQueryListener::IntersectionSceneQueryListener() : Wrapper( (CLRObject*)0 )
	{
		_createdByCLR = true;
		Type^ thisType = this->GetType();
		_isOverriden = true;  //it's abstract or interface so it must be overriden
		IntersectionSceneQueryListener_Proxy* proxy = new IntersectionSceneQueryListener_Proxy(this);
		proxy->_overriden = Implementation::SubclassingManager::Instance->GetOverridenMethodsArrayPointer(thisType, IntersectionSceneQueryListener::typeid, 0);
		_native = proxy;
	
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	
	
	
	//Protected Declarations
	
	
	
	//################################################################
	//IntersectionSceneQueryResult
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	IntersectionSceneQueryResult::IntersectionSceneQueryResult()
	{
		_createdByCLR = true;
		_native = new Ogre::IntersectionSceneQueryResult();
	}
	
	Mogre::SceneQueryMovableIntersectionList^ IntersectionSceneQueryResult::movables2movables::get()
	{
		return ( CLR_NULL == _movables2movables ) ? (_movables2movables = static_cast<Ogre::IntersectionSceneQueryResult*>(_native)->movables2movables) : _movables2movables;
	}
	
	Mogre::SceneQueryMovableWorldFragmentIntersectionList^ IntersectionSceneQueryResult::movables2world::get()
	{
		return ( CLR_NULL == _movables2world ) ? (_movables2world = static_cast<Ogre::IntersectionSceneQueryResult*>(_native)->movables2world) : _movables2world;
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//IntersectionSceneQuery
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::IntersectionSceneQueryListener* IntersectionSceneQuery::_IIntersectionSceneQueryListener_GetNativePtr()
	{
		return static_cast<Ogre::IntersectionSceneQueryListener*>( static_cast<Ogre::IntersectionSceneQuery*>(_native) );
	}
	
	
	//Public Declarations
	Mogre::IntersectionSceneQueryResult^ IntersectionSceneQuery::LastResults::get()
	{
		return static_cast<const Ogre::IntersectionSceneQuery*>(_native)->getLastResults( );
	}
	
	Mogre::IntersectionSceneQueryResult^ IntersectionSceneQuery::Execute( )
	{
		return static_cast<Ogre::IntersectionSceneQuery*>(_native)->execute( );
	}
	
	void IntersectionSceneQuery::Execute( Mogre::IIntersectionSceneQueryListener^ listener )
	{
		static_cast<Ogre::IntersectionSceneQuery*>(_native)->execute( listener );
	}
	
	void IntersectionSceneQuery::ClearResults( )
	{
		static_cast<Ogre::IntersectionSceneQuery*>(_native)->clearResults( );
	}
	
	bool IntersectionSceneQuery::QueryResult( Mogre::MovableObject^ first, Mogre::MovableObject^ second )
	{
		return static_cast<Ogre::IntersectionSceneQuery*>(_native)->queryResult( first, second );
	}
	
	bool IntersectionSceneQuery::QueryResult( Mogre::MovableObject^ movable, Mogre::SceneQuery::WorldFragment^ fragment )
	{
		return static_cast<Ogre::IntersectionSceneQuery*>(_native)->queryResult( movable, fragment );
	}
	
	//------------------------------------------------------------
	// Implementation for IIntersectionSceneQueryListener
	//------------------------------------------------------------
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDTYPE Mogre::MovableObject^
	#define STLDECL_NATIVETYPE Ogre::MovableObject*
	CPP_DECLARE_STLLIST( , SceneQueryResultMovableList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE Mogre::SceneQuery::WorldFragment^
	#define STLDECL_NATIVETYPE Ogre::SceneQuery::WorldFragment*
	CPP_DECLARE_STLLIST( , SceneQueryResultWorldFragmentList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE Mogre::RaySceneQueryResultEntry^
	#define STLDECL_NATIVETYPE Ogre::RaySceneQueryResultEntry
	CPP_DECLARE_STLVECTOR( , RaySceneQueryResult, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE Pair<Mogre::MovableObject^, Mogre::MovableObject^>
	#define STLDECL_NATIVETYPE Ogre::SceneQueryMovableObjectPair
	CPP_DECLARE_STLLIST( , SceneQueryMovableIntersectionList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE Pair<Mogre::MovableObject^, Mogre::SceneQuery::WorldFragment^>
	#define STLDECL_NATIVETYPE Ogre::SceneQueryMovableObjectWorldFragmentPair
	CPP_DECLARE_STLLIST( , SceneQueryMovableWorldFragmentIntersectionList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	//################################################################
	//SceneQueryListener_Proxy
	//################################################################
	
	
	
	bool SceneQueryListener_Proxy::queryResult( Ogre::MovableObject* object )
	{
		bool mp_return = _managed->QueryResult( object );
		return mp_return;
	}
	
	bool SceneQueryListener_Proxy::queryResult( Ogre::SceneQuery::WorldFragment* fragment )
	{
		bool mp_return = _managed->QueryResult( fragment );
		return mp_return;
	}
	//################################################################
	//RaySceneQueryListener_Proxy
	//################################################################
	
	
	
	bool RaySceneQueryListener_Proxy::queryResult( Ogre::MovableObject* obj, Ogre::Real distance )
	{
		bool mp_return = _managed->QueryResult( obj, distance );
		return mp_return;
	}
	
	bool RaySceneQueryListener_Proxy::queryResult( Ogre::SceneQuery::WorldFragment* fragment, Ogre::Real distance )
	{
		bool mp_return = _managed->QueryResult( fragment, distance );
		return mp_return;
	}
	//################################################################
	//IntersectionSceneQueryListener_Proxy
	//################################################################
	
	
	
	bool IntersectionSceneQueryListener_Proxy::queryResult( Ogre::MovableObject* first, Ogre::MovableObject* second )
	{
		bool mp_return = _managed->QueryResult( first, second );
		return mp_return;
	}
	
	bool IntersectionSceneQueryListener_Proxy::queryResult( Ogre::MovableObject* movable, Ogre::SceneQuery::WorldFragment* fragment )
	{
		bool mp_return = _managed->QueryResult( movable, fragment );
		return mp_return;
	}

}
