#include <iostream>
#include <vector>
using namespace std;

void printInt(vector<int> v)
{
  cout << v.size() << "\t";
  for(auto&& i : v) {
    cout << i << "\t";
  }
  cout << endl;
}

void printString(vector<string> v)
{
  cout << v.size() << "\t";
  for(auto&& i : v) {
    cout << i << " ";
  }
  cout << endl;
}

int main()
{
  vector<int> v1;         // size:0,  no values.
  vector<int> v2(10);     // size:10, value:0
  vector<int> v3(10, 42); // size:10, value:42
  vector<int> v4{ 10 };     // size:1,  value:10
  vector<int> v5{ 10, 42 }; // size:2,  value:10, 42
  vector<string> v6{ 10 };  // size:10, value:""
  vector<string> v7{ 10, "hi" };  // size:10, value:"hi"

  printInt(v1);
  printInt(v2);
  printInt(v3);
  printInt(v4);
  printInt(v5);
  printString(v6);
  printString(v7);
  return 0;
}