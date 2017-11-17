#include <iostream>
#include <vector>
using namespace std;

<<<<<<< HEAD
int main()
{
  vector<unsigned> scores(11, 0);
  unsigned grade;
  while (cin >> grade){
    if(grade <= 100) {
      ++ *(scores.begin() + grade/10);
    }
  }

  for(auto&& i : scores) {
    cout << i << " ";
  }
  return 0;
=======
int main(int argc, char const *argv[])
{
	vector<unsigned> scores(11,0);
	unsigned grade;
	auto b = scores.begin();
	while (cin >> grade){
		if (grade <= 100)
		{
			(*(b+grade/10))++;
		}
	}

	//print
	for(auto&& i : scores) {
		cout << i << "\t";
	}
	cout << endl;
	return 0;
>>>>>>> a2a97ec569e592c12bcb51d78428197d7f6f52a1
}