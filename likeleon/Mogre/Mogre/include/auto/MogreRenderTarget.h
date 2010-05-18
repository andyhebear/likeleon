/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreRenderTarget.h"
#include "MogreRenderTargetListener.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//RenderTarget
	//################################################################
	
	public ref class RenderTarget : public Wrapper, public IRenderTargetListener_Receiver
	{
		//Nested Types
		public: ref class FrameStats;
	
		public: enum class StatFlags
		{
			SF_NONE = Ogre::RenderTarget::SF_NONE,
			SF_FPS = Ogre::RenderTarget::SF_FPS,
			SF_AVG_FPS = Ogre::RenderTarget::SF_AVG_FPS,
			SF_BEST_FPS = Ogre::RenderTarget::SF_BEST_FPS,
			SF_WORST_FPS = Ogre::RenderTarget::SF_WORST_FPS,
			SF_TRIANGLE_COUNT = Ogre::RenderTarget::SF_TRIANGLE_COUNT,
			SF_ALL = Ogre::RenderTarget::SF_ALL
		};
	
		//################################################################
		//FrameStats
		//################################################################
	
		public: ref class FrameStats
		{
			//Nested Types
	
			//Private Declarations
		private protected:
	
			//Internal Declarations
		public protected:
			FrameStats()
			{
			}
	
			float _lastFPS;
			float _avgFPS;
			float _bestFPS;
			float _worstFPS;
			unsigned long _bestFrameTime;
			unsigned long _worstFrameTime;
			size_t _triangleCount;
			size_t _batchCount;
	
			static operator FrameStats^ (const Ogre::RenderTarget::FrameStats& obj)
			{
				FrameStats^ clr = gcnew FrameStats;
				clr->_lastFPS = obj.lastFPS;
				clr->_avgFPS = obj.avgFPS;
				clr->_bestFPS = obj.bestFPS;
				clr->_worstFPS = obj.worstFPS;
				clr->_bestFrameTime = obj.bestFrameTime;
				clr->_worstFrameTime = obj.worstFrameTime;
				clr->_triangleCount = obj.triangleCount;
				clr->_batchCount = obj.batchCount;
	
				return clr;
			}
	
			static operator FrameStats^ (const Ogre::RenderTarget::FrameStats* pObj)
			{
				return *pObj;
			}
	
			//Public Declarations
		public:
	
	
			property float LastFPS
			{
				float get()
				{
					return _lastFPS;
				}
			}
	
			property float AvgFPS
			{
				float get()
				{
					return _avgFPS;
				}
			}
	
			property float BestFPS
			{
				float get()
				{
					return _bestFPS;
				}
			}
	
			property float WorstFPS
			{
				float get()
				{
					return _worstFPS;
				}
			}
	
			property unsigned long BestFrameTime
			{
				unsigned long get()
				{
					return _bestFrameTime;
				}
			}
	
			property unsigned long WorstFrameTime
			{
				unsigned long get()
				{
					return _worstFrameTime;
				}
			}
	
			property size_t TriangleCount
			{
				size_t get()
				{
					return _triangleCount;
				}
			}
	
			property size_t BatchCount
			{
				size_t get()
				{
					return _batchCount;
				}
			}
	
	
			//Protected Declarations
		protected public:
	
		};
	
		
		        public:
		        // Custom overloads for getting custom attributes
		
		        void GetCustomAttribute( String^ name, [Out] bool% value )
		        {
		        pin_ptr<bool> p = &value;
		        GetCustomAttribute(name, p);
		        }
		
		        void GetCustomAttribute( String^ name, [Out] int% value )
		        {
		        pin_ptr<int> p = &value;
		        GetCustomAttribute(name, p);
		        }
		
		        void GetCustomAttribute( String^ name, [Out] IntPtr% value )
		        {
		        pin_ptr<IntPtr> p = &value;
		        GetCustomAttribute(name, p);
		        }
		      
	
		//Private Declarations
	private protected:
		
		//Event and Listener fields
		RenderTargetListener_Director* _renderTargetListener;
		Mogre::RenderTargetListener::PreRenderTargetUpdateHandler^ _preRenderTargetUpdate;
		Mogre::RenderTargetListener::PostRenderTargetUpdateHandler^ _postRenderTargetUpdate;
		Mogre::RenderTargetListener::PreViewportUpdateHandler^ _preViewportUpdate;
		Mogre::RenderTargetListener::PostViewportUpdateHandler^ _postViewportUpdate;
		Mogre::RenderTargetListener::ViewportAddedHandler^ _viewportAdded;
		Mogre::RenderTargetListener::ViewportRemovedHandler^ _viewportRemoved;
	
	
		//Internal Declarations
	public protected:
		RenderTarget( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		~RenderTarget()
		{
			if (_renderTargetListener != 0)
			{
				if (_native != 0) static_cast<Ogre::RenderTarget*>(_native)->removeListener(_renderTargetListener);
				delete _renderTargetListener; _renderTargetListener = 0;
			}
		}
	
	
		//Public Declarations
	public:
	
	
		event Mogre::RenderTargetListener::PreRenderTargetUpdateHandler^ PreRenderTargetUpdate
		{
			void add(Mogre::RenderTargetListener::PreRenderTargetUpdateHandler^ hnd)
			{
				if (_preRenderTargetUpdate == CLR_NULL)
				{
					if (_renderTargetListener == 0)
					{
						_renderTargetListener = new RenderTargetListener_Director(this);
						static_cast<Ogre::RenderTarget*>(_native)->addListener(_renderTargetListener);
					}
					_renderTargetListener->doCallForPreRenderTargetUpdate = true;
				}
				_preRenderTargetUpdate += hnd;
			}
			void remove(Mogre::RenderTargetListener::PreRenderTargetUpdateHandler^ hnd)
			{
				_preRenderTargetUpdate -= hnd;
				if (_preRenderTargetUpdate == CLR_NULL) _renderTargetListener->doCallForPreRenderTargetUpdate = false;
			}
		private:
			void raise( Mogre::RenderTargetEvent_NativePtr evt )
			{
				if (_preRenderTargetUpdate)
					_preRenderTargetUpdate->Invoke( evt );
			}
		}
	
		event Mogre::RenderTargetListener::PostRenderTargetUpdateHandler^ PostRenderTargetUpdate
		{
			void add(Mogre::RenderTargetListener::PostRenderTargetUpdateHandler^ hnd)
			{
				if (_postRenderTargetUpdate == CLR_NULL)
				{
					if (_renderTargetListener == 0)
					{
						_renderTargetListener = new RenderTargetListener_Director(this);
						static_cast<Ogre::RenderTarget*>(_native)->addListener(_renderTargetListener);
					}
					_renderTargetListener->doCallForPostRenderTargetUpdate = true;
				}
				_postRenderTargetUpdate += hnd;
			}
			void remove(Mogre::RenderTargetListener::PostRenderTargetUpdateHandler^ hnd)
			{
				_postRenderTargetUpdate -= hnd;
				if (_postRenderTargetUpdate == CLR_NULL) _renderTargetListener->doCallForPostRenderTargetUpdate = false;
			}
		private:
			void raise( Mogre::RenderTargetEvent_NativePtr evt )
			{
				if (_postRenderTargetUpdate)
					_postRenderTargetUpdate->Invoke( evt );
			}
		}
	
		event Mogre::RenderTargetListener::PreViewportUpdateHandler^ PreViewportUpdate
		{
			void add(Mogre::RenderTargetListener::PreViewportUpdateHandler^ hnd)
			{
				if (_preViewportUpdate == CLR_NULL)
				{
					if (_renderTargetListener == 0)
					{
						_renderTargetListener = new RenderTargetListener_Director(this);
						static_cast<Ogre::RenderTarget*>(_native)->addListener(_renderTargetListener);
					}
					_renderTargetListener->doCallForPreViewportUpdate = true;
				}
				_preViewportUpdate += hnd;
			}
			void remove(Mogre::RenderTargetListener::PreViewportUpdateHandler^ hnd)
			{
				_preViewportUpdate -= hnd;
				if (_preViewportUpdate == CLR_NULL) _renderTargetListener->doCallForPreViewportUpdate = false;
			}
		private:
			void raise( Mogre::RenderTargetViewportEvent_NativePtr evt )
			{
				if (_preViewportUpdate)
					_preViewportUpdate->Invoke( evt );
			}
		}
	
		event Mogre::RenderTargetListener::PostViewportUpdateHandler^ PostViewportUpdate
		{
			void add(Mogre::RenderTargetListener::PostViewportUpdateHandler^ hnd)
			{
				if (_postViewportUpdate == CLR_NULL)
				{
					if (_renderTargetListener == 0)
					{
						_renderTargetListener = new RenderTargetListener_Director(this);
						static_cast<Ogre::RenderTarget*>(_native)->addListener(_renderTargetListener);
					}
					_renderTargetListener->doCallForPostViewportUpdate = true;
				}
				_postViewportUpdate += hnd;
			}
			void remove(Mogre::RenderTargetListener::PostViewportUpdateHandler^ hnd)
			{
				_postViewportUpdate -= hnd;
				if (_postViewportUpdate == CLR_NULL) _renderTargetListener->doCallForPostViewportUpdate = false;
			}
		private:
			void raise( Mogre::RenderTargetViewportEvent_NativePtr evt )
			{
				if (_postViewportUpdate)
					_postViewportUpdate->Invoke( evt );
			}
		}
	
		event Mogre::RenderTargetListener::ViewportAddedHandler^ ViewportAdded
		{
			void add(Mogre::RenderTargetListener::ViewportAddedHandler^ hnd)
			{
				if (_viewportAdded == CLR_NULL)
				{
					if (_renderTargetListener == 0)
					{
						_renderTargetListener = new RenderTargetListener_Director(this);
						static_cast<Ogre::RenderTarget*>(_native)->addListener(_renderTargetListener);
					}
					_renderTargetListener->doCallForViewportAdded = true;
				}
				_viewportAdded += hnd;
			}
			void remove(Mogre::RenderTargetListener::ViewportAddedHandler^ hnd)
			{
				_viewportAdded -= hnd;
				if (_viewportAdded == CLR_NULL) _renderTargetListener->doCallForViewportAdded = false;
			}
		private:
			void raise( Mogre::RenderTargetViewportEvent_NativePtr evt )
			{
				if (_viewportAdded)
					_viewportAdded->Invoke( evt );
			}
		}
	
		event Mogre::RenderTargetListener::ViewportRemovedHandler^ ViewportRemoved
		{
			void add(Mogre::RenderTargetListener::ViewportRemovedHandler^ hnd)
			{
				if (_viewportRemoved == CLR_NULL)
				{
					if (_renderTargetListener == 0)
					{
						_renderTargetListener = new RenderTargetListener_Director(this);
						static_cast<Ogre::RenderTarget*>(_native)->addListener(_renderTargetListener);
					}
					_renderTargetListener->doCallForViewportRemoved = true;
				}
				_viewportRemoved += hnd;
			}
			void remove(Mogre::RenderTargetListener::ViewportRemovedHandler^ hnd)
			{
				_viewportRemoved -= hnd;
				if (_viewportRemoved == CLR_NULL) _renderTargetListener->doCallForViewportRemoved = false;
			}
		private:
			void raise( Mogre::RenderTargetViewportEvent_NativePtr evt )
			{
				if (_viewportRemoved)
					_viewportRemoved->Invoke( evt );
			}
		}
	
	
		property float AverageFPS
		{
		public:
			float get();
		}
	
		property size_t BatchCount
		{
		public:
			size_t get();
		}
	
		property float BestFPS
		{
		public:
			float get();
		}
	
		property float BestFrameTime
		{
		public:
			float get();
		}
	
		property unsigned int ColourDepth
		{
		public:
			unsigned int get();
		}
	
		property unsigned int Height
		{
		public:
			unsigned int get();
		}
	
		property bool IsActive
		{
		public:
			bool get();
		public:
			void set(bool state);
		}
	
		property bool IsAutoUpdated
		{
		public:
			bool get();
		public:
			void set(bool autoupdate);
		}
	
		property bool IsPrimary
		{
		public:
			bool get();
		}
	
		property float LastFPS
		{
		public:
			float get();
		}
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		property unsigned short NumViewports
		{
		public:
			unsigned short get();
		}
	
		property Mogre::uchar Priority
		{
		public:
			Mogre::uchar get();
		public:
			void set(Mogre::uchar priority);
		}
	
		property size_t TriangleCount
		{
		public:
			size_t get();
		}
	
		property unsigned int Width
		{
		public:
			unsigned int get();
		}
	
		property float WorstFPS
		{
		public:
			float get();
		}
	
		property float WorstFrameTime
		{
		public:
			float get();
		}
	
		void GetMetrics( [Out] unsigned int% width, [Out] unsigned int% height, [Out] unsigned int% colourDepth );
	
		void Update( );
	
		Mogre::Viewport^ AddViewport( Mogre::Camera^ cam, int ZOrder, float left, float top, float width, float height );
		Mogre::Viewport^ AddViewport( Mogre::Camera^ cam, int ZOrder, float left, float top, float width );
		Mogre::Viewport^ AddViewport( Mogre::Camera^ cam, int ZOrder, float left, float top );
		Mogre::Viewport^ AddViewport( Mogre::Camera^ cam, int ZOrder, float left );
		Mogre::Viewport^ AddViewport( Mogre::Camera^ cam, int ZOrder );
		Mogre::Viewport^ AddViewport( Mogre::Camera^ cam );
	
		Mogre::Viewport^ GetViewport( unsigned short index );
	
		void RemoveViewport( int ZOrder );
	
		void RemoveAllViewports( );
	
		void GetStatistics( [Out] float% lastFPS, [Out] float% avgFPS, [Out] float% bestFPS, [Out] float% worstFPS );
	
		Mogre::RenderTarget::FrameStats^ GetStatistics( );
	
		void ResetStatistics( );
	
		void GetCustomAttribute( String^ name, void* pData );
	
		void RemoveAllListeners( );
	
		void WriteContentsToFile( String^ filename );
	
		String^ WriteContentsToTimestampedFile( String^ filenamePrefix, String^ filenameSuffix );
	
		bool RequiresTextureFlipping( );
	
		void _notifyCameraRemoved( Mogre::Camera^ cam );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( RenderTarget )
	
		//Protected Declarations
	protected public:
		virtual void OnPreRenderTargetUpdate( Mogre::RenderTargetEvent_NativePtr evt ) = IRenderTargetListener_Receiver::PreRenderTargetUpdate
		{
			PreRenderTargetUpdate( evt );
		}
	
		virtual void OnPostRenderTargetUpdate( Mogre::RenderTargetEvent_NativePtr evt ) = IRenderTargetListener_Receiver::PostRenderTargetUpdate
		{
			PostRenderTargetUpdate( evt );
		}
	
		virtual void OnPreViewportUpdate( Mogre::RenderTargetViewportEvent_NativePtr evt ) = IRenderTargetListener_Receiver::PreViewportUpdate
		{
			PreViewportUpdate( evt );
		}
	
		virtual void OnPostViewportUpdate( Mogre::RenderTargetViewportEvent_NativePtr evt ) = IRenderTargetListener_Receiver::PostViewportUpdate
		{
			PostViewportUpdate( evt );
		}
	
		virtual void OnViewportAdded( Mogre::RenderTargetViewportEvent_NativePtr evt ) = IRenderTargetListener_Receiver::ViewportAdded
		{
			ViewportAdded( evt );
		}
	
		virtual void OnViewportRemoved( Mogre::RenderTargetViewportEvent_NativePtr evt ) = IRenderTargetListener_Receiver::ViewportRemoved
		{
			ViewportRemoved( evt );
		}
	
	
	
	};
	

}
