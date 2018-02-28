#ifndef CANNONBALL_H
#define CANNONBALL_H

#include <QObject>

namespace ai {

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
        inline double V_0_z() const { return _vz0; }
        inline double V_x() const { return _vx; }
        inline double V_z() const { return _vz; }
        inline double x() const { return _x; }
        inline double z() const { return _z; }
        inline double mass() const { return _mass; }

    protected:
        double _vx0 = 0, _vz0 = 0;
        double _vx = 0, _vz = 0;
        double _x = 0, _z = 0;
        double _mass = 0.5;
};

} // namespace ai {

#endif // CANNONBALL_H
