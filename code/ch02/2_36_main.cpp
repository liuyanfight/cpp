#include <iostream>
using namespace std;

int main()
{
  int a = 3, b = 4;
  decltype(a) c = a;
  decltype((b)) d = a;

  cout << a << "\t" << b << "\t" << c << "\t" << d <<endl;
  ++c;
  ++d;
  cout << "after   ++c; ++d;" << endl;
  cout << a << "\t" << b << "\t" << c << "\t" << d <<endl;
  return 0;
}