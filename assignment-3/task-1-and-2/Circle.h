#ifndef TASK_1_CIRCLE_H
#define TASK_1_CIRCLE_H

#pragma once
#define pi 3.141592

class Circle {
public:
    explicit Circle(double radius_);
    int get_area() const;
    double get_circumference() const;
private:
    double radius;
};

#endif
