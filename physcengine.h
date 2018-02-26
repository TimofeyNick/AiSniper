#ifndef PHYSCENGINE_H
#define PHYSCENGINE_H

#include "cannonball.h"

#include <fstream>
#include <cmath>
#include <math.h>

class PhycsEngine{
    public:
        PhycsEngine() {}
        ~PhycsEngine() {}

        double T = 0.05; // T means period
        bool indic = true; //не очень красивая штука, нужна потом

        void fire(double start_speed, double angle);

        /** @brief Записывает начальные условия выстрела и расстояние до цели. */
        void writeFireResults(double x_ext, double z_ext);
};

#endif // PHYSCENGINE_H
