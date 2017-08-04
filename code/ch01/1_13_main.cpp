#include <iostream>
using namespace std;

int main()
{
  cout << "1.9 50 +...+100" << endl;
  int sum = 0;
  for(unsigned i = 50; i <= 100; ++i) {
    sum += i;
  }
  cout << "sum = " << sum << endl;

  cout << endl << "1.10 print 10 - 1" << endl;
  for(unsigned i = 10; i >= 1; --i) {
    cout << i << " ";
  }
  cout << endl;

  cout << endl << "1.11 print range" << endl;
  cout << "Pls input a & b:";
  int a,b;
  cin >> a >> b;
  if(a > b) 
  {
    int tmp = a;
    a = b;
    b = tmp;
  }
  for(unsigned i = a; i <= b; ++i) {
    cout << i << " ";
  }
  cout << endl;
  return 0;
}