/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_HuaMedia_HuaMediaJNI */

#ifndef _Included_com_HuaMedia_HuaMediaJNI
#define _Included_com_HuaMedia_HuaMediaJNI
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_HuaMedia_HuaMediaJNI
 * Method:    native_InitNative
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_HuaMedia_HuaMediaJNI_native_1InitNative
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_HuaMedia_HuaMediaJNI
 * Method:    native_CreateOESTexture
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_HuaMedia_HuaMediaJNI_native_1CreateOESTexture
  (JNIEnv *, jobject);

/*
 * Class:     com_HuaMedia_HuaMediaJNI
 * Method:    native_CreateFBO
 * Signature: ([III)V
 */
JNIEXPORT void JNICALL Java_com_HuaMedia_HuaMediaJNI_native_1CreateFBO
  (JNIEnv *, jobject, jintArray, jint, jint);

/*
 * Class:     com_HuaMedia_HuaMediaJNI
 * Method:    native_RenderTextrue
 * Signature: ([F)V
 */
JNIEXPORT void JNICALL Java_com_HuaMedia_HuaMediaJNI_native_1RenderTextrue
  (JNIEnv *, jobject, jfloatArray);

/*
 * Class:     com_HuaMedia_HuaMediaJNI
 * Method:    native_CommonFormat
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_HuaMedia_HuaMediaJNI_native_1CommonFormat
  (JNIEnv *, jobject);

/*
 * Class:     com_HuaMedia_HuaMediaJNI
 * Method:    native_LeftRightFormat
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_HuaMedia_HuaMediaJNI_native_1LeftRightFormat
  (JNIEnv *, jobject);

/*
 * Class:     com_HuaMedia_HuaMediaJNI
 * Method:    native_UpDownFormat
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_HuaMedia_HuaMediaJNI_native_1UpDownFormat
  (JNIEnv *, jobject);

/*
 * Class:     com_HuaMedia_HuaMediaJNI
 * Method:    Native_Release
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_HuaMedia_HuaMediaJNI_Native_1Release
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
