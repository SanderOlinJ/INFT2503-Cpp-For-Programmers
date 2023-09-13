#include <iostream>

using namespace std;

int main(){

    int a = 5;
    int &b = a; //Reference needs to refer to a variable
    int *c;
    c = &b;
    a = b + *c; // a and b are not pointers
    b = 2; // cannot modify a reference

    return 0;
}