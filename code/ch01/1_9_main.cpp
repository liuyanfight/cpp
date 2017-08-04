#include <iostream>
using namespace std;

int main()
{
  int i = 100,sum = 0;
  while(i >= 50)
  {
    cout << i <<endl;
    sum += i;
    i--;
  }
  cout << sum << endl;
  return 0;
}