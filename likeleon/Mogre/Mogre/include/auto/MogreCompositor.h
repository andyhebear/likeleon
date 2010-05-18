/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreCompositor.h"
#include "MogreResource.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//Compositor
	//################################################################
	
	public ref class Compositor : public Resource
	{
		//Nested Types
		public: ref class Techniques;
	
		#define STLDECL_MANAGEDTYPE Mogre::CompositionTechnique^
		#define STLDECL_NATIVETYPE Ogre::CompositionTechnique*
		public: INC_DECLARE_STLVECTOR( Techniques, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		public: INC_DECLARE_ITERATOR( TechniqueIterator, Ogre::Compositor::TechniqueIterator, Mogre::Compositor::Techniques, Mogre::CompositionTechnique^, Ogre::CompositionTechnique* )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Compositor( CLRObject* obj ) : Resource(obj)
		{
		}
	
	
		//Public Declarations
	public:
		Compositor( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader );
		Compositor( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual );
		Compositor( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group );
	
	
		property size_t NumSupportedTechniques
		{
		public:
			size_t get();
		}
	
		property size_t NumTechniques
		{
		public:
			size_t get();
		}
	
		Mogre::CompositionTechnique^ CreateTechnique( );
	
		void RemoveTechnique( size_t idx );
	
		Mogre::CompositionTechnique^ GetTechnique( size_t idx );
	
		void RemoveAllTechniques( );
	
		Mogre::Compositor::TechniqueIterator^ GetTechniqueIterator( );
	
		Mogre::CompositionTechnique^ GetSupportedTechnique( size_t idx );
	
		Mogre::Compositor::TechniqueIterator^ GetSupportedTechniqueIterator( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Compositor )
	
		//Protected Declarations
	protected public:
	
	};
	
	public ref class CompositorPtr : public Compositor
	{
	public protected:
			Ogre::CompositorPtr* _sharedPtr;
	
		CompositorPtr(Ogre::CompositorPtr& sharedPtr) : Compositor( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::CompositorPtr(sharedPtr);
		}
	
		!CompositorPtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~CompositorPtr()
		{
			this->!CompositorPtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( CompositorPtr )
	
		static CompositorPtr^ FromResourcePtr( ResourcePtr^ ptr )
		{
			return (CompositorPtr^) ptr;
		}
	
		static operator CompositorPtr^ ( ResourcePtr^ ptr )
		{
			if (CLR_NULL == ptr) return nullptr;
			void* castptr = dynamic_cast<Ogre::Compositor*>(ptr->_native);
			if (castptr == 0) throw gcnew InvalidCastException("The underlying type of the ResourcePtr object is not of type Compositor.");
			return gcnew CompositorPtr( (Ogre::CompositorPtr) *(ptr->_sharedPtr) );
		}
	
		CompositorPtr(Compositor^ obj) : Compositor( obj->_native )
		{
			_sharedPtr = new Ogre::CompositorPtr( static_cast<Ogre::Compositor*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			CompositorPtr^ clr = dynamic_cast<CompositorPtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(CompositorPtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (CompositorPtr^ val1, CompositorPtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (CompositorPtr^ val1, CompositorPtr^ val2)
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
	
		property Compositor^ Target
		{
			Compositor^ get()
			{
				return static_cast<Ogre::Compositor*>(_native);
			}
		}
	};
	
	

}
