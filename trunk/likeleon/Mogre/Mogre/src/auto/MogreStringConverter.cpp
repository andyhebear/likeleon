/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreStringConverter.h"
#include "MogreStringVector.h"

namespace Mogre
{
	//################################################################
	//StringConverter
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	StringConverter::StringConverter()
	{
		_createdByCLR = true;
		_native = new Ogre::StringConverter();
	}
	
	String^ StringConverter::ToString( Mogre::Real val, unsigned short precision, unsigned short width, char fill, std::ios::fmtflags flags )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, precision, width, fill, flags ) );
	}
	String^ StringConverter::ToString( Mogre::Real val, unsigned short precision, unsigned short width, char fill )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, precision, width, fill ) );
	}
	String^ StringConverter::ToString( Mogre::Real val, unsigned short precision, unsigned short width )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, precision, width ) );
	}
	String^ StringConverter::ToString( Mogre::Real val, unsigned short precision )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, precision ) );
	}
	String^ StringConverter::ToString( Mogre::Real val )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val ) );
	}
	
	String^ StringConverter::ToString( Mogre::Radian val, unsigned short precision, unsigned short width, char fill, std::ios::fmtflags flags )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, precision, width, fill, flags ) );
	}
	String^ StringConverter::ToString( Mogre::Radian val, unsigned short precision, unsigned short width, char fill )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, precision, width, fill ) );
	}
	String^ StringConverter::ToString( Mogre::Radian val, unsigned short precision, unsigned short width )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, precision, width ) );
	}
	String^ StringConverter::ToString( Mogre::Radian val, unsigned short precision )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, precision ) );
	}
	String^ StringConverter::ToString( Mogre::Radian val )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val ) );
	}
	
	String^ StringConverter::ToString( Mogre::Degree val, unsigned short precision, unsigned short width, char fill, std::ios::fmtflags flags )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, precision, width, fill, flags ) );
	}
	String^ StringConverter::ToString( Mogre::Degree val, unsigned short precision, unsigned short width, char fill )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, precision, width, fill ) );
	}
	String^ StringConverter::ToString( Mogre::Degree val, unsigned short precision, unsigned short width )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, precision, width ) );
	}
	String^ StringConverter::ToString( Mogre::Degree val, unsigned short precision )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, precision ) );
	}
	String^ StringConverter::ToString( Mogre::Degree val )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val ) );
	}
	
	String^ StringConverter::ToString( int val, unsigned short width, char fill, std::ios::fmtflags flags )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, width, fill, flags ) );
	}
	String^ StringConverter::ToString( int val, unsigned short width, char fill )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, width, fill ) );
	}
	String^ StringConverter::ToString( int val, unsigned short width )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, width ) );
	}
	String^ StringConverter::ToString( int val )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val ) );
	}
	
	String^ StringConverter::ToString( size_t val, unsigned short width, char fill, std::ios::fmtflags flags )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, width, fill, flags ) );
	}
	String^ StringConverter::ToString( size_t val, unsigned short width, char fill )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, width, fill ) );
	}
	String^ StringConverter::ToString( size_t val, unsigned short width )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, width ) );
	}
	String^ StringConverter::ToString( size_t val )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val ) );
	}
	
	String^ StringConverter::ToString( unsigned long val, unsigned short width, char fill, std::ios::fmtflags flags )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, width, fill, flags ) );
	}
	String^ StringConverter::ToString( unsigned long val, unsigned short width, char fill )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, width, fill ) );
	}
	String^ StringConverter::ToString( unsigned long val, unsigned short width )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, width ) );
	}
	String^ StringConverter::ToString( unsigned long val )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val ) );
	}
	
	String^ StringConverter::ToString( long val, unsigned short width, char fill, std::ios::fmtflags flags )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, width, fill, flags ) );
	}
	String^ StringConverter::ToString( long val, unsigned short width, char fill )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, width, fill ) );
	}
	String^ StringConverter::ToString( long val, unsigned short width )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, width ) );
	}
	String^ StringConverter::ToString( long val )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val ) );
	}
	
	String^ StringConverter::ToString( bool val, bool yesNo )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val, yesNo ) );
	}
	String^ StringConverter::ToString( bool val )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val ) );
	}
	
	String^ StringConverter::ToString( Mogre::Vector2 val )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val ) );
	}
	
	String^ StringConverter::ToString( Mogre::Vector3 val )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val ) );
	}
	
	String^ StringConverter::ToString( Mogre::Vector4 val )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val ) );
	}
	
	String^ StringConverter::ToString( Mogre::Matrix3^ val )
	{
		pin_ptr<Ogre::Matrix3> p_val = interior_ptr<Ogre::Matrix3>(&val->m00);
	
		return TO_CLR_STRING( Ogre::StringConverter::toString( *p_val ) );
	}
	
	String^ StringConverter::ToString( Mogre::Matrix4^ val )
	{
		pin_ptr<Ogre::Matrix4> p_val = interior_ptr<Ogre::Matrix4>(&val->m00);
	
		return TO_CLR_STRING( Ogre::StringConverter::toString( *p_val ) );
	}
	
	String^ StringConverter::ToString( Mogre::Quaternion val )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val ) );
	}
	
	String^ StringConverter::ToString( Mogre::ColourValue val )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val ) );
	}
	
	String^ StringConverter::ToString( Mogre::Const_StringVector^ val )
	{
		return TO_CLR_STRING( Ogre::StringConverter::toString( val ) );
	}
	
	Mogre::Real StringConverter::ParseReal( String^ val )
	{
		DECLARE_NATIVE_STRING( o_val, val )
	
		return Ogre::StringConverter::parseReal( o_val );
	}
	
	Mogre::Radian StringConverter::ParseAngle( String^ val )
	{
		DECLARE_NATIVE_STRING( o_val, val )
	
		return Ogre::StringConverter::parseAngle( o_val );
	}
	
	int StringConverter::ParseInt( String^ val )
	{
		DECLARE_NATIVE_STRING( o_val, val )
	
		return Ogre::StringConverter::parseInt( o_val );
	}
	
	unsigned int StringConverter::ParseUnsignedInt( String^ val )
	{
		DECLARE_NATIVE_STRING( o_val, val )
	
		return Ogre::StringConverter::parseUnsignedInt( o_val );
	}
	
	long StringConverter::ParseLong( String^ val )
	{
		DECLARE_NATIVE_STRING( o_val, val )
	
		return Ogre::StringConverter::parseLong( o_val );
	}
	
	unsigned long StringConverter::ParseUnsignedLong( String^ val )
	{
		DECLARE_NATIVE_STRING( o_val, val )
	
		return Ogre::StringConverter::parseUnsignedLong( o_val );
	}
	
	bool StringConverter::ParseBool( String^ val )
	{
		DECLARE_NATIVE_STRING( o_val, val )
	
		return Ogre::StringConverter::parseBool( o_val );
	}
	
	Mogre::Vector3 StringConverter::ParseVector3( String^ val )
	{
		DECLARE_NATIVE_STRING( o_val, val )
	
		return Ogre::StringConverter::parseVector3( o_val );
	}
	
	Mogre::Matrix3^ StringConverter::ParseMatrix3( String^ val )
	{
		DECLARE_NATIVE_STRING( o_val, val )
	
		return Ogre::StringConverter::parseMatrix3( o_val );
	}
	
	Mogre::Matrix4^ StringConverter::ParseMatrix4( String^ val )
	{
		DECLARE_NATIVE_STRING( o_val, val )
	
		return Ogre::StringConverter::parseMatrix4( o_val );
	}
	
	Mogre::Quaternion StringConverter::ParseQuaternion( String^ val )
	{
		DECLARE_NATIVE_STRING( o_val, val )
	
		return Ogre::StringConverter::parseQuaternion( o_val );
	}
	
	Mogre::ColourValue StringConverter::ParseColourValue( String^ val )
	{
		DECLARE_NATIVE_STRING( o_val, val )
	
		return Ogre::StringConverter::parseColourValue( o_val );
	}
	
	Mogre::StringVector^ StringConverter::ParseStringVector( String^ val )
	{
		DECLARE_NATIVE_STRING( o_val, val )
	
		return Mogre::StringVector::ByValue( Ogre::StringConverter::parseStringVector( o_val ) );
	}
	
	bool StringConverter::IsNumber( String^ val )
	{
		DECLARE_NATIVE_STRING( o_val, val )
	
		return Ogre::StringConverter::isNumber( o_val );
	}
	
	
	//Protected Declarations
	
	

}
