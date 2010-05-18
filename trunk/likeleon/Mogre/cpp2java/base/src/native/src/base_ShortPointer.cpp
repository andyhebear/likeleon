#include <base_ShortPointer.h>
/*
 * Class:     base_ShortPointer
 * Method:    _dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_base_ShortPointer__1dispose
  (JNIEnv *env, jobject that, jlong pInstance)
{
	short * ptr = reinterpret_cast<short*>(pInstance);
	delete ptr;
}

/*
 * Class:     base_ShortPointer
 * Method:    _get
 * Signature: (J)S
 */
JNIEXPORT jshort JNICALL Java_base_ShortPointer__1get
  (JNIEnv *env, jobject that, jlong pInstance)
{
	short * ptr = reinterpret_cast<short*>(pInstance);
	return * ptr;
}

/*
 * Class:     base_ShortPointer
 * Method:    _next
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_base_ShortPointer__1next
  (JNIEnv *env, jobject that, jlong pInstance)
{
	short * ptr = reinterpret_cast<short*>(pInstance);
	ptr++;
	return reinterpret_cast<short>(ptr);
}

/*
 * Class:     base_ShortPointer
 * Method:    _set
 * Signature: (JS)V
 */
JNIEXPORT void JNICALL Java_base_ShortPointer__1set
  (JNIEnv *env, jobject that, jlong pInstance, jshort value)
{
	short * ptr = reinterpret_cast<short*>(pInstance);
	*ptr = value;
}
