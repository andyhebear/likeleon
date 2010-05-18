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
/// Ogre::ConstVectorIterator class
///
/// Date     2006-03-14+01:00
///////////////////////////////////////////////////////////////////////////////

#include <Precompiled.h>
#include <org_ogre4j_ConstVectorIterator.h>



/*
 * Class:		org_ogre4j_ConstVectorIterator
 * Method:		hasMoreElements
 * Signature:	(J)Z;
 */
JNIEXPORT jboolean JNICALL Java_org_ogre4j_ConstVectorIterator_hasMoreElements(JNIEnv *env, jclass that, jlong pInstance) {
	Ogre::ConstVectorIterator * pConstVectorIterator = reinterpret_cast<Ogre::ConstVectorIterator*>(pInstance);
	return pConstVectorIterator->hasMoreElements();
}

/*
 * Class:		org_ogre4j_ConstVectorIterator
 * Method:		getNext
 * Signature:	(J)V;
 */
JNIEXPORT jlong JNICALL Java_org_ogre4j_ConstVectorIterator_getNext(JNIEnv *env, jclass that, jlong pInstance) {
	Ogre::ConstVectorIterator * pConstVectorIterator = reinterpret_cast<Ogre::ConstVectorIterator*>(pInstance);
	return pConstVectorIterator->getNext();
}

/*
 * Class:		org_ogre4j_ConstVectorIterator
 * Method:		peekNext
 * Signature:	(J)V;
 */
JNIEXPORT jlong JNICALL Java_org_ogre4j_ConstVectorIterator_peekNext(JNIEnv *env, jclass that, jlong pInstance) {
	Ogre::ConstVectorIterator * pConstVectorIterator = reinterpret_cast<Ogre::ConstVectorIterator*>(pInstance);
	return pConstVectorIterator->peekNext();
}

/*
 * Class:		org_ogre4j_ConstVectorIterator
 * Method:		peekNextPtr
 * Signature:	(J)V;
 */
JNIEXPORT jlong JNICALL Java_org_ogre4j_ConstVectorIterator_peekNextPtr(JNIEnv *env, jclass that, jlong pInstance) {
	Ogre::ConstVectorIterator * pConstVectorIterator = reinterpret_cast<Ogre::ConstVectorIterator*>(pInstance);
	return pConstVectorIterator->peekNextPtr();
}

/*
 * Class:		org_ogre4j_ConstVectorIterator
 * Method:		moveNext
 * Signature:	(J)V;
 */
JNIEXPORT void JNICALL Java_org_ogre4j_ConstVectorIterator_moveNext(JNIEnv *env, jclass that, jlong pInstance) {
	Ogre::ConstVectorIterator * pConstVectorIterator = reinterpret_cast<Ogre::ConstVectorIterator*>(pInstance);
	pConstVectorIterator->moveNext();
}

JNIEXPORT void JNICALL Java_org_ogre4j_ConstVectorIterator_dispose(JNIEnv *env, jclass that, jint pInstance) {
	Ogre::ConstVectorIterator * pConstVectorIterator = reinterpret_cast<Ogre::ConstVectorIterator*>(pInstance);
	delete pConstVectorIterator;
}
