/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreArchive.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//FileInfo_NativePtr
	//################################################################
	
	public value class FileInfo_NativePtr
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		Ogre::FileInfo* _native;
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		property Mogre::Archive^ archive
		{
		public:
			Mogre::Archive^ get();
		public:
			void set(Mogre::Archive^ value);
		}
	
		property String^ filename
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		property String^ path
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		property String^ basename
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		property size_t compressedSize
		{
		public:
			size_t get();
		public:
			void set(size_t value);
		}
	
		property size_t uncompressedSize
		{
		public:
			size_t get();
		public:
			void set(size_t value);
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( FileInfo_NativePtr, Ogre::FileInfo )
	
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_native; }
		}
	
		static FileInfo_NativePtr Create();
	
		void DestroyNativePtr()
		{
			if (_native)  { delete _native; _native = 0; }
		}
	
		property bool IsNull
		{
			bool get() { return (_native == 0); }
		}
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//Archive
	//################################################################
	
	public ref class Archive : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Archive( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property bool IsCaseSensitive
		{
		public:
			bool get();
		}
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		property String^ Type
		{
		public:
			String^ get();
		}
	
		void Load( );
	
		void Unload( );
	
		Mogre::DataStreamPtr^ Open( String^ filename );
	
		Mogre::StringVectorPtr^ List( bool recursive, bool dirs );
		Mogre::StringVectorPtr^ List( bool recursive );
		Mogre::StringVectorPtr^ List( );
	
		Mogre::FileInfoListPtr^ ListFileInfo( bool recursive, bool dirs );
		Mogre::FileInfoListPtr^ ListFileInfo( bool recursive );
		Mogre::FileInfoListPtr^ ListFileInfo( );
	
		Mogre::StringVectorPtr^ Find( String^ pattern, bool recursive, bool dirs );
		Mogre::StringVectorPtr^ Find( String^ pattern, bool recursive );
		Mogre::StringVectorPtr^ Find( String^ pattern );
	
		bool Exists( String^ filename );
	
		Mogre::FileInfoListPtr^ FindFileInfo( String^ pattern, bool recursive, bool dirs );
		Mogre::FileInfoListPtr^ FindFileInfo( String^ pattern, bool recursive );
		Mogre::FileInfoListPtr^ FindFileInfo( String^ pattern );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Archive )
	
		//Protected Declarations
	protected public:
	
	};
	
	#define STLDECL_MANAGEDTYPE Mogre::FileInfo_NativePtr
	#define STLDECL_NATIVETYPE Ogre::FileInfo
	INC_DECLARE_STLVECTOR( FileInfoList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	public ref class FileInfoListPtr : public FileInfoList
	{
	public protected:
			Ogre::FileInfoListPtr* _sharedPtr;
	
		FileInfoListPtr(Ogre::FileInfoListPtr& sharedPtr) : FileInfoList( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::FileInfoListPtr(sharedPtr);
		}
	
		!FileInfoListPtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~FileInfoListPtr()
		{
			this->!FileInfoListPtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( FileInfoListPtr )
	
		FileInfoListPtr(FileInfoList^ obj) : FileInfoList( obj->_native )
		{
			_sharedPtr = new Ogre::FileInfoListPtr( static_cast<Ogre::FileInfoList*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			FileInfoListPtr^ clr = dynamic_cast<FileInfoListPtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(FileInfoListPtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (FileInfoListPtr^ val1, FileInfoListPtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (FileInfoListPtr^ val1, FileInfoListPtr^ val2)
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
	
		property FileInfoList^ Target
		{
			FileInfoList^ get()
			{
				return static_cast<Ogre::FileInfoList*>(_native);
			}
		}
	};
	
	

}
