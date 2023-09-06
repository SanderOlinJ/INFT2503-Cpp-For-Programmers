#include <iostream>
#include "string.h"

using namespace std;

int main() {
    // a)
    int i = 3;
    int j = 5;
    int *p = &i;
    int *q = &j;

    cout << "i) Value = " << i << ", Address = " << &i << endl;
    cout << "p (&i)) Value = " << *p << ", Address =" << p << endl;
    cout << "j) Value = " << j << ", Address = " << &j << endl;
    cout << "q (&j)) Value = " << *q << ", Address = " << q << endl;


    // b)
    *p = 7;
    *q += 4;
    *q = *p + 1;
    p = q;

    cout << p << ", " << *p << " | " << q << ", " << *q << endl;

    char *line = 0;
    strcpy(line, "Dette er en tekst");
    return 0;
}
