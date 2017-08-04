#include <iostream>
using namespace std;

int main()
{
  int a,b;
  cout << "Pls input two numbet:" ;
  cin >> a >> b;
  if (b > a)
  {
    int tmp = a;
    a = b;
    b = tmp;
  }
  while(b <= a)
  {
    cout << b << " ";
    b++;
  }
  cout << endl;
  return 0;
}