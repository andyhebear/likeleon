/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreAnimation.h"
#include "MogrePrerequisites.h"
#include "MogreAnimationTrack.h"

namespace Mogre
{
	//################################################################
	//Animation
	//################################################################
	
	public ref class Animation : public Wrapper
	{
		//Nested Types
		public: ref class NodeTrackList;
		public: ref class NumericTrackList;
		public: ref class VertexTrackList;
		public: ref class TrackHandleList;
	
		public: enum class InterpolationMode
		{
			IM_LINEAR = Ogre::Animation::IM_LINEAR,
			IM_SPLINE = Ogre::Animation::IM_SPLINE
		};
	
		public: enum class RotationInterpolationMode
		{
			RIM_LINEAR = Ogre::Animation::RIM_LINEAR,
			RIM_SPHERICAL = Ogre::Animation::RIM_SPHERICAL
		};
	
		#define STLDECL_MANAGEDKEY unsigned short
		#define STLDECL_MANAGEDVALUE Mogre::NodeAnimationTrack^
		#define STLDECL_NATIVEKEY unsigned short
		#define STLDECL_NATIVEVALUE Ogre::NodeAnimationTrack*
		public: INC_DECLARE_STLMAP( NodeTrackList, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDKEY unsigned short
		#define STLDECL_MANAGEDVALUE Mogre::NumericAnimationTrack^
		#define STLDECL_NATIVEKEY unsigned short
		#define STLDECL_NATIVEVALUE Ogre::NumericAnimationTrack*
		public: INC_DECLARE_STLMAP( NumericTrackList, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDKEY unsigned short
		#define STLDECL_MANAGEDVALUE Mogre::VertexAnimationTrack^
		#define STLDECL_NATIVEKEY unsigned short
		#define STLDECL_NATIVEVALUE Ogre::VertexAnimationTrack*
		public: INC_DECLARE_STLMAP( VertexTrackList, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public: , private: )
		#undef STLDECL_MANAGEDKEY
		#undef STLDECL_MANAGEDVALUE
		#undef STLDECL_NATIVEKEY
		#undef STLDECL_NATIVEVALUE
	
		#define STLDECL_MANAGEDTYPE Mogre::ushort
		#define STLDECL_NATIVETYPE Ogre::ushort
		public: INC_DECLARE_STLSET( TrackHandleList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public: , private: )
		#undef STLDECL_MANAGEDTYPE
		#undef STLDECL_NATIVETYPE
	
		public: INC_DECLARE_MAP_ITERATOR( NodeTrackIterator, Ogre::Animation::NodeTrackIterator, Mogre::Animation::NodeTrackList, Mogre::NodeAnimationTrack^, Ogre::NodeAnimationTrack*, unsigned short, unsigned short )
	
		public: INC_DECLARE_MAP_ITERATOR( NumericTrackIterator, Ogre::Animation::NumericTrackIterator, Mogre::Animation::NumericTrackList, Mogre::NumericAnimationTrack^, Ogre::NumericAnimationTrack*, unsigned short, unsigned short )
	
		public: INC_DECLARE_MAP_ITERATOR( VertexTrackIterator, Ogre::Animation::VertexTrackIterator, Mogre::Animation::VertexTrackList, Mogre::VertexAnimationTrack^, Ogre::VertexAnimationTrack*, unsigned short, unsigned short )
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Animation( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		Animation( String^ name, Mogre::Real length );
	
	
		property Mogre::Animation::InterpolationMode DefaultInterpolationMode
		{
		public:
			static Mogre::Animation::InterpolationMode get();
		public:
			static void set(Mogre::Animation::InterpolationMode im);
		}
	
		property Mogre::Animation::RotationInterpolationMode DefaultRotationInterpolationMode
		{
		public:
			static Mogre::Animation::RotationInterpolationMode get();
		public:
			static void set(Mogre::Animation::RotationInterpolationMode im);
		}
	
		property Mogre::Real Length
		{
		public:
			Mogre::Real get();
		}
	
		property String^ Name
		{
		public:
			String^ get();
		}
	
		property unsigned short NumNodeTracks
		{
		public:
			unsigned short get();
		}
	
		property unsigned short NumNumericTracks
		{
		public:
			unsigned short get();
		}
	
		property unsigned short NumVertexTracks
		{
		public:
			unsigned short get();
		}
	
		Mogre::NodeAnimationTrack^ CreateNodeTrack( unsigned short handle );
	
		Mogre::NumericAnimationTrack^ CreateNumericTrack( unsigned short handle );
	
		Mogre::VertexAnimationTrack^ CreateVertexTrack( unsigned short handle, Mogre::VertexAnimationType animType );
	
		Mogre::NodeAnimationTrack^ CreateNodeTrack( unsigned short handle, Mogre::Node^ node );
	
		Mogre::NumericAnimationTrack^ CreateNumericTrack( unsigned short handle, Mogre::AnimableValuePtr^ anim );
	
		Mogre::VertexAnimationTrack^ CreateVertexTrack( unsigned short handle, Mogre::VertexData^ data, Mogre::VertexAnimationType animType );
	
		Mogre::NodeAnimationTrack^ GetNodeTrack( unsigned short handle );
	
		bool HasNodeTrack( unsigned short handle );
	
		Mogre::NumericAnimationTrack^ GetNumericTrack( unsigned short handle );
	
		bool HasNumericTrack( unsigned short handle );
	
		Mogre::VertexAnimationTrack^ GetVertexTrack( unsigned short handle );
	
		bool HasVertexTrack( unsigned short handle );
	
		void DestroyNodeTrack( unsigned short handle );
	
		void DestroyNumericTrack( unsigned short handle );
	
		void DestroyVertexTrack( unsigned short handle );
	
		void DestroyAllTracks( );
	
		void DestroyAllNodeTracks( );
	
		void DestroyAllNumericTracks( );
	
		void DestroyAllVertexTracks( );
	
		void Apply( Mogre::Real timePos, Mogre::Real weight, Mogre::Real scale );
		void Apply( Mogre::Real timePos, Mogre::Real weight );
		void Apply( Mogre::Real timePos );
	
		void Apply( Mogre::Skeleton^ skeleton, Mogre::Real timePos, Mogre::Real weight, Mogre::Real scale );
		void Apply( Mogre::Skeleton^ skeleton, Mogre::Real timePos, Mogre::Real weight );
		void Apply( Mogre::Skeleton^ skeleton, Mogre::Real timePos );
	
		void Apply( Mogre::Entity^ entity, Mogre::Real timePos, Mogre::Real weight, bool software, bool hardware );
	
		void SetInterpolationMode( Mogre::Animation::InterpolationMode im );
	
		Mogre::Animation::InterpolationMode GetInterpolationMode( );
	
		void SetRotationInterpolationMode( Mogre::Animation::RotationInterpolationMode im );
	
		Mogre::Animation::RotationInterpolationMode GetRotationInterpolationMode( );
	
		Mogre::Animation::Const_NodeTrackList^ _getNodeTrackList( );
	
		Mogre::Animation::NodeTrackIterator^ GetNodeTrackIterator( );
	
		Mogre::Animation::Const_NumericTrackList^ _getNumericTrackList( );
	
		Mogre::Animation::NumericTrackIterator^ GetNumericTrackIterator( );
	
		Mogre::Animation::Const_VertexTrackList^ _getVertexTrackList( );
	
		Mogre::Animation::VertexTrackIterator^ GetVertexTrackIterator( );
	
		void Optimise( bool discardIdentityNodeTracks );
		void Optimise( );
	
		void _collectIdentityNodeTracks( Mogre::Animation::TrackHandleList^ tracks );
	
		void _destroyNodeTracks( Mogre::Animation::Const_TrackHandleList^ tracks );
	
		Mogre::Animation^ Clone( String^ newName );
	
		void _keyFrameListChanged( );
	
		Mogre::TimeIndex^ _getTimeIndex( Mogre::Real timePos );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Animation )
	
		//Protected Declarations
	protected public:
	
	};
	

}
