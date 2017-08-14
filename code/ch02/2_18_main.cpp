#include <iostream>
using namespace std;

int main()
{
  int i = 0, j = 1;
  int *p = &i;
  cout << "i = " << i << ", j = " << j << ", *p = " << *p << ", p = " << p << endl;
  p = &j;
  cout << "after changing the value of ptr: \ni = " << i << ", j = " << j << ", *p = " << *p << ", p = " << p <<endl;
  *p = 5;
  cout << "after changing the value of ptr point: \ni = " << i << ", j = " << j << ", *p = " << *p << ", p = " << p << endl;
  return 0;
}