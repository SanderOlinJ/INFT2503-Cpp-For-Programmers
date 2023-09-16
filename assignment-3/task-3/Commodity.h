#ifndef TASK_3_COMMODITY_H
#define TASK_3_COMMODITY_H

#pragma once
#include <cstdlib>
#include "iostream"
#define sales_tax 1.25

using namespace std;

class Commodity{
private:
    string name;
    int id;
    double price;
public:
    explicit Commodity(string name, int id, double price);
    string get_name() const;
    int get_id() const;
    double get_price(double quantity = 1) const;
    void set_price(double price);
    double get_price_with_sales_tax(double quantity = 1) const;
};

#endif
