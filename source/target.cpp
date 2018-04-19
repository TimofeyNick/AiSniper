
#include "target.h"

using namespace ai;

bool Target::success(double result){
    double res = _x - result;
    if(_x - result <= _size && _x - result >= -_size){
        return true;
    }
    return false;
}

double Target::distance(double result){
    if(success(result)){
        return 0.0;
    }
    if(result - _x > 0){ //перелет
        return(result - _x - _size);
    }else{ // недолет
        return(result - _x + _size);
    }
}


