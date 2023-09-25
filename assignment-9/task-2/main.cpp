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

bool isApproximatelyEqual(int n, int m) {
    return abs(n-m) <= 2;
}

int main() {
    vector<int> v1 = {3,3,12,14,17,25,30};
    cout << "v1: " << v1 << endl;
    vector<int> v2 = {2,3,12,14,24};
    cout << "v2: " << v2 << endl;

    auto boolean = equal(v1.begin(), v1.begin() +5, v2.begin(), isApproximatelyEqual);
    cout << "Are the first 5 elements of v1 and v2 approximately equal (+-2)?: " << boolean << endl;

    boolean = equal(v1.begin(), v1.begin() + 4, v2.begin(), isApproximatelyEqual);
    cout << "Are the first 4 elements of v1 and v2 approximately equal (+-2)?: " << boolean << endl;

    return 0;
}
