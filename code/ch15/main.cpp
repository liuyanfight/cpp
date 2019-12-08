#include "Bulk_quote.hpp"
#include <iostream>
using namespace std;

double print_total(const Quote &item, size_t n)
{
    double ret = item.net_price(n);
    cout<<"ISBN: "<<item.isbn() << " # sold: " << n << " total due: " << ret << endl;
    return ret;
}

int main()
{
    Quote basic("first", 55.5);
    Bulk_quote bulk("second",55.5,50,0.5);
    print_total(basic, 55);
    print_total(bulk,55);
    return 0;
}