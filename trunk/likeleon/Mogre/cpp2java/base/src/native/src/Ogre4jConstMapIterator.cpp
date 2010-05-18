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
/// Ogre::ConstMapIterator class
///
/// Date     2006-03-13+01:00
///////////////////////////////////////////////////////////////////////////////

#include <Precompiled.h>
#include <org_ogre4j_ConstMapIterator.h>



/*
 * Class:		org_ogre4j_ConstMapIterator
 * Method:		hasMoreElements
 * Signature:	(J)Z;
 */
JNIEXPORT jboolean JNICALL Java_org_ogre4j_ConstMapIterator_hasMoreElements(JNIEnv *env, jclass that, jlong pInstance) {
	Ogre::ConstMapIterator * pConstMapIterator = reinterpret_cast<Ogre::ConstMapIterator*>(pInstance);
	return pConstMapIterator->hasMoreElements();
}

/*
 * Class:		org_ogre4j_ConstMapIterator
 * Method:		getNext
 * Signature:	(J)V;
 */
JNIEXPORT jlong JNICALL Java_org_ogre4j_ConstMapIterator_getNext(JNIEnv *env, jclass that, jlong pInstance) {
	Ogre::ConstMapIterator * pConstMapIterator = reinterpret_cast<Ogre::ConstMapIterator*>(pInstance);
	return pConstMapIterator->getNext();
}

/*
 * Class:		org_ogre4j_ConstMapIterator
 * Method:		peekNextValue
 * Signature:	(J)V;
 */
JNIEXPORT jlong JNICALL Java_org_ogre4j_ConstMapIterator_peekNextValue(JNIEnv *env, jclass that, jlong pInstance) {
	Ogre::ConstMapIterator * pConstMapIterator = reinterpret_cast<Ogre::ConstMapIterator*>(pInstance);
	return pConstMapIterator->peekNextValue();
}

/*
 * Class:		org_ogre4j_ConstMapIterator
 * Method:		peekNextKey
 * Signature:	(J)V;
 */
JNIEXPORT jlong JNICALL Java_org_ogre4j_ConstMapIterator_peekNextKey(JNIEnv *env, jclass that, jlong pInstance) {
	Ogre::ConstMapIterator * pConstMapIterator = reinterpret_cast<Ogre::ConstMapIterator*>(pInstance);
	return pConstMapIterator->peekNextKey();
}

/*
 * Class:		org_ogre4j_ConstMapIterator
 * Method:		peekNextValuePtr
 * Signature:	(J);
 */
JNIEXPORT j JNICALL Java_org_ogre4j_ConstMapIterator_peekNextValuePtr(JNIEnv *env, jclass that, jlong pInstance) {
	Ogre::ConstMapIterator * pConstMapIterator = reinterpret_cast<Ogre::ConstMapIterator*>(pInstance);
	return pConstMapIterator->peekNextValuePtr();
}

/*
 * Class:		org_ogre4j_ConstMapIterator
 * Method:		moveNext
 * Signature:	(J)V;
 */
JNIEXPORT void JNICALL Java_org_ogre4j_ConstMapIterator_moveNext(JNIEnv *env, jclass that, jlong pInstance) {
	Ogre::ConstMapIterator * pConstMapIterator = reinterpret_cast<Ogre::ConstMapIterator*>(pInstance);
	pConstMapIterator->moveNext();
}

JNIEXPORT void JNICALL Java_org_ogre4j_ConstMapIterator_dispose(JNIEnv *env, jclass that, jint pInstance) {
	Ogre::ConstMapIterator * pConstMapIterator = reinterpret_cast<Ogre::ConstMapIterator*>(pInstance);
	delete pConstMapIterator;
}
