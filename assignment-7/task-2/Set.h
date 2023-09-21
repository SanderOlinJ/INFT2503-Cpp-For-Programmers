#ifndef TASK_2_SET_H
#define TASK_2_SET_H
#pragma once
#include <vector>
#include <iostream>

using namespace std;

class Set {
private:
    vector<int> integers;
public:
    Set() = default;
    explicit Set(vector<int> integers_) : integers(std::move(integers_)) {};
    Set operator&(const Set& other) const;
    Set& operator+=(int integer);
    Set& operator=(const Set& other);
    friend std::ostream& operator<<(std::ostream& os, const Set& set);
};

#endif
