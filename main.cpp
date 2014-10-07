#include <QQmlApplicationEngine>
#include <QGuiApplication>
#include <QQmlContext>

#include "qmlcppinterface.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("_cpp", QmlCppInterface::instance());
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));


    return app.exec();
}
