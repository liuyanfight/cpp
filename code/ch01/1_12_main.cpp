#include <iostream>
using namespace std;

int main()
{
  int sum = 0;
  for (int i = -100; i <= 100; ++i)
  {
    sum += i;
    cout << i << " ";
  }
  cout << endl;
  cout << sum <<endl;
  return 0;
}