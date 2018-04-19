#ifndef TARGET_H
#define TARGET_H

#include "physcengine.h"
#include "cannonball.h"
#include "Consts.h"

#include <QObject>

namespace ai {

class Target: public QObject{
    Q_OBJECT

    public:
        Target() {}
        ~Target() {}

        inline double x() const { return _x; }
        inline double size() const { return _size; }
        void setX(double x){ _x = x; }
        void setSize(double size) { _size = size;}

        bool success(double result);
        double distance(double result);

   private:
        double _size = 10.0;
        double _x = 150.0;


};

} //namespace ai

#endif // TARGET_H
