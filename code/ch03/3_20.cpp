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
  for(unsigned i = 0; i < vec.size() - 1; i=i+2) {
    cout << vec[i] + vec[i+1] << " ";
  }
  if (vec.size() % 2 == 1)
  {
    cout << vec[vec.size()-1]; 
  }
  cout << endl;

  for(unsigned i = 0; i < vec.size()/2; i++) {
    cout << vec[i] + vec[vec.size() - i - 1] << " ";
  }
  if (vec.size() % 2 == 1)
  {
    cout << vec[vec.size()/2]; 
  }
  cout << endl;
  return 0;
}