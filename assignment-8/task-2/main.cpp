#include <iostream>

using namespace std;

template<typename Type1, typename Type2>
class Pair {
public:
    Type1 first;
    Type2 second;
    Pair(Type1 first_, Type2 second_) : first(first_), second(second_) {};

    Pair operator+(const Pair& other){
        Pair pair = *this;
        pair.first += other.first;
        pair.second += other.second;
        return pair;
    }

    bool operator>(const Pair& other){
        return (this->first + this->second) > (other.first + other.second);
    }

    bool operator<(const Pair& other){
        return (this->first + this->second) < (other.first + other.second);
    }

};

int main() {
    Pair<double, int> p1(3.5, 14);
    Pair<double, int> p2(2.1, 7);
    cout << "p1: " << p1.first << ", " << p1.second << endl;
    cout << "p2: " << p2.first << ", " << p2.second << endl;

    if (p1 > p2) {
        cout << "p1 is greater than p2" << endl;
    } else {
        cout << "p2 is greater than p1" << endl;
    }

    auto sum = p1 + p2;
    cout << "Sum: " << sum.first << ", " << sum.second << endl;

    return 0;
}

