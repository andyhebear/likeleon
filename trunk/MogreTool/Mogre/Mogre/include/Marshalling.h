#pragma once

#include <vcclr.h>
#include "OgrePrerequisites.h"
#include "OgreUTFString.h"
#include "Custom\MogrePair.h"

namespace Mogre
{
	using namespace System;

	typedef System::Runtime::InteropServices::OutAttribute OutAttribute;
	typedef System::Runtime::InteropServices::StructLayoutAttribute StructLayoutAttribute;
	typedef System::Runtime::InteropServices::LayoutKind LayoutKind;
	typedef System::Runtime::InteropServices::FieldOffsetAttribute FieldOffsetAttribute;
	typedef System::Runtime::InteropServices::Marshal Marshal;

	#define CLR_NULL ((Object^)nullptr)

	#define DECLARE_NATIVE_STRING(nvar,mstr)								\
		Ogre::String nvar;													\
		InitNativeStringWithCLRString(nvar,mstr);
	
	#define DECLARE_NATIVE_UTFSTRING(utfnvar,m_str)								\
		Ogre::UTFString utfnvar;													\
		InitNativeUTFStringWithCLRString(utfnvar,m_str);

	#define SET_NATIVE_STRING(nvar,mstr)		InitNativeStringWithCLRString(nvar,mstr);
	#define TO_CLR_STRING(ogrestr)			gcnew System::String((ogrestr).c_str())
	#define UTF_TO_CLR_STRING(ogrestr)			gcnew System::String((ogrestr).asWStr_c_str())

	void InitNativeStringWithCLRString(Ogre::String& ostr, System::String^ mstr);
	void InitNativeUTFStringWithCLRString(Ogre::UTFString& ostr, System::String^ mstr);


	// Most of Ogre classes that are wrapped by Mogre derive from CLRObject.
	// It acts as the connection between the .NET objects and the Ogre objects that they wrap.
	// Without it, a new .NET object will be created each time an Ogre object is requested.
	// In order to use it, a rebuild of OgreMain, the renderers and the plugins is required.
	// It doesn't interfere with the Ogre code; native applications that use Ogre will link to the
	// new DLLs without problems.
	#if USE_CLROBJECT_CLASS
		#define RETURN_CLR_OBJECT(T,n)				\
				if (n == 0) return nullptr;			\
				Object^ clr = *n;					\
				if (nullptr == clr) {				\
					n->_Init_CLRObject();			\
					clr = *n;						\
				}									\
				return static_cast<T^>(clr);
	#else
		#define RETURN_CLR_OBJECT(T,n) return gcnew T( n );
	#endif

	#define DEFINE_MANAGED_NATIVE_CONVERSIONS(T)						\
			static operator T^ (const Ogre::T* t) {						\
				RETURN_CLR_OBJECT(T, (const_cast<Ogre::T*>(t)) )		\
			}															\
			static operator T^ (const Ogre::T& t) {						\
				RETURN_CLR_OBJECT(T, (&const_cast<Ogre::T&>(t)) )		\
			}															\
			inline static operator Ogre::T* (T^ t) {					\
				return (t == CLR_NULL) ? 0 : static_cast<Ogre::T*>(t->_native);		\
			}															\
			inline static operator Ogre::T& (T^ t) {					\
				return *static_cast<Ogre::T*>(t->_native);				\
			}

