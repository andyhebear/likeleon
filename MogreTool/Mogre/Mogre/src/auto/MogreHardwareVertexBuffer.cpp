/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreHardwareVertexBuffer.h"

namespace Mogre
{
	//################################################################
	//HardwareVertexBuffer
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	size_t HardwareVertexBuffer::NumVertices::get()
	{
		return static_cast<const Ogre::HardwareVertexBuffer*>(_native)->getNumVertices( );
	}
	
	size_t HardwareVertexBuffer::VertexSize::get()
	{
		return static_cast<const Ogre::HardwareVertexBuffer*>(_native)->getVertexSize( );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//VertexDeclaration
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDTYPE Mogre::VertexElement^
	#define STLDECL_NATIVETYPE Ogre::VertexElement
	CPP_DECLARE_STLLIST_READONLY( VertexDeclaration::, VertexElementList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	VertexDeclaration::VertexDeclaration( ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::VertexDeclaration();
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	size_t VertexDeclaration::ElementCount::get()
	{
		return static_cast<Ogre::VertexDeclaration*>(_native)->getElementCount( );
	}
	
	unsigned short VertexDeclaration::MaxSource::get()
	{
		return static_cast<const Ogre::VertexDeclaration*>(_native)->getMaxSource( );
	}
	
	Mogre::VertexDeclaration::Const_VertexElementList^ VertexDeclaration::GetElements( )
	{
		return static_cast<const Ogre::VertexDeclaration*>(_native)->getElements( );
	}
	
	Mogre::VertexElement^ VertexDeclaration::GetElement( unsigned short index )
	{
		return static_cast<Ogre::VertexDeclaration*>(_native)->getElement( index );
	}
	
	void VertexDeclaration::Sort( )
	{
		static_cast<Ogre::VertexDeclaration*>(_native)->sort( );
	}
	
	void VertexDeclaration::CloseGapsInSource( )
	{
		static_cast<Ogre::VertexDeclaration*>(_native)->closeGapsInSource( );
	}
	
	Mogre::VertexDeclaration^ VertexDeclaration::GetAutoOrganisedDeclaration( bool skeletalAnimation, bool vertexAnimation )
	{
		return static_cast<Ogre::VertexDeclaration*>(_native)->getAutoOrganisedDeclaration( skeletalAnimation, vertexAnimation );
	}
	
	Mogre::VertexElement^ VertexDeclaration::AddElement( unsigned short source, size_t offset, Mogre::VertexElementType theType, Mogre::VertexElementSemantic semantic, unsigned short index )
	{
		return static_cast<Ogre::VertexDeclaration*>(_native)->addElement( source, offset, (Ogre::VertexElementType)theType, (Ogre::VertexElementSemantic)semantic, index );
	}
	Mogre::VertexElement^ VertexDeclaration::AddElement( unsigned short source, size_t offset, Mogre::VertexElementType theType, Mogre::VertexElementSemantic semantic )
	{
		return static_cast<Ogre::VertexDeclaration*>(_native)->addElement( source, offset, (Ogre::VertexElementType)theType, (Ogre::VertexElementSemantic)semantic );
	}
	
	Mogre::VertexElement^ VertexDeclaration::InsertElement( unsigned short atPosition, unsigned short source, size_t offset, Mogre::VertexElementType theType, Mogre::VertexElementSemantic semantic, unsigned short index )
	{
		return static_cast<Ogre::VertexDeclaration*>(_native)->insertElement( atPosition, source, offset, (Ogre::VertexElementType)theType, (Ogre::VertexElementSemantic)semantic, index );
	}
	Mogre::VertexElement^ VertexDeclaration::InsertElement( unsigned short atPosition, unsigned short source, size_t offset, Mogre::VertexElementType theType, Mogre::VertexElementSemantic semantic )
	{
		return static_cast<Ogre::VertexDeclaration*>(_native)->insertElement( atPosition, source, offset, (Ogre::VertexElementType)theType, (Ogre::VertexElementSemantic)semantic );
	}
	
	void VertexDeclaration::RemoveElement( unsigned short elem_index )
	{
		static_cast<Ogre::VertexDeclaration*>(_native)->removeElement( elem_index );
	}
	
	void VertexDeclaration::RemoveElement( Mogre::VertexElementSemantic semantic, unsigned short index )
	{
		static_cast<Ogre::VertexDeclaration*>(_native)->removeElement( (Ogre::VertexElementSemantic)semantic, index );
	}
	void VertexDeclaration::RemoveElement( Mogre::VertexElementSemantic semantic )
	{
		static_cast<Ogre::VertexDeclaration*>(_native)->removeElement( (Ogre::VertexElementSemantic)semantic );
	}
	
	void VertexDeclaration::RemoveAllElements( )
	{
		static_cast<Ogre::VertexDeclaration*>(_native)->removeAllElements( );
	}
	
	void VertexDeclaration::ModifyElement( unsigned short elem_index, unsigned short source, size_t offset, Mogre::VertexElementType theType, Mogre::VertexElementSemantic semantic, unsigned short index )
	{
		static_cast<Ogre::VertexDeclaration*>(_native)->modifyElement( elem_index, source, offset, (Ogre::VertexElementType)theType, (Ogre::VertexElementSemantic)semantic, index );
	}
	void VertexDeclaration::ModifyElement( unsigned short elem_index, unsigned short source, size_t offset, Mogre::VertexElementType theType, Mogre::VertexElementSemantic semantic )
	{
		static_cast<Ogre::VertexDeclaration*>(_native)->modifyElement( elem_index, source, offset, (Ogre::VertexElementType)theType, (Ogre::VertexElementSemantic)semantic );
	}
	
	Mogre::VertexElement^ VertexDeclaration::FindElementBySemantic( Mogre::VertexElementSemantic sem, unsigned short index )
	{
		return static_cast<Ogre::VertexDeclaration*>(_native)->findElementBySemantic( (Ogre::VertexElementSemantic)sem, index );
	}
	Mogre::VertexElement^ VertexDeclaration::FindElementBySemantic( Mogre::VertexElementSemantic sem )
	{
		return static_cast<Ogre::VertexDeclaration*>(_native)->findElementBySemantic( (Ogre::VertexElementSemantic)sem );
	}
	
	Mogre::VertexDeclaration::Const_VertexElementList^ VertexDeclaration::FindElementsBySource( unsigned short source )
	{
		return Mogre::VertexDeclaration::VertexElementList::ByValue( static_cast<Ogre::VertexDeclaration*>(_native)->findElementsBySource( source ) )->ReadOnlyInstance;
	}
	
	size_t VertexDeclaration::GetVertexSize( unsigned short source )
	{
		return static_cast<Ogre::VertexDeclaration*>(_native)->getVertexSize( source );
	}
	
	Mogre::VertexDeclaration^ VertexDeclaration::Clone( )
	{
		return static_cast<Ogre::VertexDeclaration*>(_native)->clone( );
	}
	
	bool VertexDeclaration::Equals(Object^ obj)
	{
	    VertexDeclaration^ clr = dynamic_cast<VertexDeclaration^>(obj);
	    if (clr == CLR_NULL)
	    {
	        return false;
	    }
	
	    if (_native == NULL) throw gcnew Exception("The underlying native object for the caller is null.");
	    if (clr->_native == NULL) throw gcnew ArgumentException("The underlying native object for parameter 'obj' is null.");
	
	    return *(static_cast<Ogre::VertexDeclaration*>(_native)) == *(static_cast<Ogre::VertexDeclaration*>(clr->_native));
	}
	
	bool VertexDeclaration::Equals(VertexDeclaration^ obj)
	{
	    if (obj == CLR_NULL)
	    {
	        return false;
	    }
	
	    if (_native == NULL) throw gcnew Exception("The underlying native object for the caller is null.");
	    if (obj->_native == NULL) throw gcnew ArgumentException("The underlying native object for parameter 'obj' is null.");
	
	    return *(static_cast<Ogre::VertexDeclaration*>(_native)) == *(static_cast<Ogre::VertexDeclaration*>(obj->_native));
	}
	
	bool VertexDeclaration::operator ==(VertexDeclaration^ obj1, VertexDeclaration^ obj2)
	{
		if ((Object^)obj1 == (Object^)obj2) return true;
		if ((Object^)obj1 == nullptr || (Object^)obj2 == nullptr) return false;
	
		return obj1->Equals(obj2);
	}
	
	bool VertexDeclaration::operator !=(VertexDeclaration^ obj1, VertexDeclaration^ obj2)
	{
		return !(obj1 == obj2);
	}
	
	
	bool VertexDeclaration::VertexElementLess( Mogre::VertexElement^ e1, Mogre::VertexElement^ e2 )
	{
		pin_ptr<Ogre::VertexElement> p_e1 = interior_ptr<Ogre::VertexElement>(&e1->data);
		pin_ptr<Ogre::VertexElement> p_e2 = interior_ptr<Ogre::VertexElement>(&e2->data);
	
		return Ogre::VertexDeclaration::vertexElementLess( *p_e1, *p_e2 );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//VertexBufferBinding
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDKEY unsigned short
	#define STLDECL_MANAGEDVALUE Mogre::HardwareVertexBufferSharedPtr^
	#define STLDECL_NATIVEKEY unsigned short
	#define STLDECL_NATIVEVALUE Ogre::HardwareVertexBufferSharedPtr
	CPP_DECLARE_STLMAP( VertexBufferBinding::, VertexBufferBindingMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDKEY Mogre::ushort
	#define STLDECL_MANAGEDVALUE Mogre::ushort
	#define STLDECL_NATIVEKEY Ogre::ushort
	#define STLDECL_NATIVEVALUE Ogre::ushort
	CPP_DECLARE_STLMAP( VertexBufferBinding::, BindingIndexMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	VertexBufferBinding::VertexBufferBinding( ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::VertexBufferBinding();
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	size_t VertexBufferBinding::BufferCount::get()
	{
		return static_cast<const Ogre::VertexBufferBinding*>(_native)->getBufferCount( );
	}
	
	bool VertexBufferBinding::HasGaps::get()
	{
		return static_cast<const Ogre::VertexBufferBinding*>(_native)->hasGaps( );
	}
	
	unsigned short VertexBufferBinding::LastBoundIndex::get()
	{
		return static_cast<const Ogre::VertexBufferBinding*>(_native)->getLastBoundIndex( );
	}
	
	unsigned short VertexBufferBinding::NextIndex::get()
	{
		return static_cast<const Ogre::VertexBufferBinding*>(_native)->getNextIndex( );
	}
	
	void VertexBufferBinding::SetBinding( unsigned short index, Mogre::HardwareVertexBufferSharedPtr^ buffer )
	{
		static_cast<Ogre::VertexBufferBinding*>(_native)->setBinding( index, (const Ogre::HardwareVertexBufferSharedPtr&)buffer );
	}
	
	void VertexBufferBinding::UnsetBinding( unsigned short index )
	{
		static_cast<Ogre::VertexBufferBinding*>(_native)->unsetBinding( index );
	}
	
	void VertexBufferBinding::UnsetAllBindings( )
	{
		static_cast<Ogre::VertexBufferBinding*>(_native)->unsetAllBindings( );
	}
	
	Mogre::VertexBufferBinding::Const_VertexBufferBindingMap^ VertexBufferBinding::GetBindings( )
	{
		return static_cast<const Ogre::VertexBufferBinding*>(_native)->getBindings( );
	}
	
	Mogre::HardwareVertexBufferSharedPtr^ VertexBufferBinding::GetBuffer( unsigned short index )
	{
		return static_cast<const Ogre::VertexBufferBinding*>(_native)->getBuffer( index );
	}
	
	bool VertexBufferBinding::IsBufferBound( unsigned short index )
	{
		return static_cast<const Ogre::VertexBufferBinding*>(_native)->isBufferBound( index );
	}
	
	void VertexBufferBinding::CloseGaps( Mogre::VertexBufferBinding::BindingIndexMap^ bindingIndexMap )
	{
		static_cast<Ogre::VertexBufferBinding*>(_native)->closeGaps( bindingIndexMap );
	}
	
	
	//Protected Declarations
	
	

}
