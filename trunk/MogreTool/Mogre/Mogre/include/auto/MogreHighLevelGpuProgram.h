/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreHighLevelGpuProgram.h"
#include "MogreGpuProgram.h"

namespace Mogre
{
	//################################################################
	//HighLevelGpuProgram
	//################################################################
	
	public ref class HighLevelGpuProgram : public GpuProgram
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		HighLevelGpuProgram( CLRObject* obj ) : GpuProgram(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property Mogre::GpuNamedConstants_NativePtr ConstantDefinitions
		{
		public:
			Mogre::GpuNamedConstants_NativePtr get();
		}
	
		Mogre::GpuProgramParametersSharedPtr^ CreateParameters( );
	
		Mogre::GpuProgram^ _getBindingDelegate( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( HighLevelGpuProgram )
	
		//Protected Declarations
	protected public:
	
	};
	
	public ref class HighLevelGpuProgramPtr : public HighLevelGpuProgram
	{
	public protected:
			Ogre::HighLevelGpuProgramPtr* _sharedPtr;
	
		HighLevelGpuProgramPtr(Ogre::HighLevelGpuProgramPtr& sharedPtr) : HighLevelGpuProgram( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::HighLevelGpuProgramPtr(sharedPtr);
		}
	
		!HighLevelGpuProgramPtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~HighLevelGpuProgramPtr()
		{
			this->!HighLevelGpuProgramPtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( HighLevelGpuProgramPtr )
	
		HighLevelGpuProgramPtr(HighLevelGpuProgram^ obj) : HighLevelGpuProgram( obj->_native )
		{
			_sharedPtr = new Ogre::HighLevelGpuProgramPtr( static_cast<Ogre::HighLevelGpuProgram*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			HighLevelGpuProgramPtr^ clr = dynamic_cast<HighLevelGpuProgramPtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(HighLevelGpuProgramPtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (HighLevelGpuProgramPtr^ val1, HighLevelGpuProgramPtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (HighLevelGpuProgramPtr^ val1, HighLevelGpuProgramPtr^ val2)
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
	
		property HighLevelGpuProgram^ Target
		{
			HighLevelGpuProgram^ get()
			{
				return static_cast<Ogre::HighLevelGpuProgram*>(_native);
			}
		}
	};
	
	

}
