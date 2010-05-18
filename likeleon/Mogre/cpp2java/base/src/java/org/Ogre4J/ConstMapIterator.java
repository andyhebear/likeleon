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
 * ConstMapIterator.java
 * 
 * automatically generated file
 * ----------------------
 * Date 2006-03-13+01:00 
 * ----------------------
 */

package org.ogre4j;


public interface ConstMapIterator<K,V> {

	public boolean hasMoreElements_const();
	public void getNext(V newmapped_type);
	public void peekNextValue_const(V newmapped_type);
	public void peekNextKey_const(K newkey_type);
	public V peekNextValuePtr_const();
	public void moveNext_const();
}