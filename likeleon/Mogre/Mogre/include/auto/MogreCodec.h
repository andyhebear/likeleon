/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreCodec.h"
#include "MogrePrerequisites.h"
#include "MogreStringVector.h"

namespace Mogre
{
	//################################################################
	//Codec
	//################################################################
	
	public ref class Codec : public Wrapper
	{
		//Nested Types
		public: ref class DecodeResult;
		public: ref class CodecData;
	
		//################################################################
		//CodecData
		//################################################################
	
		public: ref class CodecData : public Wrapper
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			CodecData( CLRObject* obj ) : Wrapper(obj)
			{
			}
	
	
			//Public Declarations
		public:
			CodecData();
	
	
			String^ DataType( );
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS( Codec::CodecData )
	
			//Protected Declarations
		protected public:
	
		};
	
		public: ref class CodecDataPtr : public CodecData
		{
		public protected:
				Ogre::Codec::CodecDataPtr* _sharedPtr;
	
			CodecDataPtr(Ogre::Codec::CodecDataPtr& sharedPtr) : CodecData( sharedPtr.getPointer() )
			{
				_sharedPtr = new Ogre::Codec::CodecDataPtr(sharedPtr);
			}
	
			!CodecDataPtr()
			{
				if (_sharedPtr != 0)
				{
					delete _sharedPtr;
					_sharedPtr = 0;
				}
			}
	
			~CodecDataPtr()
			{
				this->!CodecDataPtr();
			}
	
		public:
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( Codec::CodecDataPtr )
	
			CodecDataPtr(CodecData^ obj) : CodecData( obj->_native )
			{
				_sharedPtr = new Ogre::Codec::CodecDataPtr( static_cast<Ogre::Codec::CodecData*>(obj->_native) );
			}
	
			virtual bool Equals(Object^ obj) override
			{
				CodecDataPtr^ clr = dynamic_cast<CodecDataPtr^>(obj);
				if (clr == CLR_NULL)
				{
					return false;
				}
	
				return (_native == clr->_native);
			}
			bool Equals(CodecDataPtr^ obj)
			{
				if (obj == CLR_NULL)
				{
					return false;
				}
	
				return (_native == obj->_native);
			}
	
			static bool operator == (CodecDataPtr^ val1, CodecDataPtr^ val2)
			{
				if ((Object^)val1 == (Object^)val2) return true;
				if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
				return (val1->_native == val2->_native);
			}
	
			static bool operator != (CodecDataPtr^ val1, CodecDataPtr^ val2)
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
	
			property CodecData^ Target
			{
				CodecData^ get()
				{
					return static_cast<Ogre::Codec::CodecData*>(_native);
				}
			}
		};
		
	
		public: INC_DECLARE_MAP_ITERATOR_NOCONSTRUCTOR( CodecIterator, Ogre::Codec::CodecIterator, Mogre::Codec::CodecList, Mogre::Codec^, Ogre::Codec*, String^, Ogre::String )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Codec( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property String^ DataType
		{
		public:
			String^ get();
		}
	
		property String^ Type
		{
		public:
			String^ get();
		}
	
		Mogre::DataStreamPtr^ Code( Mogre::MemoryDataStreamPtr^ input, Mogre::Codec::CodecDataPtr^ pData );
	
		void CodeToFile( Mogre::MemoryDataStreamPtr^ input, String^ outFileName, Mogre::Codec::CodecDataPtr^ pData );
	
		Pair<Mogre::MemoryDataStreamPtr^, Mogre::Codec::CodecDataPtr^> Decode( Mogre::DataStreamPtr^ input );
	
		static void RegisterCodec( Mogre::Codec^ pCodec );
	
		static void UnRegisterCodec( Mogre::Codec^ pCodec );
	
		static Mogre::Codec::CodecIterator^ GetCodecIterator( );
	
		static Mogre::StringVector^ GetExtensions( );
	
		static Mogre::Codec^ GetCodec( String^ extension );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Codec )
	
		//Protected Declarations
	protected public:
	
	};
	

}
