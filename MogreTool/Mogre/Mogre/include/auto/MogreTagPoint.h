/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreTagPoint.h"
#include "MogreBone.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//TagPoint
	//################################################################
	
	public ref class TagPoint : public Bone
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		TagPoint( CLRObject* obj ) : Bone(obj)
		{
		}
	
	
		//Public Declarations
	public:
		TagPoint( unsigned short handle, Mogre::Skeleton^ creator );
	
	
		property Mogre::MovableObject^ ChildObject
		{
		public:
			Mogre::MovableObject^ get();
		public:
			void set(Mogre::MovableObject^ pObject);
		}
	
		property bool InheritParentEntityOrientation
		{
		public:
			bool get();
		public:
			void set(bool inherit);
		}
	
		property bool InheritParentEntityScale
		{
		public:
			bool get();
		public:
			void set(bool inherit);
		}
	
		property Mogre::Entity^ ParentEntity
		{
		public:
			Mogre::Entity^ get();
		public:
			void set(Mogre::Entity^ pEntity);
		}
	
		property Mogre::Matrix4^ ParentEntityTransform
		{
		public:
			Mogre::Matrix4^ get();
		}
	
		Mogre::Matrix4^ _getFullLocalTransform( );
	
		void NeedUpdate( bool forceParentUpdate );
		void NeedUpdate( );
	
		void UpdateFromParentImpl( );
	
		virtual Mogre::Const_LightList^ GetLights( ) override;
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( TagPoint )
	
		//Protected Declarations
	protected public:
	
	};
	

}
