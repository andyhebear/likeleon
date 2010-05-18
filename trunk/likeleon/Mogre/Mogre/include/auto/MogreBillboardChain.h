/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreBillboardChain.h"
#include "MogreRenderable.h"
#include "MogreMovableObject.h"
#include "MogrePrerequisites.h"
#include "MogreCommon.h"
#include "MogrePlane.h"
#include "MogreGpuProgram.h"

namespace Mogre
{
	//################################################################
	//BillboardChain
	//################################################################
	
	public ref class BillboardChain : public MovableObject, public IRenderable
	{
		//Nested Types
		public: ref class ElementList;
	
		public: enum class TexCoordDirection
		{
			TCD_U = Ogre::BillboardChain::TCD_U,
			TCD_V = Ogre::BillboardChain::TCD_V
		};
	
		//################################################################
		//Element_NativePtr
		//################################################################
	
		public: value class Element_NativePtr
		{
			//Nested Types
	
			//Private Declarations
		private protected:
			Ogre::BillboardChain::Element* _native;
	
			//Internal Declarations
		public protected:
	
			//Public Declarations
		public:
	
	
			property Mogre::Vector3 position
			{
			public:
				Mogre::Vector3 get();
			public:
				void set(Mogre::Vector3 value);
			}
	
			property Mogre::Real width
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			property Mogre::Real texCoord
			{
			public:
				Mogre::Real get();
			public:
				void set(Mogre::Real value);
			}
	
			property Mogre::ColourValue colour
			{
			public:
				Mogre::ColourValue get();
			public:
				void set(Mogre::ColourValue value);
			}
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( BillboardChain::Element_NativePtr, Ogre::BillboardChain::Element )
	
	
			property IntPtr NativePtr
			{
				IntPtr get() { return (IntPtr)_native; }
			}
	
			static Element_NativePtr Create( );
			static Element_NativePtr Create( Mogre::Vector3 position, Mogre::Real width, Mogre::Real texCoord, Mogre::ColourValue colour );
	
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
	
		#define STLDECL_MANAGEDTYPE Mogre::BillboardChain::Element_NativePtr
		#define STLDECL_NATIVETYPE Ogre::BillboardChain::Element
		public: INC_DECLARE_STLVECTOR( ElementList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		BillboardChain( CLRObject* obj ) : MovableObject(obj)
		{
		}
	
		virtual Ogre::Renderable* _IRenderable_GetNativePtr() = IRenderable::_GetNativePtr;
	
	
		//Public Declarations
	public:
		BillboardChain( String^ name, size_t maxElements, size_t numberOfChains, bool useTextureCoords, bool useColours, bool dynamic );
		BillboardChain( String^ name, size_t maxElements, size_t numberOfChains, bool useTextureCoords, bool useColours );
		BillboardChain( String^ name, size_t maxElements, size_t numberOfChains, bool useTextureCoords );
		BillboardChain( String^ name, size_t maxElements, size_t numberOfChains );
		BillboardChain( String^ name, size_t maxElements );
		BillboardChain( String^ name );
	
	
		property Mogre::AxisAlignedBox^ BoundingBox
		{
		public:
			Mogre::AxisAlignedBox^ get();
		}
	
		property Mogre::Real BoundingRadius
		{
		public:
			Mogre::Real get();
		}
	
		property bool Dynamic
		{
		public:
			bool get();
		public:
			void set(bool dyn);
		}
	
		property String^ MaterialName
		{
		public:
			String^ get();
		public:
			void set(String^ name);
		}
	
		property size_t MaxChainElements
		{
		public:
			size_t get();
		public:
			void set(size_t maxElements);
		}
	
		property String^ MovableType
		{
		public:
			String^ get();
		}
	
		property size_t NumberOfChains
		{
		public:
			size_t get();
		public:
			void set(size_t numChains);
		}
	
		property const Mogre::Real* OtherTextureCoordRange
		{
		public:
			const Mogre::Real* get();
		}
	
		property Mogre::BillboardChain::TexCoordDirection TextureCoordDirection
		{
		public:
			Mogre::BillboardChain::TexCoordDirection get();
		public:
			void set(Mogre::BillboardChain::TexCoordDirection dir);
		}
	
		property bool UseTextureCoords
		{
		public:
			bool get();
		public:
			void set(bool use);
		}
	
		property bool UseVertexColours
		{
		public:
			bool get();
		public:
			void set(bool use);
		}
	
		property Mogre::Quaternion WorldOrientation
		{
		public:
			virtual Mogre::Quaternion get();
		}
	
		property Mogre::Vector3 WorldPosition
		{
		public:
			virtual Mogre::Vector3 get();
		}
	
		void SetOtherTextureCoordRange( Mogre::Real start, Mogre::Real end );
	
		void AddChainElement( size_t chainIndex, Mogre::BillboardChain::Element_NativePtr billboardChainElement );
	
		void RemoveChainElement( size_t chainIndex );
	
		void UpdateChainElement( size_t chainIndex, size_t elementIndex, Mogre::BillboardChain::Element_NativePtr billboardChainElement );
	
		Mogre::BillboardChain::Element_NativePtr GetChainElement( size_t chainIndex, size_t elementIndex );
	
		void ClearChain( size_t chainIndex );
	
		void ClearAllChains( );
	
		void _notifyCurrentCamera( Mogre::Camera^ cam );
	
		virtual Mogre::Real GetSquaredViewDepth( Mogre::Camera^ cam );
	
		virtual Mogre::MaterialPtr^ GetMaterial( );
	
		void _updateRenderQueue( Mogre::RenderQueue^ param1 );
	
		virtual void GetRenderOperation( Mogre::RenderOperation^ param1 );
	
		virtual void GetWorldTransforms( Mogre::Matrix4::NativeValue* param1 );
	
		virtual Mogre::Const_LightList^ GetLights( );
	
		//------------------------------------------------------------
		// Implementation for IRenderable
		//------------------------------------------------------------
	
		property bool CastsShadows
		{
		public:
			virtual bool get();
		}
	
		property bool NormaliseNormals
		{
		public:
			virtual bool get();
		}
	
		property unsigned short NumWorldTransforms
		{
		public:
			virtual unsigned short get();
		}
	
		property bool PolygonModeOverrideable
		{
		public:
			virtual bool get();
		public:
			virtual void set(bool override);
		}
	
		property Mogre::Technique^ Technique
		{
		public:
			virtual Mogre::Technique^ get();
		}
	
		property bool UseIdentityProjection
		{
		public:
			bool get();
		public:
			void set(bool useIdentityProjection);
		}
	
		property bool UseIdentityView
		{
		public:
			bool get();
		public:
			void set(bool useIdentityView);
		}
	
	public:
		virtual Mogre::Const_PlaneList^ GetClipPlanes( );
	
	public:
		void SetCustomParameter( size_t index, Mogre::Vector4 value );
	
	public:
		Mogre::Vector4 GetCustomParameter( size_t index );
	
	public:
		virtual void _updateCustomGpuParameter( Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( BillboardChain )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//BillboardChainFactory
	//################################################################
	
	public ref class BillboardChainFactory : public MovableObjectFactory
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		BillboardChainFactory( CLRObject* obj ) : MovableObjectFactory(obj)
		{
		}
	
	
		//Public Declarations
	public:
		BillboardChainFactory( );
	
	
		static property String^ FACTORY_TYPE_NAME
		{
		public:
			String^ get();
		public:
			void set(String^ value);
		}
	
		property String^ Type
		{
		public:
			String^ get();
		}
	
		void DestroyInstance( Mogre::MovableObject^ obj );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( BillboardChainFactory )
	
		//Protected Declarations
	protected public:
	
	};
	

}
