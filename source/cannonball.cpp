#include "Cannonball.h"
#include "Consts.h"

using namespace ai;

void Cannonball::setSpeed(double vx0, double vz0)
{
    _vx0 = vx0;
    _vz0 = vz0;
}

void Cannonball::addSpped(double dvx, double dvz){
    _vx += dvx;
    _vz += dvz;
}

void Cannonball::moveByTick(double dt){
    // формулы в предположении, что ускорение не зависит от времени
    _x = _x + _vx0 * dt;
    _z = _z + _vz0 * dt - G*dt*dt/2;
}

bool Cannonball::atStart()
{
    return qFuzzyIsNull(_x) && qFuzzyIsNull(_z);
}





