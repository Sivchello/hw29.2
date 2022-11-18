#ifndef HW29_2_CIRCLE_H
#define HW29_2_CIRCLE_H
#include "Shape.h"

class Circle : public Shape {
    double r;
public:
    Circle(){};
    Circle(double _r);
    virtual double square();
    virtual BoundingBoxDimensions dimensions();
    virtual std::string type();
};


#endif //HW29_2_CIRCLE_H
