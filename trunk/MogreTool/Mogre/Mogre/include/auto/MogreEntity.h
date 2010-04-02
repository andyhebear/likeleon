/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreEntity.h"
#include "MogreMovableObject.h"
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"
#include "MogreShadowCaster.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//Entity
	//################################################################
	
	public ref class Entity : public MovableObject
	{
		//Nested Types
		public: ref class EntitySet;
		public: ref class ChildObjectList;
	
		public: enum class VertexDataBindChoice
		{
			BIND_ORIGINAL = Ogre::Entity::BIND_ORIGINAL,
			BIND_SOFTWARE_SKELETAL = Ogre::Entity::BIND_SOFTWARE_SKELETAL,
			BIND_SOFTWARE_MORPH = Ogre::Entity::BIND_SOFTWARE_MORPH,
			BIND_HARDWARE_MORPH = Ogre::Entity::BIND_HARDWARE_MORPH
		};
	
		#define STLDECL_MANAGEDTYPE Mogre::Entity^
		#define STLDECL_NATIVETYPE Ogre::Entity*
		public: INC_DECLARE_STLSET( EntitySet, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		#define STLDECL_MANAGEDKEY String^
		#define STLDECL_MANAGEDVALUE Mogre::MovableObject^
		#define STLDECL_NATIVEKEY Ogre::String
		#define STLDECL_NATIVEVALUE Ogre::MovableObject*
		public: INC_DECLARE_STLMAP( ChildObjectList, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		public: INC_DECLARE_MAP_ITERATOR( ChildObjectListIterator, Ogre::Entity::ChildObjectListIterator, Mogre::Entity::ChildObjectList, Mogre::MovableObject^, Ogre::MovableObject*, String^, Ogre::String )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Entity( CLRObject* obj ) : MovableObject(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property Mogre::AnimationStateSet^ AllAnimationStates
		{
		public:
			Mogre::AnimationStateSet^ get();
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
	
		property Mogre::AxisAlignedBox^ ChildObjectsBoundingBox
		{
		public:
			Mogre::AxisAlignedBox^ get();
		}
	
		property bool DisplaySkeleton
		{
		public:
			bool get();
		public:
			void set(bool display);
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
	
		property bool HasSkeleton
		{
		public:
			bool get();
		}
	
		property bool HasVertexAnimation
		{
		public:
			bool get();
		}
	
		property bool IsHardwareAnimationEnabled
		{
		public:
			bool get();
		}
	
		property bool IsInitialised
		{
		public:
			bool get();
		}
	
		property String^ MovableType
		{
		public:
			String^ get();
		}
	
		property bool NormaliseNormals
		{
		public:
			bool get();
		public:
			void set(bool normalise);
		}
	
		property size_t NumManualLodLevels
		{
		public:
			size_t get();
		}
	
		property unsigned int NumSubEntities
		{
		public:
			unsigned int get();
		}
	
		property Mogre::uint8 RenderQueueGroup
		{
		public:
			Mogre::uint8 get();
		public:
			void set(Mogre::uint8 queueID);
		}
	
		property Mogre::SkeletonInstance^ Skeleton
		{
		public:
			Mogre::SkeletonInstance^ get();
		}
	
		property int SoftwareAnimationNormalsRequests
		{
		public:
			int get();
		}
	
		property int SoftwareAnimationRequests
		{
		public:
			int get();
		}
	
		property Mogre::uint32 TypeFlags
		{
		public:
			Mogre::uint32 get();
		}
	
		property Mogre::VertexData^ VertexDataForBinding
		{
		public:
			Mogre::VertexData^ get();
		}
	
		Mogre::MeshPtr^ GetMesh( );
	
		Mogre::SubEntity^ GetSubEntity( unsigned int index );
	
		Mogre::SubEntity^ GetSubEntity( String^ name );
	
		Mogre::Entity^ Clone( String^ newName );
	
		void SetMaterialName( String^ name );
	
		void _notifyCurrentCamera( Mogre::Camera^ cam );
	
		void _updateRenderQueue( Mogre::RenderQueue^ queue );
	
		Mogre::AnimationState^ GetAnimationState( String^ name );
	
		Mogre::Entity^ GetManualLodLevel( size_t index );
	
		void SetMeshLodBias( Mogre::Real factor, Mogre::ushort maxDetailIndex, Mogre::ushort minDetailIndex );
		void SetMeshLodBias( Mogre::Real factor, Mogre::ushort maxDetailIndex );
		void SetMeshLodBias( Mogre::Real factor );
	
		void SetMaterialLodBias( Mogre::Real factor, Mogre::ushort maxDetailIndex, Mogre::ushort minDetailIndex );
		void SetMaterialLodBias( Mogre::Real factor, Mogre::ushort maxDetailIndex );
		void SetMaterialLodBias( Mogre::Real factor );
	
		void SetPolygonModeOverrideable( bool PolygonModeOverrideable );
	
		Mogre::TagPoint^ AttachObjectToBone( String^ boneName, Mogre::MovableObject^ pMovable, Mogre::Quaternion offsetOrientation, Mogre::Vector3 offsetPosition );
		Mogre::TagPoint^ AttachObjectToBone( String^ boneName, Mogre::MovableObject^ pMovable, Mogre::Quaternion offsetOrientation );
		Mogre::TagPoint^ AttachObjectToBone( String^ boneName, Mogre::MovableObject^ pMovable );
	
		Mogre::MovableObject^ DetachObjectFromBone( String^ movableName );
	
		void DetachObjectFromBone( Mogre::MovableObject^ obj );
	
		void DetachAllObjectsFromBone( );
	
		Mogre::Entity::ChildObjectListIterator^ GetAttachedObjectIterator( );
	
		Mogre::AxisAlignedBox^ GetWorldBoundingBox( bool derive );
		Mogre::AxisAlignedBox^ GetWorldBoundingBox( );
	
		Mogre::Sphere GetWorldBoundingSphere( bool derive );
		Mogre::Sphere GetWorldBoundingSphere( );
	
		Mogre::ShadowCaster::ShadowRenderableListIterator^ GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDistance, unsigned long flags );
		Mogre::ShadowCaster::ShadowRenderableListIterator^ GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDistance );
	
		const Mogre::Matrix4::NativeValue* _getBoneMatrices( );
	
		unsigned short _getNumBoneMatrices( );
	
		void _notifyAttached( Mogre::Node^ parent, bool isTagPoint );
		void _notifyAttached( Mogre::Node^ parent );
	
		void AddSoftwareAnimationRequest( bool normalsAlso );
	
		void RemoveSoftwareAnimationRequest( bool normalsAlso );
	
		void ShareSkeletonInstanceWith( Mogre::Entity^ entity );
	
		void StopSharingSkeletonInstance( );
	
		bool SharesSkeletonInstance( );
	
		Mogre::Entity::Const_EntitySet^ GetSkeletonInstanceSharingSet( );
	
		void RefreshAvailableAnimationState( );
	
		void _updateAnimation( );
	
		bool _isAnimated( );
	
		bool _isSkeletonAnimated( );
	
		Mogre::VertexData^ _getSkelAnimVertexData( );
	
		Mogre::VertexData^ _getSoftwareVertexAnimVertexData( );
	
		Mogre::VertexData^ _getHardwareVertexAnimVertexData( );
	
		Mogre::Entity::VertexDataBindChoice ChooseVertexDataForBinding( bool hasVertexAnim );
	
		bool _getBuffersMarkedForAnimation( );
	
		void _markBuffersUsedForAnimation( );
	
		void _initialise( bool forceReinitialise );
		void _initialise( );
	
		void _deinitialise( );
	
		void BackgroundLoadingComplete( Mogre::Resource^ res );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Entity )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//EntityFactory
	//################################################################
	
	public ref class EntityFactory : public MovableObjectFactory
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		EntityFactory( CLRObject* obj ) : MovableObjectFactory(obj)
		{
		}
	
	
		//Public Declarations
	public:
		EntityFactory( );
	
	
		static property String^ FACTORY_TYPE_NAME
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		property String^ Type
		{
		public:
			String^ get();
		}
	
		void DestroyInstance( Mogre::MovableObject^ obj );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( EntityFactory )
	
		//Protected Declarations
	protected public:
	
	};
	

}
