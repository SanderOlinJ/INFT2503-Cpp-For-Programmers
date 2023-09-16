#include <iostream>

using namespace std;

int main(){

    char text[5]; // bruh
    char *pointer = text; // bruh
    char search_for = 'e';
    cin >> text;
    while (*pointer != search_for){
        *pointer = search_for;
        pointer++;
    }

    return 0;
}