#ifndef HW29_2_SHAPE_H
#define HW29_2_SHAPE_H
#include <iostream>
#include <string>

class Shape{
protected:
    struct BoundingBoxDimensions{
        double h;
        double w;
    };
    BoundingBoxDimensions hw;

public:
    virtual double square() = 0;
    virtual BoundingBoxDimensions dimensions() = 0;
    virtual std::string type() = 0;
    void printParams();
    double getH();
    double getW();
};


#endif //HW29_2_SHAPE_H
