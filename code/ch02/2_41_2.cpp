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
  Sales_data item1;
  if (cin >> item1.bookNo >>  item1.units_sold >> item1.price) {
    Sales_data item2;
    while (cin >> item2.bookNo >>  item2.units_sold >> item2.price)
    {
      if (item1.bookNo == item2.bookNo)
      {
        item1.units_sold += item2.units_sold;
      }
      else
      {
        cout << item1.bookNo << "\t" << item1.units_sold << "\t" << item1.price << endl;
        item1 = item2;
      }
    }
    cout << item1.bookNo << "\t" << item1.units_sold << "\t" << item1.price << endl;
  } 
  else
  {
    cerr << "No Data" << endl;
    return -1;
  }

  return 0;
}