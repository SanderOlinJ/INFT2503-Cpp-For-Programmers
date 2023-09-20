#include "fraction.h"
#include <iostream>
#include <string>

using namespace std;

void print(const string &text, const Fraction &broek) {
    cout << text << broek.numerator << " / " << broek.denominator << endl;
}

int main() {
    Fraction a(10, 20);
    Fraction b(3, 4);
    Fraction c;
    c.set(5);
    Fraction d = a / b;

    print("a = ", a);
    print("b = ", b);
    print("c = ", c);
    print("d = ", d);

    b += a;
    ++c;
    d *= d;

    print("b = ", b);
    print("c = ", c);
    print("d = ", d);

    c = a + b - d * a;
    c = -c;

    print("c = ", c);

    if (a + b != c + d)
        cout << "a + b != c + d" << endl;
    else
        cout << " a + b == c + d" << endl;
    while (b > a)
        b -= a;
    print("b = ", b);

    Fraction fraction1(17,3);
    Fraction fraction2(14,3);
    print("17/3  -  3  =  ", fraction1 - 3);
    print("3  -  17/3  =  ", 3 - fraction1);

    // Task 1b)
    print("Explain this : ", 5 - 3 - fraction1 - 7 - fraction2);
    // First 5 - 3  (operator-(int integer1, int integer2))
    // Then 2 - fraction1 (friend Fraction operator-(int integer, const Fraction &fraction))
    // Then (-11/3) - 7   (Fraction::operator-(int integer) const)
    // Finally (-32/3) - fraction2  (Fraction operator-(const Fraction &other) const)

    return 0;
}