#include "Shape.h"

void Shape::printParams(){
    std::cout << "Type: " << this->type() << std::endl;
    std::cout << "Square: " << square() << std::endl;
    std::cout << "Width: " << hw.w << std::endl;
    std::cout << "Height: " << hw.h << std::endl;
}

double Shape::getH() {
    return hw.h;
}

double Shape::getW() {
    return hw.w;
}