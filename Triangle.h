#ifndef HW29_2_TRIANGLE_H
#define HW29_2_TRIANGLE_H
#include "Shape.h"
#include <cmath>

class Triangle : public Shape {
    double a;
    double b;
    double c;
public:
    Triangle(){};
    Triangle(double _a, double _b, double  _c);
    virtual double square();
    virtual BoundingBoxDimensions dimensions();
    virtual std::string type();
};


#endif //HW29_2_TRIANGLE_H
