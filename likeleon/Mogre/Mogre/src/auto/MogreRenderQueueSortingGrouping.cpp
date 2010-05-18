/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreRenderQueueSortingGrouping.h"
#include "MogreRenderable.h"
#include "MogrePass.h"
#include "MogreCamera.h"
#include "MogreTechnique.h"
#include "MogreRenderQueue.h"

namespace Mogre
{
	//################################################################
	//RenderablePass_NativePtr
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	
	Mogre::IRenderable^ RenderablePass_NativePtr::renderable::get()
	{
		return _native->renderable;
	}
	
	Mogre::Pass^ RenderablePass_NativePtr::pass::get()
	{
		return _native->pass;
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//IQueuedRenderableVisitor
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	Ogre::QueuedRenderableVisitor* QueuedRenderableVisitor::_IQueuedRenderableVisitor_GetNativePtr()
	{
		return static_cast<Ogre::QueuedRenderableVisitor*>( static_cast<QueuedRenderableVisitor_Proxy*>(_native) );
	}
	
	
	//Public Declarations
	QueuedRenderableVisitor::QueuedRenderableVisitor( ) : Wrapper( (CLRObject*)0 )
	{
		_createdByCLR = true;
		Type^ thisType = this->GetType();
		_isOverriden = true;  //it's abstract or interface so it must be overriden
		QueuedRenderableVisitor_Proxy* proxy = new QueuedRenderableVisitor_Proxy(this);
		proxy->_overriden = Implementation::SubclassingManager::Instance->GetOverridenMethodsArrayPointer(thisType, QueuedRenderableVisitor::typeid, 0);
		_native = proxy;
	
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	
	
	
	
	//Protected Declarations
	
	
	
	//################################################################
	//QueuedRenderableCollection
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	QueuedRenderableCollection::QueuedRenderableCollection( )
	{
		_createdByCLR = true;
		_native = new Ogre::QueuedRenderableCollection();
	}
	
	void QueuedRenderableCollection::Clear( )
	{
		static_cast<Ogre::QueuedRenderableCollection*>(_native)->clear( );
	}
	
	void QueuedRenderableCollection::RemovePassGroup( Mogre::Pass^ p )
	{
		static_cast<Ogre::QueuedRenderableCollection*>(_native)->removePassGroup( p );
	}
	
	void QueuedRenderableCollection::ResetOrganisationModes( )
	{
		static_cast<Ogre::QueuedRenderableCollection*>(_native)->resetOrganisationModes( );
	}
	
	void QueuedRenderableCollection::AddOrganisationMode( Mogre::QueuedRenderableCollection::OrganisationMode om )
	{
		static_cast<Ogre::QueuedRenderableCollection*>(_native)->addOrganisationMode( (Ogre::QueuedRenderableCollection::OrganisationMode)om );
	}
	
	void QueuedRenderableCollection::AddRenderable( Mogre::Pass^ pass, Mogre::IRenderable^ rend )
	{
		static_cast<Ogre::QueuedRenderableCollection*>(_native)->addRenderable( pass, rend );
	}
	
	void QueuedRenderableCollection::Sort( Mogre::Camera^ cam )
	{
		static_cast<Ogre::QueuedRenderableCollection*>(_native)->sort( cam );
	}
	
	void QueuedRenderableCollection::AcceptVisitor( Mogre::IQueuedRenderableVisitor^ visitor, Mogre::QueuedRenderableCollection::OrganisationMode om )
	{
		static_cast<const Ogre::QueuedRenderableCollection*>(_native)->acceptVisitor( visitor, (Ogre::QueuedRenderableCollection::OrganisationMode)om );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//RenderPriorityGroup
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	RenderPriorityGroup::RenderPriorityGroup( Mogre::RenderQueueGroup^ parent, bool splitPassesByLightingType, bool splitNoShadowPasses, bool shadowCastersNotReceivers )
	{
		_createdByCLR = true;
		_native = new Ogre::RenderPriorityGroup( parent, splitPassesByLightingType, splitNoShadowPasses, shadowCastersNotReceivers);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::QueuedRenderableCollection^ RenderPriorityGroup::SolidsBasic::get()
	{
		return static_cast<const Ogre::RenderPriorityGroup*>(_native)->getSolidsBasic( );
	}
	
	Mogre::QueuedRenderableCollection^ RenderPriorityGroup::SolidsDecal::get()
	{
		return static_cast<const Ogre::RenderPriorityGroup*>(_native)->getSolidsDecal( );
	}
	
	Mogre::QueuedRenderableCollection^ RenderPriorityGroup::SolidsDiffuseSpecular::get()
	{
		return static_cast<const Ogre::RenderPriorityGroup*>(_native)->getSolidsDiffuseSpecular( );
	}
	
	Mogre::QueuedRenderableCollection^ RenderPriorityGroup::SolidsNoShadowReceive::get()
	{
		return static_cast<const Ogre::RenderPriorityGroup*>(_native)->getSolidsNoShadowReceive( );
	}
	
	Mogre::QueuedRenderableCollection^ RenderPriorityGroup::Transparents::get()
	{
		return static_cast<const Ogre::RenderPriorityGroup*>(_native)->getTransparents( );
	}
	
	void RenderPriorityGroup::ResetOrganisationModes( )
	{
		static_cast<Ogre::RenderPriorityGroup*>(_native)->resetOrganisationModes( );
	}
	
	void RenderPriorityGroup::AddOrganisationMode( Mogre::QueuedRenderableCollection::OrganisationMode om )
	{
		static_cast<Ogre::RenderPriorityGroup*>(_native)->addOrganisationMode( (Ogre::QueuedRenderableCollection::OrganisationMode)om );
	}
	
	void RenderPriorityGroup::DefaultOrganisationMode( )
	{
		static_cast<Ogre::RenderPriorityGroup*>(_native)->defaultOrganisationMode( );
	}
	
	void RenderPriorityGroup::AddRenderable( Mogre::IRenderable^ pRend, Mogre::Technique^ pTech )
	{
		static_cast<Ogre::RenderPriorityGroup*>(_native)->addRenderable( pRend, pTech );
	}
	
	void RenderPriorityGroup::Sort( Mogre::Camera^ cam )
	{
		static_cast<Ogre::RenderPriorityGroup*>(_native)->sort( cam );
	}
	
	void RenderPriorityGroup::Clear( )
	{
		static_cast<Ogre::RenderPriorityGroup*>(_native)->clear( );
	}
	
	void RenderPriorityGroup::SetSplitPassesByLightingType( bool split )
	{
		static_cast<Ogre::RenderPriorityGroup*>(_native)->setSplitPassesByLightingType( split );
	}
	
	void RenderPriorityGroup::SetSplitNoShadowPasses( bool split )
	{
		static_cast<Ogre::RenderPriorityGroup*>(_native)->setSplitNoShadowPasses( split );
	}
	
	void RenderPriorityGroup::SetShadowCastersCannotBeReceivers( bool ind )
	{
		static_cast<Ogre::RenderPriorityGroup*>(_native)->setShadowCastersCannotBeReceivers( ind );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//RenderQueueGroup
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDKEY Mogre::ushort
	#define STLDECL_MANAGEDVALUE Mogre::RenderPriorityGroup^
	#define STLDECL_NATIVEKEY Ogre::ushort
	#define STLDECL_NATIVEVALUE Ogre::RenderPriorityGroup*
	CPP_DECLARE_STLMAP( RenderQueueGroup::, PriorityMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	CPP_DECLARE_MAP_ITERATOR( RenderQueueGroup::, PriorityMapIterator, Ogre::RenderQueueGroup::PriorityMapIterator, Mogre::RenderQueueGroup::PriorityMap, Mogre::RenderPriorityGroup^, Ogre::RenderPriorityGroup*, Mogre::ushort, Ogre::ushort,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	RenderQueueGroup::RenderQueueGroup( Mogre::RenderQueue^ parent, bool splitPassesByLightingType, bool splitNoShadowPasses, bool shadowCastersNotReceivers )
	{
		_createdByCLR = true;
		_native = new Ogre::RenderQueueGroup( parent, splitPassesByLightingType, splitNoShadowPasses, shadowCastersNotReceivers);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	bool RenderQueueGroup::ShadowsEnabled::get()
	{
		return static_cast<const Ogre::RenderQueueGroup*>(_native)->getShadowsEnabled( );
	}
	void RenderQueueGroup::ShadowsEnabled::set( bool enabled )
	{
		static_cast<Ogre::RenderQueueGroup*>(_native)->setShadowsEnabled( enabled );
	}
	
	Mogre::RenderQueueGroup::PriorityMapIterator^ RenderQueueGroup::GetIterator( )
	{
		return static_cast<Ogre::RenderQueueGroup*>(_native)->getIterator( );
	}
	
	void RenderQueueGroup::AddRenderable( Mogre::IRenderable^ pRend, Mogre::Technique^ pTech, Mogre::ushort priority )
	{
		static_cast<Ogre::RenderQueueGroup*>(_native)->addRenderable( pRend, pTech, priority );
	}
	
	void RenderQueueGroup::Clear( bool destroy )
	{
		static_cast<Ogre::RenderQueueGroup*>(_native)->clear( destroy );
	}
	void RenderQueueGroup::Clear( )
	{
		static_cast<Ogre::RenderQueueGroup*>(_native)->clear( );
	}
	
	void RenderQueueGroup::SetSplitPassesByLightingType( bool split )
	{
		static_cast<Ogre::RenderQueueGroup*>(_native)->setSplitPassesByLightingType( split );
	}
	
	void RenderQueueGroup::SetSplitNoShadowPasses( bool split )
	{
		static_cast<Ogre::RenderQueueGroup*>(_native)->setSplitNoShadowPasses( split );
	}
	
	void RenderQueueGroup::SetShadowCastersCannotBeReceivers( bool ind )
	{
		static_cast<Ogre::RenderQueueGroup*>(_native)->setShadowCastersCannotBeReceivers( ind );
	}
	
	void RenderQueueGroup::ResetOrganisationModes( )
	{
		static_cast<Ogre::RenderQueueGroup*>(_native)->resetOrganisationModes( );
	}
	
	void RenderQueueGroup::AddOrganisationMode( Mogre::QueuedRenderableCollection::OrganisationMode om )
	{
		static_cast<Ogre::RenderQueueGroup*>(_native)->addOrganisationMode( (Ogre::QueuedRenderableCollection::OrganisationMode)om );
	}
	
	void RenderQueueGroup::DefaultOrganisationMode( )
	{
		static_cast<Ogre::RenderQueueGroup*>(_native)->defaultOrganisationMode( );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//QueuedRenderableVisitor_Proxy
	//################################################################
	
	
	
	void QueuedRenderableVisitor_Proxy::visit( const Ogre::RenderablePass* rp )
	{
		_managed->Visit( rp );
	}
	
	bool QueuedRenderableVisitor_Proxy::visit( const Ogre::Pass* p )
	{
		bool mp_return = _managed->Visit( p );
		return mp_return;
	}
	
	void QueuedRenderableVisitor_Proxy::visit( const Ogre::Renderable* r )
	{
		_managed->Visit( r );
	}

}
