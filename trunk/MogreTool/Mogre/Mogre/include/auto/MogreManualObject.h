/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreManualObject.h"
#include "MogreMovableObject.h"
#include "MogreRenderable.h"
#include "MogrePrerequisites.h"
#include "MogreRenderOperation.h"
#include "MogreCommon.h"
#include "MogrePlane.h"
#include "MogreGpuProgram.h"
#include "MogreShadowCaster.h"
#include "MogrePlatform.h"

namespace Mogre
{
	//################################################################
	//ManualObject
	//################################################################
	
	public ref class ManualObject : public MovableObject
	{
		//Nested Types
		public: ref class SectionList;
		public: ref class ManualObjectSection;
		public: ref class ManualObjectSectionShadowRenderable;
	
		//################################################################
		//ManualObjectSection
		//################################################################
	
		public: ref class ManualObjectSection : public Wrapper, public IRenderable
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			ManualObjectSection( CLRObject* obj ) : Wrapper(obj)
			{
			}
	
			virtual Ogre::Renderable* _IRenderable_GetNativePtr() = IRenderable::_GetNativePtr;
	
	
			//Public Declarations
		public:
			ManualObjectSection( Mogre::ManualObject^ parent, String^ materialName, Mogre::RenderOperation::OperationTypes opType );
	
	
			property String^ MaterialName
			{
			public:
				String^ get();
			public:
				void set(String^ name);
			}
	
			property Mogre::RenderOperation^ RenderOperation
			{
			public:
				Mogre::RenderOperation^ get();
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
	
			virtual Mogre::Real GetSquaredViewDepth( Mogre::Camera^ param1 );
	
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
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS( ManualObject::ManualObjectSection )
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//ManualObjectSectionShadowRenderable
		//################################################################
	
		public: ref class ManualObjectSectionShadowRenderable : public ShadowRenderable
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			ManualObjectSectionShadowRenderable( CLRObject* obj ) : ShadowRenderable(obj)
			{
			}
	
	
			//Public Declarations
		public:
			ManualObjectSectionShadowRenderable( Mogre::ManualObject^ parent, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, Mogre::VertexData^ vertexData, bool createSeparateLightCap, bool isLightCap );
			ManualObjectSectionShadowRenderable( Mogre::ManualObject^ parent, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, Mogre::VertexData^ vertexData, bool createSeparateLightCap );
	
	
			property Mogre::Quaternion WorldOrientation
			{
			public:
				virtual Mogre::Quaternion get() override;
			}
	
			property Mogre::Vector3 WorldPosition
			{
			public:
				virtual Mogre::Vector3 get() override;
			}
	
			virtual void GetWorldTransforms( Mogre::Matrix4::NativeValue* xform ) override;
	
			Mogre::HardwareVertexBufferSharedPtr^ GetPositionBuffer( );
	
			Mogre::HardwareVertexBufferSharedPtr^ GetWBuffer( );
	
			DEFINE_MANAGED_NATIVE_CONVERSIONS( ManualObject::ManualObjectSectionShadowRenderable )
	
			//Protected Declarations
		protected public:
	
		};
	
		#define STLDECL_MANAGEDTYPE Mogre::ManualObject::ManualObjectSection^
		#define STLDECL_NATIVETYPE Ogre::ManualObject::ManualObjectSection*
		public: INC_DECLARE_STLVECTOR( SectionList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ManualObject( CLRObject* obj ) : MovableObject(obj)
		{
		}
	
	
		//Public Declarations
	public:
		ManualObject( String^ name );
	
	
		property Mogre::AxisAlignedBox^ BoundingBox
		{
		public:
			Mogre::AxisAlignedBox^ get();
		public:
			void set(Mogre::AxisAlignedBox^ box);
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
	
		property Mogre::EdgeData^ EdgeList
		{
		public:
			Mogre::EdgeData^ get();
		}
	
		property bool HasEdgeList
		{
		public:
			bool get();
		}
	
		property String^ MovableType
		{
		public:
			String^ get();
		}
	
		property unsigned int NumSections
		{
		public:
			unsigned int get();
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
	
		void Clear( );
	
		void EstimateVertexCount( size_t vcount );
	
		void EstimateIndexCount( size_t icount );
	
		void Begin( String^ materialName, Mogre::RenderOperation::OperationTypes opType );
		void Begin( String^ materialName );
	
		void BeginUpdate( size_t sectionIndex );
	
		void Position( Mogre::Vector3 pos );
	
		void Position( Mogre::Real x, Mogre::Real y, Mogre::Real z );
	
		void Normal( Mogre::Vector3 norm );
	
		void Normal( Mogre::Real x, Mogre::Real y, Mogre::Real z );
	
		void TextureCoord( Mogre::Real u );
	
		void TextureCoord( Mogre::Real u, Mogre::Real v );
	
		void TextureCoord( Mogre::Real u, Mogre::Real v, Mogre::Real w );
	
		void TextureCoord( Mogre::Vector2 uv );
	
		void TextureCoord( Mogre::Vector3 uvw );
	
		void Colour( Mogre::ColourValue col );
	
		void Colour( Mogre::Real r, Mogre::Real g, Mogre::Real b, Mogre::Real a );
		void Colour( Mogre::Real r, Mogre::Real g, Mogre::Real b );
	
		void Index( Mogre::uint16 idx );
	
		void Triangle( Mogre::uint16 i1, Mogre::uint16 i2, Mogre::uint16 i3 );
	
		void Quad( Mogre::uint16 i1, Mogre::uint16 i2, Mogre::uint16 i3, Mogre::uint16 i4 );
	
		Mogre::ManualObject::ManualObjectSection^ End( );
	
		void SetMaterialName( size_t subindex, String^ name );
	
		Mogre::MeshPtr^ ConvertToMesh( String^ meshName, String^ groupName );
		Mogre::MeshPtr^ ConvertToMesh( String^ meshName );
	
		Mogre::ManualObject::ManualObjectSection^ GetSection( unsigned int index );
	
		void _updateRenderQueue( Mogre::RenderQueue^ queue );
	
		Mogre::ShadowCaster::ShadowRenderableListIterator^ GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDist, unsigned long flags );
		Mogre::ShadowCaster::ShadowRenderableListIterator^ GetShadowVolumeRenderableIterator( Mogre::ShadowTechnique shadowTechnique, Mogre::Light^ light, Mogre::HardwareIndexBufferSharedPtr^ indexBuffer, bool extrudeVertices, Mogre::Real extrusionDist );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( ManualObject )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//ManualObjectFactory
	//################################################################
	
	public ref class ManualObjectFactory : public MovableObjectFactory
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ManualObjectFactory( CLRObject* obj ) : MovableObjectFactory(obj)
		{
		}
	
	
		//Public Declarations
	public:
		ManualObjectFactory( );
	
	
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
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( ManualObjectFactory )
	
		//Protected Declarations
	protected public:
	
	};
	

}
