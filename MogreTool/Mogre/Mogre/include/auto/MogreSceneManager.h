/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreSceneManager.h"
#include "MogrePrerequisites.h"
#include "MogreCommon.h"
#include "MogreRenderQueueListener.h"
#include "MogrePlatform.h"
#include "MogreStringVector.h"
#include "MogrePlaneBoundedVolume.h"
#include "MogrePixelFormat.h"
#include "MogreShadowTextureManager.h"
#include "MogreRenderQueueSortingGrouping.h"
#include "MogreSceneQuery.h"

namespace Mogre
{
	[Flags]
	public enum class SceneType
	{
		ST_GENERIC = Ogre::ST_GENERIC,
		ST_EXTERIOR_CLOSE = Ogre::ST_EXTERIOR_CLOSE,
		ST_EXTERIOR_FAR = Ogre::ST_EXTERIOR_FAR,
		ST_EXTERIOR_REAL_FAR = Ogre::ST_EXTERIOR_REAL_FAR,
		ST_INTERIOR = Ogre::ST_INTERIOR
	};
	
	//################################################################
	//SceneManagerMetaData_NativePtr
	//################################################################
	
	public value class SceneManagerMetaData_NativePtr
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		Ogre::SceneManagerMetaData* _native;
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		property String^ typeName
		{
		public:
			String^ get();
		}
	
		property String^ description
		{
		public:
			String^ get();
		}
	
		property Mogre::SceneType sceneTypeMask
		{
		public:
			Mogre::SceneType get();
		}
	
