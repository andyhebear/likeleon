/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreRotationalSpline.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//RotationalSpline
	//################################################################
	
	public ref class RotationalSpline : public INativePointer
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
		RotationalSpline( Ogre::RotationalSpline* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~RotationalSpline()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::RotationalSpline* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		RotationalSpline( );
	
	
		property unsigned short NumPoints
		{
		public:
			unsigned short get();
		}
	
		void AddPoint( Mogre::Quaternion p );
	
		Mogre::Quaternion GetPoint( unsigned short index );
	
		void Clear( );
	
		void UpdatePoint( unsigned short index, Mogre::Quaternion value );
	
		Mogre::Quaternion Interpolate( Mogre::Real t, bool useShortestPath );
		Mogre::Quaternion Interpolate( Mogre::Real t );
	
		Mogre::Quaternion Interpolate( unsigned int fromIndex, Mogre::Real t, bool useShortestPath );
		Mogre::Quaternion Interpolate( unsigned int fromIndex, Mogre::Real t );
	
		void SetAutoCalculate( bool autoCalc );
	
		void RecalcTangents( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( RotationalSpline )
	
		//Protected Declarations
	protected public:
	
	};
	

}
