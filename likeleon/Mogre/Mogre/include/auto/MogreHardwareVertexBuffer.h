/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreHardwareVertexBuffer.h"
#include "MogreHardwareBuffer.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	public enum class VertexElementType
	{
		VET_FLOAT1 = Ogre::VET_FLOAT1,
		VET_FLOAT2 = Ogre::VET_FLOAT2,
		VET_FLOAT3 = Ogre::VET_FLOAT3,
		VET_FLOAT4 = Ogre::VET_FLOAT4,
		VET_COLOUR = Ogre::VET_COLOUR,
		VET_SHORT1 = Ogre::VET_SHORT1,
		VET_SHORT2 = Ogre::VET_SHORT2,
		VET_SHORT3 = Ogre::VET_SHORT3,
		VET_SHORT4 = Ogre::VET_SHORT4,
		VET_UBYTE4 = Ogre::VET_UBYTE4,
		VET_COLOUR_ARGB = Ogre::VET_COLOUR_ARGB,
		VET_COLOUR_ABGR = Ogre::VET_COLOUR_ABGR
	};
	
	public enum class VertexElementSemantic
	{
		VES_POSITION = Ogre::VES_POSITION,
		VES_BLEND_WEIGHTS = Ogre::VES_BLEND_WEIGHTS,
		VES_BLEND_INDICES = Ogre::VES_BLEND_INDICES,
		VES_NORMAL = Ogre::VES_NORMAL,
		VES_DIFFUSE = Ogre::VES_DIFFUSE,
		VES_SPECULAR = Ogre::VES_SPECULAR,
		VES_TEXTURE_COORDINATES = Ogre::VES_TEXTURE_COORDINATES,
		VES_BINORMAL = Ogre::VES_BINORMAL,
		VES_TANGENT = Ogre::VES_TANGENT
	};
	
	//################################################################
	//HardwareVertexBuffer
	//################################################################
	
	public ref class HardwareVertexBuffer : public HardwareBuffer
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		HardwareVertexBuffer( CLRObject* obj ) : HardwareBuffer(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property size_t NumVertices
		{
		public:
			size_t get();
		}
	
		property size_t VertexSize
		{
		public:
			size_t get();
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( HardwareVertexBuffer )
	
		//Protected Declarations
	protected public:
	
	};
	
	public ref class HardwareVertexBufferSharedPtr : public HardwareVertexBuffer
	{
	public protected:
			Ogre::HardwareVertexBufferSharedPtr* _sharedPtr;
	
		HardwareVertexBufferSharedPtr(Ogre::HardwareVertexBufferSharedPtr& sharedPtr) : HardwareVertexBuffer( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::HardwareVertexBufferSharedPtr(sharedPtr);
		}
	
		!HardwareVertexBufferSharedPtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~HardwareVertexBufferSharedPtr()
		{
			this->!HardwareVertexBufferSharedPtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( HardwareVertexBufferSharedPtr )
	
		HardwareVertexBufferSharedPtr(HardwareVertexBuffer^ obj) : HardwareVertexBuffer( obj->_native )
		{
			_sharedPtr = new Ogre::HardwareVertexBufferSharedPtr( static_cast<Ogre::HardwareVertexBuffer*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			HardwareVertexBufferSharedPtr^ clr = dynamic_cast<HardwareVertexBufferSharedPtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(HardwareVertexBufferSharedPtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (HardwareVertexBufferSharedPtr^ val1, HardwareVertexBufferSharedPtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (HardwareVertexBufferSharedPtr^ val1, HardwareVertexBufferSharedPtr^ val2)
		{
			return !(val1 == val2);
		}
	
		virtual int GetHashCode() override
		{
			return reinterpret_cast<int>( _native );
		}
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_sharedPtr; }
		}
	
		property bool Unique
		{
			bool get()
			{
				return (*_sharedPtr).unique();
			}
		}
	
		property int UseCount
		{
			int get()
			{
				return (*_sharedPtr).useCount();
			}
		}
	
		property HardwareVertexBuffer^ Target
		{
			HardwareVertexBuffer^ get()
			{
				return static_cast<Ogre::HardwareVertexBuffer*>(_native);
			}
		}
	};
	
	
	
	        // Can't use a value class inside an array unless it's fully defined.
	        // Include the ported VertexElement definition.
	        // Update: I changed it to ref class but keep it this way in case it goes back to being value
	        #include "Custom\MogreVertexElement.i"
	      
	//################################################################
	//VertexDeclaration
	//################################################################
	
	public ref class VertexDeclaration : public Wrapper
	{
		//Nested Types
		public: ref class VertexElementList;
	
		#define STLDECL_MANAGEDTYPE Mogre::VertexElement^
		#define STLDECL_NATIVETYPE Ogre::VertexElement
		public: INC_DECLARE_STLLIST_READONLY( VertexElementList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		VertexDeclaration( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		VertexDeclaration( );
	
	
		property size_t ElementCount
		{
		public:
			size_t get();
		}
	
		property unsigned short MaxSource
		{
		public:
			unsigned short get();
		}
	
		Mogre::VertexDeclaration::Const_VertexElementList^ GetElements( );
	
		Mogre::VertexElement^ GetElement( unsigned short index );
	
		void Sort( );
	
		void CloseGapsInSource( );
	
		Mogre::VertexDeclaration^ GetAutoOrganisedDeclaration( bool skeletalAnimation, bool vertexAnimation );
	
		Mogre::VertexElement^ AddElement( unsigned short source, size_t offset, Mogre::VertexElementType theType, Mogre::VertexElementSemantic semantic, unsigned short index );
		Mogre::VertexElement^ AddElement( unsigned short source, size_t offset, Mogre::VertexElementType theType, Mogre::VertexElementSemantic semantic );
	
		Mogre::VertexElement^ InsertElement( unsigned short atPosition, unsigned short source, size_t offset, Mogre::VertexElementType theType, Mogre::VertexElementSemantic semantic, unsigned short index );
		Mogre::VertexElement^ InsertElement( unsigned short atPosition, unsigned short source, size_t offset, Mogre::VertexElementType theType, Mogre::VertexElementSemantic semantic );
	
		void RemoveElement( unsigned short elem_index );
	
		void RemoveElement( Mogre::VertexElementSemantic semantic, unsigned short index );
		void RemoveElement( Mogre::VertexElementSemantic semantic );
	
		void RemoveAllElements( );
	
		void ModifyElement( unsigned short elem_index, unsigned short source, size_t offset, Mogre::VertexElementType theType, Mogre::VertexElementSemantic semantic, unsigned short index );
		void ModifyElement( unsigned short elem_index, unsigned short source, size_t offset, Mogre::VertexElementType theType, Mogre::VertexElementSemantic semantic );
	
		Mogre::VertexElement^ FindElementBySemantic( Mogre::VertexElementSemantic sem, unsigned short index );
		Mogre::VertexElement^ FindElementBySemantic( Mogre::VertexElementSemantic sem );
	
		Mogre::VertexDeclaration::Const_VertexElementList^ FindElementsBySource( unsigned short source );
	
		size_t GetVertexSize( unsigned short source );
	
		Mogre::VertexDeclaration^ Clone( );
	
		virtual bool Equals(Object^ obj) override;
		bool Equals(VertexDeclaration^ obj);
		static bool operator == (VertexDeclaration^ obj1, VertexDeclaration^ obj2);
		static bool operator != (VertexDeclaration^ obj1, VertexDeclaration^ obj2);
	
		void CopyTo(VertexDeclaration^ dest)
		{
			if (_native == NULL) throw gcnew Exception("The underlying native object for the caller is null.");
			if (dest->_native == NULL) throw gcnew ArgumentException("The underlying native object for parameter 'dest' is null.");
	
			*(dest->_native) = *_native;
		}
	
		static bool VertexElementLess( Mogre::VertexElement^ e1, Mogre::VertexElement^ e2 );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( VertexDeclaration )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//VertexBufferBinding
	//################################################################
	
	public ref class VertexBufferBinding : public Wrapper
	{
		//Nested Types
		public: ref class VertexBufferBindingMap;
		public: ref class BindingIndexMap;
	
		#define STLDECL_MANAGEDKEY unsigned short
		#define STLDECL_MANAGEDVALUE Mogre::HardwareVertexBufferSharedPtr^
		#define STLDECL_NATIVEKEY unsigned short
		#define STLDECL_NATIVEVALUE Ogre::HardwareVertexBufferSharedPtr
		public: INC_DECLARE_STLMAP( VertexBufferBindingMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDKEY Mogre::ushort
		#define STLDECL_MANAGEDVALUE Mogre::ushort
		#define STLDECL_NATIVEKEY Ogre::ushort
		#define STLDECL_NATIVEVALUE Ogre::ushort
		public: INC_DECLARE_STLMAP( BindingIndexMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		VertexBufferBinding( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		VertexBufferBinding( );
	
	
		property size_t BufferCount
		{
		public:
			size_t get();
		}
	
		property bool HasGaps
		{
		public:
			bool get();
		}
	
		property unsigned short LastBoundIndex
		{
		public:
			unsigned short get();
		}
	
		property unsigned short NextIndex
		{
		public:
			unsigned short get();
		}
	
		void SetBinding( unsigned short index, Mogre::HardwareVertexBufferSharedPtr^ buffer );
	
		void UnsetBinding( unsigned short index );
	
		void UnsetAllBindings( );
	
		Mogre::VertexBufferBinding::Const_VertexBufferBindingMap^ GetBindings( );
	
		Mogre::HardwareVertexBufferSharedPtr^ GetBuffer( unsigned short index );
	
		bool IsBufferBound( unsigned short index );
	
		void CloseGaps( Mogre::VertexBufferBinding::BindingIndexMap^ bindingIndexMap );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( VertexBufferBinding )
	
		//Protected Declarations
	protected public:
	
	};
	

}
