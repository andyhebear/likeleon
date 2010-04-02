/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreRenderQueue.h"
#include "MogrePlatform.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	public enum class RenderQueueGroupID
	{
		RENDER_QUEUE_BACKGROUND = Ogre::RENDER_QUEUE_BACKGROUND,
		RENDER_QUEUE_SKIES_EARLY = Ogre::RENDER_QUEUE_SKIES_EARLY,
		RENDER_QUEUE_1 = Ogre::RENDER_QUEUE_1,
		RENDER_QUEUE_2 = Ogre::RENDER_QUEUE_2,
		RENDER_QUEUE_WORLD_GEOMETRY_1 = Ogre::RENDER_QUEUE_WORLD_GEOMETRY_1,
		RENDER_QUEUE_3 = Ogre::RENDER_QUEUE_3,
		RENDER_QUEUE_4 = Ogre::RENDER_QUEUE_4,
		RENDER_QUEUE_MAIN = Ogre::RENDER_QUEUE_MAIN,
		RENDER_QUEUE_6 = Ogre::RENDER_QUEUE_6,
		RENDER_QUEUE_7 = Ogre::RENDER_QUEUE_7,
		RENDER_QUEUE_WORLD_GEOMETRY_2 = Ogre::RENDER_QUEUE_WORLD_GEOMETRY_2,
		RENDER_QUEUE_8 = Ogre::RENDER_QUEUE_8,
		RENDER_QUEUE_9 = Ogre::RENDER_QUEUE_9,
		RENDER_QUEUE_SKIES_LATE = Ogre::RENDER_QUEUE_SKIES_LATE,
		RENDER_QUEUE_OVERLAY = Ogre::RENDER_QUEUE_OVERLAY,
		RENDER_QUEUE_MAX = Ogre::RENDER_QUEUE_MAX
	};
	
	//################################################################
	//RenderQueue
	//################################################################
	
	public ref class RenderQueue : public Wrapper
	{
		//Nested Types
		public: ref class RenderQueueGroupMap;
	
		//################################################################
		//IRenderableListener
		//################################################################
	
		public: interface class IRenderableListener
		{
			//Nested Types
	
			//Private Declarations
	
			//Internal Declarations
	
			//Public Declarations
			DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IRenderableListener, Ogre::RenderQueue::RenderableListener )
	
			virtual Ogre::RenderQueue::RenderableListener* _GetNativePtr();
	
		public:
	
	
			virtual bool RenderableQueued( Mogre::IRenderable^ rend, Mogre::uint8 groupID, Mogre::ushort priority, [Out] Mogre::Technique^% ppTech );
	
	
			//Protected Declarations
	
		};
	
		//################################################################
		//IRenderableListener
		//################################################################
		
		public: ref class RenderableListener abstract : public Wrapper, public Mogre::RenderQueue::IRenderableListener
		{
			//Nested Types
		
			//Private Declarations
		private protected:
		
			//Internal Declarations
		public protected:
			RenderableListener( CLRObject* obj ) : Wrapper(obj)
			{
			}
		
			virtual Ogre::RenderQueue::RenderableListener* _IRenderableListener_GetNativePtr() = IRenderableListener::_GetNativePtr;
		
		
			//Public Declarations
		public:
			RenderableListener( );
		
		
			virtual bool RenderableQueued( Mogre::IRenderable^ rend, Mogre::uint8 groupID, Mogre::ushort priority, [Out] Mogre::Technique^% ppTech ) abstract;
		
		
			//Protected Declarations
		protected public:
		
		};
		
	
		#define STLDECL_MANAGEDKEY Mogre::uint8
		#define STLDECL_MANAGEDVALUE Mogre::RenderQueueGroup^
		#define STLDECL_NATIVEKEY Ogre::uint8
		#define STLDECL_NATIVEVALUE Ogre::RenderQueueGroup*
		public: INC_DECLARE_STLMAP( RenderQueueGroupMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		public: INC_DECLARE_MAP_ITERATOR( QueueGroupIterator, Ogre::RenderQueue::QueueGroupIterator, Mogre::RenderQueue::RenderQueueGroupMap, Mogre::RenderQueueGroup^, Ogre::RenderQueueGroup*, Mogre::uint8, Ogre::uint8 )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		RenderQueue( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		RenderQueue( );
	
	
		property Mogre::uint8 DefaultQueueGroup
		{
		public:
			Mogre::uint8 get();
		public:
			void set(Mogre::uint8 grp);
		}
	
		property Mogre::ushort DefaultRenderablePriority
		{
		public:
			Mogre::ushort get();
		public:
			void set(Mogre::ushort priority);
		}
	
		void Clear( bool destroyPassMaps );
		void Clear( );
	
		Mogre::RenderQueueGroup^ GetQueueGroup( Mogre::uint8 qid );
	
		void AddRenderable( Mogre::IRenderable^ pRend, Mogre::uint8 groupID, Mogre::ushort priority );
	
		void AddRenderable( Mogre::IRenderable^ pRend, Mogre::uint8 groupId );
	
		void AddRenderable( Mogre::IRenderable^ pRend );
	
		Mogre::RenderQueue::QueueGroupIterator^ _getQueueGroupIterator( );
	
		void SetSplitPassesByLightingType( bool split );
	
		void SetSplitNoShadowPasses( bool split );
	
		void SetShadowCastersCannotBeReceivers( bool ind );
	
		void SetRenderableListener( Mogre::RenderQueue::IRenderableListener^ listener );
	
		Mogre::RenderQueue::IRenderableListener^ GetRenderableListener( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( RenderQueue )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//RenderQueue_RenderableListener_Proxy
	//################################################################
	
	class RenderQueue_RenderableListener_Proxy : public Ogre::RenderQueue::RenderableListener, public CLRObject
	{
	public:
		friend ref class Mogre::RenderQueue::RenderableListener;
	
		bool* _overriden;
	
		gcroot<Mogre::RenderQueue::RenderableListener^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		RenderQueue_RenderableListener_Proxy( Mogre::RenderQueue::RenderableListener^ managedObj ) :
			Ogre::RenderQueue::RenderableListener( ),
			_managed(managedObj)
		{
		}
	
		virtual bool renderableQueued( Ogre::Renderable* rend, Ogre::uint8 groupID, Ogre::ushort priority, Ogre::Technique** ppTech ) override;
	};
	

}
