/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreRenderable.h"
#include "MogrePrerequisites.h"
#include "MogreCommon.h"
#include "MogrePlane.h"
#include "MogreGpuProgram.h"

namespace Mogre
{
	class Renderable_ProtectedTypesProxy : public Ogre::Renderable
	{
	public:
		friend ref class Mogre::Renderable;
		typedef Ogre::Renderable::CustomParameterMap CustomParameterMap;
	};
	
	//################################################################
	//IRenderable
	//################################################################
	
	public interface class IRenderable
	{
		//Nested Types
	
		//Private Declarations
	
		//Internal Declarations
	
		//Public Declarations
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IRenderable, Ogre::Renderable )
	
		virtual Ogre::Renderable* _GetNativePtr();
	
	public:
	
	
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
	
		virtual Mogre::Const_PlaneList^ GetClipPlanes( );
	
	
	
		virtual void _updateCustomGpuParameter( Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params );
	
	
		//Protected Declarations
	
	};
	
	//################################################################
	//IRenderable
	//################################################################
	
	public ref class Renderable abstract : public Wrapper, public IRenderable
	{
		//Nested Types
		protected public: ref class CustomParameterMap;
	
		#define STLDECL_MANAGEDKEY size_t
		#define STLDECL_MANAGEDVALUE Mogre::Vector4
		#define STLDECL_NATIVEKEY size_t
		#define STLDECL_NATIVEVALUE Ogre::Vector4
		protected public: INC_DECLARE_STLMAP( CustomParameterMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, protected public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		//Private Declarations
	private protected:
		static Renderable();
	
		//Cached fields
		Mogre::Renderable::CustomParameterMap^ _mCustomParameters;
		static Mogre::Const_PlaneList^ _msDummyPlaneList;
	
		//Internal Declarations
	public protected:
		Renderable( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::Renderable* _IRenderable_GetNativePtr() = IRenderable::_GetNativePtr;
	
	
		//Public Declarations
	public:
		Renderable( );
	
	
		property bool CastsShadows
		{
		public:
			[Implementation::MethodIndex( 4 )]
			virtual bool get();
		}
	
		property bool NormaliseNormals
		{
		public:
			[Implementation::MethodIndex( 2 )]
			virtual bool get();
		}
	
		property unsigned short NumWorldTransforms
		{
		public:
			[Implementation::MethodIndex( 1 )]
			virtual unsigned short get();
		}
	
		property bool PolygonModeOverrideable
		{
		public:
			[Implementation::MethodIndex( 7 )]
			virtual bool get();
		public:
			[Implementation::MethodIndex( 6 )]
			virtual void set(bool override);
		}
	
		property Mogre::Technique^ Technique
		{
		public:
			[Implementation::MethodIndex( 0 )]
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
	
		property Mogre::Quaternion WorldOrientation
		{
		public:
			virtual Mogre::Quaternion get() abstract;
		}
	
		property Mogre::Vector3 WorldPosition
		{
		public:
			virtual Mogre::Vector3 get() abstract;
		}
	
		virtual Mogre::MaterialPtr^ GetMaterial( ) abstract;
	
		virtual void GetRenderOperation( Mogre::RenderOperation^ op ) abstract;
	
		virtual void GetWorldTransforms( Mogre::Matrix4::NativeValue* xform ) abstract;
	
		virtual Mogre::Real GetSquaredViewDepth( Mogre::Camera^ cam ) abstract;
	
		virtual Mogre::Const_LightList^ GetLights( ) abstract;
	
		[Implementation::MethodIndex( 3 )]
		virtual Mogre::Const_PlaneList^ GetClipPlanes( );
	
		void SetCustomParameter( size_t index, Mogre::Vector4 value );
	
		Mogre::Vector4 GetCustomParameter( size_t index );
	
		[Implementation::MethodIndex( 5 )]
		virtual void _updateCustomGpuParameter( Mogre::GpuProgramParameters::AutoConstantEntry_NativePtr constantEntry, Mogre::GpuProgramParameters^ params );
	
	
		//Protected Declarations
	protected public:
		property Mogre::Renderable::CustomParameterMap^ mCustomParameters
		{
		protected public:
			Mogre::Renderable::CustomParameterMap^ get();
		}
	
		property bool mPolygonModeOverrideable
		{
		protected public:
			bool get();
		protected public:
			void set(bool value);
		}
	
		property bool mUseIdentityProjection
		{
		protected public:
			bool get();
		protected public:
			void set(bool value);
		}
	
		property bool mUseIdentityView
		{
		protected public:
			bool get();
		protected public:
			void set(bool value);
		}
	
		static property Mogre::Const_PlaneList^ msDummyPlaneList
		{
		protected public:
			Mogre::Const_PlaneList^ get();
		}
	
	
	};
	
	
	class Renderable_ProtectedStaticsProxy : public Ogre::Renderable
	{
	public:
		friend ref class Mogre::Renderable;
		friend ref class Mogre::Renderable::mCustomParameters;
		friend ref class Mogre::Renderable::mPolygonModeOverrideable;
		friend ref class Mogre::Renderable::mUseIdentityProjection;
		friend ref class Mogre::Renderable::mUseIdentityView;
		friend ref class Mogre::Renderable::msDummyPlaneList;
	};
	
	//################################################################
	//Renderable_Proxy
	//################################################################
	
	class Renderable_Proxy : public Ogre::Renderable, public CLRObject
	{
	public:
		friend ref class Mogre::Renderable;
		friend ref class Mogre::Renderable::mCustomParameters;
		friend ref class Mogre::Renderable::mPolygonModeOverrideable;
		friend ref class Mogre::Renderable::mUseIdentityProjection;
		friend ref class Mogre::Renderable::mUseIdentityView;
	
		bool* _overriden;
	
		gcroot<Mogre::Renderable^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		Renderable_Proxy( Mogre::Renderable^ managedObj ) :
			Ogre::Renderable( ),
			_managed(managedObj)
		{
		}
	
		virtual const Ogre::MaterialPtr& getMaterial( ) const override;
	
		virtual Ogre::Technique* getTechnique( ) const override;
	
		virtual void getRenderOperation( Ogre::RenderOperation& op ) override;
	
		virtual void getWorldTransforms( Ogre::Matrix4* xform ) const override;
	
		virtual const Ogre::Quaternion& getWorldOrientation( ) const override;
	
		virtual const Ogre::Vector3& getWorldPosition( ) const override;
	
		virtual unsigned short getNumWorldTransforms( ) const override;
	
		virtual Ogre::Real getSquaredViewDepth( const Ogre::Camera* cam ) const override;
	
		virtual bool getNormaliseNormals( ) const override;
	
		virtual const Ogre::LightList& getLights( ) const override;
	
		virtual const Ogre::PlaneList& getClipPlanes( ) const override;
	
		virtual bool getCastsShadows( ) const override;
	
		virtual void _updateCustomGpuParameter( const Ogre::GpuProgramParameters::AutoConstantEntry& constantEntry, Ogre::GpuProgramParameters* params ) const override;
	
		virtual void setPolygonModeOverrideable( bool override ) override;
	
		virtual bool getPolygonModeOverrideable( ) const override;
	};
	

}
