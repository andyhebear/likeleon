/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreBillboard.h"
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"

namespace Mogre
{
	//################################################################
	//Billboard
	//################################################################
	
	public ref class Billboard : public INativePointer
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
		Billboard( Ogre::Billboard* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~Billboard()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::Billboard* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		Billboard( );
		Billboard( Mogre::Vector3 position, Mogre::BillboardSet^ owner, Mogre::ColourValue colour );
		Billboard( Mogre::Vector3 position, Mogre::BillboardSet^ owner );
	
	
		property Mogre::Vector3 mPosition
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 value);
		}
	
		property Mogre::Vector3 mDirection
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 value);
		}
	
		property Mogre::BillboardSet^ mParentSet
		{
		public:
			Mogre::BillboardSet^ get();
		public:
			void set(Mogre::BillboardSet^ value);
		}
	
		property Mogre::ColourValue mColour
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue value);
		}
	
		property Mogre::Radian mRotation
		{
		public:
			Mogre::Radian get();
		public:
			void set(Mogre::Radian value);
		}
	
		property Mogre::ColourValue Colour
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue colour);
		}
	
		property bool HasOwnDimensions
		{
		public:
			bool get();
		}
	
		property bool IsUseTexcoordRect
		{
		public:
			bool get();
		}
	
		property Mogre::Real OwnHeight
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real OwnWidth
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Vector3 Position
		{
		public:
			Mogre::Vector3 get();
		public:
			void set(Mogre::Vector3 position);
		}
	
		property Mogre::Radian Rotation
		{
		public:
			Mogre::Radian get();
		public:
			void set(Mogre::Radian rotation);
		}
	
		property Mogre::uint16 TexcoordIndex
		{
		public:
			Mogre::uint16 get();
		public:
			void set(Mogre::uint16 texcoordIndex);
		}
	
		property Mogre::FloatRect TexcoordRect
		{
		public:
			Mogre::FloatRect get();
		public:
			void set(Mogre::FloatRect texcoordRect);
		}
	
		void SetPosition( Mogre::Real x, Mogre::Real y, Mogre::Real z );
	
		void SetDimensions( Mogre::Real width, Mogre::Real height );
	
		void ResetDimensions( );
	
		void _notifyOwner( Mogre::BillboardSet^ owner );
	
		void SetTexcoordRect( Mogre::Real u0, Mogre::Real v0, Mogre::Real u1, Mogre::Real v1 );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( Billboard )
	
		//Protected Declarations
	protected public:
	
	};
	

}
