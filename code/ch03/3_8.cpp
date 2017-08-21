#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s = "string";
  int i = 0;
  while (s[i] != '\0')
  {
    s[i] = 'X';
    i++;
  }
  cout << s << endl;

  for(unsigned i = 0; i < s.size(); ++i) {
    s[i] = 'X';
  }
  cout << s <<endl;
  return 0;
}