	#define RETURN_CLR_OBJECT_FOR_INTERFACE(MT, NT, n)			\
			if (0 == n) return nullptr;							\
			CLRObject* clr_obj = dynamic_cast<CLRObject*>(n);	\
			if (0 == clr_obj)									\
				throw gcnew System::Exception("The native class that implements " #NT " isn't a subclass of CLRObject. Cannot create the CLR wrapper object.");	\
			Object^ clr = *clr_obj;								\
			if (nullptr == clr) {								\
				clr_obj->_Init_CLRObject();						\
				clr = *clr_obj;									\
			}													\
			return static_cast<MT^>(clr);

	#define DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE(MT, NT)				\
			static operator MT^ (const NT* t) {									\
				RETURN_CLR_OBJECT_FOR_INTERFACE(MT, NT, (const_cast<NT*>(t)) )	\
			}																	\
			inline static operator NT* (MT^ t) {								\
				return (t == CLR_NULL) ? 0 : t->_GetNativePtr();				\
			}

	#define DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_SHAREDPTR(T)					\
			static operator T^ (const Ogre::T& ptr) {							\
				if (ptr.isNull()) return nullptr;								\
				return gcnew T(const_cast<Ogre::T&>(ptr));						\
			}																	\
			static operator Ogre::T& (T^ t) {									\
				if (CLR_NULL == t) return *((gcnew T(Ogre::T()))->_sharedPtr);	\
				return *(t->_sharedPtr);										\
			}																	\
			static operator Ogre::T* (T^ t) {									\
				if (CLR_NULL == t) return (gcnew T(Ogre::T()))->_sharedPtr;		\
				return t->_sharedPtr;											\
			}

	#define DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_VALUECLASS(T)			\
			inline static operator Ogre::T& (T& obj)					\
			{															\
				return reinterpret_cast<Ogre::T&>(obj);					\
			}															\
			inline static operator const T& ( const Ogre::T& obj)		\
			{															\
				return reinterpret_cast<const T&>(obj);					\
			}															\
			inline static operator const T& ( const Ogre::T* pobj)		\
			{															\
				return reinterpret_cast<const T&>(*pobj);				\
			}

	#define DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS(MT, NT)	\
			inline static operator NT& (MT mobj)								\
			{																	\
				return *mobj._native;											\
			}																	\
			inline static operator NT* (MT mobj)								\
			{																	\
				return mobj._native;											\
			}																	\
			inline static operator MT ( const NT& obj)							\
			{																	\
				MT clrobj;														\
				clrobj._native = const_cast<NT*>(&obj);							\
				return clrobj;													\
			}																	\
			inline static operator MT ( const NT* pobj)							\
			{																	\
				MT clrobj;														\
				clrobj._native = const_cast<NT*>(pobj);							\
				return clrobj;													\
			}

	#define DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE(T)			\
			static operator T^ (const Ogre::T* ct) {					\
				Ogre::T* t = const_cast<Ogre::T*>(ct);					\
				if (t)													\
				{														\
					Object^ clr = t->_CLRHandle;						\
					if (CLR_NULL == clr)								\
					{													\
						clr = gcnew T(t);								\
						t->_CLRHandle = clr;							\
					}													\
					return static_cast<T^>(clr);						\
				}														\
				else													\
					return nullptr;										\
			}															\
			static operator T^ (const Ogre::T& ct) {					\
				Ogre::T* t = &const_cast<Ogre::T&>(ct);					\
				Object^ clr = t->_CLRHandle;							\
				if (CLR_NULL == clr)									\
				{														\
					clr = gcnew T(t);									\
					t->_CLRHandle = clr;								\
				}														\
				return static_cast<T^>(clr);							\
			}															\
			inline static operator Ogre::T* (T^ t) {					\
				return (t == CLR_NULL) ? 0 : t->_native;				\
			}															\
			inline static operator Ogre::T& (T^ t) {					\
				return *t->_native;										\
			}

	#define DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER(T)		\
			inline static operator T^ (const Ogre::T* t) {				\
				if (t)													\
					return gcnew T(const_cast<Ogre::T*>(t));			\
				else													\
					return nullptr;										\
			}															\
			inline static operator T^ (const Ogre::T& t) {				\
				return gcnew T(&const_cast<Ogre::T&>(t));				\
			}															\
			inline static operator Ogre::T* (T^ t) {					\
			return (t == CLR_NULL) ? 0 : static_cast<Ogre::T*>(t->_native);		\
			}															\
			inline static operator Ogre::T& (T^ t) {					\
				return *static_cast<Ogre::T*>(t->_native);				\
			}

	#define DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER_EXPLICIT(MT, NT)		\
			inline static operator MT^ (const Ogre::NT* t) {			\
				if (t)													\
					return gcnew MT(const_cast<Ogre::NT*>(t));			\
				else													\
					return nullptr;										\
			}															\
			inline static operator MT^ (const Ogre::NT& t) {			\
				return gcnew MT(&const_cast<Ogre::NT&>(t));				\
			}															\
			inline static operator Ogre::NT* (MT^ t) {					\
			return (t == CLR_NULL) ? 0 : static_cast<Ogre::NT*>(t->_native);		\
			}															\
			inline static operator Ogre::NT& (MT^ t) {					\
				return *static_cast<Ogre::NT*>(t->_native);				\
			}


	// ToNative and ToManaged are used to simplify conversions inside templates

	template <typename M, typename N>
	inline N ToNative(M value)
	{
		return (N)value;
	}

	template <typename M, typename N>
	inline M ToManaged(const N& value)
	{
		return (M)const_cast<N&>(value);
	}

	template <>
	inline Ogre::String ToNative(System::String^ str)
	{
		DECLARE_NATIVE_STRING( o_str, str )
		return o_str;
	}

	template <>
	inline System::String^ ToManaged(const Ogre::String& str)
	{
		return TO_CLR_STRING(str);
	}

	template <typename M, typename N>
	inline std::pair<typename N::first_type, typename N::second_type> ToNative(Pair<typename M::first_type, typename M::second_type> value)
	{
		return std::pair<N::first_type, N::second_type>(ToNative<M::first_type,N::first_type>(value.first), ToNative<M::second_type,N::second_type>(value.second));
	}

	template <typename M, typename N>
	inline Pair<typename M::first_type, typename M::second_type> ToManaged(const std::pair<typename N::first_type, typename N::second_type>& value)
	{
		return Pair<typename M::first_type, typename M::second_type>(ToManaged<M::first_type,N::first_type>(value.first), ToManaged<M::second_type,N::second_type>(value.second));
	}


	template <typename MElem, typename NVec>
	array<MElem>^ GetArrayFromVector(const NVec& vec)
	{
		size_t count = vec.size();
		array<MElem>^ arr = gcnew array<MElem>(count);

		for (size_t i=0; i < count; i++)
			arr[i] = ToManaged<MElem, NVec::value_type>( vec[i] );

		return arr;
	}

	template <typename MElem, typename NList>
	array<MElem>^ GetArrayFromList(const NList& list)
	{
		size_t count = list.size();
		array<MElem>^ arr = gcnew array<MElem>(count);

        NList::const_iterator i;
		size_t arr_i;

        for (arr_i=0, i = list.begin(); i != list.end(); ++i, ++arr_i)
			arr[arr_i] = ToManaged<MElem, NList::value_type>( *i );

		return arr;
	}

	template <typename MKey, typename MVal, typename NMap>
	Collections::Generic::SortedList<MKey, MVal>^ GetSortedListFromMap(const NMap& map)
	{
		size_t count = map.size();
		Collections::Generic::SortedList<MKey, MVal>^ list = gcnew Collections::Generic::SortedList<MKey, MVal>(count);

        NMap::const_iterator i;
        for (i = map.begin(); i != map.end(); ++i)
			list->Add( ToManaged<MKey, NMap::key_type>( i->first ), ToManaged<MVal, NMap::mapped_type>( i->second ));

		return list;
	}

	template <typename MKey, typename MVal, typename NMap>
	Collections::Generic::SortedList<MKey, Collections::Generic::List<MVal>^>^ GetSortedListFromMultiMap(const NMap& mmap)
	{
		Collections::Generic::SortedList<MKey, Collections::Generic::List<MVal>^>^ list = gcnew Collections::Generic::SortedList<MKey, Collections::Generic::List<MVal>^>();
		Collections::Generic::List<MVal>^ valList;

        NMap::const_iterator i;
        for (i = mmap.begin(); i != mmap.end(); ++i)
		{
			if (!(list->TryGetValue(i->first, valList)))
			{
				valList = gcnew Collections::Generic::List<MVal>();
				list->Add( ToManaged<MKey, NMap::key_type>( i->first ), valList);
			}

			valList->Add( ToManaged<MVal, NMap::mapped_type>( i->second ));
		}

		return list;
	}

	template <typename NList, typename MElem>
	void FillListFromGenericList( NList& nlist, Collections::Generic::List<MElem>^ genlist )
	{
		int count = genlist->Count;
		for (int i=0; i < count; i++)
		{
			nlist.push_back( ToNative<MElem, NList::value_type>( genlist[i] ));
		}
	}

	template <typename NList, typename MElem>
	void FillListFromGenericList( NList& nlist, array<MElem>^ arr )
	{
		for (int i=0; i < arr->Length; i++)
		{
			nlist.push_back( ToNative<MElem, NList::value_type>( arr[i] ));
		}
	}

	template <typename NMap, typename MKey, typename MVal>
	void FillMapFromSortedList( NMap& map, Collections::Generic::SortedList<MKey,MVal>^ list )
	{
		int count = list->Count;
		for (int i=0; i < count; i++)
		{
			map.insert( NMap::value_type( ToNative<MKey, NMap::key_type>( list->Keys[i] ), ToNative<MVal, NMap::mapped_type>( list->Values[i] ) ) );
		}
	}

	template <typename N, typename MElem>
	void FillNativeArrayFromCLRArray( N* pbuf, array<MElem>^ arr )
	{
		for (int i=0; i < arr->Length; i++)
			pbuf[i] = ToNative<MElem, N>( arr[i] );
	}

	void FillMapFromNameValueCollection( std::map<Ogre::String,Ogre::String>& map, Collections::Specialized::NameValueCollection^ col );

	template <typename MElem, typename NElem>
	array<MElem>^ GetArrayFromNativeArray(const NElem* ptr, int len)
	{
		array<MElem>^ arr = gcnew array<MElem>(len);
		for (int i=0; i < len; i++)
			arr[i] = ToManaged<MElem, NElem>( ptr[i] );

		return arr;
	}

	template <typename MElem, typename NElem>
	array<MElem>^ GetValueArrayFromNativeArray(const NElem* src, int len)
	{
		STATIC_ASSERT( sizeof(MElem) == sizeof(NElem) )

		array<MElem>^ arr = gcnew array<MElem>(len);
		pin_ptr<MElem> p_arr = &arr[0];
        memcpy( p_arr, src, len*sizeof(NElem) );
		return arr;
	}
}