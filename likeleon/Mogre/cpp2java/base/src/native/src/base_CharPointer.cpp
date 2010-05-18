#include <base_CharPointer.h>
/*
 * Class:     base_CharPointer
 * Method:    _dispose
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_base_CharPointer__1dispose
  (JNIEnv *env, jobject that, jlong pInstance)
{
	char * ptr = reinterpret_cast<char*>(pInstance);
	delete ptr;
}

/*
 * Class:     base_CharPointer
 * Method:    _get
 * Signature: (J)C
 */
JNIEXPORT jchar JNICALL Java_base_CharPointer__1get
  (JNIEnv *env, jobject that, jlong pInstance)
{
	char * ptr = reinterpret_cast<char*>(pInstance);
	return * ptr;
}

/*
 * Class:     base_CharPointer
 * Method:    _next
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_base_CharPointer__1next
  (JNIEnv *env, jobject that, jlong pInstance)
{
	char * ptr = reinterpret_cast<char*>(pInstance);
	ptr++;
	return reinterpret_cast<char>(ptr);
}

/*
 * Class:     base_CharPointer
 * Method:    _set
 * Signature: (JC)V
 */
JNIEXPORT void JNICALL Java_base_CharPointer__1set
  (JNIEnv *env, jobject that, jlong pInstance, jfloat value)
{
	char * ptr = reinterpret_cast<char*>(pInstance);
	*ptr = value;
}
