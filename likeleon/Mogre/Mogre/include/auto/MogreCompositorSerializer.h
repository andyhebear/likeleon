/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreCompositorSerializer.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//CompositorSerializer
	//################################################################
	
	public ref class CompositorSerializer
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		CompositorSerializer( Ogre::CompositorSerializer* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~CompositorSerializer()
		{
			this->!CompositorSerializer();
		}
		!CompositorSerializer()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::CompositorSerializer* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		CompositorSerializer( );
	
	
		void ParseScript( Mogre::DataStreamPtr^ stream, String^ groupName );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( CompositorSerializer )
	
		//Protected Declarations
	protected public:
	
	};
	

}
