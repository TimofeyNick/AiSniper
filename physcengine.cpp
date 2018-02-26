#include "physcengine.h"
#include "cannonball.h"

void PhycsEngine::fire(double start_speed, double angle){
    Cannonball cannonball;
    cannonball.addSpped(start_speed * cos(angle*M_PI/180), start_speed * sin(angle*M_PI/180));

    while (cannonball.z() <= 0 && !cannonball.atStart()){
        cannonball.moveByTick(T);
    }

    // Вычисляем расстояние до цели (нужно ещё задать где-то местоположение цели).
}

//------------------------------------------------------------------------------
void PhycsEngine::writeFireResults(double x_ext, double z_ext){
    // x_ext -external- значение x пришедшее из ИИ
    // y_ext -external- значение y пришедшее из ИИ

    double x_error = x_ext - cannonball.x_finish();
    double z_error = z_ext - cannonball.z_finish();

    // не работает кусок кода ниже
    std::ofstream fout;
    fout.open("fireResults.txt");
    fout << x_error<< ' ' << z_error;
    fout.close();
}
