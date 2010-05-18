/* This source file is part of ogre4j
 *     (The JNI bindings for OGRE)
 * For the latest info, see http://www.ogre4j.org/
 * 
 * Copyright (c) 2005 netAllied GmbH, Tettnang
 * Also see acknowledgements in Readme.html
 * 
 * This program is free software; you can redistribute it and/or modify it under
 * the terms of the GNU Lesser General Public License as published by the Free Software
 * Foundation; either version 2 of the License, or (at your option) any later
 * version.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place - Suite 330, Boston, MA 02111-1307, USA, or go to
 * http://www.gnu.org/copyleft/lesser.txt.
 * 
 *
 * Any.java
 * 
 * automatically generated file
 * ----------------------
 * Date 2006-02-22+01:00 
 * ----------------------
 */

package org.ogre4j;

import base.*;


public class Any extends NativeObject {
	
		
	protected Any(InstancePointer pInstance) {
		super(pInstance);
	}
	
	protected Any(InstancePointer pInstance, boolean createdByLibrary) {
		super(pInstance, createdByLibrary);
	}

	public void dispose() {
		if (this.createdByLibrary)
			throw new RuntimeException("can't dispose object created by the library");
		_dispose(pInstance.value);
	}

	public Any(){
		super( new InstancePointer( _createInstance()));
	}
	
	public Any ( NativeObject value ) {
		super( new InstancePointer( _createInstance_ValueType(value.pInstance.value)));
	}

	public Any ( Any other ) {
		super( new InstancePointer( _createInstance_Any(other.pInstance.value)));
	}
	
	public Any swap( Any rhs ) {
		long ptr = _swap_Any(pInstance.value, rhs.pInstance.value);
		if(ptr==0) return null;
		InstancePointer ptrAny = new  InstancePointer(ptr);
		return new Any(ptrAny);
	}
	
	public boolean isEmpty() {
		return _isEmpty_(pInstance.value);
	}
	
	public TypeInfo getType() {
		long ptr = _getType_(pInstance.value);
		if(ptr==0) return null;
		InstancePointer ptrTypeInfo = new  InstancePointer(ptr);
		return new TypeInfo(ptrTypeInfo);
    }

    private native void _dispose(long pInstance);
    private static native long _createInstance();
    private static native long _createInstance_ValueType(long value);
    private static native long _createInstance_Any(long other);
    private native long _swap_Any(long pInstance, long rhs);
    private native boolean _isEmpty_(long pInstance);
    private native long _getType_(long pInstance);
}