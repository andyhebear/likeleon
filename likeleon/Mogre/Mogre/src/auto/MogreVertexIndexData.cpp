/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreVertexIndexData.h"
#include "MogreHardwareVertexBuffer.h"
#include "MogreHardwareIndexBuffer.h"

namespace Mogre
{
	//################################################################
	//VertexData
	//################################################################
	
	//Nested Types
	//################################################################
	//HardwareAnimationData_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	Mogre::VertexElement^ VertexData::HardwareAnimationData_NativePtr::targetVertexElement::get()
	{
		return _native->targetVertexElement;
	}
	
	Mogre::Real VertexData::HardwareAnimationData_NativePtr::parametric::get()
	{
		return _native->parametric;
	}
	void VertexData::HardwareAnimationData_NativePtr::parametric::set( Mogre::Real value )
	{
		_native->parametric = value;
	}
	
	
	Mogre::VertexData::HardwareAnimationData_NativePtr VertexData::HardwareAnimationData_NativePtr::Create()
	{
		HardwareAnimationData_NativePtr ptr;
		ptr._native = new Ogre::VertexData::HardwareAnimationData();
		return ptr;
	}
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDTYPE Mogre::VertexData::HardwareAnimationData_NativePtr
	#define STLDECL_NATIVETYPE Ogre::VertexData::HardwareAnimationData
	CPP_DECLARE_STLVECTOR( VertexData::, HardwareAnimationDataList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	VertexData::VertexData( )
	{
		_createdByCLR = true;
		_native = new Ogre::VertexData();
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::VertexDeclaration^ VertexData::vertexDeclaration::get()
	{
		return static_cast<Ogre::VertexData*>(_native)->vertexDeclaration;
	}
	void VertexData::vertexDeclaration::set( Mogre::VertexDeclaration^ value )
	{
		static_cast<Ogre::VertexData*>(_native)->vertexDeclaration = value;
	}
	
	Mogre::VertexBufferBinding^ VertexData::vertexBufferBinding::get()
	{
		return static_cast<Ogre::VertexData*>(_native)->vertexBufferBinding;
	}
	void VertexData::vertexBufferBinding::set( Mogre::VertexBufferBinding^ value )
	{
		static_cast<Ogre::VertexData*>(_native)->vertexBufferBinding = value;
	}
	
	size_t VertexData::vertexStart::get()
	{
		return static_cast<Ogre::VertexData*>(_native)->vertexStart;
	}
	void VertexData::vertexStart::set( size_t value )
	{
		static_cast<Ogre::VertexData*>(_native)->vertexStart = value;
	}
	
	size_t VertexData::vertexCount::get()
	{
		return static_cast<Ogre::VertexData*>(_native)->vertexCount;
	}
	void VertexData::vertexCount::set( size_t value )
	{
		static_cast<Ogre::VertexData*>(_native)->vertexCount = value;
	}
	
	Mogre::VertexData::HardwareAnimationDataList^ VertexData::hwAnimationDataList::get()
	{
		return ( CLR_NULL == _hwAnimationDataList ) ? (_hwAnimationDataList = static_cast<Ogre::VertexData*>(_native)->hwAnimationDataList) : _hwAnimationDataList;
	}
	
	size_t VertexData::hwAnimDataItemsUsed::get()
	{
		return static_cast<Ogre::VertexData*>(_native)->hwAnimDataItemsUsed;
	}
	void VertexData::hwAnimDataItemsUsed::set( size_t value )
	{
		static_cast<Ogre::VertexData*>(_native)->hwAnimDataItemsUsed = value;
	}
	
	Mogre::HardwareVertexBufferSharedPtr^ VertexData::hardwareShadowVolWBuffer::get()
	{
		return static_cast<Ogre::VertexData*>(_native)->hardwareShadowVolWBuffer;
	}
	void VertexData::hardwareShadowVolWBuffer::set( Mogre::HardwareVertexBufferSharedPtr^ value )
	{
		static_cast<Ogre::VertexData*>(_native)->hardwareShadowVolWBuffer = (Ogre::HardwareVertexBufferSharedPtr)value;
	}
	
	Mogre::VertexData^ VertexData::Clone( bool copyData )
	{
		return static_cast<const Ogre::VertexData*>(_native)->clone( copyData );
	}
	Mogre::VertexData^ VertexData::Clone( )
	{
		return static_cast<const Ogre::VertexData*>(_native)->clone( );
	}
	
	void VertexData::PrepareForShadowVolume( )
	{
		static_cast<Ogre::VertexData*>(_native)->prepareForShadowVolume( );
	}
	
	void VertexData::ReorganiseBuffers( Mogre::VertexDeclaration^ newDeclaration, Mogre::Const_BufferUsageList^ bufferUsage )
	{
		static_cast<Ogre::VertexData*>(_native)->reorganiseBuffers( newDeclaration, bufferUsage );
	}
	
	void VertexData::ReorganiseBuffers( Mogre::VertexDeclaration^ newDeclaration )
	{
		static_cast<Ogre::VertexData*>(_native)->reorganiseBuffers( newDeclaration );
	}
	
	void VertexData::CloseGapsInBindings( )
	{
		static_cast<Ogre::VertexData*>(_native)->closeGapsInBindings( );
	}
	
	void VertexData::RemoveUnusedBuffers( )
	{
		static_cast<Ogre::VertexData*>(_native)->removeUnusedBuffers( );
	}
	
	void VertexData::ConvertPackedColour( Mogre::VertexElementType srcType, Mogre::VertexElementType destType )
	{
		static_cast<Ogre::VertexData*>(_native)->convertPackedColour( (Ogre::VertexElementType)srcType, (Ogre::VertexElementType)destType );
	}
	
	void VertexData::AllocateHardwareAnimationElements( Mogre::ushort count )
	{
		static_cast<Ogre::VertexData*>(_native)->allocateHardwareAnimationElements( count );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//IndexData
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	IndexData::IndexData( )
	{
		_createdByCLR = true;
		_native = new Ogre::IndexData();
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::HardwareIndexBufferSharedPtr^ IndexData::indexBuffer::get()
	{
		return static_cast<Ogre::IndexData*>(_native)->indexBuffer;
	}
	void IndexData::indexBuffer::set( Mogre::HardwareIndexBufferSharedPtr^ value )
	{
		static_cast<Ogre::IndexData*>(_native)->indexBuffer = (Ogre::HardwareIndexBufferSharedPtr)value;
	}
	
	size_t IndexData::indexStart::get()
	{
		return static_cast<Ogre::IndexData*>(_native)->indexStart;
	}
	void IndexData::indexStart::set( size_t value )
	{
		static_cast<Ogre::IndexData*>(_native)->indexStart = value;
	}
	
	size_t IndexData::indexCount::get()
	{
		return static_cast<Ogre::IndexData*>(_native)->indexCount;
	}
	void IndexData::indexCount::set( size_t value )
	{
		static_cast<Ogre::IndexData*>(_native)->indexCount = value;
	}
	
	Mogre::IndexData^ IndexData::Clone( bool copyData )
	{
		return static_cast<const Ogre::IndexData*>(_native)->clone( copyData );
	}
	Mogre::IndexData^ IndexData::Clone( )
	{
		return static_cast<const Ogre::IndexData*>(_native)->clone( );
	}
	
	void IndexData::OptimiseVertexCacheTriList( )
	{
		static_cast<Ogre::IndexData*>(_native)->optimiseVertexCacheTriList( );
	}
	
	
	//Protected Declarations
	
	
	#define STLDECL_MANAGEDTYPE Mogre::HardwareBuffer::Usage
	#define STLDECL_NATIVETYPE Ogre::HardwareBuffer::Usage
	CPP_DECLARE_STLVECTOR( , BufferUsageList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	

}
