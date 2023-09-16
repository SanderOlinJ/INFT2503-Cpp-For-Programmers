#include <iostream>
#include "Commodity.h"

using namespace std;

int main() {
    const double quantity = 2.5;
    Commodity commodity("Norvegia", 123, 73.50);

    cout << "Product name: " << commodity.get_name() << ", Product number: " << commodity.get_id()
         << ", Price per item: " << commodity.get_price() << endl;

    cout << "Price per kilo: " << commodity.get_price() << endl;
    cout << "Price for " << quantity << " kg is " << commodity.get_price(quantity)
         << " without sales tax\n";
    cout << "Price for " << quantity << " kg is " << commodity.get_price_with_sales_tax(quantity)
         << " with sales tax\n";

    commodity.set_price(79.60);
    cout << "New price per kilo: " << commodity.get_price() << endl;
    cout << "Price for " << quantity << " kg is " << commodity.get_price(quantity)
         << " without sales tax\n";
    cout << "Price for " << quantity << " kg is " << commodity.get_price_with_sales_tax(quantity)
         << " with sales tax\n";

    return 0;
}
