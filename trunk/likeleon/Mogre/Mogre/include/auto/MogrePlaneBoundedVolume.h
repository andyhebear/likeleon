/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgrePlaneBoundedVolume.h"
#include "MogrePlane.h"

namespace Mogre
{
	//################################################################
	//PlaneBoundedVolume
	//################################################################
	
	public ref class PlaneBoundedVolume : public INativePointer
	{
		//Nested Types
		public: ref class PlaneList;
	
		#define STLDECL_MANAGEDTYPE Mogre::Plane
		#define STLDECL_NATIVETYPE Ogre::Plane
		public: INC_DECLARE_STLVECTOR( PlaneList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
		//Cached fields
		Mogre::PlaneBoundedVolume::PlaneList^ _planes;
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		PlaneBoundedVolume( Ogre::PlaneBoundedVolume* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~PlaneBoundedVolume()
		{
			this->!PlaneBoundedVolume();
		}
		!PlaneBoundedVolume()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::PlaneBoundedVolume* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		PlaneBoundedVolume( );
		PlaneBoundedVolume( Mogre::Plane::Side theOutside );
	
	
		property Mogre::PlaneBoundedVolume::PlaneList^ planes
		{
		public:
			Mogre::PlaneBoundedVolume::PlaneList^ get();
		}
	
		property Mogre::Plane::Side outside
		{
		public:
			Mogre::Plane::Side get();
		public:
			void set(Mogre::Plane::Side value);
		}
	
		bool Intersects( Mogre::AxisAlignedBox^ box );
	
		bool Intersects( Mogre::Sphere sphere );
	
		Pair<bool, Mogre::Real> Intersects( Mogre::Ray ray );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( PlaneBoundedVolume )
	
		//Protected Declarations
	protected public:
	
	};
	
	#define STLDECL_MANAGEDTYPE Mogre::PlaneBoundedVolume^
	#define STLDECL_NATIVETYPE Ogre::PlaneBoundedVolume
	INC_DECLARE_STLVECTOR( PlaneBoundedVolumeList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	

}
