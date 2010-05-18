/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreRectangle2D.h"
#include "MogreSimpleRenderable.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//Rectangle2D
	//################################################################
	
	public ref class Rectangle2D : public SimpleRenderable
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Rectangle2D( CLRObject* obj ) : SimpleRenderable(obj)
		{
		}
	
	
		//Public Declarations
	public:
		Rectangle2D( bool includeTextureCoordinates );
		Rectangle2D( );
	
	
		property Mogre::Real BoundingRadius
		{
		public:
			Mogre::Real get();
		}
	
		void SetCorners( Mogre::Real left, Mogre::Real top, Mogre::Real right, Mogre::Real bottom );
	
		virtual Mogre::Real GetSquaredViewDepth( Mogre::Camera^ cam ) override;
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Rectangle2D )
	
		//Protected Declarations
	protected public:
	
	};
	

}
