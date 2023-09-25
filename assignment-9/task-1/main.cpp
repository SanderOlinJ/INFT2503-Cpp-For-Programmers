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

bool isGreaterThan15(int n) {
    return n > 15;
}

int main() {
    vector<int> v1 = {3,3,12,14,17,25,30};
    cout << "v1: " << v1 << endl;

    auto it = find_if(v1.begin(), v1.end(), isGreaterThan15);
    cout << "First element in v1 that is greater than 15: " << *it << endl;

    return 0;
}
