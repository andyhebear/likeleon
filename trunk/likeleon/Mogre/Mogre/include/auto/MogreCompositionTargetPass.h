/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreCompositionTargetPass.h"
#include "MogrePrerequisites.h"
#include "MogrePlatform.h"

namespace Mogre
{
	//################################################################
	//CompositionTargetPass
	//################################################################
	
	public ref class CompositionTargetPass : public INativePointer
	{
		//Nested Types
		public: ref class Passes;
	
		public: enum class InputMode
		{
			IM_NONE = Ogre::CompositionTargetPass::IM_NONE,
			IM_PREVIOUS = Ogre::CompositionTargetPass::IM_PREVIOUS
		};
	
		#define STLDECL_MANAGEDTYPE Mogre::CompositionPass^
		#define STLDECL_NATIVETYPE Ogre::CompositionPass*
		public: INC_DECLARE_STLVECTOR( Passes, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		public: INC_DECLARE_ITERATOR( PassIterator, Ogre::CompositionTargetPass::PassIterator, Mogre::CompositionTargetPass::Passes, Mogre::CompositionPass^, Ogre::CompositionPass* )
	
		//Private Declarations
	private protected:
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		CompositionTargetPass( Ogre::CompositionTargetPass* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~CompositionTargetPass()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::CompositionTargetPass* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		CompositionTargetPass( Mogre::CompositionTechnique^ parent );
	
	
		property float LodBias
		{
		public:
			float get();
		public:
			void set(float bias);
		}
	
		property String^ MaterialScheme
		{
		public:
			String^ get();
		public:
			void set(String^ schemeName);
		}
	
		property size_t NumPasses
		{
		public:
			size_t get();
		}
	
		property bool OnlyInitial
		{
		public:
			bool get();
		public:
			void set(bool value);
		}
	
		property String^ OutputName
		{
		public:
			String^ get();
		public:
			void set(String^ out);
		}
	
		property Mogre::CompositionTechnique^ Parent
		{
		public:
			Mogre::CompositionTechnique^ get();
		}
	
		property bool ShadowsEnabled
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property Mogre::uint32 VisibilityMask
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 mask);
		}
	
		void SetInputMode( Mogre::CompositionTargetPass::InputMode mode );
	
		Mogre::CompositionTargetPass::InputMode GetInputMode( );
	
		Mogre::CompositionPass^ CreatePass( );
	
		void RemovePass( size_t idx );
	
		Mogre::CompositionPass^ GetPass( size_t idx );
	
		void RemoveAllPasses( );
	
		Mogre::CompositionTargetPass::PassIterator^ GetPassIterator( );
	
		bool _isSupported( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( CompositionTargetPass )
	
		//Protected Declarations
	protected public:
	
	};
	

}
