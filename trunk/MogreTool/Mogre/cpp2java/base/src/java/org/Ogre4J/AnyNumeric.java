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
 * AnyNumeric.java
 * 
 * automatically generated file
 * ----------------------
 * Date 2006-02-22+01:00 
 * ----------------------
 */

package org.ogre4j;

import base.InstancePointer;



public class AnyNumeric extends Any {

	protected AnyNumeric(InstancePointer pInstance) {
		super(pInstance);
	}
	protected AnyNumeric(InstancePointer pInstance, boolean createdByLibrary) {
		super(pInstance, createdByLibrary);
	}
	public void dispose() {
	if (this.createdByLibrary)
		throw new RuntimeException("can't dispose object created by the library");
		_dispose(pInstance.value);
	}

	private native void _dispose(long pInstance);
}