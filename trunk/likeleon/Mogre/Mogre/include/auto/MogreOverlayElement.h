/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreOverlayElement.h"
#include "MogreStringInterface.h"
#include "MogreRenderable.h"
#include "MogrePrerequisites.h"
#include "MogreCommon.h"
#include "MogrePlane.h"
#include "MogreGpuProgram.h"

namespace Mogre
{
	public enum class GuiVerticalAlignment
	{
		GVA_TOP = Ogre::GVA_TOP,
		GVA_CENTER = Ogre::GVA_CENTER,
		GVA_BOTTOM = Ogre::GVA_BOTTOM
	};
	
	public enum class GuiHorizontalAlignment
	{
		GHA_LEFT = Ogre::GHA_LEFT,
		GHA_CENTER = Ogre::GHA_CENTER,
		GHA_RIGHT = Ogre::GHA_RIGHT
	};
	
	public enum class GuiMetricsMode
	{
		GMM_RELATIVE = Ogre::GMM_RELATIVE,
		GMM_PIXELS = Ogre::GMM_PIXELS,
		GMM_RELATIVE_ASPECT_ADJUSTED = Ogre::GMM_RELATIVE_ASPECT_ADJUSTED
	};
	
	//################################################################
	//OverlayElement
	//################################################################
	
	public ref class OverlayElement : public Wrapper, public IStringInterface, public IRenderable
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		OverlayElement( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::StringInterface* _IStringInterface_GetNativePtr() = IStringInterface::_GetNativePtr;
	
		virtual Ogre::Renderable* _IRenderable_GetNativePtr() = IRenderable::_GetNativePtr;
	
	
		//Public Declarations
	public:
	
	
		property String^ Caption
		{
		public:
			String^ get();
		public:
			void set(String^ text);
		}
	
		property Mogre::ColourValue Colour
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue col);
		}
	
		property Mogre::Real Height
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real height);
		}
	
		property Mogre::GuiHorizontalAlignment HorizontalAlignment
		{
		public:
			Mogre::GuiHorizontalAlignment get();
		public:
			void set(Mogre::GuiHorizontalAlignment gha);
		}
	
		property bool IsCloneable
		{
		public:
			bool get();
		}
	
		property bool IsContainer
		{
		public:
			bool get();
		}
	
		property bool IsEnabled
		{
		public:
			bool get();
		}
	
		property bool IsKeyEnabled
		{
		public:
			bool get();
		}
	
		property bool IsVisible
		{
		public:
			bool get();
		}
	
		property Mogre::Real Left
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real left);
		}
	
		property String^ MaterialName
		{
		public:
			String^ get();
		public:
			void set(String^ matName);
		}
	
		property Mogre::GuiMetricsMode MetricsMode
		{
		public:
			Mogre::GuiMetricsMode get();
		public:
			void set(Mogre::GuiMetricsMode gmm);
		}
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		property Mogre::OverlayContainer^ Parent
		{
		public:
			Mogre::OverlayContainer^ get();
		}
	
		property Mogre::OverlayElement^ SourceTemplate
		{
		public:
			Mogre::OverlayElement^ get();
		}
	
		property Mogre::Real Top
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real Top);
		}
	
		property String^ TypeName
		{
		public:
			String^ get();
		}
	
		property Mogre::GuiVerticalAlignment VerticalAlignment
		{
		public:
			Mogre::GuiVerticalAlignment get();
		public:
			void set(Mogre::GuiVerticalAlignment gva);
		}
	
		property Mogre::Real Width
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real width);
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
	
		property Mogre::ushort ZOrder
		{
		public:
			Mogre::ushort get();
		}
	
		void Initialise( );
	
		void Show( );
	
		void Hide( );
	
		void SetEnabled( bool b );
	
		void SetDimensions( Mogre::Real width, Mogre::Real height );
	
		void SetPosition( Mogre::Real left, Mogre::Real top );
	
		Mogre::Real _getLeft( );
	
		Mogre::Real _getTop( );
	
		Mogre::Real _getWidth( );
	
		Mogre::Real _getHeight( );
	
		void _setLeft( Mogre::Real left );
	
		void _setTop( Mogre::Real top );
	
		void _setWidth( Mogre::Real width );
	
		void _setHeight( Mogre::Real height );
	
		void _setPosition( Mogre::Real left, Mogre::Real top );
	
		void _setDimensions( Mogre::Real width, Mogre::Real height );
	
		virtual Mogre::MaterialPtr^ GetMaterial( );
	
		virtual void GetWorldTransforms( Mogre::Matrix4::NativeValue* xform );
	
		void _positionsOutOfDate( );
	
		void _update( );
	
		void _updateFromParent( );
	
		void _notifyParent( Mogre::OverlayContainer^ parent, Mogre::Overlay^ overlay );
	
		Mogre::Real _getDerivedLeft( );
	
		Mogre::Real _getDerivedTop( );
	
		Mogre::Real _getRelativeWidth( );
	
		Mogre::Real _getRelativeHeight( );
	
		void _getClippingRegion( Mogre::Rectangle clippingRegion );
	
		void _notifyZOrder( Mogre::ushort newZOrder );
	
		void _notifyWorldTransforms( Mogre::Matrix4^ xform );
	
		void _notifyViewport( );
	
		void _updateRenderQueue( Mogre::RenderQueue^ queue );
	
		bool Contains( Mogre::Real x, Mogre::Real y );
	
		Mogre::OverlayElement^ FindElementAt( Mogre::Real x, Mogre::Real y );
	
		void SetCloneable( bool c );
	
		void _setParent( Mogre::OverlayContainer^ parent );
	
		virtual Mogre::Real GetSquaredViewDepth( Mogre::Camera^ cam );
	
		virtual Mogre::Const_LightList^ GetLights( );
	
		void CopyFromTemplate( Mogre::OverlayElement^ templateOverlay );
	
		Mogre::OverlayElement^ Clone( String^ instanceName );
	
		//------------------------------------------------------------
		// Implementation for IStringInterface
		//------------------------------------------------------------
	
		property Mogre::ParamDictionary_NativePtr ParamDictionary
		{
		public:
			Mogre::ParamDictionary_NativePtr get();
		}
	
	public:
		Mogre::Const_ParameterList^ GetParameters( );
	
	public:
		virtual bool SetParameter( String^ name, String^ value );
	
	public:
		virtual void SetParameterList( Mogre::Const_NameValuePairList^ paramList );
	
	public:
		virtual String^ GetParameter( String^ name );
	
	public:
		virtual void CopyParametersTo( Mogre::IStringInterface^ dest );
	
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
		virtual void GetRenderOperation( Mogre::RenderOperation^ op );
	
	public:
		virtual Mogre::Const_PlaneList^ GetClipPlanes( );
	
	public:
		void SetCustomParameter( size_t index, Mogre::Vector4 value );
	
	public:
		Mogre::Vector4 GetCustomParameter( size_t index );
	
	public:
		virtual void _updateCustomGpuParameter( Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( OverlayElement )
	
		//Protected Declarations
	protected public:
	
	};
	

}
