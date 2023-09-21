#include "Set.h"
#include <algorithm>

Set Set::operator&(const Set& other) const {
    Set union_set;

    for (auto elem : this->integers) {
        if (std::find(other.integers.begin(), other.integers.end(), elem) != other.integers.end()) {
            union_set.integers.push_back(elem);
        }
    }
    return union_set;
}

Set& Set::operator+=(int integer) {
    if (std::find(this->integers.begin(), this->integers.end(), integer) == this->integers.end()){
        this->integers.push_back(integer);
    }
    return *this;
}

Set& Set::operator=(const Set& other) {
    if (this != &other) {
        this->integers = other.integers;
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Set& set) {
    os << "{ ";
    for (size_t i = 0; i < set.integers.size(); ++i) {
        os << set.integers[i];
        if (i < set.integers.size() - 1) {
            os << ", ";
        }
    }
    os << " }";
    return os;
}