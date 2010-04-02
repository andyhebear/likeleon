/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreSceneQuery.h"
#include "MogrePlatform.h"
#include "MogrePlaneBoundedVolume.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//SceneQuery
	//################################################################
	
	public ref class SceneQuery : public Wrapper
	{
		//Nested Types
		public: ref class WorldFragment;
	
		public: enum class WorldFragmentType
		{
			WFT_NONE = Ogre::SceneQuery::WFT_NONE,
			WFT_PLANE_BOUNDED_REGION = Ogre::SceneQuery::WFT_PLANE_BOUNDED_REGION,
			WFT_SINGLE_INTERSECTION = Ogre::SceneQuery::WFT_SINGLE_INTERSECTION,
			WFT_CUSTOM_GEOMETRY = Ogre::SceneQuery::WFT_CUSTOM_GEOMETRY,
			WFT_RENDER_OPERATION = Ogre::SceneQuery::WFT_RENDER_OPERATION
		};
	
		//################################################################
		//WorldFragment
		//################################################################
	
		public: ref class WorldFragment
		{
			//Nested Types
	
			#define STLDECL_MANAGEDTYPE Mogre::Plane
			#define STLDECL_NATIVETYPE Ogre::Plane
			public: INC_DECLARE_STLLIST( STLList_Plane, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
			#undef STLDECL_MANAGEDTYPE
			#undef STLDECL_NATIVETYPE
	
			//Private Declarations
		private protected:
			//Cached fields
			STLList_Plane^ _planes;
	
			//Internal Declarations
		public protected:
			WorldFragment( Ogre::SceneQuery::WorldFragment* obj ) : _native(obj), _createdByCLR(false)
			{
			}
	
			~WorldFragment()
			{
				this->!WorldFragment();
			}
			!WorldFragment()
			{
				if (_createdByCLR &&_native)
				{
					delete _native;
					_native = 0;
				}
			}
	
			Ogre::SceneQuery::WorldFragment* _native;
			bool _createdByCLR;
	
	
			//Public Declarations
		public:
			WorldFragment();
	
	
			property Mogre::SceneQuery::WorldFragmentType fragmentType
			{
			public:
				Mogre::SceneQuery::WorldFragmentType get();
			public:
				void set(Mogre::SceneQuery::WorldFragmentType value);
			}
	
			property Mogre::Vector3 singleIntersection
			{
			public:
				Mogre::Vector3 get();
			public:
				void set(Mogre::Vector3 value);
			}
	
			property STLList_Plane^ planes
			{
			public:
				STLList_Plane^ get();
			}
	
			property void* geometry
			{
			public:
				void* get();
			public:
				void set(void* value);
			}
	
			property Mogre::RenderOperation^ renderOp
			{
			public:
				Mogre::RenderOperation^ get();
			public:
				void set(Mogre::RenderOperation^ value);
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( SceneQuery::WorldFragment )
	
			//Protected Declarations
		protected public:
	
		};
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		SceneQuery( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		SceneQuery( Mogre::SceneManager^ mgr );
	
	
		property Mogre::uint32 QueryMask
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 mask);
		}
	
		property Mogre::uint32 QueryTypeMask
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 mask);
		}
	
		void SetWorldFragmentType( Mogre::SceneQuery::WorldFragmentType wft );
	
		Mogre::SceneQuery::WorldFragmentType GetWorldFragmentType( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( SceneQuery )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//ISceneQueryListener
	//################################################################
	
	public interface class ISceneQueryListener
	{
		//Nested Types
	
		//Private Declarations
	
		//Internal Declarations
	
		//Public Declarations
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( ISceneQueryListener, Ogre::SceneQueryListener )
	
		virtual Ogre::SceneQueryListener* _GetNativePtr();
	
	public:
	
	
		virtual bool QueryResult( Mogre::MovableObject^ object );
	
		virtual bool QueryResult( Mogre::SceneQuery::WorldFragment^ fragment );
	
	
		//Protected Declarations
	
	};
	
	//################################################################
	//ISceneQueryListener
	//################################################################
	
	public ref class SceneQueryListener abstract : public Wrapper, public ISceneQueryListener
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		SceneQueryListener( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::SceneQueryListener* _ISceneQueryListener_GetNativePtr() = ISceneQueryListener::_GetNativePtr;
	
	
		//Public Declarations
	public:
		SceneQueryListener();
	
	
		virtual bool QueryResult( Mogre::MovableObject^ object ) abstract;
	
		virtual bool QueryResult( Mogre::SceneQuery::WorldFragment^ fragment ) abstract;
	
	
		//Protected Declarations
	protected public:
	
	};
	
	
	//################################################################
	//SceneQueryResult
	//################################################################
	
	public ref class SceneQueryResult
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		//Cached fields
		Mogre::SceneQueryResultMovableList^ _movables;
		Mogre::SceneQueryResultWorldFragmentList^ _worldFragments;
	
		//Internal Declarations
	public protected:
		SceneQueryResult( Ogre::SceneQueryResult* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~SceneQueryResult()
		{
			this->!SceneQueryResult();
		}
		!SceneQueryResult()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::SceneQueryResult* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		SceneQueryResult();
	
	
		property Mogre::SceneQueryResultMovableList^ movables
		{
		public:
			Mogre::SceneQueryResultMovableList^ get();
		}
	
		property Mogre::SceneQueryResultWorldFragmentList^ worldFragments
		{
		public:
			Mogre::SceneQueryResultWorldFragmentList^ get();
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( SceneQueryResult )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//RegionSceneQuery
	//################################################################
	
	public ref class RegionSceneQuery : public SceneQuery, public ISceneQueryListener
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		RegionSceneQuery( CLRObject* obj ) : SceneQuery(obj)
		{
		}
	
		virtual Ogre::SceneQueryListener* _ISceneQueryListener_GetNativePtr() = ISceneQueryListener::_GetNativePtr;
	
	
		//Public Declarations
	public:
	
	
		property Mogre::SceneQueryResult^ LastResults
		{
		public:
			Mogre::SceneQueryResult^ get();
		}
	
		Mogre::SceneQueryResult^ Execute( );
	
		void Execute( Mogre::ISceneQueryListener^ listener );
	
		void ClearResults( );
	
		virtual bool QueryResult( Mogre::MovableObject^ first );
	
		virtual bool QueryResult( Mogre::SceneQuery::WorldFragment^ fragment );
	
		//------------------------------------------------------------
		// Implementation for ISceneQueryListener
		//------------------------------------------------------------
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( RegionSceneQuery )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//AxisAlignedBoxSceneQuery
	//################################################################
	
	public ref class AxisAlignedBoxSceneQuery : public RegionSceneQuery
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		AxisAlignedBoxSceneQuery( CLRObject* obj ) : RegionSceneQuery(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property Mogre::AxisAlignedBox^ Box
		{
		public:
			Mogre::AxisAlignedBox^ get();
		public:
			void set(Mogre::AxisAlignedBox^ box);
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( AxisAlignedBoxSceneQuery )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//SphereSceneQuery
	//################################################################
	
	public ref class SphereSceneQuery : public RegionSceneQuery
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		SphereSceneQuery( CLRObject* obj ) : RegionSceneQuery(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property Mogre::Sphere Sphere
		{
		public:
			Mogre::Sphere get();
		public:
			void set(Mogre::Sphere sphere);
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( SphereSceneQuery )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//PlaneBoundedVolumeListSceneQuery
	//################################################################
	
	public ref class PlaneBoundedVolumeListSceneQuery : public RegionSceneQuery
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		PlaneBoundedVolumeListSceneQuery( CLRObject* obj ) : RegionSceneQuery(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		void SetVolumes( Mogre::Const_PlaneBoundedVolumeList^ volumes );
	
		Mogre::Const_PlaneBoundedVolumeList^ GetVolumes( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( PlaneBoundedVolumeListSceneQuery )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//IRaySceneQueryListener
	//################################################################
	
	public interface class IRaySceneQueryListener
	{
		//Nested Types
	
		//Private Declarations
	
		//Internal Declarations
	
		//Public Declarations
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IRaySceneQueryListener, Ogre::RaySceneQueryListener )
	
		virtual Ogre::RaySceneQueryListener* _GetNativePtr();
	
	public:
	
	
		virtual bool QueryResult( Mogre::MovableObject^ obj, Mogre::Real distance );
	
		virtual bool QueryResult( Mogre::SceneQuery::WorldFragment^ fragment, Mogre::Real distance );
	
	
		//Protected Declarations
	
	};
	
	//################################################################
	//IRaySceneQueryListener
	//################################################################
	
	public ref class RaySceneQueryListener abstract : public Wrapper, public IRaySceneQueryListener
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		RaySceneQueryListener( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::RaySceneQueryListener* _IRaySceneQueryListener_GetNativePtr() = IRaySceneQueryListener::_GetNativePtr;
	
	
		//Public Declarations
	public:
		RaySceneQueryListener();
	
	
		virtual bool QueryResult( Mogre::MovableObject^ obj, Mogre::Real distance ) abstract;
	
		virtual bool QueryResult( Mogre::SceneQuery::WorldFragment^ fragment, Mogre::Real distance ) abstract;
	
	
		//Protected Declarations
	protected public:
	
	};
	
	
	//################################################################
	//RaySceneQueryResultEntry
	//################################################################
	
	public ref class RaySceneQueryResultEntry
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		RaySceneQueryResultEntry( Ogre::RaySceneQueryResultEntry* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~RaySceneQueryResultEntry()
		{
			this->!RaySceneQueryResultEntry();
		}
		!RaySceneQueryResultEntry()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::RaySceneQueryResultEntry* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		RaySceneQueryResultEntry();
	
	
		property Mogre::Real distance
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		property Mogre::MovableObject^ movable
		{
		public:
			Mogre::MovableObject^ get();
		public:
			void set(Mogre::MovableObject^ value);
		}
	
		property Mogre::SceneQuery::WorldFragment^ worldFragment
		{
		public:
			Mogre::SceneQuery::WorldFragment^ get();
		public:
			void set(Mogre::SceneQuery::WorldFragment^ value);
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( RaySceneQueryResultEntry )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//RaySceneQuery
	//################################################################
	
	public ref class RaySceneQuery : public SceneQuery, public IRaySceneQueryListener
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		RaySceneQuery( CLRObject* obj ) : SceneQuery(obj)
		{
		}
	
		virtual Ogre::RaySceneQueryListener* _IRaySceneQueryListener_GetNativePtr() = IRaySceneQueryListener::_GetNativePtr;
	
	
		//Public Declarations
	public:
	
	
		property Mogre::ushort MaxResults
		{
		public:
			Mogre::ushort get();
		}
	
		property Mogre::Ray Ray
		{
		public:
			Mogre::Ray get();
		public:
			void set(Mogre::Ray ray);
		}
	
		property bool SortByDistance
		{
		public:
			bool get();
		}
	
		void SetSortByDistance( bool sort, Mogre::ushort maxresults );
		void SetSortByDistance( bool sort );
	
		Mogre::RaySceneQueryResult^ Execute( );
	
		void Execute( Mogre::IRaySceneQueryListener^ listener );
	
		Mogre::RaySceneQueryResult^ GetLastResults( );
	
		void ClearResults( );
	
		virtual bool QueryResult( Mogre::MovableObject^ obj, Mogre::Real distance );
	
		virtual bool QueryResult( Mogre::SceneQuery::WorldFragment^ fragment, Mogre::Real distance );
	
		//------------------------------------------------------------
		// Implementation for IRaySceneQueryListener
		//------------------------------------------------------------
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( RaySceneQuery )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//IIntersectionSceneQueryListener
	//################################################################
	
	public interface class IIntersectionSceneQueryListener
	{
		//Nested Types
	
		//Private Declarations
	
		//Internal Declarations
	
		//Public Declarations
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IIntersectionSceneQueryListener, Ogre::IntersectionSceneQueryListener )
	
		virtual Ogre::IntersectionSceneQueryListener* _GetNativePtr();
	
	public:
	
	
		virtual bool QueryResult( Mogre::MovableObject^ first, Mogre::MovableObject^ second );
	
		virtual bool QueryResult( Mogre::MovableObject^ movable, Mogre::SceneQuery::WorldFragment^ fragment );
	
	
		//Protected Declarations
	
	};
	
	//################################################################
	//IIntersectionSceneQueryListener
	//################################################################
	
	public ref class IntersectionSceneQueryListener abstract : public Wrapper, public IIntersectionSceneQueryListener
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		IntersectionSceneQueryListener( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::IntersectionSceneQueryListener* _IIntersectionSceneQueryListener_GetNativePtr() = IIntersectionSceneQueryListener::_GetNativePtr;
	
	
		//Public Declarations
	public:
		IntersectionSceneQueryListener();
	
	
		virtual bool QueryResult( Mogre::MovableObject^ first, Mogre::MovableObject^ second ) abstract;
	
		virtual bool QueryResult( Mogre::MovableObject^ movable, Mogre::SceneQuery::WorldFragment^ fragment ) abstract;
	
	
		//Protected Declarations
	protected public:
	
	};
	
	
	//################################################################
	//IntersectionSceneQueryResult
	//################################################################
	
	public ref class IntersectionSceneQueryResult
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		//Cached fields
		Mogre::SceneQueryMovableIntersectionList^ _movables2movables;
		Mogre::SceneQueryMovableWorldFragmentIntersectionList^ _movables2world;
	
		//Internal Declarations
	public protected:
		IntersectionSceneQueryResult( Ogre::IntersectionSceneQueryResult* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~IntersectionSceneQueryResult()
		{
			this->!IntersectionSceneQueryResult();
		}
		!IntersectionSceneQueryResult()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::IntersectionSceneQueryResult* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		IntersectionSceneQueryResult();
	
	
		property Mogre::SceneQueryMovableIntersectionList^ movables2movables
		{
		public:
			Mogre::SceneQueryMovableIntersectionList^ get();
		}
	
		property Mogre::SceneQueryMovableWorldFragmentIntersectionList^ movables2world
		{
		public:
			Mogre::SceneQueryMovableWorldFragmentIntersectionList^ get();
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( IntersectionSceneQueryResult )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//IntersectionSceneQuery
	//################################################################
	
	public ref class IntersectionSceneQuery : public SceneQuery, public IIntersectionSceneQueryListener
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		IntersectionSceneQuery( CLRObject* obj ) : SceneQuery(obj)
		{
		}
	
		virtual Ogre::IntersectionSceneQueryListener* _IIntersectionSceneQueryListener_GetNativePtr() = IIntersectionSceneQueryListener::_GetNativePtr;
	
	
		//Public Declarations
	public:
	
	
		property Mogre::IntersectionSceneQueryResult^ LastResults
		{
		public:
			Mogre::IntersectionSceneQueryResult^ get();
		}
	
		Mogre::IntersectionSceneQueryResult^ Execute( );
	
		void Execute( Mogre::IIntersectionSceneQueryListener^ listener );
	
		void ClearResults( );
	
		virtual bool QueryResult( Mogre::MovableObject^ first, Mogre::MovableObject^ second );
	
		virtual bool QueryResult( Mogre::MovableObject^ movable, Mogre::SceneQuery::WorldFragment^ fragment );
	
		//------------------------------------------------------------
		// Implementation for IIntersectionSceneQueryListener
		//------------------------------------------------------------
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( IntersectionSceneQuery )
	
		//Protected Declarations
	protected public:
	
	};
	
	#define STLDECL_MANAGEDTYPE Mogre::MovableObject^
	#define STLDECL_NATIVETYPE Ogre::MovableObject*
	INC_DECLARE_STLLIST( SceneQueryResultMovableList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE Mogre::SceneQuery::WorldFragment^
	#define STLDECL_NATIVETYPE Ogre::SceneQuery::WorldFragment*
	INC_DECLARE_STLLIST( SceneQueryResultWorldFragmentList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE Mogre::RaySceneQueryResultEntry^
	#define STLDECL_NATIVETYPE Ogre::RaySceneQueryResultEntry
	INC_DECLARE_STLVECTOR( RaySceneQueryResult, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE Pair<Mogre::MovableObject^, Mogre::MovableObject^>
	#define STLDECL_NATIVETYPE Ogre::SceneQueryMovableObjectPair
	INC_DECLARE_STLLIST( SceneQueryMovableIntersectionList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	#define STLDECL_MANAGEDTYPE Pair<Mogre::MovableObject^, Mogre::SceneQuery::WorldFragment^>
	#define STLDECL_NATIVETYPE Ogre::SceneQueryMovableObjectWorldFragmentPair
	INC_DECLARE_STLLIST( SceneQueryMovableWorldFragmentIntersectionList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	//################################################################
	//SceneQueryListener_Proxy
	//################################################################
	
	class SceneQueryListener_Proxy : public Ogre::SceneQueryListener, public CLRObject
	{
	public:
		friend ref class Mogre::SceneQueryListener;
	
		bool* _overriden;
	
		gcroot<Mogre::SceneQueryListener^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		SceneQueryListener_Proxy( Mogre::SceneQueryListener^ managedObj ) :
			_managed(managedObj)
		{
		}
	
		virtual bool queryResult( Ogre::MovableObject* object ) override;
	
		virtual bool queryResult( Ogre::SceneQuery::WorldFragment* fragment ) override;
	};
	
	//################################################################
	//RaySceneQueryListener_Proxy
	//################################################################
	
	class RaySceneQueryListener_Proxy : public Ogre::RaySceneQueryListener, public CLRObject
	{
	public:
		friend ref class Mogre::RaySceneQueryListener;
	
		bool* _overriden;
	
		gcroot<Mogre::RaySceneQueryListener^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		RaySceneQueryListener_Proxy( Mogre::RaySceneQueryListener^ managedObj ) :
			_managed(managedObj)
		{
		}
	
		virtual bool queryResult( Ogre::MovableObject* obj, Ogre::Real distance ) override;
	
		virtual bool queryResult( Ogre::SceneQuery::WorldFragment* fragment, Ogre::Real distance ) override;
	};
	
	//################################################################
	//IntersectionSceneQueryListener_Proxy
	//################################################################
	
	class IntersectionSceneQueryListener_Proxy : public Ogre::IntersectionSceneQueryListener, public CLRObject
	{
	public:
		friend ref class Mogre::IntersectionSceneQueryListener;
	
		bool* _overriden;
	
		gcroot<Mogre::IntersectionSceneQueryListener^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		IntersectionSceneQueryListener_Proxy( Mogre::IntersectionSceneQueryListener^ managedObj ) :
			_managed(managedObj)
		{
		}
	
		virtual bool queryResult( Ogre::MovableObject* first, Ogre::MovableObject* second ) override;
	
		virtual bool queryResult( Ogre::MovableObject* movable, Ogre::SceneQuery::WorldFragment* fragment ) override;
	};
	

}
