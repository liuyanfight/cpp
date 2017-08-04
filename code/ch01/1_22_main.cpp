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
        cout << currVal + val << endl;
        cnt = 1;
        currVal = val;
      }
    }
    cout << currVal << endl;
  }
  return 0;
}