#include "Triangle.h"

Triangle::Triangle(double _a, double _b, double  _c){
    if (_a > 0 && _b > 0 && _c > 0){
        a = _a;
        b = _b;
        c = _c;
        dimensions();
    } else {
        std::cout << "Error! Incorrect\n";
    }
}

double Triangle::square(){
    double p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

Shape::BoundingBoxDimensions Triangle::dimensions(){
    double p = (a + b + c) / 2;
    hw.h = a * b * c / (4 * sqrt(p * (p - a) * (p - b) * (p - c))) * 2;
    hw.w = hw.h;
}

std::string Triangle::type(){
    return "Triangle";
}