/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogrePose.h"
#include "MogreHardwareVertexBuffer.h"

namespace Mogre
{
	//################################################################
	//Pose
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDKEY size_t
	#define STLDECL_MANAGEDVALUE Mogre::Vector3
	#define STLDECL_NATIVEKEY size_t
	#define STLDECL_NATIVEVALUE Ogre::Vector3
	CPP_DECLARE_STLMAP( Pose::, VertexOffsetMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	CPP_DECLARE_MAP_ITERATOR( Pose::, VertexOffsetIterator, Ogre::Pose::VertexOffsetIterator, Mogre::Pose::VertexOffsetMap, Mogre::Vector3, Ogre::Vector3, size_t, size_t,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Pose::Pose( Mogre::ushort target, String^ name ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::Pose( target, o_name);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	Pose::Pose( Mogre::ushort target ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::Pose( target);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	String^ Pose::Name::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Pose*>(_native)->getName( ) );
	}
	
	Mogre::ushort Pose::Target::get()
	{
		return static_cast<const Ogre::Pose*>(_native)->getTarget( );
	}
	
	void Pose::AddVertex( size_t index, Mogre::Vector3 offset )
	{
		static_cast<Ogre::Pose*>(_native)->addVertex( index, offset );
	}
	
	void Pose::RemoveVertex( size_t index )
	{
		static_cast<Ogre::Pose*>(_native)->removeVertex( index );
	}
	
	void Pose::ClearVertexOffsets( )
	{
		static_cast<Ogre::Pose*>(_native)->clearVertexOffsets( );
	}
	
	Mogre::Pose::VertexOffsetIterator^ Pose::GetVertexOffsetIterator( )
	{
		return static_cast<Ogre::Pose*>(_native)->getVertexOffsetIterator( );
	}
	
	Mogre::Pose::Const_VertexOffsetMap^ Pose::GetVertexOffsets( )
	{
		return static_cast<const Ogre::Pose*>(_native)->getVertexOffsets( );
	}
	
	Mogre::HardwareVertexBufferSharedPtr^ Pose::_getHardwareVertexBuffer( size_t numVertices )
	{
		return static_cast<const Ogre::Pose*>(_native)->_getHardwareVertexBuffer( numVertices );
	}
	
	Mogre::Pose^ Pose::Clone( )
	{
		return static_cast<const Ogre::Pose*>(_native)->clone( );
	}
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDTYPE Mogre::Pose^
	#define STLDECL_NATIVETYPE Ogre::Pose*
	CPP_DECLARE_STLVECTOR( , PoseList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	

}
