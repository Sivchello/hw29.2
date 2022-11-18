#include "Circle.h"

Circle::Circle(double _r){
    if (_r > 0){
        r = _r;
        dimensions();
    } else {
        std::cout << "Error! Incorrect\n";
    }
}

double Circle::square(){
    return 3.14 * r * r;
}

Shape::BoundingBoxDimensions Circle::dimensions(){
    hw.h = r * 2;
    hw.w = hw.h;
}

std::string Circle::type(){
    return "Circle";
}