/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreRenderOperation.h"

namespace Mogre
{
	//################################################################
	//RenderOperation
	//################################################################
	
	public ref class RenderOperation : public INativePointer
	{
		//Nested Types
	
		public: enum class OperationTypes
		{
			OT_POINT_LIST = Ogre::RenderOperation::OT_POINT_LIST,
			OT_LINE_LIST = Ogre::RenderOperation::OT_LINE_LIST,
			OT_LINE_STRIP = Ogre::RenderOperation::OT_LINE_STRIP,
			OT_TRIANGLE_LIST = Ogre::RenderOperation::OT_TRIANGLE_LIST,
			OT_TRIANGLE_STRIP = Ogre::RenderOperation::OT_TRIANGLE_STRIP,
			OT_TRIANGLE_FAN = Ogre::RenderOperation::OT_TRIANGLE_FAN
		};
	
		//Private Declarations
	private protected:
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		RenderOperation( Ogre::RenderOperation* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~RenderOperation()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::RenderOperation* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		RenderOperation( );
	
	
		property Mogre::VertexData^ vertexData
		{
		public:
			Mogre::VertexData^ get();
		public:
			void set(Mogre::VertexData^ value);
		}
	
		property Mogre::RenderOperation::OperationTypes operationType
		{
		public:
			Mogre::RenderOperation::OperationTypes get();
		public:
			void set(Mogre::RenderOperation::OperationTypes value);
		}
	
		property bool useIndexes
		{
		public:
			bool get();
		public:
			void set(bool value);
		}
	
		property Mogre::IndexData^ indexData
		{
		public:
			Mogre::IndexData^ get();
		public:
			void set(Mogre::IndexData^ value);
		}
	
		property Mogre::IRenderable^ srcRenderable
		{
		public:
			Mogre::IRenderable^ get();
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( RenderOperation )
	
		//Protected Declarations
	protected public:
	
	};
	

}
