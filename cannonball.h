#ifndef CANNONBALL_H
#define CANNONBALL_H

#include <QObject>

class Cannonball: public QObject {
    Q_OBJECT

    public:
        Cannonball() {}
        ~Cannonball() {}

        void setSpeed(double vx0, double vz0);

        /** @brief Добавляет "импульс" (скорость) телу. */
        void addSpped(double dvx, double dvz);

        /** @brief Вычисляет положение ядра через время dt. */
        void moveByTick(double dt);

        /** @brief Определяет находится ли ядро в начале (в дуле) перед выстрелом. */
        bool atStart();

        inline double V_0_x() const { return _vx0; }
        inline double V_0_z() const { return _v0z; }
        inline double V_x() const { return V_x_; }
        inline double V_z() const { return V_z_; }
        inline double x() const { return x_; }
        inline double z() const { return z_; }
        inline double mass() const { return mass_; }

    protected:
        double _vx0 = 0, _v0z = 0;
        double V_x_ = 0, V_z_ = 0;
        double x_ = 0, z_ = 0;
        double mass_ = 0.5;
};


#endif // CANNONBALL_H
