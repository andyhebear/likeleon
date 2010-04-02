package org.ogre4j;

import base.InstancePointer;
import base.NativeObject;


public class VertexBoneAssignment extends NativeObject {
		
	public long vertexIndex;
	public int boneIndex;
	public float weight;
		
	protected VertexBoneAssignment(InstancePointer pInstance) {
		super(pInstance);
	}

	public void dispose() {
	if (this.createdByLibrary)
		throw new RuntimeException("can't dispose object created by the library");
		_dispose(pInstance.value);
	}
	
	private native void _dispose(long pInstance);
}

