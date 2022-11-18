#include <iostream>
#include <string>
#include "Triangle.h"
#include "Rectangle.h"
#include "Circle.h"

void printParams2(Shape *shape){
    std::cout << "Type: " << shape->type() << std::endl;
    std::cout << "Square: " << shape->square() << std::endl;
    std::cout << "Width: " << shape->getW() << std::endl;
    std::cout << "Height: " << shape->getH() << std::endl;
}

int main() {

    Triangle t(3,4,5);
    t.printParams();

    Rectangle r(2,4);
    r.printParams();

    Circle c(5);
    c.printParams();

    std::cout << "-------ver. 2-------\n";
    printParams2(&r);
    printParams2(&c);
    printParams2(&t);

    return 0;
}
