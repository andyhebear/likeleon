#include <base_IntegerPointer.h>
/*
 * Class:     base_IntegerPointer
 * Method:    _dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_base_IntegerPointer__1dispose
  (JNIEnv *env, jobject that, jlong pInstance)
{
	Integer * ptr = reinterpret_cast<Integer*>(pInstance);
	delete ptr;
}

/*
 * Class:     base_IntegerPointer
 * Method:    _get
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_base_IntegerPointer__1get
  (JNIEnv *env, jobject that, jlong pInstance)
{
	Integer * ptr = reinterpret_cast<Integer*>(pInstance);
	return * ptr;
}

/*
 * Class:     base_IntegerPointer
 * Method:    _next
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_base_IntegerPointer__1next
  (JNIEnv *env, jobject that, jlong pInstance)
{
	Integer * ptr = reinterpret_cast<Integer*>(pInstance);
	ptr++;
	return reinterpret_cast<Integer>(ptr);
}

/*
 * Class:     base_IntegerPointer
 * Method:    _set
 * Signature: (JI)V
 */
JNIEXPORT void JNICALL Java_base_IntegerPointer__1set
  (JNIEnv *env, jobject that, jint pInstance, jint value)
{
	Integer * ptr = reinterpret_cast<Integer*>(pInstance);
	*ptr = value;
}
