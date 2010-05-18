/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreSimpleSpline.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//SimpleSpline
	//################################################################
	
	public ref class SimpleSpline : public INativePointer
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		SimpleSpline( Ogre::SimpleSpline* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~SimpleSpline()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::SimpleSpline* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		SimpleSpline( );
	
	
		property unsigned short NumPoints
		{
		public:
			unsigned short get();
		}
	
		void AddPoint( Mogre::Vector3 p );
	
		Mogre::Vector3 GetPoint( unsigned short index );
	
		void Clear( );
	
		void UpdatePoint( unsigned short index, Mogre::Vector3 value );
	
		Mogre::Vector3 Interpolate( Mogre::Real t );
	
		Mogre::Vector3 Interpolate( unsigned int fromIndex, Mogre::Real t );
	
		void SetAutoCalculate( bool autoCalc );
	
		void RecalcTangents( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( SimpleSpline )
	
		//Protected Declarations
	protected public:
	
	};
	

}
