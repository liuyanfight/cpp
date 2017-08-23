#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  vector<string> v1;
  string s;
  while(cin >> s) {
    v1.push_back(s);
  }

  for(auto&& i : v1) {
    for(auto&& j : i) {
      j=toupper(j);
    }
    cout << i << " ";
  }
  cout << endl;
  return 0;
}