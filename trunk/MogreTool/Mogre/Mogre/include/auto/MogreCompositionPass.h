/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreCompositionPass.h"
#include "MogrePlatform.h"
#include "MogrePrerequisites.h"
#include "MogreRenderSystem.h"
#include "MogreCommon.h"

namespace Mogre
{
	//################################################################
	//CompositionPass
	//################################################################
	
	public ref class CompositionPass : public INativePointer
	{
		//Nested Types
	
		public: enum class PassType
		{
			PT_CLEAR = Ogre::CompositionPass::PT_CLEAR,
			PT_STENCIL = Ogre::CompositionPass::PT_STENCIL,
			PT_RENDERSCENE = Ogre::CompositionPass::PT_RENDERSCENE,
			PT_RENDERQUAD = Ogre::CompositionPass::PT_RENDERQUAD
		};
	
		//Private Declarations
	private protected:
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		CompositionPass( Ogre::CompositionPass* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~CompositionPass()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::CompositionPass* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		CompositionPass( Mogre::CompositionTargetPass^ parent );
	
	
		property Mogre::uint32 ClearBuffers
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 val);
		}
	
		property Mogre::ColourValue ClearColour
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue val);
		}
	
		property Mogre::Real ClearDepth
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real depth);
		}
	
		property Mogre::uint32 ClearStencil
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 value);
		}
	
		property Mogre::uint8 FirstRenderQueue
		{
		public:
			Mogre::uint8 get();
		public:
			void set(Mogre::uint8 id);
		}
	
		property Mogre::uint32 Identifier
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 id);
		}
	
		property Mogre::uint8 LastRenderQueue
		{
		public:
			Mogre::uint8 get();
		public:
			void set(Mogre::uint8 id);
		}
	
		property size_t NumInputs
		{
		public:
			size_t get();
		}
	
		property Mogre::CompositionTargetPass^ Parent
		{
		public:
			Mogre::CompositionTargetPass^ get();
		}
	
		property bool StencilCheck
		{
		public:
			bool get();
		public:
			void set(bool value);
		}
	
		property Mogre::StencilOperation StencilDepthFailOp
		{
		public:
			Mogre::StencilOperation get();
		public:
			void set(Mogre::StencilOperation value);
		}
	
		property Mogre::StencilOperation StencilFailOp
		{
		public:
			Mogre::StencilOperation get();
		public:
			void set(Mogre::StencilOperation value);
		}
	
		property Mogre::CompareFunction StencilFunc
		{
		public:
			Mogre::CompareFunction get();
		public:
			void set(Mogre::CompareFunction value);
		}
	
		property Mogre::uint32 StencilMask
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 value);
		}
	
		property Mogre::StencilOperation StencilPassOp
		{
		public:
			Mogre::StencilOperation get();
		public:
			void set(Mogre::StencilOperation value);
		}
	
		property Mogre::uint32 StencilRefValue
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 value);
		}
	
		property bool StencilTwoSidedOperation
		{
		public:
			bool get();
		public:
			void set(bool value);
		}
	
		property Mogre::CompositionPass::PassType Type
		{
		public:
			Mogre::CompositionPass::PassType get();
		public:
			void set(Mogre::CompositionPass::PassType type);
		}
	
		void SetMaterial( Mogre::MaterialPtr^ mat );
	
		void SetMaterialName( String^ name );
	
		Mogre::MaterialPtr^ GetMaterial( );
	
		void SetInput( size_t id, String^ input );
		void SetInput( size_t id );
	
		String^ GetInput( size_t id );
	
		void ClearAllInputs( );
	
		bool _isSupported( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( CompositionPass )
	
		//Protected Declarations
	protected public:
	
	};
	

}
