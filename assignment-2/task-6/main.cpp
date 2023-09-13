#include <iostream>

using namespace std;

int find_sum(const int *table, int length){
    int sum = 0;

    for (int i = 0; i < length; i++){
        sum += table[i];
    }
    return sum;
}

int main() {
    int table[20];

    for (int i = 0; i < 20; i++) {
        table[i] = i+1;
    }

    cout << "Sum of first 10 numbers: " << find_sum(table, 10) << endl;
    cout << "Sum of the next 5 numbers: " << find_sum(&table[10], 5) << endl;
    cout << "Sum of the last 5 numbers: " << find_sum(&table[15], 5) << endl;

    return 0;
}