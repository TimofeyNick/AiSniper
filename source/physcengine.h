#ifndef PHYSCENGINE_H
#define PHYSCENGINE_H

#include "cannonball.h"
#include <QObject>

namespace ai {

class PhycsEngine: public QObject {
    Q_OBJECT

    Q_PROPERTY(double lastResult READ lastResult WRITE setLastResult NOTIFY lastResultChanged)
    Q_PROPERTY(double distance READ distance WRITE setDistance NOTIFY distanceChanged)

    public:
        PhycsEngine() {}
        ~PhycsEngine() {}

        double T = 0.05; // T means period
        bool indic = true; //не очень красивая штука, нужна потом

        /** @brief Запускает тестовый выстрел. */
        Q_INVOKABLE void fire(double start_speed, double angle);

        /** @brief Записывает начальные условия выстрела и расстояние до цели. */
        void writeFireResults(double x_ext, double z_ext);
        double lastResult() const { return _lastResult; }
        double distance() const{ return _distance; }


    public slots:
        void setLastResult(double lastResult);
        void setDistance(double distance);

    signals:
        void lastResultChanged(double lastResult);
        void distanceChanged(double distance);

    private:
        double _lastResult = 0.0;
        double _distance = 15;
};

} // namespace ai {

#endif // PHYSCENGINE_H
