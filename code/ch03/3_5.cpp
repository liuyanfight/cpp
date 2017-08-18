#include <iostream>
#include <string>
using namespace std;

int main()
{
  string s,line;
  // while(cin >> s)
  // {
  //   line += s;
  // }
  // cout << line << endl;

  while(cin >> s)
  {
    line += s;
    line += " ";
  }
  cout << line << endl;
  return 0;

}