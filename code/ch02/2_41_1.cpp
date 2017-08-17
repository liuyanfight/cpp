#include <iostream>
using namespace std;

struct Sales_data {
  string bookNo;
  unsigned units_sold = 0;
  double price = 0.0;
};

int main()
{
  // Add
  Sales_data item1, item2;
  cin >> item1.bookNo >>  item1.units_sold >> item1.price;
  cin >> item2.bookNo >>  item2.units_sold >> item2.price;

  if (item1.bookNo == item2.bookNo)
  {
    item1.units_sold += item2.units_sold;
    cout << item1.bookNo << "\t" << item1.units_sold << "\t" << item1.price << endl;
    return 0;
  }
  else
  {
    cerr << "bookNo not equal" << endl;
    return -1;
  }

  // total
  return 0;
}