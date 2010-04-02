/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreRenderOperation.h"
#include "MogreVertexIndexData.h"
#include "MogreRenderable.h"

namespace Mogre
{
	//################################################################
	//RenderOperation
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	RenderOperation::RenderOperation( )
	{
		_createdByCLR = true;
		_native = new Ogre::RenderOperation();
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::VertexData^ RenderOperation::vertexData::get()
	{
		return static_cast<Ogre::RenderOperation*>(_native)->vertexData;
	}
	void RenderOperation::vertexData::set( Mogre::VertexData^ value )
	{
		static_cast<Ogre::RenderOperation*>(_native)->vertexData = value;
	}
	
	Mogre::RenderOperation::OperationTypes RenderOperation::operationType::get()
	{
		return (Mogre::RenderOperation::OperationTypes)static_cast<Ogre::RenderOperation*>(_native)->operationType;
	}
	void RenderOperation::operationType::set( Mogre::RenderOperation::OperationTypes value )
	{
		static_cast<Ogre::RenderOperation*>(_native)->operationType = (Ogre::RenderOperation::OperationType)value;
	}
	
	bool RenderOperation::useIndexes::get()
	{
		return static_cast<Ogre::RenderOperation*>(_native)->useIndexes;
	}
	void RenderOperation::useIndexes::set( bool value )
	{
		static_cast<Ogre::RenderOperation*>(_native)->useIndexes = value;
	}
	
	Mogre::IndexData^ RenderOperation::indexData::get()
	{
		return static_cast<Ogre::RenderOperation*>(_native)->indexData;
	}
	void RenderOperation::indexData::set( Mogre::IndexData^ value )
	{
		static_cast<Ogre::RenderOperation*>(_native)->indexData = value;
	}
	
	Mogre::IRenderable^ RenderOperation::srcRenderable::get()
	{
		return static_cast<Ogre::RenderOperation*>(_native)->srcRenderable;
	}
	
	
	//Protected Declarations
	
	

}
