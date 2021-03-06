/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_centaurean_clmax_schema_CL */

#ifndef _Included_com_centaurean_clmax_schema_CL
#define _Included_com_centaurean_clmax_schema_CL
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getPlatformsNative
 * Signature: ()[J
 */
JNIEXPORT jlongArray JNICALL Java_com_centaurean_clmax_schema_CL_getPlatformsNative
  (JNIEnv *, jclass);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getPlatformInfoNative
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_centaurean_clmax_schema_CL_getPlatformInfoNative
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getDevicesNative
 * Signature: (JJ)[J
 */
JNIEXPORT jlongArray JNICALL Java_com_centaurean_clmax_schema_CL_getDevicesNative
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getDeviceInfoIntNative
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_centaurean_clmax_schema_CL_getDeviceInfoIntNative
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getDeviceInfoLongNative
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_com_centaurean_clmax_schema_CL_getDeviceInfoLongNative
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getDeviceInfoLongArrayNative
 * Signature: (JI)[J
 */
JNIEXPORT jlongArray JNICALL Java_com_centaurean_clmax_schema_CL_getDeviceInfoLongArrayNative
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getDeviceInfoStringNative
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_centaurean_clmax_schema_CL_getDeviceInfoStringNative
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    createContextNative
 * Signature: (J[J)J
 */
JNIEXPORT jlong JNICALL Java_com_centaurean_clmax_schema_CL_createContextNative
  (JNIEnv *, jclass, jlong, jlongArray);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    createCLGLContextNative
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_com_centaurean_clmax_schema_CL_createCLGLContextNative
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    releaseContextNative
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_centaurean_clmax_schema_CL_releaseContextNative
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getContextInfoIntNative
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_centaurean_clmax_schema_CL_getContextInfoIntNative
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getContextInfoLongArrayNative
 * Signature: (JI)[J
 */
JNIEXPORT jlongArray JNICALL Java_com_centaurean_clmax_schema_CL_getContextInfoLongArrayNative
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    createProgramWithSourceNative
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_centaurean_clmax_schema_CL_createProgramWithSourceNative
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    releaseProgramNative
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_centaurean_clmax_schema_CL_releaseProgramNative
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    buildProgramNative
 * Signature: (J[JLjava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_centaurean_clmax_schema_CL_buildProgramNative
  (JNIEnv *, jclass, jlong, jlongArray, jstring);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getProgramInfoIntNative
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_centaurean_clmax_schema_CL_getProgramInfoIntNative
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getProgramInfoLongNative
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_com_centaurean_clmax_schema_CL_getProgramInfoLongNative
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getProgramInfoLongArrayNative
 * Signature: (JI)[J
 */
JNIEXPORT jlongArray JNICALL Java_com_centaurean_clmax_schema_CL_getProgramInfoLongArrayNative
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getProgramInfoStringNative
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_centaurean_clmax_schema_CL_getProgramInfoStringNative
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getProgramInfoBinariesNative
 * Signature: (J[J)[[B
 */
JNIEXPORT jobjectArray JNICALL Java_com_centaurean_clmax_schema_CL_getProgramInfoBinariesNative
  (JNIEnv *, jclass, jlong, jlongArray);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getProgramBuildInfoIntNative
 * Signature: (JJI)I
 */
JNIEXPORT jint JNICALL Java_com_centaurean_clmax_schema_CL_getProgramBuildInfoIntNative
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getProgramBuildInfoStringNative
 * Signature: (JJI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_centaurean_clmax_schema_CL_getProgramBuildInfoStringNative
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    createKernelNative
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_centaurean_clmax_schema_CL_createKernelNative
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    releaseKernelNative
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_centaurean_clmax_schema_CL_releaseKernelNative
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getKernelInfoIntNative
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_centaurean_clmax_schema_CL_getKernelInfoIntNative
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getKernelInfoLongNative
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_com_centaurean_clmax_schema_CL_getKernelInfoLongNative
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getKernelInfoStringNative
 * Signature: (JI)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_centaurean_clmax_schema_CL_getKernelInfoStringNative
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getKernelWorkGroupInfoLongNative
 * Signature: (JJI)J
 */
JNIEXPORT jlong JNICALL Java_com_centaurean_clmax_schema_CL_getKernelWorkGroupInfoLongNative
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getKernelWorkGroupInfoLongArrayNative
 * Signature: (JJI)[J
 */
JNIEXPORT jlongArray JNICALL Java_com_centaurean_clmax_schema_CL_getKernelWorkGroupInfoLongArrayNative
  (JNIEnv *, jclass, jlong, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    setKernelArgBufferNative
 * Signature: (JIJ)V
 */
JNIEXPORT void JNICALL Java_com_centaurean_clmax_schema_CL_setKernelArgBufferNative
  (JNIEnv *, jclass, jlong, jint, jlong);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    setKernelArgIntNative
 * Signature: (JII)V
 */
JNIEXPORT void JNICALL Java_com_centaurean_clmax_schema_CL_setKernelArgIntNative
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    runKernelNative
 * Signature: (JJ[I[I)V
 */
JNIEXPORT void JNICALL Java_com_centaurean_clmax_schema_CL_runKernelNative
  (JNIEnv *, jclass, jlong, jlong, jintArray, jintArray);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    createBufferNative
 * Signature: (JLjava/nio/ByteBuffer;I)J
 */
JNIEXPORT jlong JNICALL Java_com_centaurean_clmax_schema_CL_createBufferNative
  (JNIEnv *, jclass, jlong, jobject, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    releaseMemObjectNative
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_centaurean_clmax_schema_CL_releaseMemObjectNative
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    mapBufferNative
 * Signature: (JJIJ)V
 */
JNIEXPORT void JNICALL Java_com_centaurean_clmax_schema_CL_mapBufferNative
  (JNIEnv *, jclass, jlong, jlong, jint, jlong);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    unmapMemObjectNative
 * Signature: (JJLjava/nio/ByteBuffer;)V
 */
JNIEXPORT void JNICALL Java_com_centaurean_clmax_schema_CL_unmapMemObjectNative
  (JNIEnv *, jclass, jlong, jlong, jobject);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getMemInfoIntNative
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_centaurean_clmax_schema_CL_getMemInfoIntNative
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getMemInfoLongNative
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_centaurean_clmax_schema_CL_getMemInfoLongNative
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    createCommandQueueNative
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_com_centaurean_clmax_schema_CL_createCommandQueueNative
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    releaseCommandQueueNative
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_centaurean_clmax_schema_CL_releaseCommandQueueNative
  (JNIEnv *, jclass, jlong);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getCommandQueueInfoIntNative
 * Signature: (JI)I
 */
JNIEXPORT jint JNICALL Java_com_centaurean_clmax_schema_CL_getCommandQueueInfoIntNative
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     com_centaurean_clmax_schema_CL
 * Method:    getCommandQueueInfoLongNative
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_com_centaurean_clmax_schema_CL_getCommandQueueInfoLongNative
  (JNIEnv *, jclass, jlong, jint);

#ifdef __cplusplus
}
#endif
#endif
