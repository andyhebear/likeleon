/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgrePose.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//Pose
	//################################################################
	
	public ref class Pose : public Wrapper
	{
		//Nested Types
		public: ref class VertexOffsetMap;
	
		#define STLDECL_MANAGEDKEY size_t
		#define STLDECL_MANAGEDVALUE Mogre::Vector3
		#define STLDECL_NATIVEKEY size_t
		#define STLDECL_NATIVEVALUE Ogre::Vector3
		public: INC_DECLARE_STLMAP( VertexOffsetMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		public: INC_DECLARE_MAP_ITERATOR( VertexOffsetIterator, Ogre::Pose::VertexOffsetIterator, Mogre::Pose::VertexOffsetMap, Mogre::Vector3, Ogre::Vector3, size_t, size_t )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Pose( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		Pose( Mogre::ushort target, String^ name );
		Pose( Mogre::ushort target );
	
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		property Mogre::ushort Target
		{
		public:
			Mogre::ushort get();
		}
	
		void AddVertex( size_t index, Mogre::Vector3 offset );
	
		void RemoveVertex( size_t index );
	
		void ClearVertexOffsets( );
	
		Mogre::Pose::VertexOffsetIterator^ GetVertexOffsetIterator( );
	
		Mogre::Pose::Const_VertexOffsetMap^ GetVertexOffsets( );
	
		Mogre::HardwareVertexBufferSharedPtr^ _getHardwareVertexBuffer( size_t numVertices );
	
		Mogre::Pose^ Clone( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Pose )
	
		//Protected Declarations
	protected public:
	
	};
	
	#define STLDECL_MANAGEDTYPE Mogre::Pose^
	#define STLDECL_NATIVETYPE Ogre::Pose*
	INC_DECLARE_STLVECTOR( PoseList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	

}
