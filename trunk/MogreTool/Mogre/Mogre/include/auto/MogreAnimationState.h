/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreAnimationState.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//AnimationState
	//################################################################
	
	public ref class AnimationState : public Wrapper
	{
		//Nested Types
	
		//Private Declarations
	private protected:
		//Cached fields
		String^ _animationName;
	
		//Internal Declarations
	public protected:
		AnimationState( CLRObject* obj ) : Wrapper(obj)
		{
		}
	
	
		//Public Declarations
	public:
		AnimationState( String^ animName, Mogre::AnimationStateSet^ parent, Mogre::Real timePos, Mogre::Real length, Mogre::Real weight, bool enabled );
		AnimationState( String^ animName, Mogre::AnimationStateSet^ parent, Mogre::Real timePos, Mogre::Real length, Mogre::Real weight );
		AnimationState( String^ animName, Mogre::AnimationStateSet^ parent, Mogre::Real timePos, Mogre::Real length );
		AnimationState( Mogre::AnimationStateSet^ parent, Mogre::AnimationState^ rhs );
	
	
		property String^ AnimationName
		{
		public:
			String^ get();
		}
	
		property bool Enabled
		{
		public:
			bool get();
		public:
			void set(bool enabled);
		}
	
		property bool HasEnded
		{
		public:
			bool get();
		}
	
		property Mogre::Real Length
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real len);
		}
	
		property bool Loop
		{
		public:
			bool get();
		public:
			void set(bool loop);
		}
	
		property Mogre::AnimationStateSet^ Parent
		{
		public:
			Mogre::AnimationStateSet^ get();
		}
	
		property Mogre::Real TimePosition
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real timePos);
		}
	
		property Mogre::Real Weight
		{
		public:
			Mogre::Real get();
		public:
			void set(Mogre::Real weight);
		}
	
		void AddTime( Mogre::Real offset );
	
		virtual bool Equals(Object^ obj) override;
		bool Equals(AnimationState^ obj);
		static bool operator == (AnimationState^ obj1, AnimationState^ obj2);
		static bool operator != (AnimationState^ obj1, AnimationState^ obj2);
	
		void CopyTo(AnimationState^ dest)
		{
			if (_native == NULL) throw gcnew Exception("The underlying native object for the caller is null.");
			if (dest->_native == NULL) throw gcnew ArgumentException("The underlying native object for parameter 'dest' is null.");
	
			*(dest->_native) = *_native;
		}
	
		void CopyStateFrom( Mogre::AnimationState^ animState );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( AnimationState )
	
		//Protected Declarations
	protected public:
	
	};
	
	//################################################################
	//AnimationStateSet
	//################################################################
	
	public ref class AnimationStateSet : public INativePointer
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
		AnimationStateSet( Ogre::AnimationStateSet* obj ) : _native(obj), _createdByCLR(false)
		{
		}
	
		~AnimationStateSet()
		{
			if (_createdByCLR &&_native)
			{
				delete _native;
				_native = 0;
			}
		}
	
		Ogre::AnimationStateSet* _native;
		bool _createdByCLR;
	
	
		//Public Declarations
	public:
		AnimationStateSet( );
		AnimationStateSet( Mogre::AnimationStateSet^ rhs );
	
	
		property unsigned long DirtyFrameNumber
		{
		public:
			unsigned long get();
		}
	
		property bool HasEnabledAnimationState
		{
		public:
			bool get();
		}
	
		Mogre::AnimationState^ CreateAnimationState( String^ animName, Mogre::Real timePos, Mogre::Real length, Mogre::Real weight, bool enabled );
		Mogre::AnimationState^ CreateAnimationState( String^ animName, Mogre::Real timePos, Mogre::Real length, Mogre::Real weight );
		Mogre::AnimationState^ CreateAnimationState( String^ animName, Mogre::Real timePos, Mogre::Real length );
	
		Mogre::AnimationState^ GetAnimationState( String^ name );
	
		bool HasAnimationState( String^ name );
	
		void RemoveAnimationState( String^ name );
	
		void RemoveAllAnimationStates( );
	
		Mogre::AnimationStateIterator^ GetAnimationStateIterator( );
	
		void CopyMatchingState( Mogre::AnimationStateSet^ target );
	
		void _notifyDirty( );
	
		void _notifyAnimationStateEnabled( Mogre::AnimationState^ target, bool enabled );
	
		Mogre::ConstEnabledAnimationStateIterator^ GetEnabledAnimationStateIterator( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS_FOR_CLRHANDLE( AnimationStateSet )
	
		//Protected Declarations
	protected public:
	
	};
	
	#define STLDECL_MANAGEDKEY String^
	#define STLDECL_MANAGEDVALUE Mogre::AnimationState^
	#define STLDECL_NATIVEKEY Ogre::String
	#define STLDECL_NATIVEVALUE Ogre::AnimationState*
	INC_DECLARE_STLMAP( AnimationStateMap, STLDECL_MANAGEDKEY, STLDECL_MANAGEDVALUE, STLDECL_NATIVEKEY, STLDECL_NATIVEVALUE, public, private )
	#undef STLDECL_MANAGEDKEY
	#undef STLDECL_MANAGEDVALUE
	#undef STLDECL_NATIVEKEY
	#undef STLDECL_NATIVEVALUE
	
	public INC_DECLARE_MAP_ITERATOR( AnimationStateIterator, Ogre::AnimationStateIterator, Mogre::AnimationStateMap, Mogre::AnimationState^, Ogre::AnimationState*, String^, Ogre::String )
	
	#define STLDECL_MANAGEDTYPE Mogre::AnimationState^
	#define STLDECL_NATIVETYPE Ogre::AnimationState*
	INC_DECLARE_STLLIST( EnabledAnimationStateList, STLDECL_MANAGEDTYPE, STLDECL_NATIVETYPE, public, private )
	#undef STLDECL_MANAGEDTYPE
	#undef STLDECL_NATIVETYPE
	
	public INC_DECLARE_ITERATOR( ConstEnabledAnimationStateIterator, Ogre::ConstEnabledAnimationStateIterator, Mogre::EnabledAnimationStateList, Mogre::AnimationState^, Ogre::AnimationState* )
	

}
