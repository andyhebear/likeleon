#include "CLRConfig.h"
#include "CLRHandle.h"

#if LINK_TO_MOGRE

#using "Mogre.dll" as_friend

typedef System::Runtime::InteropServices::GCHandle GCHandle;


#include "OgreNoMemoryMacros.h"

void _FreeCLRHandle(void* handle)
{
	GCHandle g = __VOIDPTR_TO_GCHANDLE(handle);
	if (g.Target != nullptr)
	{
		// Set _native pointer of CLR object to 0
		static_cast<Mogre::Implementation::INativePointer^>(g.Target)->ClearNativePtr();
		// Dispose the CLR object
		delete g.Target;
	}
	g.Free();
}


#else

void _FreeCLRHandle(void* handle)
{
}

#endif
