/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreSimpleRenderable.h"
#include "MogreRenderable.h"
#include "MogreMovableObject.h"
#include "MogrePrerequisites.h"
#include "MogreCommon.h"
#include "MogrePlane.h"
#include "MogreGpuProgram.h"

namespace Mogre
{
	//################################################################
	//SimpleRenderable
	//################################################################
	
	public ref class SimpleRenderable : public MovableObject, public IRenderable
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		SimpleRenderable( CLRObject* obj ) : MovableObject(obj)
		{
		}
	
		virtual Ogre::Renderable* _IRenderable_GetNativePtr() = IRenderable::_GetNativePtr;
	
	
		//Public Declarations
	public:
	
	
		property Mogre::AxisAlignedBox^ BoundingBox
		{
		public:
			Mogre::AxisAlignedBox^ get();
		public:
			void set(Mogre::AxisAlignedBox^ box);
		}
	
		property String^ MovableType
		{
		public:
			String^ get();
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
	
		void SetMaterial( String^ matName );
	
		virtual Mogre::MaterialPtr^ GetMaterial( );
	
		void SetRenderOperation( Mogre::RenderOperation^ rend );
	
		virtual void GetRenderOperation( Mogre::RenderOperation^ op );
	
		void SetWorldTransform( Mogre::Matrix4^ xform );
	
		virtual void GetWorldTransforms( Mogre::Matrix4::NativeValue* xform );
	
		void _notifyCurrentCamera( Mogre::Camera^ cam );
	
		void _updateRenderQueue( Mogre::RenderQueue^ queue );
	
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
		virtual Mogre::Real GetSquaredViewDepth( Mogre::Camera^ cam );
	
	public:
		virtual Mogre::Const_PlaneList^ GetClipPlanes( );
	
	public:
		void SetCustomParameter( size_t index, Mogre::Vector4 value );
	
	public:
		Mogre::Vector4 GetCustomParameter( size_t index );
	
	public:
		virtual void _updateCustomGpuParameter( Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( SimpleRenderable )
	
		//Protected Declarations
	protected public:
	
	};
	

	//################################################################
	//OBBoxRenderable
	//################################################################
	
	public ref class OBBoxRenderable : public SimpleRenderable
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		OBBoxRenderable( CLRObject* obj ) : SimpleRenderable(obj)
		{
		}	
	
		//Public Declarations
	public:
		OBBoxRenderable();
		OBBoxRenderable( String^ matname );
		OBBoxRenderable( String^ matname, Mogre::ColourValue colour );

		void SetupVertices( Mogre::AxisAlignedBox^ aab );
		virtual Mogre::Real GetSquaredViewDepth( Mogre::Camera^ cam ) override;

		property Mogre::Real BoundingRadius
		{
		public:
			Mogre::Real get();
		}

		virtual void GetWorldTransforms( Mogre::Matrix4::NativeValue* xform ) override;

		DEFINE_MANAGED_NATIVE_CONVERSIONS( OBBoxRenderable )
	
		//Protected Declarations
	protected public:
	};
}
