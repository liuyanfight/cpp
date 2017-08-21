#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
  string s;
  getline(cin,s);
  for(auto&& i : s) {
    if (ispunct(i))
    {
      i = ' ';
    }
  }
  cout << s << endl;
  return 0;
}