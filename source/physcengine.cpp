#include "physcengine.h"
#include "cannonball.h"

#include <fstream> // Переделать сохранение на QFile
#include <QtMath>
#include <QDebug>

using namespace ai;

void PhycsEngine::fire(double start_speed, double angle){
    qDebug() << "Вызвана функция Fire" << start_speed << angle;

    Cannonball cannonball;
    cannonball.addSpped(start_speed * qCos(angle*M_PI/180), start_speed * qSin(angle*M_PI/180));

    // Проверка на зацикливание
    while (cannonball.z() <= 0 && !cannonball.atStart()){
        cannonball.moveByTick(T);
    }

    // Debug!!! Убрать потом
    _lastResult += 10.0;
    emit lastResultChanged(_lastResult);
    // Вычисляем расстояние до цели (нужно ещё задать где-то местоположение цели).
}

//------------------------------------------------------------------------------
void PhycsEngine::writeFireResults(double x_ext, double z_ext){
    // x_ext -external- значение x пришедшее из ИИ
    // y_ext -external- значение y пришедшее из ИИ

    // double x_error = x_ext - cannonball.x_finish();
    // double z_error = z_ext - cannonball.z_finish();

    // // не работает кусок кода ниже
    // // Переделать сохранение на QFile
    // std::ofstream fout;
    // fout.open("fireResults.txt");
    // fout << x_error<< ' ' << z_error;
    // fout.close();
}

//------------------------------------------------------------------------------
void PhycsEngine::setLastResult(double lastResult)
{
    qWarning("Floating point comparison needs context sanity check");
    if (qFuzzyCompare(_lastResult, lastResult))
        return;

    _lastResult = lastResult;
    emit lastResultChanged(_lastResult);
}
