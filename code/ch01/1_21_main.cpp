#include <iostream>
#include "Sales_item.h"
using namespace std;

int main()
{
  Sales_item book1, book2;
  cin >> book1 >> book2;
  cout << book1 << endl;
  cout << book2 << endl;
  cout << "book1 + book2 = " << book1 + book2 << endl;
  return 0;
}