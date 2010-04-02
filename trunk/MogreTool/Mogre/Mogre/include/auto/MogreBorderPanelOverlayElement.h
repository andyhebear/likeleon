/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreBorderPanelOverlayElement.h"
#include "MogrePanelOverlayElement.h"
#include "MogrePrerequisites.h"
#include "MogreOverlayElement.h"
#include "MogreRenderable.h"
#include "MogreCommon.h"
#include "MogrePlane.h"
#include "MogreGpuProgram.h"

namespace Mogre
{
	//################################################################
	//BorderPanelOverlayElement
	//################################################################
	
	public ref class BorderPanelOverlayElement : public PanelOverlayElement
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		BorderPanelOverlayElement( CLRObject* obj ) : PanelOverlayElement(obj)
		{
		}
	
	
		//Public Declarations
	public:
		BorderPanelOverlayElement( String^ name );
	
	
		property String^ BorderMaterialName
		{
		public:
			String^ get();
		public:
			void set(String^ name);
		}
	
		property Mogre::Real BottomBorderSize
		{
		public:
			Mogre::Real get();
		}
	
		property String^ BottomBorderUVString
		{
		public:
			String^ get();
		}
	
		property String^ BottomLeftBorderUVString
		{
		public:
			String^ get();
		}
	
		property String^ BottomRightBorderUVString
		{
		public:
			String^ get();
		}
	
		property Mogre::Real LeftBorderSize
		{
		public:
			Mogre::Real get();
		}
	
		property String^ LeftBorderUVString
		{
		public:
			String^ get();
		}
	
		property Mogre::GuiMetricsMode MetricsMode
		{
		public:
			Mogre::GuiMetricsMode get();
		public:
			void set(Mogre::GuiMetricsMode gmm);
		}
	
		property Mogre::Real RightBorderSize
		{
		public:
			Mogre::Real get();
		}
	
		property String^ RightBorderUVString
		{
		public:
			String^ get();
		}
	
		property Mogre::Real TopBorderSize
		{
		public:
			Mogre::Real get();
		}
	
		property String^ TopBorderUVString
		{
		public:
			String^ get();
		}
	
		property String^ TopLeftBorderUVString
		{
		public:
			String^ get();
		}
	
		property String^ TopRightBorderUVString
		{
		public:
			String^ get();
		}
	
		property String^ TypeName
		{
		public:
			String^ get();
		}
	
		void Initialise( );
	
		void SetBorderSize( Mogre::Real size );
	
		void SetBorderSize( Mogre::Real sides, Mogre::Real topAndBottom );
	
		void SetBorderSize( Mogre::Real left, Mogre::Real right, Mogre::Real top, Mogre::Real bottom );
	
		void SetLeftBorderUV( Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2 );
	
		void SetRightBorderUV( Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2 );
	
		void SetTopBorderUV( Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2 );
	
		void SetBottomBorderUV( Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2 );
	
		void SetTopLeftBorderUV( Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2 );
	
		void SetTopRightBorderUV( Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2 );
	
		void SetBottomLeftBorderUV( Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2 );
	
		void SetBottomRightBorderUV( Mogre::Real u1, Mogre::Real v1, Mogre::Real u2, Mogre::Real v2 );
	
		void _updateRenderQueue( Mogre::RenderQueue^ queue );
	
		void _update( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( BorderPanelOverlayElement )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//BorderRenderable
	//################################################################
	
	public ref class BorderRenderable : public Wrapper, public IRenderable
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		BorderRenderable( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::Renderable* _IRenderable_GetNativePtr() = IRenderable::_GetNativePtr;
	
	
		//Public Declarations
	public:
		BorderRenderable( Mogre::BorderPanelOverlayElement^ parent );
	
	
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
	
		virtual Mogre::MaterialPtr^ GetMaterial( );
	
		virtual void GetRenderOperation( Mogre::RenderOperation^ op );
	
		virtual void GetWorldTransforms( Mogre::Matrix4::NativeValue* xform );
	
		virtual Mogre::Real GetSquaredViewDepth( Mogre::Camera^ cam );
	
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
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( BorderRenderable )
	
		//Protected Declarations
	protected public:
	
	};
	

}
