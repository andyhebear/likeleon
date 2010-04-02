/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#include "stdafx.h"

#include "MogreAnimationTrack.h"
#include "MogreKeyFrame.h"
#include "MogreAnimation.h"
#include "MogreAnimable.h"
#include "MogreNode.h"
#include "MogreVertexIndexData.h"
#include "MogrePose.h"

namespace Mogre
{
	//################################################################
	//TimeIndex
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	TimeIndex::TimeIndex( Mogre::Real timePos )
	{
		_createdByCLR = true;
		_native = new Ogre::TimeIndex( timePos);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	TimeIndex::TimeIndex( Mogre::Real timePos, Mogre::uint keyIndex )
	{
		_createdByCLR = true;
		_native = new Ogre::TimeIndex( timePos, keyIndex);
	
		_native->_CLRHandle._MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	bool TimeIndex::HasKeyIndex::get()
	{
		return static_cast<const Ogre::TimeIndex*>(_native)->hasKeyIndex( );
	}
	
	Mogre::uint TimeIndex::KeyIndex::get()
	{
		return static_cast<const Ogre::TimeIndex*>(_native)->getKeyIndex( );
	}
	
	Mogre::Real TimeIndex::TimePos::get()
	{
		return static_cast<const Ogre::TimeIndex*>(_native)->getTimePos( );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//AnimationTrack
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	unsigned short AnimationTrack::Handle::get()
	{
		return static_cast<const Ogre::AnimationTrack*>(_native)->getHandle( );
	}
	
	bool AnimationTrack::HasNonZeroKeyFrames::get()
	{
		return static_cast<const Ogre::AnimationTrack*>(_native)->hasNonZeroKeyFrames( );
	}
	
	unsigned short AnimationTrack::NumKeyFrames::get()
	{
		return static_cast<const Ogre::AnimationTrack*>(_native)->getNumKeyFrames( );
	}
	
	Mogre::KeyFrame^ AnimationTrack::GetKeyFrame( unsigned short index )
	{
		return static_cast<const Ogre::AnimationTrack*>(_native)->getKeyFrame( index );
	}
	
	Mogre::Real AnimationTrack::GetKeyFramesAtTime( Mogre::TimeIndex^ timeIndex, [Out] Mogre::KeyFrame^% keyFrame1, [Out] Mogre::KeyFrame^% keyFrame2, [Out] unsigned short% firstKeyIndex )
	{
		Ogre::KeyFrame* out_keyFrame1;
		Ogre::KeyFrame* out_keyFrame2;
		pin_ptr<unsigned short> p_firstKeyIndex = &firstKeyIndex;
	
		Mogre::Real retres = static_cast<const Ogre::AnimationTrack*>(_native)->getKeyFramesAtTime( timeIndex, &out_keyFrame1, &out_keyFrame2, p_firstKeyIndex );
		keyFrame1 = out_keyFrame1;
		keyFrame2 = out_keyFrame2;
	
		return retres;
	}
	Mogre::Real AnimationTrack::GetKeyFramesAtTime( Mogre::TimeIndex^ timeIndex, [Out] Mogre::KeyFrame^% keyFrame1, [Out] Mogre::KeyFrame^% keyFrame2 )
	{
		Ogre::KeyFrame* out_keyFrame1;
		Ogre::KeyFrame* out_keyFrame2;
	
		Mogre::Real retres = static_cast<const Ogre::AnimationTrack*>(_native)->getKeyFramesAtTime( timeIndex, &out_keyFrame1, &out_keyFrame2 );
		keyFrame1 = out_keyFrame1;
		keyFrame2 = out_keyFrame2;
	
		return retres;
	}
	
	Mogre::KeyFrame^ AnimationTrack::CreateKeyFrame( Mogre::Real timePos )
	{
		return static_cast<Ogre::AnimationTrack*>(_native)->createKeyFrame( timePos );
	}
	
	void AnimationTrack::RemoveKeyFrame( unsigned short index )
	{
		static_cast<Ogre::AnimationTrack*>(_native)->removeKeyFrame( index );
	}
	
	void AnimationTrack::RemoveAllKeyFrames( )
	{
		static_cast<Ogre::AnimationTrack*>(_native)->removeAllKeyFrames( );
	}
	
	void AnimationTrack::GetInterpolatedKeyFrame( Mogre::TimeIndex^ timeIndex, Mogre::KeyFrame^ kf )
	{
		static_cast<const Ogre::AnimationTrack*>(_native)->getInterpolatedKeyFrame( timeIndex, kf );
	}
	
	void AnimationTrack::Apply( Mogre::TimeIndex^ timeIndex, Mogre::Real weight, Mogre::Real scale )
	{
		static_cast<Ogre::AnimationTrack*>(_native)->apply( timeIndex, weight, scale );
	}
	void AnimationTrack::Apply( Mogre::TimeIndex^ timeIndex, Mogre::Real weight )
	{
		static_cast<Ogre::AnimationTrack*>(_native)->apply( timeIndex, weight );
	}
	void AnimationTrack::Apply( Mogre::TimeIndex^ timeIndex )
	{
		static_cast<Ogre::AnimationTrack*>(_native)->apply( timeIndex );
	}
	
	void AnimationTrack::_keyFrameDataChanged( )
	{
		static_cast<const Ogre::AnimationTrack*>(_native)->_keyFrameDataChanged( );
	}
	
	void AnimationTrack::Optimise( )
	{
		static_cast<Ogre::AnimationTrack*>(_native)->optimise( );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//NumericAnimationTrack
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	NumericAnimationTrack::NumericAnimationTrack( Mogre::Animation^ parent, unsigned short handle ) : AnimationTrack((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::NumericAnimationTrack( parent, handle);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	NumericAnimationTrack::NumericAnimationTrack( Mogre::Animation^ parent, unsigned short handle, Mogre::AnimableValuePtr^ target ) : AnimationTrack((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::NumericAnimationTrack( parent, handle, (Ogre::AnimableValuePtr&)target);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::NumericKeyFrame^ NumericAnimationTrack::CreateNumericKeyFrame( Mogre::Real timePos )
	{
		return static_cast<Ogre::NumericAnimationTrack*>(_native)->createNumericKeyFrame( timePos );
	}
	
	void NumericAnimationTrack::GetInterpolatedKeyFrame( Mogre::TimeIndex^ timeIndex, Mogre::KeyFrame^ kf )
	{
		static_cast<const Ogre::NumericAnimationTrack*>(_native)->getInterpolatedKeyFrame( timeIndex, kf );
	}
	
	void NumericAnimationTrack::Apply( Mogre::TimeIndex^ timeIndex, Mogre::Real weight, Mogre::Real scale )
	{
		static_cast<Ogre::NumericAnimationTrack*>(_native)->apply( timeIndex, weight, scale );
	}
	void NumericAnimationTrack::Apply( Mogre::TimeIndex^ timeIndex, Mogre::Real weight )
	{
		static_cast<Ogre::NumericAnimationTrack*>(_native)->apply( timeIndex, weight );
	}
	void NumericAnimationTrack::Apply( Mogre::TimeIndex^ timeIndex )
	{
		static_cast<Ogre::NumericAnimationTrack*>(_native)->apply( timeIndex );
	}
	
	void NumericAnimationTrack::ApplyToAnimable( Mogre::AnimableValuePtr^ anim, Mogre::TimeIndex^ timeIndex, Mogre::Real weight, Mogre::Real scale )
	{
		static_cast<Ogre::NumericAnimationTrack*>(_native)->applyToAnimable( (const Ogre::AnimableValuePtr&)anim, timeIndex, weight, scale );
	}
	void NumericAnimationTrack::ApplyToAnimable( Mogre::AnimableValuePtr^ anim, Mogre::TimeIndex^ timeIndex, Mogre::Real weight )
	{
		static_cast<Ogre::NumericAnimationTrack*>(_native)->applyToAnimable( (const Ogre::AnimableValuePtr&)anim, timeIndex, weight );
	}
	void NumericAnimationTrack::ApplyToAnimable( Mogre::AnimableValuePtr^ anim, Mogre::TimeIndex^ timeIndex )
	{
		static_cast<Ogre::NumericAnimationTrack*>(_native)->applyToAnimable( (const Ogre::AnimableValuePtr&)anim, timeIndex );
	}
	
	Mogre::AnimableValuePtr^ NumericAnimationTrack::GetAssociatedAnimable( )
	{
		return static_cast<const Ogre::NumericAnimationTrack*>(_native)->getAssociatedAnimable( );
	}
	
	void NumericAnimationTrack::SetAssociatedAnimable( Mogre::AnimableValuePtr^ val )
	{
		static_cast<Ogre::NumericAnimationTrack*>(_native)->setAssociatedAnimable( (const Ogre::AnimableValuePtr&)val );
	}
	
	Mogre::NumericKeyFrame^ NumericAnimationTrack::GetNumericKeyFrame( unsigned short index )
	{
		return static_cast<const Ogre::NumericAnimationTrack*>(_native)->getNumericKeyFrame( index );
	}
	
	Mogre::NumericAnimationTrack^ NumericAnimationTrack::_clone( Mogre::Animation^ newParent )
	{
		return static_cast<const Ogre::NumericAnimationTrack*>(_native)->_clone( newParent );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//NodeAnimationTrack
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	NodeAnimationTrack::NodeAnimationTrack( Mogre::Animation^ parent, unsigned short handle ) : AnimationTrack((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::NodeAnimationTrack( parent, handle);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	NodeAnimationTrack::NodeAnimationTrack( Mogre::Animation^ parent, unsigned short handle, Mogre::Node^ targetNode ) : AnimationTrack((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::NodeAnimationTrack( parent, handle, targetNode);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::Node^ NodeAnimationTrack::AssociatedNode::get()
	{
		return static_cast<const Ogre::NodeAnimationTrack*>(_native)->getAssociatedNode( );
	}
	void NodeAnimationTrack::AssociatedNode::set( Mogre::Node^ node )
	{
		static_cast<Ogre::NodeAnimationTrack*>(_native)->setAssociatedNode( node );
	}
	
	bool NodeAnimationTrack::HasNonZeroKeyFrames::get()
	{
		return static_cast<const Ogre::NodeAnimationTrack*>(_native)->hasNonZeroKeyFrames( );
	}
	
	bool NodeAnimationTrack::UseShortestRotationPath::get()
	{
		return static_cast<const Ogre::NodeAnimationTrack*>(_native)->getUseShortestRotationPath( );
	}
	void NodeAnimationTrack::UseShortestRotationPath::set( bool useShortestPath )
	{
		static_cast<Ogre::NodeAnimationTrack*>(_native)->setUseShortestRotationPath( useShortestPath );
	}
	
	Mogre::TransformKeyFrame^ NodeAnimationTrack::CreateNodeKeyFrame( Mogre::Real timePos )
	{
		return static_cast<Ogre::NodeAnimationTrack*>(_native)->createNodeKeyFrame( timePos );
	}
	
	void NodeAnimationTrack::ApplyToNode( Mogre::Node^ node, Mogre::TimeIndex^ timeIndex, Mogre::Real weight, Mogre::Real scale )
	{
		static_cast<Ogre::NodeAnimationTrack*>(_native)->applyToNode( node, timeIndex, weight, scale );
	}
	void NodeAnimationTrack::ApplyToNode( Mogre::Node^ node, Mogre::TimeIndex^ timeIndex, Mogre::Real weight )
	{
		static_cast<Ogre::NodeAnimationTrack*>(_native)->applyToNode( node, timeIndex, weight );
	}
	void NodeAnimationTrack::ApplyToNode( Mogre::Node^ node, Mogre::TimeIndex^ timeIndex )
	{
		static_cast<Ogre::NodeAnimationTrack*>(_native)->applyToNode( node, timeIndex );
	}
	
	void NodeAnimationTrack::GetInterpolatedKeyFrame( Mogre::TimeIndex^ timeIndex, Mogre::KeyFrame^ kf )
	{
		static_cast<const Ogre::NodeAnimationTrack*>(_native)->getInterpolatedKeyFrame( timeIndex, kf );
	}
	
	void NodeAnimationTrack::Apply( Mogre::TimeIndex^ timeIndex, Mogre::Real weight, Mogre::Real scale )
	{
		static_cast<Ogre::NodeAnimationTrack*>(_native)->apply( timeIndex, weight, scale );
	}
	void NodeAnimationTrack::Apply( Mogre::TimeIndex^ timeIndex, Mogre::Real weight )
	{
		static_cast<Ogre::NodeAnimationTrack*>(_native)->apply( timeIndex, weight );
	}
	void NodeAnimationTrack::Apply( Mogre::TimeIndex^ timeIndex )
	{
		static_cast<Ogre::NodeAnimationTrack*>(_native)->apply( timeIndex );
	}
	
	void NodeAnimationTrack::_keyFrameDataChanged( )
	{
		static_cast<const Ogre::NodeAnimationTrack*>(_native)->_keyFrameDataChanged( );
	}
	
	Mogre::TransformKeyFrame^ NodeAnimationTrack::GetNodeKeyFrame( unsigned short index )
	{
		return static_cast<const Ogre::NodeAnimationTrack*>(_native)->getNodeKeyFrame( index );
	}
	
	void NodeAnimationTrack::Optimise( )
	{
		static_cast<Ogre::NodeAnimationTrack*>(_native)->optimise( );
	}
	
	Mogre::NodeAnimationTrack^ NodeAnimationTrack::_clone( Mogre::Animation^ newParent )
	{
		return static_cast<const Ogre::NodeAnimationTrack*>(_native)->_clone( newParent );
	}
	
	
	//Protected Declarations
	
	
	//################################################################
	//VertexAnimationTrack
	//################################################################
	
	//Nested Types
	//Private Declarations
	
	//Internal Declarations
	
	//Public Declarations
	VertexAnimationTrack::VertexAnimationTrack( Mogre::Animation^ parent, unsigned short handle, Mogre::VertexAnimationType animType ) : AnimationTrack((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::VertexAnimationTrack( parent, handle, (Ogre::VertexAnimationType)animType);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	VertexAnimationTrack::VertexAnimationTrack( Mogre::Animation^ parent, unsigned short handle, Mogre::VertexAnimationType animType, Mogre::VertexData^ targetData, Mogre::VertexAnimationTrack::TargetMode target ) : AnimationTrack((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::VertexAnimationTrack( parent, handle, (Ogre::VertexAnimationType)animType, targetData, (Ogre::VertexAnimationTrack::TargetMode)target);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	VertexAnimationTrack::VertexAnimationTrack( Mogre::Animation^ parent, unsigned short handle, Mogre::VertexAnimationType animType, Mogre::VertexData^ targetData ) : AnimationTrack((CLRObject*) 0)
	{
		_createdByCLR = true;
		_native = new Ogre::VertexAnimationTrack( parent, handle, (Ogre::VertexAnimationType)animType, targetData);
	
		_native->_MapToCLRObject(this, System::Runtime::InteropServices::GCHandleType::Normal);
	}
	
	Mogre::VertexAnimationType VertexAnimationTrack::AnimationType::get()
	{
		return (Mogre::VertexAnimationType)static_cast<const Ogre::VertexAnimationTrack*>(_native)->getAnimationType( );
	}
	
	Mogre::VertexData^ VertexAnimationTrack::AssociatedVertexData::get()
	{
		return static_cast<const Ogre::VertexAnimationTrack*>(_native)->getAssociatedVertexData( );
	}
	void VertexAnimationTrack::AssociatedVertexData::set( Mogre::VertexData^ data )
	{
		static_cast<Ogre::VertexAnimationTrack*>(_native)->setAssociatedVertexData( data );
	}
	
	bool VertexAnimationTrack::HasNonZeroKeyFrames::get()
	{
		return static_cast<const Ogre::VertexAnimationTrack*>(_native)->hasNonZeroKeyFrames( );
	}
	
	Mogre::VertexMorphKeyFrame^ VertexAnimationTrack::CreateVertexMorphKeyFrame( Mogre::Real timePos )
	{
		return static_cast<Ogre::VertexAnimationTrack*>(_native)->createVertexMorphKeyFrame( timePos );
	}
	
	Mogre::VertexPoseKeyFrame^ VertexAnimationTrack::CreateVertexPoseKeyFrame( Mogre::Real timePos )
	{
		return static_cast<Ogre::VertexAnimationTrack*>(_native)->createVertexPoseKeyFrame( timePos );
	}
	
	void VertexAnimationTrack::GetInterpolatedKeyFrame( Mogre::TimeIndex^ timeIndex, Mogre::KeyFrame^ kf )
	{
		static_cast<const Ogre::VertexAnimationTrack*>(_native)->getInterpolatedKeyFrame( timeIndex, kf );
	}
	
	void VertexAnimationTrack::Apply( Mogre::TimeIndex^ timeIndex, Mogre::Real weight, Mogre::Real scale )
	{
		static_cast<Ogre::VertexAnimationTrack*>(_native)->apply( timeIndex, weight, scale );
	}
	void VertexAnimationTrack::Apply( Mogre::TimeIndex^ timeIndex, Mogre::Real weight )
	{
		static_cast<Ogre::VertexAnimationTrack*>(_native)->apply( timeIndex, weight );
	}
	void VertexAnimationTrack::Apply( Mogre::TimeIndex^ timeIndex )
	{
		static_cast<Ogre::VertexAnimationTrack*>(_native)->apply( timeIndex );
	}
	
	void VertexAnimationTrack::ApplyToVertexData( Mogre::VertexData^ data, Mogre::TimeIndex^ timeIndex, Mogre::Real weight, Mogre::Const_PoseList^ poseList )
	{
		static_cast<Ogre::VertexAnimationTrack*>(_native)->applyToVertexData( data, timeIndex, weight, poseList );
	}
	void VertexAnimationTrack::ApplyToVertexData( Mogre::VertexData^ data, Mogre::TimeIndex^ timeIndex, Mogre::Real weight )
	{
		static_cast<Ogre::VertexAnimationTrack*>(_native)->applyToVertexData( data, timeIndex, weight );
	}
	void VertexAnimationTrack::ApplyToVertexData( Mogre::VertexData^ data, Mogre::TimeIndex^ timeIndex )
	{
		static_cast<Ogre::VertexAnimationTrack*>(_native)->applyToVertexData( data, timeIndex );
	}
	
	Mogre::VertexMorphKeyFrame^ VertexAnimationTrack::GetVertexMorphKeyFrame( unsigned short index )
	{
		return static_cast<const Ogre::VertexAnimationTrack*>(_native)->getVertexMorphKeyFrame( index );
	}
	
	Mogre::VertexPoseKeyFrame^ VertexAnimationTrack::GetVertexPoseKeyFrame( unsigned short index )
	{
		return static_cast<const Ogre::VertexAnimationTrack*>(_native)->getVertexPoseKeyFrame( index );
	}
	
	void VertexAnimationTrack::SetTargetMode( Mogre::VertexAnimationTrack::TargetMode m )
	{
		static_cast<Ogre::VertexAnimationTrack*>(_native)->setTargetMode( (Ogre::VertexAnimationTrack::TargetMode)m );
	}
	
	Mogre::VertexAnimationTrack::TargetMode VertexAnimationTrack::GetTargetMode( )
	{
		return (Mogre::VertexAnimationTrack::TargetMode)static_cast<const Ogre::VertexAnimationTrack*>(_native)->getTargetMode( );
	}
	
	void VertexAnimationTrack::Optimise( )
	{
		static_cast<Ogre::VertexAnimationTrack*>(_native)->optimise( );
	}
	
	Mogre::VertexAnimationTrack^ VertexAnimationTrack::_clone( Mogre::Animation^ newParent )
	{
		return static_cast<const Ogre::VertexAnimationTrack*>(_native)->_clone( newParent );
	}
	
	
	//Protected Declarations
	
	

}
