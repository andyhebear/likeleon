#include "Stdafx.h"

#include "MogreCodec.h"
#include "MogreImageCodec.h"
#include "MogreManualObject.h"
#include "MogreStaticGeometry.h"
#include "MogreRibbonTrail.h"

#define DEFINE_CREATE_NESTED_FUNC(N, T) \
	static Object^ CreateNested_##N(CLRObject* pClrObj) \
	{ \
		return gcnew Mogre::T(pClrObj); \
	}


//The compiler is buggy and crashes when trying to gcnew a nested class from OgreMain.dll
//(at CLRObject.cpp). To get around this problem these specific functions create an object
//of the required nested class.

//This is only necessary until the service pack arrives..

namespace Mogre
{
	namespace Implementation
	{
		private ref class CreateNestedHelper
		{
		public:
			DEFINE_CREATE_NESTED_FUNC( Codec_CodecData, Codec::CodecData )
			DEFINE_CREATE_NESTED_FUNC( ImageCodec_ImageData, ImageCodec::ImageData )
			DEFINE_CREATE_NESTED_FUNC( ManualObjectSection, ManualObject::ManualObjectSection )
			DEFINE_CREATE_NESTED_FUNC( ManualObjectSectionShadowRenderable, ManualObject::ManualObjectSectionShadowRenderable )
			DEFINE_CREATE_NESTED_FUNC( StaticGeometry_Region, StaticGeometry::Region )
			DEFINE_CREATE_NESTED_FUNC( RibbonTrail, RibbonTrail )
		};
	}
}