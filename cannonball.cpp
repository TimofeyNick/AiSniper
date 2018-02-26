#include "Cannonball.h"
#include "Consts.h"

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
    x_ = x_ + _vx0 * dt;
    z_ = z_ + _v0z * dt - G*dt*dt/2;
}





