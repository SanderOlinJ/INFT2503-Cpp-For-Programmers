#include "Commodity.h"

Commodity::Commodity(string name, int id, double price) : name(name), id(id), price(price) {}

string Commodity::get_name() const {
    return this->name;
}

int Commodity::get_id() const {
    return this->id;
}

double Commodity::get_price(double quantity) const {
    return this->price * quantity;
}

void Commodity::set_price(double price_) {
    this->price = price_;
}

double Commodity::get_price_with_sales_tax(double quantity) const {
    return get_price(quantity) * sales_tax;
}