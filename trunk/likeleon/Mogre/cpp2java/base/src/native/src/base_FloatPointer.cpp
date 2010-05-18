#include <base_FloatPointer.h>
/*
 * Class:     alwaysthere_FloatPointer
 * Method:    _dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_base_FloatPointer__1dispose
  (JNIEnv *env, jobject that, jlong pInstance)
{
	float * ptr = reinterpret_cast<float*>(pInstance);
	delete ptr;
}

/*
 * Class:     alwaysthere_FloatPointer
 * Method:    _get
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_alwaysthere_FloatPointer__1get
  (JNIEnv *env, jobject that, jlong pInstance)
{
	float * ptr = reinterpret_cast<float*>(pInstance);
	return * ptr;
}

/*
 * Class:     alwaysthere_FloatPointer
 * Method:    _set
 * Signature: (JF)V
 */
JNIEXPORT void JNICALL Java_alwaysthere_FloatPointer__1set
  (JNIEnv *env, jobject that, jlong pInstance, jfloat value)
{
	float * ptr = reinterpret_cast<float*>(pInstance);
	*ptr = value;
}

/*
 * Class:     alwaysthere_FloatPointer
 * Method:    _next
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_alwaysthere_FloatPointer__1next
  (JNIEnv *env, jobject that, jlong pInstance)
{
	float * ptr = reinterpret_cast<float*>(pInstance);
	ptr++;
	return reinterpret_cast<long>(ptr);
}
