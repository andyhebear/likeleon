/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreMovableObject.h"
#include "MogreAnimable.h"
#include "MogreShadowCaster.h"
#include "MogreCommon.h"
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"
#include "MogreStringVector.h"

namespace Mogre
{
	//################################################################
	//MovableObject
	//################################################################
	
	public ref class MovableObject : public ShadowCaster, public IAnimableObject
	{
		//Nested Types
	
		//################################################################
		//IListener
		//################################################################
	
		public: interface class IListener
		{
			//Nested Types
	
			//Private Declarations
	
			//Internal Declarations
	
			//Public Declarations
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IListener, Ogre::MovableObject::Listener )
	
			virtual Ogre::MovableObject::Listener* _GetNativePtr();
	
		public:
	
	
			virtual void ObjectDestroyed( Mogre::MovableObject^ param1 );
	
			virtual void ObjectAttached( Mogre::MovableObject^ param1 );
	
			virtual void ObjectDetached( Mogre::MovableObject^ param1 );
	
			virtual void ObjectMoved( Mogre::MovableObject^ param1 );
	
			virtual bool ObjectRendering( Mogre::MovableObject^ param1, Mogre::Camera^ param2 );
	
			virtual Mogre::Const_LightList^ ObjectQueryLights( Mogre::MovableObject^ param1 );
	
	
			//Protected Declarations
	
		};
	
		//################################################################
		//IListener
		//################################################################
		
		public: ref class Listener : public Wrapper, public Mogre::MovableObject::IListener
		{
			//Nested Types
		
			//Private Declarations
		private protected:
		
			//Internal Declarations
		public protected:
			Listener( CLRObject* obj ) : Wrapper(obj)
			{
			}
		
			virtual Ogre::MovableObject::Listener* _IListener_GetNativePtr() = IListener::_GetNativePtr;
		
		
			//Public Declarations
		public:
			Listener( );
		
		
			[Implementation::MethodIndex( 0 )]
			virtual void ObjectDestroyed( Mogre::MovableObject^ param1 );
		
			[Implementation::MethodIndex( 1 )]
			virtual void ObjectAttached( Mogre::MovableObject^ param1 );
		
			[Implementation::MethodIndex( 2 )]
			virtual void ObjectDetached( Mogre::MovableObject^ param1 );
		
			[Implementation::MethodIndex( 3 )]
			virtual void ObjectMoved( Mogre::MovableObject^ param1 );
		
			[Implementation::MethodIndex( 4 )]
			virtual bool ObjectRendering( Mogre::MovableObject^ param1, Mogre::Camera^ param2 );
		
			[Implementation::MethodIndex( 5 )]
			virtual Mogre::Const_LightList^ ObjectQueryLights( Mogre::MovableObject^ param1 );
		
		
			//Protected Declarations
		protected public:
		
		};
		
	
		
		        protected:
		        Object^ _userObject;
		        public:
		        property Object^ UserObject
		        {
		        Object^ get() { return _userObject; }
		        void set(Object^ obj) { _userObject = obj; }
		        }
		      
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		MovableObject( CLRObject* obj ) : ShadowCaster(obj)
		{
		}
	
		virtual Ogre::AnimableObject* _IAnimableObject_GetNativePtr() = IAnimableObject::_GetNativePtr;
	
	
		//Public Declarations
	public:
	
	
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
	
		property bool CastShadows
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property Mogre::uint32 DefaultQueryFlags
		{
		public:
			static Mogre::uint32 get();
		public:
			static void set(Mogre::uint32 flags);
		}
	
		property Mogre::uint32 DefaultVisibilityFlags
		{
		public:
			static Mogre::uint32 get();
		public:
			static void set(Mogre::uint32 flags);
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
	
		property bool IsAttached
		{
		public:
			bool get();
		}
	
		property bool IsInScene
		{
		public:
			bool get();
		}
	
		property Mogre::AxisAlignedBox^ LightCapBounds
		{
		public:
			Mogre::AxisAlignedBox^ get();
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
	
		property Mogre::Node^ ParentNode
		{
		public:
			Mogre::Node^ get();
		}
	
		property Mogre::SceneNode^ ParentSceneNode
		{
		public:
			Mogre::SceneNode^ get();
		}
	
		property Mogre::uint32 QueryFlags
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 flags);
		}
	
