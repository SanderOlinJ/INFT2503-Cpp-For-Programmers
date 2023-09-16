#include <iostream>
#include "Circle.h"

using namespace std;

int main() {
    Circle circle(5);
    int area = circle.get_area();
    cout << "Area equals " << area << endl;

    double circumference = circle.get_circumference();
    cout << "Circumference equals " << circumference << endl;

    return 0;
}