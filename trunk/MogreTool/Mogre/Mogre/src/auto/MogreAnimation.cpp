/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreAnimation.h"
#include "MogreAnimationTrack.h"
#include "MogreNode.h"
#include "MogreAnimable.h"
#include "MogreVertexIndexData.h"
#include "MogreSkeleton.h"
#include "MogreEntity.h"

namespace Mogre
{
	//################################################################
	//Animation
	//################################################################
	
	//Nested Types
	#define STLDECL_MANAGEDKEY unsigned short
	#define STLDECL_MANAGEDVALUE Mogre::NodeAnimationTrack^
	#define STLDECL_NATIVEKEY unsigned short
	#define STLDECL_NATIVEVALUE Ogre::NodeAnimationTrack*
	CPP_DECLARE_STLMAP( Animation::, NodeTrackList, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDKEY unsigned short
	#define STLDECL_MANAGEDVALUE Mogre::NumericAnimationTrack^
	#define STLDECL_NATIVEKEY unsigned short
	#define STLDECL_NATIVEVALUE Ogre::NumericAnimationTrack*
	CPP_DECLARE_STLMAP( Animation::, NumericTrackList, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDKEY unsigned short
	#define STLDECL_MANAGEDVALUE Mogre::VertexAnimationTrack^
	#define STLDECL_NATIVEKEY unsigned short
	#define STLDECL_NATIVEVALUE Ogre::VertexAnimationTrack*
	CPP_DECLARE_STLMAP( Animation::, VertexTrackList, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	#define STLDECL_MANAGEDTYPE Mogre::ushort
	#define STLDECL_NATIVETYPE Ogre::ushort
	CPP_DECLARE_STLSET( Animation::, TrackHandleList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	CPP_DECLARE_MAP_ITERATOR( Animation::, NodeTrackIterator, Ogre::Animation::NodeTrackIterator, Mogre::Animation::NodeTrackList, Mogre::NodeAnimationTrack^, Ogre::NodeAnimationTrack*, unsigned short, unsigned short,  )
	
	CPP_DECLARE_MAP_ITERATOR( Animation::, NumericTrackIterator, Ogre::Animation::NumericTrackIterator, Mogre::Animation::NumericTrackList, Mogre::NumericAnimationTrack^, Ogre::NumericAnimationTrack*, unsigned short, unsigned short,  )
	
	CPP_DECLARE_MAP_ITERATOR( Animation::, VertexTrackIterator, Ogre::Animation::VertexTrackIterator, Mogre::Animation::VertexTrackList, Mogre::VertexAnimationTrack^, Ogre::VertexAnimationTrack*, unsigned short, unsigned short,  )
	
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	Animation::Animation( String^ name, Mogre::Real length ) : Wrapper((CLRObject*) 0)
	{
		_createdByCLR = true;
		DECLARE_NATIVE_STRING( o_name, name )
	
		_native = new Ogre::Animation( o_name, length);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::Animation::InterpolationMode Animation::DefaultInterpolationMode::get()
	{
		return (Mogre::Animation::InterpolationMode)Ogre::Animation::getDefaultInterpolationMode( );
	}
	void Animation::DefaultInterpolationMode::set( Mogre::Animation::InterpolationMode im )
	{
		Ogre::Animation::setDefaultInterpolationMode( (Ogre::Animation::InterpolationMode)im );
	}
	
	Mogre::Animation::RotationInterpolationMode Animation::DefaultRotationInterpolationMode::get()
	{
		return (Mogre::Animation::RotationInterpolationMode)Ogre::Animation::getDefaultRotationInterpolationMode( );
	}
	void Animation::DefaultRotationInterpolationMode::set( Mogre::Animation::RotationInterpolationMode im )
	{
		Ogre::Animation::setDefaultRotationInterpolationMode( (Ogre::Animation::RotationInterpolationMode)im );
	}
	
	Mogre::Real Animation::Length::get()
	{
		return static_cast<const Ogre::Animation*>(_native)->getLength( );
	}
	
	String^ Animation::Name::get()
	{
		return TO_CLR_STRING( static_cast<const Ogre::Animation*>(_native)->getName( ) );
	}
	
	unsigned short Animation::NumNodeTracks::get()
	{
		return static_cast<const Ogre::Animation*>(_native)->getNumNodeTracks( );
	}
	
	unsigned short Animation::NumNumericTracks::get()
	{
		return static_cast<const Ogre::Animation*>(_native)->getNumNumericTracks( );
	}
	
	unsigned short Animation::NumVertexTracks::get()
	{
		return static_cast<const Ogre::Animation*>(_native)->getNumVertexTracks( );
	}
	
	Mogre::NodeAnimationTrack^ Animation::CreateNodeTrack( unsigned short handle )
	{
		return static_cast<Ogre::Animation*>(_native)->createNodeTrack( handle );
	}
	
	Mogre::NumericAnimationTrack^ Animation::CreateNumericTrack( unsigned short handle )
	{
		return static_cast<Ogre::Animation*>(_native)->createNumericTrack( handle );
	}
	
	Mogre::VertexAnimationTrack^ Animation::CreateVertexTrack( unsigned short handle, Mogre::VertexAnimationType animType )
	{
		return static_cast<Ogre::Animation*>(_native)->createVertexTrack( handle, (Ogre::VertexAnimationType)animType );
	}
	
	Mogre::NodeAnimationTrack^ Animation::CreateNodeTrack( unsigned short handle, Mogre::Node^ node )
	{
		return static_cast<Ogre::Animation*>(_native)->createNodeTrack( handle, node );
	}
	
	Mogre::NumericAnimationTrack^ Animation::CreateNumericTrack( unsigned short handle, Mogre::AnimableValuePtr^ anim )
	{
		return static_cast<Ogre::Animation*>(_native)->createNumericTrack( handle, (const Ogre::AnimableValuePtr&)anim );
	}
	
	Mogre::VertexAnimationTrack^ Animation::CreateVertexTrack( unsigned short handle, Mogre::VertexData^ data, Mogre::VertexAnimationType animType )
	{
		return static_cast<Ogre::Animation*>(_native)->createVertexTrack( handle, data, (Ogre::VertexAnimationType)animType );
	}
	
	Mogre::NodeAnimationTrack^ Animation::GetNodeTrack( unsigned short handle )
	{
		return static_cast<const Ogre::Animation*>(_native)->getNodeTrack( handle );
	}
	
	bool Animation::HasNodeTrack( unsigned short handle )
	{
		return static_cast<const Ogre::Animation*>(_native)->hasNodeTrack( handle );
	}
	
	Mogre::NumericAnimationTrack^ Animation::GetNumericTrack( unsigned short handle )
	{
		return static_cast<const Ogre::Animation*>(_native)->getNumericTrack( handle );
	}
	
	bool Animation::HasNumericTrack( unsigned short handle )
	{
		return static_cast<const Ogre::Animation*>(_native)->hasNumericTrack( handle );
	}
	
	Mogre::VertexAnimationTrack^ Animation::GetVertexTrack( unsigned short handle )
	{
		return static_cast<const Ogre::Animation*>(_native)->getVertexTrack( handle );
	}
	
	bool Animation::HasVertexTrack( unsigned short handle )
	{
		return static_cast<const Ogre::Animation*>(_native)->hasVertexTrack( handle );
	}
	
	void Animation::DestroyNodeTrack( unsigned short handle )
	{
		static_cast<Ogre::Animation*>(_native)->destroyNodeTrack( handle );
	}
	
	void Animation::DestroyNumericTrack( unsigned short handle )
	{
		static_cast<Ogre::Animation*>(_native)->destroyNumericTrack( handle );
	}
	
	void Animation::DestroyVertexTrack( unsigned short handle )
	{
		static_cast<Ogre::Animation*>(_native)->destroyVertexTrack( handle );
	}
	
	void Animation::DestroyAllTracks( )
	{
		static_cast<Ogre::Animation*>(_native)->destroyAllTracks( );
	}
	
	void Animation::DestroyAllNodeTracks( )
	{
		static_cast<Ogre::Animation*>(_native)->destroyAllNodeTracks( );
	}
	
	void Animation::DestroyAllNumericTracks( )
	{
		static_cast<Ogre::Animation*>(_native)->destroyAllNumericTracks( );
	}
	
	void Animation::DestroyAllVertexTracks( )
	{
		static_cast<Ogre::Animation*>(_native)->destroyAllVertexTracks( );
	}
	
	void Animation::Apply( Mogre::Real timePos, Mogre::Real weight, Mogre::Real scale )
	{
		static_cast<Ogre::Animation*>(_native)->apply( timePos, weight, scale );
	}
	void Animation::Apply( Mogre::Real timePos, Mogre::Real weight )
	{
		static_cast<Ogre::Animation*>(_native)->apply( timePos, weight );
	}
	void Animation::Apply( Mogre::Real timePos )
	{
		static_cast<Ogre::Animation*>(_native)->apply( timePos );
	}
	
	void Animation::Apply( Mogre::Skeleton^ skeleton, Mogre::Real timePos, Mogre::Real weight, Mogre::Real scale )
	{
		static_cast<Ogre::Animation*>(_native)->apply( skeleton, timePos, weight, scale );
	}
	void Animation::Apply( Mogre::Skeleton^ skeleton, Mogre::Real timePos, Mogre::Real weight )
	{
		static_cast<Ogre::Animation*>(_native)->apply( skeleton, timePos, weight );
	}
	void Animation::Apply( Mogre::Skeleton^ skeleton, Mogre::Real timePos )
	{
		static_cast<Ogre::Animation*>(_native)->apply( skeleton, timePos );
	}
	
	void Animation::Apply( Mogre::Entity^ entity, Mogre::Real timePos, Mogre::Real weight, bool software, bool hardware )
	{
		static_cast<Ogre::Animation*>(_native)->apply( entity, timePos, weight, software, hardware );
	}
	
	void Animation::SetInterpolationMode( Mogre::Animation::InterpolationMode im )
	{
		static_cast<Ogre::Animation*>(_native)->setInterpolationMode( (Ogre::Animation::InterpolationMode)im );
	}
	
	Mogre::Animation::InterpolationMode Animation::GetInterpolationMode( )
	{
		return (Mogre::Animation::InterpolationMode)static_cast<const Ogre::Animation*>(_native)->getInterpolationMode( );
	}
	
	void Animation::SetRotationInterpolationMode( Mogre::Animation::RotationInterpolationMode im )
	{
		static_cast<Ogre::Animation*>(_native)->setRotationInterpolationMode( (Ogre::Animation::RotationInterpolationMode)im );
	}
	
	Mogre::Animation::RotationInterpolationMode Animation::GetRotationInterpolationMode( )
	{
		return (Mogre::Animation::RotationInterpolationMode)static_cast<const Ogre::Animation*>(_native)->getRotationInterpolationMode( );
	}
	
	Mogre::Animation::Const_NodeTrackList^ Animation::_getNodeTrackList( )
	{
		return static_cast<const Ogre::Animation*>(_native)->_getNodeTrackList( );
	}
	
	Mogre::Animation::NodeTrackIterator^ Animation::GetNodeTrackIterator( )
	{
		return static_cast<const Ogre::Animation*>(_native)->getNodeTrackIterator( );
	}
	
	Mogre::Animation::Const_NumericTrackList^ Animation::_getNumericTrackList( )
	{
		return static_cast<const Ogre::Animation*>(_native)->_getNumericTrackList( );
	}
	
	Mogre::Animation::NumericTrackIterator^ Animation::GetNumericTrackIterator( )
	{
		return static_cast<const Ogre::Animation*>(_native)->getNumericTrackIterator( );
	}
	
	Mogre::Animation::Const_VertexTrackList^ Animation::_getVertexTrackList( )
	{
		return static_cast<const Ogre::Animation*>(_native)->_getVertexTrackList( );
	}
	
	Mogre::Animation::VertexTrackIterator^ Animation::GetVertexTrackIterator( )
	{
		return static_cast<const Ogre::Animation*>(_native)->getVertexTrackIterator( );
	}
	
	void Animation::Optimise( bool discardIdentityNodeTracks )
	{
		static_cast<Ogre::Animation*>(_native)->optimise( discardIdentityNodeTracks );
	}
	void Animation::Optimise( )
	{
		static_cast<Ogre::Animation*>(_native)->optimise( );
	}
	
	void Animation::_collectIdentityNodeTracks( Mogre::Animation::TrackHandleList^ tracks )
	{
		static_cast<const Ogre::Animation*>(_native)->_collectIdentityNodeTracks( tracks );
	}
	
	void Animation::_destroyNodeTracks( Mogre::Animation::Const_TrackHandleList^ tracks )
	{
		static_cast<Ogre::Animation*>(_native)->_destroyNodeTracks( tracks );
	}
	
	Mogre::Animation^ Animation::Clone( String^ newName )
	{
		DECLARE_NATIVE_STRING( o_newName, newName )
	
		return static_cast<const Ogre::Animation*>(_native)->clone( o_newName );
	}
	
	void Animation::_keyFrameListChanged( )
	{
		static_cast<Ogre::Animation*>(_native)->_keyFrameListChanged( );
	}
	
	Mogre::TimeIndex^ Animation::_getTimeIndex( Mogre::Real timePos )
	{
		return static_cast<const Ogre::Animation*>(_native)->_getTimeIndex( timePos );
	}
	
	
	//Protected Declarations
	
	

}
