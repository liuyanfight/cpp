#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s = "string";

  for (char &i : s)
  {
    i = 'X';
  }
  cout << s << endl;
  return 0;
}