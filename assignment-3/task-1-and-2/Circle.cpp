#include "Circle.h"

Circle::Circle(double radius_) : radius(radius_) {}

int Circle::get_area() const {
    return pi * this->radius * this->radius;
}

double Circle::get_circumference() const {
    return 2.0 * pi * this->radius;
}
