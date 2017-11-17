#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int a[10] = {};
  vector<int> v(begin(a),end(a));

  for(auto&& i : v) {
    cout << i << " ";
  }
  return 0;
}