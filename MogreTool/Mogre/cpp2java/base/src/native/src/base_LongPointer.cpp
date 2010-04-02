#include <base_LongPointer.h>
/*
 * Class:     base_LongPointer
 * Method:    _dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_base_LongPointer__1dispose
  (JNIEnv *env, jobject that, jlong pInstance)
{
	Long * ptr = reinterpret_cast<Long*>(pInstance);
	delete ptr;
}

/*
 * Class:     base_LongPointer
 * Method:    _get
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_base_LongPointer__1get
  (JNIEnv *env, jobject that, jlong pInstance)
{
	Long * ptr = reinterpret_cast<Long*>(pInstance);
	return * ptr;
}

/*
 * Class:     base_LongPointer
 * Method:    _next
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_base_LongPointer__1next
  (JNIEnv *env, jobject that, jlong pInstance)
{
	Long * ptr = reinterpret_cast<Long*>(pInstance);
	ptr++;
	return reinterpret_cast<Long>(ptr);
}

/*
 * Class:     base_LongPointer
 * Method:    _set
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_base_LongPointer__1set
  (JNIEnv *env, jobject that, jlong pInstance, jlong value)
{
	Long * ptr = reinterpret_cast<Long*>(pInstance);
	*ptr = value;
}