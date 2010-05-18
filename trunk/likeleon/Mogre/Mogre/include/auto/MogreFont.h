/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreFont.h"
#include "MogreResource.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	public enum class FontType
	{
		FT_TRUETYPE = Ogre::FT_TRUETYPE,
		FT_IMAGE = Ogre::FT_IMAGE
	};
	
	//################################################################
	//Font
	//################################################################
	
	public ref class Font : public Resource, public IManualResourceLoader
	{
		//Nested Types
		public: ref class CodePointRange;
		public: ref class CodePointRangeList;
	
		public: typedef Ogre::Font::CodePoint CodePoint;
	
		public: typedef Mogre::FloatRect UVRect;
	
		//################################################################
		//GlyphInfo
		//################################################################
	
		public: value class GlyphInfo
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
	
			//Public Declarations
		public:
	
	
			Mogre::Font::CodePoint codePoint;
	
			Mogre::Font::UVRect uvRect;
	
			Mogre::Real aspectRatio;
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_VALUECLASS( Font::GlyphInfo )
	
			//Protected Declarations
		protected public:
	
		};
	
		#define STLDECL_MANAGEDTYPE Pair<Mogre::Font::CodePoint, Mogre::Font::CodePoint>
		#define STLDECL_NATIVETYPE Ogre::Font::CodePointRange
		public: INC_DECLARE_STLVECTOR( CodePointRangeList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Font( CLRObject* obj ) : Resource(obj)
		{
		}
	
		virtual Ogre::ManualResourceLoader* _IManualResourceLoader_GetNativePtr() = IManualResourceLoader::_GetNativePtr;
	
	
		//Public Declarations
	public:
		Font( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual, Mogre::IManualResourceLoader^ loader );
		Font( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group, bool isManual );
		Font( Mogre::ResourceManager^ creator, String^ name, Mogre::ResourceHandle handle, String^ group );
	
	
		property bool AntialiasColour
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property String^ Source
		{
		public:
			String^ get();
		public:
			void set(String^ source);
		}
	
		property Mogre::uint TrueTypeResolution
		{
		public:
			Mogre::uint get();
		public:
			void set(Mogre::uint ttfResolution);
		}
	
		property Mogre::Real TrueTypeSize
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real ttfSize);
		}
	
		property Mogre::FontType Type
		{
		public:
			Mogre::FontType get();
		public:
			void set(Mogre::FontType ftype);
		}
	
		Mogre::Font::UVRect GetGlyphTexCoords( Mogre::Font::CodePoint id );
	
		void SetGlyphTexCoords( Mogre::Font::CodePoint id, Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2, Mogre::Real textureAspect );
	
		Mogre::Real GetGlyphAspectRatio( Mogre::Font::CodePoint id );
	
		void SetGlyphAspectRatio( Mogre::Font::CodePoint id, Mogre::Real ratio );
	
		Mogre::Font::GlyphInfo GetGlyphInfo( Mogre::Font::CodePoint id );
	
		void AddCodePointRange( Pair<Mogre::Font::CodePoint, Mogre::Font::CodePoint> range );
	
		void ClearCodePointRanges( );
	
		Mogre::Font::Const_CodePointRangeList^ GetCodePointRangeList( );
	
		Mogre::MaterialPtr^ GetMaterial( );
	
		virtual void LoadResource( Mogre::Resource^ resource );
	
		//------------------------------------------------------------
		// Implementation for IManualResourceLoader
		//------------------------------------------------------------
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Font )
	
		//Protected Declarations
	protected public:
	
	};
	
	public ref class FontPtr : public Font
	{
	public protected:
			Ogre::FontPtr* _sharedPtr;
	
		FontPtr(Ogre::FontPtr& sharedPtr) : Font( sharedPtr.getPointer() )
		{
			_sharedPtr = new Ogre::FontPtr(sharedPtr);
		}
	
		!FontPtr()
		{
			if (_sharedPtr != 0)
			{
				delete _sharedPtr;
				_sharedPtr = 0;
			}
		}
	
		~FontPtr()
		{
			this->!FontPtr();
		}
	
	public:
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR( FontPtr )
	
		static FontPtr^ FromResourcePtr( ResourcePtr^ ptr )
		{
			return (FontPtr^) ptr;
		}
	
		static operator FontPtr^ ( ResourcePtr^ ptr )
		{
			if (CLR_NULL == ptr) return nullptr;
			void* castptr = dynamic_cast<Ogre::Font*>(ptr->_native);
			if (castptr == 0) throw gcnew InvalidCastException("The underlying type of the ResourcePtr object is not of type Font.");
			return gcnew FontPtr( (Ogre::FontPtr) *(ptr->_sharedPtr) );
		}
	
		FontPtr(Font^ obj) : Font( obj->_native )
		{
			_sharedPtr = new Ogre::FontPtr( static_cast<Ogre::Font*>(obj->_native) );
		}
	
		virtual bool Equals(Object^ obj) override
		{
			FontPtr^ clr = dynamic_cast<FontPtr^>(obj);
			if (clr == CLR_NULL)
			{
				return false;
			}
	
			return (_native == clr->_native);
		}
		bool Equals(FontPtr^ obj)
		{
			if (obj == CLR_NULL)
			{
				return false;
			}
	
			return (_native == obj->_native);
		}
	
		static bool operator == (FontPtr^ val1, FontPtr^ val2)
		{
			if ((Object^)val1 == (Object^)val2) return true;
			if ((Object^)val1 == nullptr || (Object^)val2 == nullptr) return false;
			return (val1->_native == val2->_native);
		}
	
		static bool operator != (FontPtr^ val1, FontPtr^ val2)
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
	
		property Font^ Target
		{
			Font^ get()
			{
				return static_cast<Ogre::Font*>(_native);
			}
		}
	};
	
	

}
