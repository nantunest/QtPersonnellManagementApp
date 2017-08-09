#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <employee.h>
#include <hourlypaidemployee.h>
#include <monthlypaidemployee.h>

#include <hourlypaidemployee.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    QGuiApplication app(argc, argv);

    qmlRegisterType<Employee>();
    qmlRegisterType<HourlyPaidEmployee>("People", 1, 0, "HourlyPaidEmployee");



    QQmlApplicationEngine engine;
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));

    return app.exec();
}
