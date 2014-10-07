#include <QAndroidJniEnvironment>
#include <QAndroidJniObject>
#include <QtAndroid>
#include <QtDebug>

#include "qmlcppinterface.h"

QmlCppInterface *QmlCppInterface::sInstance = 0;

QmlCppInterface::QmlCppInterface(QObject *parent)
    : QObject(parent)
    , mCash(0)
{
    sInstance = this;
}

QmlCppInterface *QmlCppInterface::instance()
{
    // Memory leak, of course
    if (!sInstance)
        sInstance = new QmlCppInterface();
    return sInstance;
}

void QmlCppInterface::tellJavaToGiveMeMoney()
{
    QAndroidJniObject activity = QtAndroid::androidActivity();
    activity.callMethod<void>("paybackTime", "()V");

    QAndroidJniEnvironment env;
    if (env->ExceptionCheck())
    {
        env->ExceptionClear();

        qCritical() << "Something went wrong!";
        // Handle the exception
    }
}
