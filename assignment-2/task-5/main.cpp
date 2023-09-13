#include <iostream>

using namespace std;

int main() {

    double number;
    double* pointer = &number;
    double& reference = number;

    //3 ways to assign number a value:
    //1:
    number = 5;
    cout << number << endl;

    //2:
    *pointer = 4;
    cout << number << endl;

    //3:
    reference = 3;
    cout << number << endl;

    return 0;
}
