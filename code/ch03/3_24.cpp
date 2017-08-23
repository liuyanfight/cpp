#include <iostream>
#include <vector>
using namespace std;

int main()
{
  vector<int> vec;
  int num;
  while(cin >> num)
  {
    vec.push_back(num);
  }
  auto a = vec.cbegin();
  auto b = vec.cend();

  while (a != b && a != (b-1))
  {
    cout << *a + *(a+1) << " "; 
    a = a + 2;
  }
  if (a == (b - 1))
  {
    cout << *a;
  }
  cout << endl;

  a = vec.cbegin();
  b = vec.cend() - 1;
  while (a != b && a != b+1)
  {
    cout << *a + *b << " "; 
    a++;
    b--;
  }
  if (a == b)
  {
    cout << *a;
  }
  cout << endl; 
  return 0;
}