		property bool worldGeometrySupported
		{
		public:
			bool get();
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( SceneManagerMetaData_NativePtr, Ogre::SceneManagerMetaData )
	
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_native; }
		}
	
		property bool IsNull
		{
			bool get() { return (_native == 0); }
		}
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//VisibleObjectsBoundsInfo_NativePtr
	//################################################################
	
	public value class VisibleObjectsBoundsInfo_NativePtr
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		Ogre::VisibleObjectsBoundsInfo* _native;
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		property Mogre::AxisAlignedBox^ aabb
		{
		public:
			Mogre::AxisAlignedBox^ get();
		public:
			void set(Mogre::AxisAlignedBox^ value);
		}
	
		property Mogre::Real minDistance
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		property Mogre::Real maxDistance
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real value);
		}
	
		void Reset( );
	
		void Merge( Mogre::AxisAlignedBox^ boxBounds, Mogre::Sphere sphereBounds, Mogre::Camera^ cam );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( VisibleObjectsBoundsInfo_NativePtr, Ogre::VisibleObjectsBoundsInfo )
	
	
		property IntPtr NativePtr
		{
			IntPtr get() { return (IntPtr)_native; }
		}
	
		static VisibleObjectsBoundsInfo_NativePtr Create( );
	
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
	
	//################################################################
	//ViewPoint
	//################################################################
	
	public ref class ViewPoint
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		ViewPoint()
		{
		}
	
		Mogre::Vector3 _position;
		Mogre::Quaternion _orientation;
	
		static operator ViewPoint^ (const Ogre::ViewPoint& obj)
		{
			ViewPoint^ clr = gcnew ViewPoint;
			clr->_position = obj.position;
			clr->_orientation = obj.orientation;
	
			return clr;
		}
	
		static operator ViewPoint^ (const Ogre::ViewPoint* pObj)
		{
			return *pObj;
		}
	
		//Public Declarations
	public:
	
	
		property Mogre::Vector3 Position
		{
			Mogre::Vector3 get()
			{
				return _position;
			}
		}
	
		property Mogre::Quaternion Orientation
		{
			Mogre::Quaternion get()
			{
				return _orientation;
			}
		}
	
	
		//Protected Declarations
	protected public:
	
	};
	
	interface class IShadowListener_Receiver
	{
		void ShadowTexturesUpdated( size_t numberOfShadowTextures );
	
		void ShadowTextureCasterPreViewProj( Mogre::Light^ light, Mogre::Camera^ camera );
	
		void ShadowTextureReceiverPreViewProj( Mogre::Light^ light, Mogre::Frustum^ frustum );
	
		bool SortLightsAffectingFrustum( Mogre::LightList^ lightList );
	
	};
	
	public ref class ShadowListener abstract sealed
	{
	public:
		delegate static void ShadowTexturesUpdatedHandler( size_t numberOfShadowTextures );
		delegate static void ShadowTextureCasterPreViewProjHandler( Mogre::Light^ light, Mogre::Camera^ camera );
		delegate static void ShadowTextureReceiverPreViewProjHandler( Mogre::Light^ light, Mogre::Frustum^ frustum );
		delegate static bool SortLightsAffectingFrustumHandler( Mogre::LightList^ lightList );
	};
	
	//################################################################
	//ShadowListener
	//################################################################
	
	class ShadowListener_Director : public Ogre::ShadowListener
	{
		//Nested Types
	
		//Private Declarations
	private:
		gcroot<IShadowListener_Receiver^> _receiver;
	
		//Internal Declarations
	
		//Public Declarations
	public:
		ShadowListener_Director( IShadowListener_Receiver^ recv )
			: _receiver(recv), doCallForShadowTexturesUpdated(false), doCallForShadowTextureCasterPreViewProj(false), doCallForShadowTextureReceiverPreViewProj(false), doCallForSortLightsAffectingFrustum(false)
		{
		}
	
		bool doCallForShadowTexturesUpdated;
		bool doCallForShadowTextureCasterPreViewProj;
		bool doCallForShadowTextureReceiverPreViewProj;
		bool doCallForSortLightsAffectingFrustum;
	
		virtual void shadowTexturesUpdated( size_t numberOfShadowTextures ) override;
	
		virtual void shadowTextureCasterPreViewProj( Ogre::Light* light, Ogre::Camera* camera ) override;
	
		virtual void shadowTextureReceiverPreViewProj( Ogre::Light* light, Ogre::Frustum* frustum ) override;
	
		virtual bool sortLightsAffectingFrustum( Ogre::LightList& lightList ) override;
	
	
		//Protected Declarations
	
	};
	
	//################################################################
	//SceneManager
	//################################################################
	
	public ref class SceneManager : public Wrapper, public IRenderQueueListener_Receiver, public IShadowListener_Receiver
	{
		//Nested Types
		public: ref class SkyBoxGenParameters;
		public: ref class SkyDomeGenParameters;
		public: ref class SkyPlaneGenParameters;
	
		public: enum class IlluminationRenderStage
		{
			IRS_NONE = Ogre::SceneManager::IRS_NONE,
			IRS_RENDER_TO_TEXTURE = Ogre::SceneManager::IRS_RENDER_TO_TEXTURE,
			IRS_RENDER_RECEIVER_PASS = Ogre::SceneManager::IRS_RENDER_RECEIVER_PASS
		};
	
		public: enum class SpecialCaseRenderQueueMode
		{
			SCRQM_INCLUDE = Ogre::SceneManager::SCRQM_INCLUDE,
			SCRQM_EXCLUDE = Ogre::SceneManager::SCRQM_EXCLUDE
		};
	
		public: enum class PrefabType
		{
			PT_PLANE = Ogre::SceneManager::PT_PLANE,
			PT_CUBE = Ogre::SceneManager::PT_CUBE,
			PT_SPHERE = Ogre::SceneManager::PT_SPHERE
		};
	
		//################################################################
		//SkyBoxGenParameters
		//################################################################
	
		public: ref class SkyBoxGenParameters
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			SkyBoxGenParameters()
			{
			}
	
			Mogre::Real _skyBoxDistance;
	
			static operator SkyBoxGenParameters^ (const Ogre::SceneManager::SkyBoxGenParameters& obj)
			{
				SkyBoxGenParameters^ clr = gcnew SkyBoxGenParameters;
				clr->_skyBoxDistance = obj.skyBoxDistance;
	
				return clr;
			}
	
			static operator SkyBoxGenParameters^ (const Ogre::SceneManager::SkyBoxGenParameters* pObj)
			{
				return *pObj;
			}
	
			//Public Declarations
		public:
	
	
			property Mogre::Real SkyBoxDistance
			{
				Mogre::Real get()
				{
					return _skyBoxDistance;
				}
			}
	
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//SkyDomeGenParameters
		//################################################################
	
		public: ref class SkyDomeGenParameters
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			SkyDomeGenParameters()
			{
			}
	
			Mogre::Real _skyDomeCurvature;
			Mogre::Real _skyDomeTiling;
			Mogre::Real _skyDomeDistance;
			int _skyDomeXSegments;
			int _skyDomeYSegments;
			int _skyDomeYSegments_keep;
	
			static operator SkyDomeGenParameters^ (const Ogre::SceneManager::SkyDomeGenParameters& obj)
			{
				SkyDomeGenParameters^ clr = gcnew SkyDomeGenParameters;
				clr->_skyDomeCurvature = obj.skyDomeCurvature;
				clr->_skyDomeTiling = obj.skyDomeTiling;
				clr->_skyDomeDistance = obj.skyDomeDistance;
				clr->_skyDomeXSegments = obj.skyDomeXSegments;
				clr->_skyDomeYSegments = obj.skyDomeYSegments;
				clr->_skyDomeYSegments_keep = obj.skyDomeYSegments_keep;
	
				return clr;
			}
	
			static operator SkyDomeGenParameters^ (const Ogre::SceneManager::SkyDomeGenParameters* pObj)
			{
				return *pObj;
			}
	
			//Public Declarations
		public:
	
	
			property Mogre::Real SkyDomeCurvature
			{
				Mogre::Real get()
				{
					return _skyDomeCurvature;
				}
			}
	
			property Mogre::Real SkyDomeTiling
			{
				Mogre::Real get()
				{
					return _skyDomeTiling;
				}
			}
	
			property Mogre::Real SkyDomeDistance
			{
				Mogre::Real get()
				{
					return _skyDomeDistance;
				}
			}
	
			property int SkyDomeXSegments
			{
				int get()
				{
					return _skyDomeXSegments;
				}
			}
	
			property int SkyDomeYSegments
			{
				int get()
				{
					return _skyDomeYSegments;
				}
			}
	
			property int SkyDomeYSegments_keep
			{
				int get()
				{
					return _skyDomeYSegments_keep;
				}
			}
	
	
			//Protected Declarations
		protected public:
	
		};
	
		//################################################################
		//SkyPlaneGenParameters
		//################################################################
	
		public: ref class SkyPlaneGenParameters
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			SkyPlaneGenParameters()
			{
			}
	
			Mogre::Real _skyPlaneScale;
			Mogre::Real _skyPlaneTiling;
			Mogre::Real _skyPlaneBow;
			int _skyPlaneXSegments;
			int _skyPlaneYSegments;
	
			static operator SkyPlaneGenParameters^ (const Ogre::SceneManager::SkyPlaneGenParameters& obj)
			{
				SkyPlaneGenParameters^ clr = gcnew SkyPlaneGenParameters;
				clr->_skyPlaneScale = obj.skyPlaneScale;
				clr->_skyPlaneTiling = obj.skyPlaneTiling;
				clr->_skyPlaneBow = obj.skyPlaneBow;
				clr->_skyPlaneXSegments = obj.skyPlaneXSegments;
				clr->_skyPlaneYSegments = obj.skyPlaneYSegments;
	
				return clr;
			}
	
			static operator SkyPlaneGenParameters^ (const Ogre::SceneManager::SkyPlaneGenParameters* pObj)
			{
				return *pObj;
			}
	
			//Public Declarations
		public:
	
	
			property Mogre::Real SkyPlaneScale
			{
				Mogre::Real get()
				{
					return _skyPlaneScale;
				}
			}
	
			property Mogre::Real SkyPlaneTiling
			{
				Mogre::Real get()
				{
					return _skyPlaneTiling;
				}
			}
	
			property Mogre::Real SkyPlaneBow
			{
				Mogre::Real get()
				{
					return _skyPlaneBow;
				}
			}
	
			property int SkyPlaneXSegments
			{
				int get()
				{
					return _skyPlaneXSegments;
				}
			}
	
			property int SkyPlaneYSegments
			{
				int get()
				{
					return _skyPlaneYSegments;
				}
			}
	
	
			//Protected Declarations
		protected public:
	
		};
	
		public: INC_DECLARE_MAP_ITERATOR_NOCONSTRUCTOR( CameraIterator, Ogre::SceneManager::CameraIterator, Mogre::SceneManager::CameraList, Mogre::Camera^, Ogre::Camera*, String^, Ogre::String )
	
		public: INC_DECLARE_MAP_ITERATOR_NOCONSTRUCTOR( AnimationIterator, Ogre::SceneManager::AnimationIterator, Mogre::SceneManager::AnimationList, Mogre::Animation^, Ogre::Animation*, String^, Ogre::String )
	
		public: INC_DECLARE_MAP_ITERATOR_NOCONSTRUCTOR( MovableObjectIterator, Ogre::SceneManager::MovableObjectIterator, Mogre::SceneManager::MovableObjectMap, Mogre::MovableObject^, Ogre::MovableObject*, String^, Ogre::String )
	
		
		        public:
		        // Custom overloads for setting/getting SceneManager options
		
		        bool SetOption( String^ strKey, bool value )
		        {
		        return SetOption(strKey, &value);
		        }
		        bool GetOption( String^ strKey, [Out] bool% value )
		        {
		        pin_ptr<bool> p = &value;
		        return GetOption(strKey, p);
		        }
		
		        bool SetOption( String^ strKey, int value )
		        {
		        return SetOption(strKey, &value);
		        }
		        bool GetOption( String^ strKey, [Out] int% value )
		        {
		        pin_ptr<int> p = &value;
		        return GetOption(strKey, p);
		        }
		
		        bool SetOption( String^ strKey, Real value )
		        {
		        return SetOption(strKey, &value);
		        }
		        bool GetOption( String^ strKey, [Out] Real% value )
		        {
		        pin_ptr<Real> p = &value;
		        return GetOption(strKey, p);
		        }
		
		        bool SetOption( String^ strKey, String^ value )
		        {
		        DECLARE_NATIVE_STRING( o_str, value )
		        return SetOption(strKey, &o_str);
		        }
		        bool GetOption( String^ strKey, [Out] String^% value )
		        {
		        Ogre::String o_str;
		        bool ret = GetOption(strKey, &o_str);
		        if (ret)
		        {
		        value = TO_CLR_STRING( o_str );
		        }
		
		        return ret;
		        }
		
		        bool SetOption( String^ strKey, Mogre::Vector3 value )
		        {
		        return SetOption(strKey, &value);
		        }
		        bool GetOption( String^ strKey, [Out] Mogre::Vector3% value )
		        {
		        pin_ptr<Mogre::Vector3> p = &value;
		        return GetOption(strKey, p);
		        }
		
		        bool SetOption( String^ strKey, Mogre::Vector2 value )
		        {
		        return SetOption(strKey, &value);
		        }
		        bool GetOption( String^ strKey, [Out] Mogre::Vector2% value )
		        {
		        pin_ptr<Mogre::Vector2> p = &value;
		        return GetOption(strKey, p);
		        }
		
		        bool SetOption( String^ strKey, Mogre::Quaternion value )
		        {
		        return SetOption(strKey, &value);
		        }
		        bool GetOption( String^ strKey, [Out] Mogre::Quaternion% value )
		        {
		        pin_ptr<Mogre::Quaternion> p = &value;
		        return GetOption(strKey, p);
		        }
		      
	
		//Private Declarations
	private protected:
		//Cached fields
		String^ _name;
		Mogre::RenderQueue^ _renderQueue;
		
		//Event and Listener fields
		RenderQueueListener_Director* _renderQueueListener;
		Mogre::RenderQueueListener::RenderQueueStartedHandler^ _renderQueueStarted;
		Mogre::RenderQueueListener::RenderQueueEndedHandler^ _renderQueueEnded;
	
		ShadowListener_Director* _shadowListener;
		Mogre::ShadowListener::ShadowTexturesUpdatedHandler^ _shadowTexturesUpdated;
		Mogre::ShadowListener::ShadowTextureCasterPreViewProjHandler^ _shadowTextureCasterPreViewProj;
		Mogre::ShadowListener::ShadowTextureReceiverPreViewProjHandler^ _shadowTextureReceiverPreViewProj;
		Mogre::ShadowListener::SortLightsAffectingFrustumHandler^ _sortLightsAffectingFrustum;
	
	
		//Internal Declarations
	public protected:
		SceneManager( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		~SceneManager()
		{
			if (_renderQueueListener != 0)
			{
				if (_native != 0) static_cast<Ogre::SceneManager*>(_native)->removeRenderQueueListener(_renderQueueListener);
				delete _renderQueueListener; _renderQueueListener = 0;
			}
			if (_shadowListener != 0)
			{
				if (_native != 0) static_cast<Ogre::SceneManager*>(_native)->removeShadowListener(_shadowListener);
				delete _shadowListener; _shadowListener = 0;
			}
		}
	
	
		//Public Declarations
	public:
	
	
		event Mogre::RenderQueueListener::RenderQueueStartedHandler^ RenderQueueStarted
		{
			void add(Mogre::RenderQueueListener::RenderQueueStartedHandler^ hnd)
			{
				if (_renderQueueStarted == CLR_NULL)
				{
					if (_renderQueueListener == 0)
					{
						_renderQueueListener = new RenderQueueListener_Director(this);
						static_cast<Ogre::SceneManager*>(_native)->addRenderQueueListener(_renderQueueListener);
					}
					_renderQueueListener->doCallForRenderQueueStarted = true;
				}
				_renderQueueStarted += hnd;
			}
			void remove(Mogre::RenderQueueListener::RenderQueueStartedHandler^ hnd)
			{
				_renderQueueStarted -= hnd;
				if (_renderQueueStarted == CLR_NULL) _renderQueueListener->doCallForRenderQueueStarted = false;
			}
		private:
			void raise( Mogre::uint8 queueGroupId, String^ invocation, [Out] bool% skipThisInvocation )
			{
				if (_renderQueueStarted)
					_renderQueueStarted->Invoke( queueGroupId, invocation, skipThisInvocation );
			}
		}
	
		event Mogre::RenderQueueListener::RenderQueueEndedHandler^ RenderQueueEnded
		{
			void add(Mogre::RenderQueueListener::RenderQueueEndedHandler^ hnd)
			{
				if (_renderQueueEnded == CLR_NULL)
				{
					if (_renderQueueListener == 0)
					{
						_renderQueueListener = new RenderQueueListener_Director(this);
						static_cast<Ogre::SceneManager*>(_native)->addRenderQueueListener(_renderQueueListener);
					}
					_renderQueueListener->doCallForRenderQueueEnded = true;
				}
				_renderQueueEnded += hnd;
			}
			void remove(Mogre::RenderQueueListener::RenderQueueEndedHandler^ hnd)
			{
				_renderQueueEnded -= hnd;
				if (_renderQueueEnded == CLR_NULL) _renderQueueListener->doCallForRenderQueueEnded = false;
			}
		private:
			void raise( Mogre::uint8 queueGroupId, String^ invocation, [Out] bool% repeatThisInvocation )
			{
				if (_renderQueueEnded)
					_renderQueueEnded->Invoke( queueGroupId, invocation, repeatThisInvocation );
			}
		}
	
	
		event Mogre::ShadowListener::ShadowTexturesUpdatedHandler^ ShadowTexturesUpdated
		{
			void add(Mogre::ShadowListener::ShadowTexturesUpdatedHandler^ hnd)
			{
				if (_shadowTexturesUpdated == CLR_NULL)
				{
					if (_shadowListener == 0)
					{
						_shadowListener = new ShadowListener_Director(this);
						static_cast<Ogre::SceneManager*>(_native)->addShadowListener(_shadowListener);
					}
					_shadowListener->doCallForShadowTexturesUpdated = true;
				}
				_shadowTexturesUpdated += hnd;
			}
			void remove(Mogre::ShadowListener::ShadowTexturesUpdatedHandler^ hnd)
			{
				_shadowTexturesUpdated -= hnd;
				if (_shadowTexturesUpdated == CLR_NULL) _shadowListener->doCallForShadowTexturesUpdated = false;
			}
		private:
			void raise( size_t numberOfShadowTextures )
			{
				if (_shadowTexturesUpdated)
					_shadowTexturesUpdated->Invoke( numberOfShadowTextures );
			}
		}
	
		event Mogre::ShadowListener::ShadowTextureCasterPreViewProjHandler^ ShadowTextureCasterPreViewProj
		{
			void add(Mogre::ShadowListener::ShadowTextureCasterPreViewProjHandler^ hnd)
			{
				if (_shadowTextureCasterPreViewProj == CLR_NULL)
				{
					if (_shadowListener == 0)
					{
						_shadowListener = new ShadowListener_Director(this);
						static_cast<Ogre::SceneManager*>(_native)->addShadowListener(_shadowListener);
					}
					_shadowListener->doCallForShadowTextureCasterPreViewProj = true;
				}
				_shadowTextureCasterPreViewProj += hnd;
			}
			void remove(Mogre::ShadowListener::ShadowTextureCasterPreViewProjHandler^ hnd)
			{
				_shadowTextureCasterPreViewProj -= hnd;
				if (_shadowTextureCasterPreViewProj == CLR_NULL) _shadowListener->doCallForShadowTextureCasterPreViewProj = false;
			}
		private:
			void raise( Mogre::Light^ light, Mogre::Camera^ camera )
			{
				if (_shadowTextureCasterPreViewProj)
					_shadowTextureCasterPreViewProj->Invoke( light, camera );
			}
		}
	
		event Mogre::ShadowListener::ShadowTextureReceiverPreViewProjHandler^ ShadowTextureReceiverPreViewProj
		{
			void add(Mogre::ShadowListener::ShadowTextureReceiverPreViewProjHandler^ hnd)
			{
				if (_shadowTextureReceiverPreViewProj == CLR_NULL)
				{
					if (_shadowListener == 0)
					{
						_shadowListener = new ShadowListener_Director(this);
						static_cast<Ogre::SceneManager*>(_native)->addShadowListener(_shadowListener);
					}
					_shadowListener->doCallForShadowTextureReceiverPreViewProj = true;
				}
				_shadowTextureReceiverPreViewProj += hnd;
			}
			void remove(Mogre::ShadowListener::ShadowTextureReceiverPreViewProjHandler^ hnd)
			{
				_shadowTextureReceiverPreViewProj -= hnd;
				if (_shadowTextureReceiverPreViewProj == CLR_NULL) _shadowListener->doCallForShadowTextureReceiverPreViewProj = false;
			}
		private:
			void raise( Mogre::Light^ light, Mogre::Frustum^ frustum )
			{
				if (_shadowTextureReceiverPreViewProj)
					_shadowTextureReceiverPreViewProj->Invoke( light, frustum );
			}
		}
	
		event Mogre::ShadowListener::SortLightsAffectingFrustumHandler^ SortLightsAffectingFrustum
		{
			void add(Mogre::ShadowListener::SortLightsAffectingFrustumHandler^ hnd)
			{
				if (_sortLightsAffectingFrustum == CLR_NULL)
				{
					if (_shadowListener == 0)
					{
						_shadowListener = new ShadowListener_Director(this);
						static_cast<Ogre::SceneManager*>(_native)->addShadowListener(_shadowListener);
					}
					_shadowListener->doCallForSortLightsAffectingFrustum = true;
				}
				_sortLightsAffectingFrustum += hnd;
			}
			void remove(Mogre::ShadowListener::SortLightsAffectingFrustumHandler^ hnd)
			{
				_sortLightsAffectingFrustum -= hnd;
				if (_sortLightsAffectingFrustum == CLR_NULL) _shadowListener->doCallForSortLightsAffectingFrustum = false;
			}
		private:
			bool raise( Mogre::LightList^ lightList )
			{
				if (_sortLightsAffectingFrustum)
					return _sortLightsAffectingFrustum->Invoke( lightList );
			}
		}
	
	
		static property Mogre::uint32 WORLD_GEOMETRY_TYPE_MASK
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 value);
		}
	
		static property Mogre::uint32 ENTITY_TYPE_MASK
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 value);
		}
	
		static property Mogre::uint32 FX_TYPE_MASK
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 value);
		}
	
		static property Mogre::uint32 STATICGEOMETRY_TYPE_MASK
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 value);
		}
	
		static property Mogre::uint32 LIGHT_TYPE_MASK
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 value);
		}
	
		static property Mogre::uint32 USER_TYPE_MASK_LIMIT
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 value);
		}
	
		property Mogre::ColourValue AmbientLight
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue colour);
		}
	
		property Mogre::Viewport^ CurrentViewport
		{
		public:
			Mogre::Viewport^ get();
		}
	
		property Mogre::RenderSystem^ DestinationRenderSystem
		{
		public:
			Mogre::RenderSystem^ get();
		}
	
		property bool DisplaySceneNodes
		{
		public:
			bool get();
		public:
			void set(bool display);
		}
	
		property bool FindVisibleObjects
		{
		public:
			bool get();
		public:
			void set(bool find);
		}
	
		property Mogre::ColourValue FogColour
		{
		public:
			Mogre::ColourValue get();
		}
	
		property Mogre::Real FogDensity
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::Real FogEnd
		{
		public:
			Mogre::Real get();
		}
	
		property Mogre::FogMode FogMode
		{
		public:
			Mogre::FogMode get();
		}
	
		property Mogre::Real FogStart
		{
		public:
			Mogre::Real get();
		}
	
		property bool IsShadowTechniqueAdditive
		{
		public:
			bool get();
		}
	
		property bool IsShadowTechniqueIntegrated
		{
		public:
			bool get();
		}
	
		property bool IsShadowTechniqueInUse
		{
		public:
			bool get();
		}
	
		property bool IsShadowTechniqueModulative
		{
		public:
			bool get();
		}
	
		property bool IsShadowTechniqueStencilBased
		{
		public:
			bool get();
		}
	
		property bool IsShadowTechniqueTextureBased
		{
		public:
			bool get();
		}
	
		property bool IsSkyBoxEnabled
		{
		public:
			bool get();
		}
	
		property bool IsSkyDomeEnabled
		{
		public:
			bool get();
		}
	
		property bool IsSkyPlaneEnabled
		{
		public:
			bool get();
		}
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		property Mogre::RenderQueue^ RenderQueue
		{
		public:
			Mogre::RenderQueue^ get();
		}
	
		property Mogre::SceneNode^ RootSceneNode
		{
		public:
			Mogre::SceneNode^ get();
		}
	
		property bool ShadowCasterRenderBackFaces
		{
		public:
			bool get();
		public:
			void set(bool bf);
		}
	
		property Mogre::ColourValue ShadowColour
		{
		public:
			Mogre::ColourValue get();
		public:
			void set(Mogre::ColourValue colour);
		}
	
		property Mogre::Real ShadowDirectionalLightExtrusionDistance
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real dist);
		}
	
		property Mogre::Real ShadowDirLightTextureOffset
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real offset);
		}
	
		property Mogre::Real ShadowFarDistance
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real distance);
		}
	
		property size_t ShadowIndexBufferSize
		{
		public:
			size_t get();
		public:
			void set(size_t size);
		}
	
		property Mogre::ShadowTechnique ShadowTechnique
		{
		public:
			Mogre::ShadowTechnique get();
		public:
			void set(Mogre::ShadowTechnique technique);
		}
	
		property size_t ShadowTextureCount
		{
		public:
			size_t get();
		public:
			void set(size_t count);
		}
	
		property bool ShadowTextureSelfShadow
		{
		public:
			bool get();
		public:
			void set(bool selfShadow);
		}
	
		property bool ShowBoundingBoxes
		{
		public:
			bool get();
		public:
			void set(bool bShow);
		}
	
		property bool ShowDebugShadows
		{
		public:
			bool get();
		public:
			void set(bool debug);
		}
	
		property Mogre::SceneNode^ SkyBoxNode
		{
		public:
			Mogre::SceneNode^ get();
		}
	
		property Mogre::SceneNode^ SkyDomeNode
		{
		public:
			Mogre::SceneNode^ get();
		}
	
		property Mogre::SceneNode^ SkyPlaneNode
		{
		public:
			Mogre::SceneNode^ get();
		}
	
		property String^ TypeName
		{
		public:
			String^ get();
		}
	
		property Mogre::uint32 VisibilityMask
		{
		public:
			Mogre::uint32 get();
		public:
			void set(Mogre::uint32 vmask);
		}
	
		property Mogre::uint8 WorldGeometryRenderQueue
		{
		public:
			Mogre::uint8 get();
		public:
			void set(Mogre::uint8 qid);
		}
	
		Mogre::Camera^ CreateCamera( String^ name );
	
		Mogre::Camera^ GetCamera( String^ name );
	
		bool HasCamera( String^ name );
	
		void DestroyCamera( Mogre::Camera^ cam );
	
		void DestroyCamera( String^ name );
	
		void DestroyAllCameras( );
	
		Mogre::Light^ CreateLight( String^ name );
	
		Mogre::Light^ GetLight( String^ name );
	
		bool HasLight( String^ name );
	
		void DestroyLight( String^ name );
	
		void DestroyLight( Mogre::Light^ light );
	
		void DestroyAllLights( );
	
		void _notifyLightsDirty( );
	
		Mogre::ulong _getLightsDirtyCounter( );
	
		Mogre::Const_LightList^ _getLightsAffectingFrustum( );
	
		void _populateLightList( Mogre::Vector3 position, Mogre::Real radius, Mogre::LightList^ destList );
	
		Mogre::SceneNode^ CreateSceneNode( );
	
		Mogre::SceneNode^ CreateSceneNode( String^ name );
	
		void DestroySceneNode( String^ name );
	
		Mogre::SceneNode^ GetSceneNode( String^ name );
	
		bool HasSceneNode( String^ name );
	
		Mogre::Entity^ CreateEntity( String^ entityName, String^ meshName );
	
		Mogre::Entity^ CreateEntity( String^ entityName, Mogre::SceneManager::PrefabType ptype );
	
		Mogre::Entity^ GetEntity( String^ name );
	
		bool HasEntity( String^ name );
	
		void DestroyEntity( Mogre::Entity^ ent );
	
		void DestroyEntity( String^ name );
	
		void DestroyAllEntities( );
	
		Mogre::ManualObject^ CreateManualObject( String^ name );
	
		Mogre::ManualObject^ GetManualObject( String^ name );
	
		bool HasManualObject( String^ name );
	
		void DestroyManualObject( Mogre::ManualObject^ obj );
	
		void DestroyManualObject( String^ name );
	
		void DestroyAllManualObjects( );
	
		Mogre::BillboardChain^ CreateBillboardChain( String^ name );
	
		Mogre::BillboardChain^ GetBillboardChain( String^ name );
	
		bool HasBillboardChain( String^ name );
	
		void DestroyBillboardChain( Mogre::BillboardChain^ obj );
	
		void DestroyBillboardChain( String^ name );
	
		void DestroyAllBillboardChains( );
	
		Mogre::RibbonTrail^ CreateRibbonTrail( String^ name );
	
		Mogre::RibbonTrail^ GetRibbonTrail( String^ name );
	
		bool HasRibbonTrail( String^ name );
	
		void DestroyRibbonTrail( Mogre::RibbonTrail^ obj );
	
		void DestroyRibbonTrail( String^ name );
	
		void DestroyAllRibbonTrails( );
	
		Mogre::ParticleSystem^ CreateParticleSystem( String^ name, String^ templateName );
	
		Mogre::ParticleSystem^ CreateParticleSystem( String^ name, size_t quota, String^ resourceGroup );
		Mogre::ParticleSystem^ CreateParticleSystem( String^ name, size_t quota );
		Mogre::ParticleSystem^ CreateParticleSystem( String^ name );
	
		Mogre::ParticleSystem^ GetParticleSystem( String^ name );
	
		bool HasParticleSystem( String^ name );
	
		void DestroyParticleSystem( Mogre::ParticleSystem^ obj );
	
		void DestroyParticleSystem( String^ name );
	
		void DestroyAllParticleSystems( );
	
		void ClearScene( );
	
		void SetWorldGeometry( String^ filename );
	
		void SetWorldGeometry( Mogre::DataStreamPtr^ stream, String^ typeName );
		void SetWorldGeometry( Mogre::DataStreamPtr^ stream );
	
		size_t EstimateWorldGeometry( String^ filename );
	
		size_t EstimateWorldGeometry( Mogre::DataStreamPtr^ stream, String^ typeName );
		size_t EstimateWorldGeometry( Mogre::DataStreamPtr^ stream );
	
		Mogre::ViewPoint^ GetSuggestedViewpoint( bool random );
		Mogre::ViewPoint^ GetSuggestedViewpoint( );
	
		bool SetOption( String^ strKey, const void* pValue );
	
		bool GetOption( String^ strKey, void* pDestValue );
	
		bool HasOption( String^ strKey );
	
		bool GetOptionValues( String^ strKey, Mogre::StringVector^ refValueList );
	
		bool GetOptionKeys( Mogre::StringVector^ refKeys );
	
		void _updateSceneGraph( Mogre::Camera^ cam );
	
		void _findVisibleObjects( Mogre::Camera^ cam, Mogre::VisibleObjectsBoundsInfo_NativePtr visibleBounds, bool onlyShadowCasters );
	
		void _applySceneAnimations( );
	
		void _renderVisibleObjects( );
	
		void _renderScene( Mogre::Camera^ camera, Mogre::Viewport^ vp, bool includeOverlays );
	
		void _queueSkiesForRendering( Mogre::Camera^ cam );
	
		void _setDestinationRenderSystem( Mogre::RenderSystem^ sys );
	
		void SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, bool drawFirst, Mogre::Real bow, int xsegments, int ysegments, String^ groupName );
		void SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, bool drawFirst, Mogre::Real bow, int xsegments, int ysegments );
		void SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, bool drawFirst, Mogre::Real bow, int xsegments );
		void SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, bool drawFirst, Mogre::Real bow );
		void SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling, bool drawFirst );
		void SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale, Mogre::Real tiling );
		void SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName, Mogre::Real scale );
		void SetSkyPlane( bool enable, Mogre::Plane plane, String^ materialName );
	
		Mogre::SceneManager::SkyPlaneGenParameters^ GetSkyPlaneGenParameters( );
	
		void SetSkyBox( bool enable, String^ materialName, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation, String^ groupName );
		void SetSkyBox( bool enable, String^ materialName, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation );
		void SetSkyBox( bool enable, String^ materialName, Mogre::Real distance, bool drawFirst );
		void SetSkyBox( bool enable, String^ materialName, Mogre::Real distance );
		void SetSkyBox( bool enable, String^ materialName );
	
		Mogre::SceneManager::SkyBoxGenParameters^ GetSkyBoxGenParameters( );
	
		void SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation, int xsegments, int ysegments, int ysegments_keep, String^ groupName );
		void SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation, int xsegments, int ysegments, int ysegments_keep );
		void SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation, int xsegments, int ysegments );
		void SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation, int xsegments );
		void SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, bool drawFirst, Mogre::Quaternion orientation );
		void SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance, bool drawFirst );
		void SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling, Mogre::Real distance );
		void SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature, Mogre::Real tiling );
		void SetSkyDome( bool enable, String^ materialName, Mogre::Real curvature );
		void SetSkyDome( bool enable, String^ materialName );
	
		Mogre::SceneManager::SkyDomeGenParameters^ GetSkyDomeGenParameters( );
	
		void SetFog( Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart, Mogre::Real linearEnd );
		void SetFog( Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity, Mogre::Real linearStart );
		void SetFog( Mogre::FogMode mode, Mogre::ColourValue colour, Mogre::Real expDensity );
		void SetFog( Mogre::FogMode mode, Mogre::ColourValue colour );
		void SetFog( Mogre::FogMode mode );
		void SetFog( );
	
		Mogre::BillboardSet^ CreateBillboardSet( String^ name, unsigned int poolSize );
		Mogre::BillboardSet^ CreateBillboardSet( String^ name );
	
		Mogre::BillboardSet^ GetBillboardSet( String^ name );
	
		bool HasBillboardSet( String^ name );
	
		void DestroyBillboardSet( Mogre::BillboardSet^ set );
	
		void DestroyBillboardSet( String^ name );
	
		void DestroyAllBillboardSets( );
	
		Mogre::Animation^ CreateAnimation( String^ name, Mogre::Real length );
	
		Mogre::Animation^ GetAnimation( String^ name );
	
		bool HasAnimation( String^ name );
	
		void DestroyAnimation( String^ name );
	
		void DestroyAllAnimations( );
	
		Mogre::AnimationState^ CreateAnimationState( String^ animName );
	
		Mogre::AnimationState^ GetAnimationState( String^ animName );
	
		bool HasAnimationState( String^ name );
	
		void DestroyAnimationState( String^ name );
	
		void DestroyAllAnimationStates( );
	
		void ManualRender( Mogre::RenderOperation^ rend, Mogre::Pass^ pass, Mogre::Viewport^ vp, Mogre::Matrix4^ worldMatrix, Mogre::Matrix4^ viewMatrix, Mogre::Matrix4^ projMatrix, bool doBeginEndFrame );
		void ManualRender( Mogre::RenderOperation^ rend, Mogre::Pass^ pass, Mogre::Viewport^ vp, Mogre::Matrix4^ worldMatrix, Mogre::Matrix4^ viewMatrix, Mogre::Matrix4^ projMatrix );
	
		void AddSpecialCaseRenderQueue( Mogre::uint8 qid );
	
		void RemoveSpecialCaseRenderQueue( Mogre::uint8 qid );
	
		void ClearSpecialCaseRenderQueues( );
	
		void SetSpecialCaseRenderQueueMode( Mogre::SceneManager::SpecialCaseRenderQueueMode mode );
	
		Mogre::SceneManager::SpecialCaseRenderQueueMode GetSpecialCaseRenderQueueMode( );
	
		bool IsRenderQueueToBeProcessed( Mogre::uint8 qid );
	
		void _notifyAutotrackingSceneNode( Mogre::SceneNode^ node, bool autoTrack );
	
		Mogre::AxisAlignedBoxSceneQuery^ CreateAABBQuery( Mogre::AxisAlignedBox^ box, unsigned long mask );
		Mogre::AxisAlignedBoxSceneQuery^ CreateAABBQuery( Mogre::AxisAlignedBox^ box );
	
		Mogre::SphereSceneQuery^ CreateSphereQuery( Mogre::Sphere sphere, unsigned long mask );
		Mogre::SphereSceneQuery^ CreateSphereQuery( Mogre::Sphere sphere );
	
		Mogre::PlaneBoundedVolumeListSceneQuery^ CreatePlaneBoundedVolumeQuery( Mogre::Const_PlaneBoundedVolumeList^ volumes, unsigned long mask );
		Mogre::PlaneBoundedVolumeListSceneQuery^ CreatePlaneBoundedVolumeQuery( Mogre::Const_PlaneBoundedVolumeList^ volumes );
	
		Mogre::RaySceneQuery^ CreateRayQuery( Mogre::Ray ray, unsigned long mask );
		Mogre::RaySceneQuery^ CreateRayQuery( Mogre::Ray ray );
	
		Mogre::IntersectionSceneQuery^ CreateIntersectionQuery( unsigned long mask );
		Mogre::IntersectionSceneQuery^ CreateIntersectionQuery( );
	
		void DestroyQuery( Mogre::SceneQuery^ query );
	
		Mogre::SceneManager::CameraIterator^ GetCameraIterator( );
	
		Mogre::SceneManager::AnimationIterator^ GetAnimationIterator( );
	
		Mogre::AnimationStateIterator^ GetAnimationStateIterator( );
	
		void SetShadowTextureSize( unsigned short size );
	
		void SetShadowTextureConfig( size_t shadowIndex, unsigned short width, unsigned short height, Mogre::PixelFormat format );
	
		void SetShadowTextureConfig( size_t shadowIndex, Mogre::ShadowTextureConfig config );
	
		Mogre::ConstShadowTextureConfigIterator^ GetShadowTextureConfigIterator( );
	
		void SetShadowTexturePixelFormat( Mogre::PixelFormat fmt );
	
		void SetShadowTextureSettings( unsigned short size, unsigned short count, Mogre::PixelFormat fmt );
		void SetShadowTextureSettings( unsigned short size, unsigned short count );
	
		Mogre::TexturePtr^ GetShadowTexture( size_t shadowIndex );
	
		void SetShadowTextureFadeStart( Mogre::Real fadeStart );
	
		void SetShadowTextureFadeEnd( Mogre::Real fadeEnd );
	
		void SetShadowTextureCasterMaterial( String^ name );
	
		void SetShadowTextureReceiverMaterial( String^ name );
	
		void SetShadowCameraSetup( Mogre::ShadowCameraSetupPtr^ shadowSetup );
	
		Mogre::ShadowCameraSetupPtr^ GetShadowCameraSetup( );
	
		void SetShadowUseInfiniteFarPlane( bool enable );
	
		Mogre::StaticGeometry^ CreateStaticGeometry( String^ name );
	
		Mogre::StaticGeometry^ GetStaticGeometry( String^ name );
	
		bool HasStaticGeometry( String^ name );
	
		void DestroyStaticGeometry( Mogre::StaticGeometry^ geom );
	
		void DestroyStaticGeometry( String^ name );
	
		void DestroyAllStaticGeometry( );
	
		Mogre::InstancedGeometry^ CreateInstancedGeometry( String^ name );
	
		Mogre::InstancedGeometry^ GetInstancedGeometry( String^ name );
	
		void DestroyInstancedGeometry( Mogre::InstancedGeometry^ geom );
	
		void DestroyInstancedGeometry( String^ name );
	
		void DestroyAllInstancedGeometry( );
	
		Mogre::MovableObject^ CreateMovableObject( String^ name, String^ typeName, Mogre::Const_NameValuePairList^ params );
		Mogre::MovableObject^ CreateMovableObject( String^ name, String^ typeName );
	
		void DestroyMovableObject( String^ name, String^ typeName );
	
		void DestroyMovableObject( Mogre::MovableObject^ m );
	
		void DestroyAllMovableObjectsByType( String^ typeName );
	
		void DestroyAllMovableObjects( );
	
		Mogre::MovableObject^ GetMovableObject( String^ name, String^ typeName );
	
		bool HasMovableObject( String^ name, String^ typeName );
	
		Mogre::SceneManager::MovableObjectIterator^ GetMovableObjectIterator( String^ typeName );
	
		void InjectMovableObject( Mogre::MovableObject^ m );
	
		void ExtractMovableObject( String^ name, String^ typeName );
	
		void ExtractMovableObject( Mogre::MovableObject^ m );
	
		void ExtractAllMovableObjectsByType( String^ typeName );
	
		Mogre::uint32 _getCombinedVisibilityMask( );
	
		void _injectRenderWithPass( Mogre::Pass^ pass, Mogre::IRenderable^ rend, bool shadowDerivation );
		void _injectRenderWithPass( Mogre::Pass^ pass, Mogre::IRenderable^ rend );
	
		void _suppressRenderStateChanges( bool suppress );
	
		bool _areRenderStateChangesSuppressed( );
	
		Mogre::Pass^ _setPass( Mogre::Pass^ pass, bool evenIfSuppressed, bool shadowDerivation );
		Mogre::Pass^ _setPass( Mogre::Pass^ pass, bool evenIfSuppressed );
		Mogre::Pass^ _setPass( Mogre::Pass^ pass );
	
		void _suppressShadows( bool suppress );
	
		bool _areShadowsSuppressed( );
	
		void _renderQueueGroupObjects( Mogre::RenderQueueGroup^ group, Mogre::QueuedRenderableCollection::OrganisationMode om );
	
		Mogre::VisibleObjectsBoundsInfo_NativePtr GetVisibleObjectsBoundsInfo( Mogre::Camera^ cam );
	
		Mogre::VisibleObjectsBoundsInfo_NativePtr GetShadowCasterBoundsInfo( Mogre::Light^ light );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( SceneManager )
	
		//Protected Declarations
	protected public:
		virtual void OnRenderQueueStarted( Mogre::uint8 queueGroupId, String^ invocation, [Out] bool% skipThisInvocation ) = IRenderQueueListener_Receiver::RenderQueueStarted
		{
			RenderQueueStarted( queueGroupId, invocation, skipThisInvocation );
		}
	
		virtual void OnRenderQueueEnded( Mogre::uint8 queueGroupId, String^ invocation, [Out] bool% repeatThisInvocation ) = IRenderQueueListener_Receiver::RenderQueueEnded
		{
			RenderQueueEnded( queueGroupId, invocation, repeatThisInvocation );
		}
	
	
		virtual void OnShadowTexturesUpdated( size_t numberOfShadowTextures ) = IShadowListener_Receiver::ShadowTexturesUpdated
		{
			ShadowTexturesUpdated( numberOfShadowTextures );
		}
	
		virtual void OnShadowTextureCasterPreViewProj( Mogre::Light^ light, Mogre::Camera^ camera ) = IShadowListener_Receiver::ShadowTextureCasterPreViewProj
		{
			ShadowTextureCasterPreViewProj( light, camera );
		}
	
		virtual void OnShadowTextureReceiverPreViewProj( Mogre::Light^ light, Mogre::Frustum^ frustum ) = IShadowListener_Receiver::ShadowTextureReceiverPreViewProj
		{
			ShadowTextureReceiverPreViewProj( light, frustum );
		}
	
		virtual bool OnSortLightsAffectingFrustum( Mogre::LightList^ lightList ) = IShadowListener_Receiver::SortLightsAffectingFrustum
		{
			return SortLightsAffectingFrustum( lightList );
		}
	
	
	
	};
	
	//################################################################
	//DefaultIntersectionSceneQuery
	//################################################################
	
	public ref class DefaultIntersectionSceneQuery : public IntersectionSceneQuery
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		DefaultIntersectionSceneQuery( CLRObject* obj ) : IntersectionSceneQuery(obj)
		{
		}
	
	
		//Public Declarations
	public:
		DefaultIntersectionSceneQuery( Mogre::SceneManager^ creator );
	
	
		void Execute( Mogre::IIntersectionSceneQueryListener^ listener );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( DefaultIntersectionSceneQuery )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//DefaultRaySceneQuery
	//################################################################
	
	public ref class DefaultRaySceneQuery : public RaySceneQuery
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		DefaultRaySceneQuery( CLRObject* obj ) : RaySceneQuery(obj)
		{
		}
	
	
		//Public Declarations
	public:
		DefaultRaySceneQuery( Mogre::SceneManager^ creator );
	
	
		void Execute( Mogre::IRaySceneQueryListener^ listener );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( DefaultRaySceneQuery )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//DefaultSphereSceneQuery
	//################################################################
	
	public ref class DefaultSphereSceneQuery : public SphereSceneQuery
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		DefaultSphereSceneQuery( CLRObject* obj ) : SphereSceneQuery(obj)
		{
		}
	
	
		//Public Declarations
	public:
		DefaultSphereSceneQuery( Mogre::SceneManager^ creator );
	
	
		void Execute( Mogre::ISceneQueryListener^ listener );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( DefaultSphereSceneQuery )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//DefaultPlaneBoundedVolumeListSceneQuery
	//################################################################
	
	public ref class DefaultPlaneBoundedVolumeListSceneQuery : public PlaneBoundedVolumeListSceneQuery
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		DefaultPlaneBoundedVolumeListSceneQuery( CLRObject* obj ) : PlaneBoundedVolumeListSceneQuery(obj)
		{
		}
	
	
		//Public Declarations
	public:
		DefaultPlaneBoundedVolumeListSceneQuery( Mogre::SceneManager^ creator );
	
	
		void Execute( Mogre::ISceneQueryListener^ listener );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( DefaultPlaneBoundedVolumeListSceneQuery )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//DefaultAxisAlignedBoxSceneQuery
	//################################################################
	
	public ref class DefaultAxisAlignedBoxSceneQuery : public AxisAlignedBoxSceneQuery
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		DefaultAxisAlignedBoxSceneQuery( CLRObject* obj ) : AxisAlignedBoxSceneQuery(obj)
		{
		}
	
	
		//Public Declarations
	public:
		DefaultAxisAlignedBoxSceneQuery( Mogre::SceneManager^ creator );
	
	
		void Execute( Mogre::ISceneQueryListener^ listener );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( DefaultAxisAlignedBoxSceneQuery )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//SceneManagerFactory
	//################################################################
	
	public ref class SceneManagerFactory : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		SceneManagerFactory( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
	
	
		property Mogre::SceneManagerMetaData_NativePtr MetaData
		{
		public:
			Mogre::SceneManagerMetaData_NativePtr get();
		}
	
		Mogre::SceneManager^ CreateInstance( String^ instanceName );
	
		void DestroyInstance( Mogre::SceneManager^ instance );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( SceneManagerFactory )
	
		//Protected Declarations
	protected public:
	
	};
	

}
