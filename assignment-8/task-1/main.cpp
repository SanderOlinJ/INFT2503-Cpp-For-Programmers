#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

template <typename Type>
bool equal(Type a, Type b) {
    cout << "Comparing " << a << " and " << b << endl;
    return a == b;
}
bool equal(double a, double b) {
    cout << setprecision(6) << "Comparing " << a << " and " << b << endl;
    return abs(a - b) < 0.00001;
}

int main() {
    cout << equal(1, 1) << endl;
    cout << equal(1, 2) << endl;
    cout << equal("123",  "123") << endl;
    cout << equal(6.0, 6.0001) << endl;
    cout << equal(6.0, 6.00000000001) << endl;
    return 0;
}
