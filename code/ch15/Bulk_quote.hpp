#include "Quote.hpp"

class Bulk_quote : public Quote
{
private:
    std::size_t min_qty = 0;
    double discount = 0.0;
public:
    Bulk_quote() = default;
    Bulk_quote(const std::string& str, double price, std::size_t n, double discount):Quote(str, price),min_qty(n),discount(discount)
    {
    }
    double net_price(std::size_t n) const override
    {
        if(n >= min_qty)
        {
            return (1-discount) * price * n;
        }
        else
        {
            return n * price;
        }
        
    };
    ~Bulk_quote(){}
};