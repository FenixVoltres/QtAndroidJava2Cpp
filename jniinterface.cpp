#include "jniinterface.h"
#include "qmlcppinterface.h"

JNIEXPORT void JNICALL Java_qt_android_java_CustomQtActivity_updateQtMoney(JNIEnv *env, jobject obj, jint value)
{
    Q_UNUSED(env)
    Q_UNUSED(obj)

    int newAmount = (int) value;
    int oldMoney = QmlCppInterface::instance()->cash();
    QmlCppInterface::instance()->setCash(oldMoney + newAmount);
}