		property Mogre::Real RenderingDistance
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real dist);
		}
	
		property Mogre::uint8 RenderQueueGroup
		{
		public:
			Mogre::uint8 get();
		public:
			void set(Mogre::uint8 queueID);
		}
	
		property Mogre::uint32 TypeFlags
		{
		public:
			Mogre::uint32 get();
		}
	
		property Mogre::uint32 VisibilityFlags
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 flags);
		}
	
		property bool Visible
		{
		public:
			bool get();
		public:
			void set(bool visible);
		}
	
		void _notifyCreator( Mogre::MovableObjectFactory^ fact );
	
		Mogre::MovableObjectFactory^ _getCreator( );
	
		void _notifyManager( Mogre::SceneManager^ man );
	
		Mogre::SceneManager^ _getManager( );
	
		void _notifyAttached( Mogre::Node^ parent, bool isTagPoint );
		void _notifyAttached( Mogre::Node^ parent );
	
		void _notifyMoved( );
	
		void _notifyCurrentCamera( Mogre::Camera^ cam );
	
		Mogre::AxisAlignedBox^ GetWorldBoundingBox( bool derive );
		Mogre::AxisAlignedBox^ GetWorldBoundingBox( );
	
		Mogre::Sphere GetWorldBoundingSphere( bool derive );
		Mogre::Sphere GetWorldBoundingSphere( );
	
		void _updateRenderQueue( Mogre::RenderQueue^ queue );
	
		bool IsVisible( );
	
		Mogre::Matrix4^ _getParentNodeFullTransform( );
	
		void AddQueryFlags( Mogre::uint32 flags );
	
		void RemoveQueryFlags( unsigned long flags );
	
		void AddVisibilityFlags( Mogre::uint32 flags );
	
		void RemoveVisibilityFlags( Mogre::uint32 flags );
	
		void SetListener( Mogre::MovableObject::IListener^ listener );
	
		Mogre::MovableObject::IListener^ GetListener( );
	
		Mogre::Const_LightList^ QueryLights( );
	
		Mogre::ShadowCaster::ShadowRenderableListIterator^ GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDist, unsigned long flags );
		Mogre::ShadowCaster::ShadowRenderableListIterator^ GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDist );
	
		Mogre::AxisAlignedBox^ GetDarkCapBounds( Mogre::Light^ light, Mogre::Real dirLightExtrusionDist );
	
		Mogre::Real GetPointExtrusionDistance( Mogre::Light^ l );
	
		//------------------------------------------------------------
		// Implementation for IAnimableObject
		//------------------------------------------------------------
	
	public:
		Mogre::Const_StringVector^ GetAnimableValueNames( );
	
	public:
		virtual Mogre::AnimableValuePtr^ CreateAnimableValue( String^ valueName );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( MovableObject )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//MovableObjectFactory
	//################################################################
	
	public ref class MovableObjectFactory : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		MovableObjectFactory( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property String^ Type
		{
		public:
			String^ get();
		}
	
		property unsigned long TypeFlags
		{
		public:
			unsigned long get();
		}
	
		Mogre::MovableObject^ CreateInstance( String^ name, Mogre::SceneManager^ manager, Mogre::Const_NameValuePairList^ params );
		Mogre::MovableObject^ CreateInstance( String^ name, Mogre::SceneManager^ manager );
	
		void DestroyInstance( Mogre::MovableObject^ obj );
	
		bool RequestTypeFlags( );
	
		void _notifyTypeFlags( unsigned long flag );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( MovableObjectFactory )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//MovableObject_Listener_Proxy
	//################################################################
	
	class MovableObject_Listener_Proxy : public Ogre::MovableObject::Listener, public CLRObject
	{
	public:
		friend ref class Mogre::MovableObject::Listener;
	
		bool* _overriden;
	
		gcroot<Mogre::MovableObject::Listener^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		MovableObject_Listener_Proxy( Mogre::MovableObject::Listener^ managedObj ) :
			Ogre::MovableObject::Listener( ),
			_managed(managedObj)
		{
		}
	
		virtual void objectDestroyed( Ogre::MovableObject* param1 ) override;
	
		virtual void objectAttached( Ogre::MovableObject* param1 ) override;
	
		virtual void objectDetached( Ogre::MovableObject* param1 ) override;
	
		virtual void objectMoved( Ogre::MovableObject* param1 ) override;
	
		virtual bool objectRendering( const Ogre::MovableObject* param1, const Ogre::Camera* param2 ) override;
	
		virtual const Ogre::LightList* objectQueryLights( const Ogre::MovableObject* param1 ) override;
	};
	

}
