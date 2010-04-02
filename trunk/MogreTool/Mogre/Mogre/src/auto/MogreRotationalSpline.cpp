/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreRotationalSpline.h"

namespace Mogre
{
	//################################################################
	//RotationalSpline
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	RotationalSpline::RotationalSpline( )
	{
		_createdByCLR = true;
		_native = new Ogre::RotationalSpline();
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	unsigned short RotationalSpline::NumPoints::get()
	{
		return static_cast<const Ogre::RotationalSpline*>(_native)->getNumPoints( );
	}
	
	void RotationalSpline::AddPoint( Mogre::Quaternion p )
	{
		static_cast<Ogre::RotationalSpline*>(_native)->addPoint( p );
	}
	
	Mogre::Quaternion RotationalSpline::GetPoint( unsigned short index )
	{
		return static_cast<const Ogre::RotationalSpline*>(_native)->getPoint( index );
	}
	
	void RotationalSpline::Clear( )
	{
		static_cast<Ogre::RotationalSpline*>(_native)->clear( );
	}
	
	void RotationalSpline::UpdatePoint( unsigned short index, Mogre::Quaternion value )
	{
		static_cast<Ogre::RotationalSpline*>(_native)->updatePoint( index, value );
	}
	
	Mogre::Quaternion RotationalSpline::Interpolate( Mogre::Real t, bool useShortestPath )
	{
		return static_cast<Ogre::RotationalSpline*>(_native)->interpolate( t, useShortestPath );
	}
	Mogre::Quaternion RotationalSpline::Interpolate( Mogre::Real t )
	{
		return static_cast<Ogre::RotationalSpline*>(_native)->interpolate( t );
	}
	
	Mogre::Quaternion RotationalSpline::Interpolate( unsigned int fromIndex, Mogre::Real t, bool useShortestPath )
	{
		return static_cast<Ogre::RotationalSpline*>(_native)->interpolate( fromIndex, t, useShortestPath );
	}
	Mogre::Quaternion RotationalSpline::Interpolate( unsigned int fromIndex, Mogre::Real t )
	{
		return static_cast<Ogre::RotationalSpline*>(_native)->interpolate( fromIndex, t );
	}
	
	void RotationalSpline::SetAutoCalculate( bool autoCalc )
	{
		static_cast<Ogre::RotationalSpline*>(_native)->setAutoCalculate( autoCalc );
	}
	
	void RotationalSpline::RecalcTangents( )
	{
		static_cast<Ogre::RotationalSpline*>(_native)->recalcTangents( );
	}
	
	
	//Protected Declarations
	
	

}
