#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
  string s;
  vector<string> text;

  while (getline(cin, s))  // read the entire input file
    text.push_back(s);   // storing each line as an element in text
  // cout << "text.size: " << text.size() << endl;

  // cout << int(text[4][0]) <<endl;
  // cout << text[4].empty() <<endl;

  // if (text[4] == "\r") {
  //   cout << "true" << endl;
  // }

  for(auto i = text.begin(); i != text.end() && *i != "\r"; ++i) {
    cout << *i << " ";
    for(auto j = i->begin(); j < i->end(); ++j) {
      *j = toupper(*j);
    }
  }
  cout <<"\n\n" << endl;

  for(auto i = text.begin(); i != text.end() && *i != "\r"; ++i) {
    cout << *i << " ";
  }
  cout << endl;
  return 0;
}