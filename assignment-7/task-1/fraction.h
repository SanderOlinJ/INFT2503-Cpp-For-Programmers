#ifndef TASK_1_FRACTION_H
#define TASK_1_FRACTION_H
#pragma once
#import <iostream>

class Fraction {
public:
    int numerator;
    int denominator;

    Fraction();
    Fraction(int numerator, int denominator);
    void set(int numerator_, int denominator_ = 1);
    Fraction operator+(const Fraction &other) const;
    Fraction operator-(const Fraction &other) const;
    Fraction operator*(const Fraction &other) const;
    Fraction operator/(const Fraction &other) const;
    Fraction operator-() const;
    Fraction operator-(int integer) const;
    friend Fraction operator-(int integer, const Fraction &other);
    Fraction &operator++();
    Fraction &operator--();
    Fraction &operator+=(const Fraction &other);
    Fraction &operator-=(const Fraction &other);
    Fraction &operator*=(const Fraction &other);
    Fraction &operator/=(const Fraction &other);
    Fraction &operator=(const Fraction &other);
    bool operator==(const Fraction &other) const;
    bool operator!=(const Fraction &other) const;
    bool operator<=(const Fraction &other) const;
    bool operator>=(const Fraction &other) const;
    bool operator<(const Fraction &other) const;
    bool operator>(const Fraction &other) const;

private:
    void reduce();
    int compare(const Fraction &other) const;
};

#endif
