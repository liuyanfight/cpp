#include <string>
using namespace std;

class Quote
{
private:
    string bookNo;
protected:
    double price = 0.0;
public:
    Quote()=default;
    Quote(const string& book, double sales_price):bookNo(book), price(sales_price){}
    string isbn() const {return bookNo;}
    virtual double net_price(size_t n) const{return n * price;}
    virtual ~Quote() = default;
};
