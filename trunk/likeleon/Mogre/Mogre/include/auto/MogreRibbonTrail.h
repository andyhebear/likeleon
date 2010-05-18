/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreRibbonTrail.h"
#include "MogreNode.h"
#include "MogreBillboardChain.h"
#include "MogrePrerequisites.h"
#include "MogreMovableObject.h"

namespace Mogre
{
	//################################################################
	//RibbonTrail
	//################################################################
	
	public ref class RibbonTrail : public BillboardChain, public Mogre::Node::IListener
	{
		//Nested Types
		public: ref class NodeList;
	
		#define STLDECL_MANAGEDTYPE Mogre::Node^
		#define STLDECL_NATIVETYPE Ogre::Node*
		public: INC_DECLARE_STLVECTOR( NodeList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		public: INC_DECLARE_ITERATOR( NodeIterator, Ogre::RibbonTrail::NodeIterator, Mogre::RibbonTrail::NodeList, Mogre::Node^, Ogre::Node* )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		RibbonTrail( CLRObject* obj ) : BillboardChain(obj)
		{
		}
	
		virtual Ogre::Node::Listener* _IListener_GetNativePtr() = IListener::_GetNativePtr;
	
	
		//Public Declarations
	public:
		RibbonTrail( String^ name, size_t maxElements, size_t numberOfChains, bool useTextureCoords, bool useColours );
		RibbonTrail( String^ name, size_t maxElements, size_t numberOfChains, bool useTextureCoords );
		RibbonTrail( String^ name, size_t maxElements, size_t numberOfChains );
		RibbonTrail( String^ name, size_t maxElements );
		RibbonTrail( String^ name );
	
	
		property size_t MaxChainElements
		{
		public:
			size_t get();
		public:
			void set(size_t maxElements);
		}
	
		property String^ MovableType
		{
		public:
			String^ get();
		}
	
		property size_t NumberOfChains
		{
		public:
			size_t get();
		public:
			void set(size_t numChains);
		}
	
		property Mogre::Real TrailLength
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real len);
		}
	
		void AddNode( Mogre::Node^ n );
	
		void RemoveNode( Mogre::Node^ n );
	
		Mogre::RibbonTrail::NodeIterator^ GetNodeIterator( );
	
		size_t GetChainIndexForNode( Mogre::Node^ n );
	
		void ClearChain( size_t chainIndex );
	
		void SetInitialColour( size_t chainIndex, Mogre::ColourValue col );
	
		void SetInitialColour( size_t chainIndex, Mogre::Real r, Mogre::Real g, Mogre::Real b, Mogre::Real a );
		void SetInitialColour( size_t chainIndex, Mogre::Real r, Mogre::Real g, Mogre::Real b );
	
		Mogre::ColourValue GetInitialColour( size_t chainIndex );
	
		void SetColourChange( size_t chainIndex, Mogre::ColourValue valuePerSecond );
	
		void SetInitialWidth( size_t chainIndex, Mogre::Real width );
	
		Mogre::Real GetInitialWidth( size_t chainIndex );
	
		void SetWidthChange( size_t chainIndex, Mogre::Real widthDeltaPerSecond );
	
		Mogre::Real GetWidthChange( size_t chainIndex );
	
		void SetColourChange( size_t chainIndex, Mogre::Real r, Mogre::Real g, Mogre::Real b, Mogre::Real a );
	
		Mogre::ColourValue GetColourChange( size_t chainIndex );
	
		virtual void NodeUpdated( Mogre::Node^ node );
	
		virtual void NodeDestroyed( Mogre::Node^ node );
	
		void _timeUpdate( Mogre::Real time );
	
		//------------------------------------------------------------
		// Implementation for IListener
		//------------------------------------------------------------
	
	public:
		virtual void NodeAttached( Mogre::Node^ param1 );
	
	public:
		virtual void NodeDetached( Mogre::Node^ param1 );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( RibbonTrail )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//RibbonTrailFactory
	//################################################################
	
	public ref class RibbonTrailFactory : public MovableObjectFactory
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		RibbonTrailFactory( CLRObject* obj ) : MovableObjectFactory(obj)
		{
		}
	
	
		//Public Declarations
	public:
		RibbonTrailFactory( );
	
	
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
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( RibbonTrailFactory )
	
		//Protected Declarations
	protected public:
	
	};
	

}
