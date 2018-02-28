#include "physcengine.h"

#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

using namespace ai;

int main(int argc, char *argv[])
{
#if defined(Q_OS_WIN)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    auto context = engine.rootContext();

    PhycsEngine physicsEngine;
    // Добавляем физический движок в QML
    context->setContextProperty("PhysicsEngine", &physicsEngine);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
