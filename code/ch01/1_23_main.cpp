#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
  Sales_item currVal, val;

  if (cin >> currVal)
  {
    int cnt = 1;
    while (cin >> val) 
    {
      if(val.isbn() == currVal.isbn()) {
        cnt++;
      }
      else {
        cout << currVal.isbn() << " has " << cnt << " sales item." << endl;
        cnt = 1;
        currVal = val;
      }
    }
    cout << currVal.isbn() << " has " << cnt << " sales item." << endl;
  }
  return 0;
}