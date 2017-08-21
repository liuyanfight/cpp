#include <iostream>
#include <string>
using namespace std;

int main()
{
  const string s = "Keep out!";
  for(auto &c : s){
    cout << c <<endl;
  }
  
  const int ci = 42;   // 不能改变 ci 的值，这是一个顶层 const  
  auto &r = ci; 
  r = 1;
  cout << r << endl;
  return 0;
}