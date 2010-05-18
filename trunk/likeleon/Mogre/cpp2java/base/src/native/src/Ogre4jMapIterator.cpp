///////////////////////////////////////////////////////////////////////////////
/// This source file is part of ogre4j
///     (The JNI bindings for OGRE)
/// For the latest info, see http://www.ogre4j.org/
/// 
/// Copyright (c) 2005 netAllied GmbH, Tettnang
/// Also see acknowledgements in Readme.html
/// 
/// This program is free software; you can redistribute it and/or modify it under
/// the terms of the GNU Lesser General Public License as published by the Free Software
/// Foundation; either version 2 of the License, or (at your option) any later
/// version.
/// 
/// This program is distributed in the hope that it will be useful, but WITHOUT
/// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
/// FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License for more details.
/// 
/// You should have received a copy of the GNU Lesser General Public License along with
/// this program; if not, write to the Free Software Foundation, Inc., 59 Temple
/// Place - Suite 330, Boston, MA 02111-1307, USA, or go to
/// http://www.gnu.org/copyleft/lesser.txt.
///
/// Machine generated file
/// @file .cpp
/// Implementation of the JNI bindings for the usage of the 
/// Ogre::MapIterator class
///
/// Date     2006-03-13+01:00
///////////////////////////////////////////////////////////////////////////////

#include <Precompiled.h>
#include <org_ogre4j_MapIterator.h>



/*
 * Class:		org_ogre4j_MapIterator
 * Method:		hasMoreElements
 * Signature:	(J)Z;
 */
JNIEXPORT jboolean JNICALL Java_org_ogre4j_MapIterator_hasMoreElements(JNIEnv *env, jclass that, jlong pInstance) {
	Ogre::MapIterator * pMapIterator = reinterpret_cast<Ogre::MapIterator*>(pInstance);
	return pMapIterator->hasMoreElements();
}

/*
 * Class:		org_ogre4j_MapIterator
 * Method:		getNext
 * Signature:	(J)V;
 */
JNIEXPORT jlong JNICALL Java_org_ogre4j_MapIterator_getNext(JNIEnv *env, jclass that, jlong pInstance) {
	Ogre::MapIterator * pMapIterator = reinterpret_cast<Ogre::MapIterator*>(pInstance);
	return pMapIterator->getNext();
}

/*
 * Class:		org_ogre4j_MapIterator
 * Method:		peekNextValue
 * Signature:	(J)V;
 */
JNIEXPORT jlong JNICALL Java_org_ogre4j_MapIterator_peekNextValue(JNIEnv *env, jclass that, jlong pInstance) {
	Ogre::MapIterator * pMapIterator = reinterpret_cast<Ogre::MapIterator*>(pInstance);
	return pMapIterator->peekNextValue();
}

/*
 * Class:		org_ogre4j_MapIterator
 * Method:		peekNextKey
 * Signature:	(J)V;
 */
JNIEXPORT jlong JNICALL Java_org_ogre4j_MapIterator_peekNextKey(JNIEnv *env, jclass that, jlong pInstance) {
	Ogre::MapIterator * pMapIterator = reinterpret_cast<Ogre::MapIterator*>(pInstance);
	return pMapIterator->peekNextKey();
}

/*
 * Class:		org_ogre4j_MapIterator
 * Method:		peekNextValuePtr
 * Signature:	(J)V;
 */
JNIEXPORT jlong JNICALL Java_org_ogre4j_MapIterator_peekNextValuePtr(JNIEnv *env, jclass that, jlong pInstance) {
	Ogre::MapIterator * pMapIterator = reinterpret_cast<Ogre::MapIterator*>(pInstance);
	return pMapIterator->peekNextValuePtr();
}

/*
 * Class:		org_ogre4j_MapIterator
 * Method:		moveNext
 * Signature:	(J)V;
 */
JNIEXPORT void JNICALL Java_org_ogre4j_MapIterator_moveNext(JNIEnv *env, jclass that, jlong pInstance) {
	Ogre::MapIterator * pMapIterator = reinterpret_cast<Ogre::MapIterator*>(pInstance);
	pMapIterator->moveNext();
}

JNIEXPORT void JNICALL Java_org_ogre4j_MapIterator_dispose(JNIEnv *env, jclass that, jint pInstance) {
	Ogre::MapIterator * pMapIterator = reinterpret_cast<Ogre::MapIterator*>(pInstance);
	delete pMapIterator;
}
