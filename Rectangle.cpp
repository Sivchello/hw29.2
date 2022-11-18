#include "Rectangle.h"

Rectangle::Rectangle(double _a, double _b){
    if (_a > 0 && _b > 0){
        a = _a;
        b = _b;
        dimensions();
    } else {
        std::cout << "Error! Incorrect\n";
    }
}

double Rectangle::square(){
    return a * b;
}

Shape::BoundingBoxDimensions Rectangle::dimensions(){
    hw.h = a;
    hw.w = b;
}

std::string Rectangle::type(){
    return "Rectangle";
}