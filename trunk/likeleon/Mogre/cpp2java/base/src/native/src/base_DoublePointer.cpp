#include <base_DoublePointer.h>
/*
 * Class:     base_DoublePointer
 * Method:    _dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_base_DoublePointer__1dispose
  (JNIEnv *env, jobject that, jlong pInstance)
{
	double * ptr = reinterpret_cast<double*>(pInstance);
	delete ptr;
}

/*
 * Class:     base_DoublePointer
 * Method:    _get
 * Signature: (J)D
 */
JNIEXPORT jdouble JNICALL Java_base_DoublePointer__1get
  (JNIEnv *env, jobject that, jlong pInstance)
{
	double * ptr = reinterpret_cast<double*>(pInstance);
	return * ptr;
}

/*
 * Class:     base_DoublePointer
 * Method:    _next
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_base_DoublePointer__1next
  (JNIEnv *env, jobject that, jlong pInstance)
{
	double * ptr = reinterpret_cast<double*>(pInstance);
	ptr++;
	return reinterpret_cast<double>(ptr);
}

/*
 * Class:     base_DoublePointer
 * Method:    _set
 * Signature: (JD)V
 */
JNIEXPORT void JNICALL Java_base_DoublePointer__1set
  (JNIEnv *env, jobject that, jlong pInstance, jdouble);
{
	double * ptr = reinterpret_cast<double*>(pInstance);
	*ptr = value;
}
