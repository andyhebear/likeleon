/*  This file is produced by the C++/CLI AutoWrapper utility.
        Copyright (c) 2006 by Argiris Kirtzidis  */

#pragma once

#include "OgreBone.h"
#include "MogreNode.h"
#include "MogrePrerequisites.h"

namespace Mogre
{
	//################################################################
	//Bone
	//################################################################
	
	public ref class Bone : public Node
	{
		//Nested Types
	
		//Private Declarations
	private protected:
	
		//Internal Declarations
	public protected:
		Bone( CLRObject* obj ) : Node(obj)
		{
		}
	
	
		//Public Declarations
	public:
		Bone( unsigned short handle, Mogre::Skeleton^ creator );
		Bone( String^ name, unsigned short handle, Mogre::Skeleton^ creator );
	
	
		property unsigned short Handle
		{
		public:
			unsigned short get();
		}
	
		property bool IsManuallyControlled
		{
		public:
			bool get();
		}
	
		Mogre::Bone^ CreateChild( unsigned short handle, Mogre::Vector3 translate, Mogre::Quaternion rotate );
		Mogre::Bone^ CreateChild( unsigned short handle, Mogre::Vector3 translate );
		Mogre::Bone^ CreateChild( unsigned short handle );
	
		void SetBindingPose( );
	
		void Reset( );
	
		void SetManuallyControlled( bool manuallyControlled );
	
		void _getOffsetTransform( Mogre::Matrix4^ m );
	
		Mogre::Vector3 _getBindingPoseInverseScale( );
	
		Mogre::Vector3 _getBindingPoseInversePosition( );
	
		Mogre::Quaternion _getBindingPoseInverseOrientation( );
	
		void NeedUpdate( bool forceParentUpdate );
		void NeedUpdate( );
	
		DEFINE_MANAGED_NATIVE_CONVERSIONS( Bone )
	
		//Protected Declarations
	protected public:
	
	};
	

}
