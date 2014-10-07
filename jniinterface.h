#ifndef JNIINTERFACE_H
#define JNIINTERFACE_H

#include <jni.h>

extern "C"
{
    JNIEXPORT void JNICALL Java_qt_android_java_CustomQtActivity_updateQtMoney(JNIEnv *env, jobject obj, jint value);
}

#endif // JNIINTERFACE_H
