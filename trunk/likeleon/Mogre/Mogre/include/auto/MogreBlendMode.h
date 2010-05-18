/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreBlendMode.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	public enum class SceneBlendFactor
	{
		SBF_ONE = Ogre::SBF_ONE,
		SBF_ZERO = Ogre::SBF_ZERO,
		SBF_DEST_COLOUR = Ogre::SBF_DEST_COLOUR,
		SBF_SOURCE_COLOUR = Ogre::SBF_SOURCE_COLOUR,
		SBF_ONE_MINUS_DEST_COLOUR = Ogre::SBF_ONE_MINUS_DEST_COLOUR,
		SBF_ONE_MINUS_SOURCE_COLOUR = Ogre::SBF_ONE_MINUS_SOURCE_COLOUR,
		SBF_DEST_ALPHA = Ogre::SBF_DEST_ALPHA,
		SBF_SOURCE_ALPHA = Ogre::SBF_SOURCE_ALPHA,
		SBF_ONE_MINUS_DEST_ALPHA = Ogre::SBF_ONE_MINUS_DEST_ALPHA,
		SBF_ONE_MINUS_SOURCE_ALPHA = Ogre::SBF_ONE_MINUS_SOURCE_ALPHA
	};
	
	public enum class SceneBlendType
	{
		SBT_TRANSPARENT_ALPHA = Ogre::SBT_TRANSPARENT_ALPHA,
		SBT_TRANSPARENT_COLOUR = Ogre::SBT_TRANSPARENT_COLOUR,
		SBT_ADD = Ogre::SBT_ADD,
		SBT_MODULATE = Ogre::SBT_MODULATE,
		SBT_REPLACE = Ogre::SBT_REPLACE
	};
	
	public enum class LayerBlendSource
	{
		LBS_CURRENT = Ogre::LBS_CURRENT,
		LBS_TEXTURE = Ogre::LBS_TEXTURE,
		LBS_DIFFUSE = Ogre::LBS_DIFFUSE,
		LBS_SPECULAR = Ogre::LBS_SPECULAR,
		LBS_MANUAL = Ogre::LBS_MANUAL
	};
	
	public enum class LayerBlendOperationEx
	{
		LBX_SOURCE1 = Ogre::LBX_SOURCE1,
		LBX_SOURCE2 = Ogre::LBX_SOURCE2,
		LBX_MODULATE = Ogre::LBX_MODULATE,
		LBX_MODULATE_X2 = Ogre::LBX_MODULATE_X2,
		LBX_MODULATE_X4 = Ogre::LBX_MODULATE_X4,
		LBX_ADD = Ogre::LBX_ADD,
		LBX_ADD_SIGNED = Ogre::LBX_ADD_SIGNED,
		LBX_ADD_SMOOTH = Ogre::LBX_ADD_SMOOTH,
		LBX_SUBTRACT = Ogre::LBX_SUBTRACT,
		LBX_BLEND_DIFFUSE_ALPHA = Ogre::LBX_BLEND_DIFFUSE_ALPHA,
		LBX_BLEND_TEXTURE_ALPHA = Ogre::LBX_BLEND_TEXTURE_ALPHA,
		LBX_BLEND_CURRENT_ALPHA = Ogre::LBX_BLEND_CURRENT_ALPHA,
		LBX_BLEND_MANUAL = Ogre::LBX_BLEND_MANUAL,
		LBX_DOTPRODUCT = Ogre::LBX_DOTPRODUCT,
		LBX_BLEND_DIFFUSE_COLOUR = Ogre::LBX_BLEND_DIFFUSE_COLOUR
	};
	
	public enum class LayerBlendOperation
	{
		LBO_REPLACE = Ogre::LBO_REPLACE,
		LBO_ADD = Ogre::LBO_ADD,
		LBO_MODULATE = Ogre::LBO_MODULATE,
		LBO_ALPHA_BLEND = Ogre::LBO_ALPHA_BLEND
	};
	
	public enum class LayerBlendType
	{
		LBT_COLOUR = Ogre::LBT_COLOUR,
		LBT_ALPHA = Ogre::LBT_ALPHA
	};
	
	//################################################################
	//LayerBlendModeEx_NativePtr
	//################################################################
	
	public value class LayerBlendModeEx_NativePtr
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		Ogre::LayerBlendModeEx* _native;
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		property Mogre::LayerBlendType blendType
		{
		public:
			Mogre::LayerBlendType get();
		public:
			void set(Mogre::LayerBlendType value);
		}
	
		property Mogre::LayerBlendOperationEx operation
		{
		public:
			Mogre::LayerBlendOperationEx get();
		public:
			void set(Mogre::LayerBlendOperationEx value);
		}
	
		property Mogre::LayerBlendSource source1
		{
		public:
			Mogre::LayerBlendSource get();
		public:
			void set(Mogre::LayerBlendSource value);
		}
	
		property Mogre::LayerBlendSource source2
		{
		public:
			Mogre::LayerBlendSource get();
		public:
			void set(Mogre::LayerBlendSource value);
		}
	
		property Mogre::ColourValue colourArg1
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue value);
		}
	
		property Mogre::ColourValue colourArg2
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue value);
		}
	
		property Mogre::Real alphaArg1
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		property Mogre::Real alphaArg2
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		property Mogre::Real factor
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		virtual bool Equals(Object^ obj) override;
		bool Equals(LayerBlendModeEx_NativePtr obj);
		static bool operator == (LayerBlendModeEx_NativePtr obj1, LayerBlendModeEx_NativePtr obj2);
		static bool operator != (LayerBlendModeEx_NativePtr obj1, LayerBlendModeEx_NativePtr obj2);
	
		void CopyTo(LayerBlendModeEx_NativePtr dest)
		{
			if (_native == NULL) throw gcnew Exception("The underlying native object for the caller is null.");
			if (dest._native == NULL) throw gcnew ArgumentException("The underlying native object for parameter 'dest' is null.");
	
			*(dest._native) = *_native;
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( LayerBlendModeEx_NativePtr, Ogre::LayerBlendModeEx )
	
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_native; }
		}
	
		static LayerBlendModeEx_NativePtr Create();
	
		void DestroyNativePtr()
		{
			if (_native)  { delete _native; _native = 0; }
		}
	
		property bool IsNull
		{
			bool get() { return (_native == 0); }
		}
	
		//Protected Declarations
	protected public:
	
	};
	

}
