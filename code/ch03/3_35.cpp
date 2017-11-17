#include <iostream>
using namespace std;

int main()
{
  int a[10] = {1,1};
  int *p = a;
  for(unsigned i = 0; i < 10; ++i) {
      p[i] = 0;
      cout << a[i] << " "; 
  } 
  return 0;
}