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
 * NativeObject.java
 * 
 * Version Information
 * -------------------
 * $Revision: 1.1 $
 * $Date: 2005/07/29 09:58:55 $
 * $Author: yavin02 $
 */
package base;

public abstract class NativeObject {
	/**
	 * Indicates if the native instance is created by the underlying library.
	 */ 
	protected boolean createdByLibrary;

	/**
	 * The pointer to the native instance. Stores the native reference.
	 */
	public InstancePointer pInstance;

	/**
	 * Internal default constructor.
	 */
	protected NativeObject() {
	}

	/**
	 * Internal convenience construtcotr for NativeObject(pInstance, false).
	 * <p>
	 * <b>Never use this constructor. It is for internal usage only!</b>
	 * </p>
	 * 
	 * @param pInstance
	 *            The instance pointer to set.
	 */
	protected NativeObject(InstancePointer pInstance) {
		this(pInstance, true);
	}

	/**
	 * Internal constructor.<br>
	 * <b>Never use this constructor. It is for internal usage only!</b>
	 * 
	 * @param pInstance
	 *            The instance pointer to set.
	 * @param createdByLibrary
	 *            If the instance was created by the underlying library.
	 */
	protected NativeObject(InstancePointer pInstance, boolean createdByLibrary) {
		this.pInstance = pInstance;
		this.createdByLibrary = createdByLibrary;
	}

	/**
	 * Subclasses must implement this but if the native instance was created by the
	 * underlying library the native call to dispose must <b>not</b> happen!
	 * @see #createdByLibrary
	 */
	public abstract void dispose();

	/*
	 * (non-Javadoc)
	 * 
	 * @see java.lang.Object#equals(java.lang.Object)
	 */
	public boolean equals(Object obj) {
		if (obj instanceof NativeObject) {
			return pInstance.equals(((NativeObject) obj).pInstance);
		}
		return false;
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see java.lang.Object#hashCode()
	 */
	public int hashCode() {
		return pInstance.hashCode();
	}

	/*
	 * (non-Javadoc)
	 * 
	 * @see java.lang.Object#toString()
	 */
	public String toString() {
		StringBuffer buf = new StringBuffer();
		buf.append("Native Ref: ");
		buf.append(pInstance.toString());
		return buf.toString();
	}
}
