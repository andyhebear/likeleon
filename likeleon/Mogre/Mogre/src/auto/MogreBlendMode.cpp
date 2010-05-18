/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreBlendMode.h"

namespace Mogre
{
	//################################################################
	//LayerBlendModeEx_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	Mogre::LayerBlendType LayerBlendModeEx_NativePtr::blendType::get()
	{
		return (Mogre::LayerBlendType)_native->blendType;
	}
	void LayerBlendModeEx_NativePtr::blendType::set( Mogre::LayerBlendType value )
	{
		_native->blendType = (Ogre::LayerBlendType)value;
	}
	
	Mogre::LayerBlendOperationEx LayerBlendModeEx_NativePtr::operation::get()
	{
		return (Mogre::LayerBlendOperationEx)_native->operation;
	}
	void LayerBlendModeEx_NativePtr::operation::set( Mogre::LayerBlendOperationEx value )
	{
		_native->operation = (Ogre::LayerBlendOperationEx)value;
	}
	
	Mogre::LayerBlendSource LayerBlendModeEx_NativePtr::source1::get()
	{
		return (Mogre::LayerBlendSource)_native->source1;
	}
	void LayerBlendModeEx_NativePtr::source1::set( Mogre::LayerBlendSource value )
	{
		_native->source1 = (Ogre::LayerBlendSource)value;
	}
	
	Mogre::LayerBlendSource LayerBlendModeEx_NativePtr::source2::get()
	{
		return (Mogre::LayerBlendSource)_native->source2;
	}
	void LayerBlendModeEx_NativePtr::source2::set( Mogre::LayerBlendSource value )
	{
		_native->source2 = (Ogre::LayerBlendSource)value;
	}
	
	Mogre::ColourValue LayerBlendModeEx_NativePtr::colourArg1::get()
	{
		return _native->colourArg1;
	}
	void LayerBlendModeEx_NativePtr::colourArg1::set( Mogre::ColourValue value )
	{
		_native->colourArg1 = value;
	}
	
	Mogre::ColourValue LayerBlendModeEx_NativePtr::colourArg2::get()
	{
		return _native->colourArg2;
	}
	void LayerBlendModeEx_NativePtr::colourArg2::set( Mogre::ColourValue value )
	{
		_native->colourArg2 = value;
	}
	
	Mogre::Real LayerBlendModeEx_NativePtr::alphaArg1::get()
	{
		return _native->alphaArg1;
	}
	void LayerBlendModeEx_NativePtr::alphaArg1::set( Mogre::Real value )
	{
		_native->alphaArg1 = value;
	}
	
	Mogre::Real LayerBlendModeEx_NativePtr::alphaArg2::get()
	{
		return _native->alphaArg2;
	}
	void LayerBlendModeEx_NativePtr::alphaArg2::set( Mogre::Real value )
	{
		_native->alphaArg2 = value;
	}
	
	Mogre::Real LayerBlendModeEx_NativePtr::factor::get()
	{
		return _native->factor;
	}
	void LayerBlendModeEx_NativePtr::factor::set( Mogre::Real value )
	{
		_native->factor = value;
	}
	
	bool LayerBlendModeEx_NativePtr::Equals(Object^ obj)
	{
	    LayerBlendModeEx_NativePtr^ clr = dynamic_cast<LayerBlendModeEx_NativePtr^>(obj);
	    if (clr == CLR_NULL)
	    {
	        return false;
	    }
	
	    if (_native == NULL) throw gcnew Exception("The underlying native object for the caller is null.");
	    if (clr->_native == NULL) throw gcnew ArgumentException("The underlying native object for parameter 'obj' is null.");
	
	    return *_native == *(static_cast<Ogre::LayerBlendModeEx*>(clr->_native));
	}
	
	bool LayerBlendModeEx_NativePtr::Equals(LayerBlendModeEx_NativePtr obj)
	{
	    if (_native == NULL) throw gcnew Exception("The underlying native object for the caller is null.");
	    if (obj._native == NULL) throw gcnew ArgumentException("The underlying native object for parameter 'obj' is null.");
	
	    return *_native == *obj._native;
	}
	
	bool LayerBlendModeEx_NativePtr::operator ==(LayerBlendModeEx_NativePtr obj1, LayerBlendModeEx_NativePtr obj2)
	{
		return obj1.Equals(obj2);
	}
	
	bool LayerBlendModeEx_NativePtr::operator !=(LayerBlendModeEx_NativePtr obj1, LayerBlendModeEx_NativePtr obj2)
	{
		return !obj1.Equals(obj2);
	}
	
	
	
	Mogre::LayerBlendModeEx_NativePtr LayerBlendModeEx_NativePtr::Create()
	{
		LayerBlendModeEx_NativePtr ptr;
		ptr._native = new Ogre::LayerBlendModeEx();
		return ptr;
	}
	
	
	//Protected Declarations
	
	

}
