/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreBillboard.h"
#include "MogreBillboardSet.h"

namespace Mogre
{
	//################################################################
	//Billboard
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Billboard::Billboard( )
	{
		_createdByCLR = true;
		_native = new Ogre::Billboard();
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	Billboard::Billboard( Mogre::Vector3 position, Mogre::BillboardSet^ owner, Mogre::ColourValue colour )
	{
		_createdByCLR = true;
		_native = new Ogre::Billboard( position, owner, colour);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	Billboard::Billboard( Mogre::Vector3 position, Mogre::BillboardSet^ owner )
	{
		_createdByCLR = true;
		_native = new Ogre::Billboard( position, owner);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::Vector3 Billboard::mPosition::get()
	{
		return static_cast<Ogre::Billboard*>(_native)->mPosition;
	}
	void Billboard::mPosition::set( Mogre::Vector3 value )
	{
		static_cast<Ogre::Billboard*>(_native)->mPosition = value;
	}
	
	Mogre::Vector3 Billboard::mDirection::get()
	{
		return static_cast<Ogre::Billboard*>(_native)->mDirection;
	}
	void Billboard::mDirection::set( Mogre::Vector3 value )
	{
		static_cast<Ogre::Billboard*>(_native)->mDirection = value;
	}
	
	Mogre::BillboardSet^ Billboard::mParentSet::get()
	{
		return static_cast<Ogre::Billboard*>(_native)->mParentSet;
	}
	void Billboard::mParentSet::set( Mogre::BillboardSet^ value )
	{
		static_cast<Ogre::Billboard*>(_native)->mParentSet = value;
	}
	
	Mogre::ColourValue Billboard::mColour::get()
	{
		return static_cast<Ogre::Billboard*>(_native)->mColour;
	}
	void Billboard::mColour::set( Mogre::ColourValue value )
	{
		static_cast<Ogre::Billboard*>(_native)->mColour = value;
	}
	
	Mogre::Radian Billboard::mRotation::get()
	{
		return static_cast<Ogre::Billboard*>(_native)->mRotation;
	}
	void Billboard::mRotation::set( Mogre::Radian value )
	{
		static_cast<Ogre::Billboard*>(_native)->mRotation = value;
	}
	
	Mogre::ColourValue Billboard::Colour::get()
	{
		return static_cast<const Ogre::Billboard*>(_native)->getColour( );
	}
	void Billboard::Colour::set( Mogre::ColourValue colour )
	{
		static_cast<Ogre::Billboard*>(_native)->setColour( colour );
	}
	
	bool Billboard::HasOwnDimensions::get()
	{
		return static_cast<const Ogre::Billboard*>(_native)->hasOwnDimensions( );
	}
	
	bool Billboard::IsUseTexcoordRect::get()
	{
		return static_cast<const Ogre::Billboard*>(_native)->isUseTexcoordRect( );
	}
	
	Mogre::Real Billboard::OwnHeight::get()
	{
		return static_cast<const Ogre::Billboard*>(_native)->getOwnHeight( );
	}
	
	Mogre::Real Billboard::OwnWidth::get()
	{
		return static_cast<const Ogre::Billboard*>(_native)->getOwnWidth( );
	}
	
	Mogre::Vector3 Billboard::Position::get()
	{
		return static_cast<const Ogre::Billboard*>(_native)->getPosition( );
	}
	void Billboard::Position::set( Mogre::Vector3 position )
	{
		static_cast<Ogre::Billboard*>(_native)->setPosition( position );
	}
	
	Mogre::Radian Billboard::Rotation::get()
	{
		return static_cast<const Ogre::Billboard*>(_native)->getRotation( );
	}
	void Billboard::Rotation::set( Mogre::Radian rotation )
	{
		static_cast<Ogre::Billboard*>(_native)->setRotation( rotation );
	}
	
	Mogre::uint16 Billboard::TexcoordIndex::get()
	{
		return static_cast<const Ogre::Billboard*>(_native)->getTexcoordIndex( );
	}
	void Billboard::TexcoordIndex::set( Mogre::uint16 texcoordIndex )
	{
		static_cast<Ogre::Billboard*>(_native)->setTexcoordIndex( texcoordIndex );
	}
	
	Mogre::FloatRect Billboard::TexcoordRect::get()
	{
		return static_cast<const Ogre::Billboard*>(_native)->getTexcoordRect( );
	}
	void Billboard::TexcoordRect::set( Mogre::FloatRect texcoordRect )
	{
		static_cast<Ogre::Billboard*>(_native)->setTexcoordRect( texcoordRect );
	}
	
	void Billboard::SetPosition( Mogre::Real x, Mogre::Real y, Mogre::Real z )
	{
		static_cast<Ogre::Billboard*>(_native)->setPosition( x, y, z );
	}
	
	void Billboard::SetDimensions( Mogre::Real width, Mogre::Real height )
	{
		static_cast<Ogre::Billboard*>(_native)->setDimensions( width, height );
	}
	
	void Billboard::ResetDimensions( )
	{
		static_cast<Ogre::Billboard*>(_native)->resetDimensions( );
	}
	
	void Billboard::_notifyOwner( Mogre::BillboardSet^ owner )
	{
		static_cast<Ogre::Billboard*>(_native)->_notifyOwner( owner );
	}
	
	void Billboard::SetTexcoordRect( Mogre::Real u0, Mogre::Real v0, Mogre::Real u1, Mogre::Real v1 )
	{
		static_cast<Ogre::Billboard*>(_native)->setTexcoordRect( u0, v0, u1, v1 );
	}
	
	
	//Protected Declarations
	
	

}
