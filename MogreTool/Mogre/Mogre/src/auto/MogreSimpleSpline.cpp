/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreSimpleSpline.h"

namespace Mogre
{
	//################################################################
	//SimpleSpline
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	SimpleSpline::SimpleSpline( )
	{
		_createdByCLR = true;
		_native = new Ogre::SimpleSpline();
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	unsigned short SimpleSpline::NumPoints::get()
	{
		return static_cast<const Ogre::SimpleSpline*>(_native)->getNumPoints( );
	}
	
	void SimpleSpline::AddPoint( Mogre::Vector3 p )
	{
		static_cast<Ogre::SimpleSpline*>(_native)->addPoint( p );
	}
	
	Mogre::Vector3 SimpleSpline::GetPoint( unsigned short index )
	{
		return static_cast<const Ogre::SimpleSpline*>(_native)->getPoint( index );
	}
	
	void SimpleSpline::Clear( )
	{
		static_cast<Ogre::SimpleSpline*>(_native)->clear( );
	}
	
	void SimpleSpline::UpdatePoint( unsigned short index, Mogre::Vector3 value )
	{
		static_cast<Ogre::SimpleSpline*>(_native)->updatePoint( index, value );
	}
	
	Mogre::Vector3 SimpleSpline::Interpolate( Mogre::Real t )
	{
		return static_cast<Ogre::SimpleSpline*>(_native)->interpolate( t );
	}
	
	Mogre::Vector3 SimpleSpline::Interpolate( unsigned int fromIndex, Mogre::Real t )
	{
		return static_cast<Ogre::SimpleSpline*>(_native)->interpolate( fromIndex, t );
	}
	
	void SimpleSpline::SetAutoCalculate( bool autoCalc )
	{
		static_cast<Ogre::SimpleSpline*>(_native)->setAutoCalculate( autoCalc );
	}
	
	void SimpleSpline::RecalcTangents( )
	{
		static_cast<Ogre::SimpleSpline*>(_native)->recalcTangents( );
	}
	
	
	//Protected Declarations
	
	

}
