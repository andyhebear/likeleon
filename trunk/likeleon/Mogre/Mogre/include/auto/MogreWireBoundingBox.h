/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreWireBoundingBox.h"
#include "MogreSimpleRenderable.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//WireBoundingBox
	//################################################################
	
	public ref class WireBoundingBox : public SimpleRenderable
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		WireBoundingBox( CLRObject* obj ) : SimpleRenderable(obj)
		{
		}
	
	
		//Public Declarations
	public:
		WireBoundingBox( );
	
	
		property Mogre::Real BoundingRadius
		{
		public:
			Mogre::Real get();
		}
	
		void SetupBoundingBox( Mogre::AxisAlignedBox^ aabb );
	
		virtual Mogre::Real GetSquaredViewDepth( Mogre::Camera^ cam ) override;
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( WireBoundingBox )
	
		//Protected Declarations
	protected public:
	
	};
	

}
