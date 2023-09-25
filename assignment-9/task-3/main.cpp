#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

ostream &operator<<(ostream &os, const vector<int> &vec) {
    for (auto &elem : vec) {
        os << elem << ". ";
    }
    return os;
}

bool isOdd(int n) {
    return n % 2 != 0;
}

int main() {
    vector<int> v1 = {3,3,12,14,17,25,30};
    cout << "v1: " << v1 << endl;

    replace_copy_if(v1.begin(), v1.end(), v1.begin(), isOdd, 100);
    cout << "v1 (odd numbers replaced with 100): " << v1 << endl;

    return 0;
}
