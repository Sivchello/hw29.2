#ifndef HW29_2_RECTANGLE_H
#define HW29_2_RECTANGLE_H
#include "Shape.h"

class Rectangle : public Shape {
    double a;
    double b;
public:
    Rectangle(){};
    Rectangle(double _a, double _b);
    virtual double square();
    virtual BoundingBoxDimensions dimensions();
    virtual std::string type();
};


#endif //HW29_2_RECTANGLE_H
