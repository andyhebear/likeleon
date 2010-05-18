/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreRenderQueueSortingGrouping.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//RenderablePass_NativePtr
	//################################################################
	
	public value class RenderablePass_NativePtr
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		Ogre::RenderablePass* _native;
	
		//Internal Declarations
	public protected:
	
		//Public Declarations
	public:
	
	
		property Mogre::IRenderable^ renderable
		{
		public:
			Mogre::IRenderable^ get();
		}
	
		property Mogre::Pass^ pass
		{
		public:
			Mogre::Pass^ get();
		}
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_NATIVEPTRVALUECLASS( RenderablePass_NativePtr, Ogre::RenderablePass )
	
	
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
	//IQueuedRenderableVisitor
	//################################################################
	
	public interface class IQueuedRenderableVisitor
	{
		//Nested Types
	
		//Private Declarations
	
		//Internal Declarations
	
		//Public Declarations
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_INTERFACE( IQueuedRenderableVisitor, Ogre::QueuedRenderableVisitor )
	
		virtual Ogre::QueuedRenderableVisitor* _GetNativePtr();
	
	public:
	
	
		virtual void Visit( Mogre::RenderablePass_NativePtr rp );
	
		virtual bool Visit( Mogre::Pass^ p );
	
		virtual void Visit( Mogre::IRenderable^ r );
	
	
		//Protected Declarations
	
	};
	
	//################################################################
	//IQueuedRenderableVisitor
	//################################################################
	
	public ref class QueuedRenderableVisitor abstract : public Wrapper, public IQueuedRenderableVisitor
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		QueuedRenderableVisitor( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
		virtual Ogre::QueuedRenderableVisitor* _IQueuedRenderableVisitor_GetNativePtr() = IQueuedRenderableVisitor::_GetNativePtr;
	
	
		//Public Declarations
	public:
		QueuedRenderableVisitor( );
	
	
		virtual void Visit( Mogre::RenderablePass_NativePtr rp ) abstract;
	
		virtual bool Visit( Mogre::Pass^ p ) abstract;
	
		virtual void Visit( Mogre::IRenderable^ r ) abstract;
	
	
		//Protected Declarations
	protected public:
	
	};
	
	
	//################################################################
	//QueuedRenderableCollection
	//################################################################
	
	public ref class QueuedRenderableCollection
	{
		//Nested Types
	
		public: enum class OrganisationMode
		{
			OM_PASS_GROUP = Ogre::QueuedRenderableCollection::OM_PASS_GROUP,
			OM_SORT_DESCENDING = Ogre::QueuedRenderableCollection::OM_SORT_DESCENDING,
			OM_SORT_ASCENDING = Ogre::QueuedRenderableCollection::OM_SORT_ASCENDING
		};
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		QueuedRenderableCollection( Ogre::QueuedRenderableCollection* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~QueuedRenderableCollection()
		{
			this->!QueuedRenderableCollection();
		}
		!QueuedRenderableCollection()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::QueuedRenderableCollection* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		QueuedRenderableCollection( );
	
	
		void Clear( );
	
		void RemovePassGroup( Mogre::Pass^ p );
	
		void ResetOrganisationModes( );
	
		void AddOrganisationMode( Mogre::QueuedRenderableCollection::OrganisationMode om );
	
		void AddRenderable( Mogre::Pass^ pass, Mogre::IRenderable^ rend );
	
		void Sort( Mogre::Camera^ cam );
	
		void AcceptVisitor( Mogre::IQueuedRenderableVisitor^ visitor, Mogre::QueuedRenderableCollection::OrganisationMode om );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_PLAINWRAPPER( QueuedRenderableCollection )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//RenderPriorityGroup
	//################################################################
	
	public ref class RenderPriorityGroup : public INativePointer
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		RenderPriorityGroup( Ogre::RenderPriorityGroup* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~RenderPriorityGroup()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::RenderPriorityGroup* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		RenderPriorityGroup( Mogre::RenderQueueGroup^ parent, bool splitPassesByLightingType, bool splitNoShadowPasses, bool shadowCastersNotReceivers );
	
	
		property Mogre::QueuedRenderableCollection^ SolidsBasic
		{
		public:
			Mogre::QueuedRenderableCollection^ get();
		}
	
		property Mogre::QueuedRenderableCollection^ SolidsDecal
		{
		public:
			Mogre::QueuedRenderableCollection^ get();
		}
	
		property Mogre::QueuedRenderableCollection^ SolidsDiffuseSpecular
		{
		public:
			Mogre::QueuedRenderableCollection^ get();
		}
	
		property Mogre::QueuedRenderableCollection^ SolidsNoShadowReceive
		{
		public:
			Mogre::QueuedRenderableCollection^ get();
		}
	
		property Mogre::QueuedRenderableCollection^ Transparents
		{
		public:
			Mogre::QueuedRenderableCollection^ get();
		}
	
		void ResetOrganisationModes( );
	
		void AddOrganisationMode( Mogre::QueuedRenderableCollection::OrganisationMode om );
	
		void DefaultOrganisationMode( );
	
		void AddRenderable( Mogre::IRenderable^ pRend, Mogre::Technique^ pTech );
	
		void Sort( Mogre::Camera^ cam );
	
		void Clear( );
	
		void SetSplitPassesByLightingType( bool split );
	
		void SetSplitNoShadowPasses( bool split );
	
		void SetShadowCastersCannotBeReceivers( bool ind );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( RenderPriorityGroup )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//RenderQueueGroup
	//################################################################
	
	public ref class RenderQueueGroup : public INativePointer
	{
		//Nested Types
		public: ref class PriorityMap;
	
		#define STLDECL_MANAGEDKEY Mogre::ushort
		#define STLDECL_MANAGEDVALUE Mogre::RenderPriorityGroup^
		#define STLDECL_NATIVEKEY Ogre::ushort
		#define STLDECL_NATIVEVALUE Ogre::RenderPriorityGroup*
		public: INC_DECLARE_STLMAP( PriorityMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		public: INC_DECLARE_MAP_ITERATOR( PriorityMapIterator, Ogre::RenderQueueGroup::PriorityMapIterator, Mogre::RenderQueueGroup::PriorityMap, Mogre::RenderPriorityGroup^, Ogre::RenderPriorityGroup*, Mogre::ushort, Ogre::ushort )
	
		//Private Declarations
	private protected:
	
		virtual void ClearNativePtr() = INativePointer::ClearNativePtr
		{
			_native = 0;
		}
	
		//Internal Declarations
	public protected:
		RenderQueueGroup( Ogre::RenderQueueGroup* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~RenderQueueGroup()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::RenderQueueGroup* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		RenderQueueGroup( Mogre::RenderQueue^ parent, bool splitPassesByLightingType, bool splitNoShadowPasses, bool shadowCastersNotReceivers );
	
	
		property bool ShadowsEnabled
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		Mogre::RenderQueueGroup::PriorityMapIterator^ GetIterator( );
	
		void AddRenderable( Mogre::IRenderable^ pRend, Mogre::Technique^ pTech, Mogre::ushort priority );
	
		void Clear( bool destroy );
		void Clear( );
	
		void SetSplitPassesByLightingType( bool split );
	
		void SetSplitNoShadowPasses( bool split );
	
		void SetShadowCastersCannotBeReceivers( bool ind );
	
		void ResetOrganisationModes( );
	
		void AddOrganisationMode( Mogre::QueuedRenderableCollection::OrganisationMode om );
	
		void DefaultOrganisationMode( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( RenderQueueGroup )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//QueuedRenderableVisitor_Proxy
	//################################################################
	
	class QueuedRenderableVisitor_Proxy : public Ogre::QueuedRenderableVisitor, public CLRObject
	{
	public:
		friend ref class Mogre::QueuedRenderableVisitor;
	
		bool* _overriden;
	
		gcroot<Mogre::QueuedRenderableVisitor^> _managed;
	
		virtual void _Init_CLRObject() override { *static_cast<CLRObject*>(this) = _managed; }
	
		QueuedRenderableVisitor_Proxy( Mogre::QueuedRenderableVisitor^ managedObj ) :
			Ogre::QueuedRenderableVisitor( ),
			_managed(managedObj)
		{
		}
	
		virtual void visit( const Ogre::RenderablePass* rp ) override;
	
		virtual bool visit( const Ogre::Pass* p ) override;
	
		virtual void visit( const Ogre::Renderable* r ) override;
	};
	

}
