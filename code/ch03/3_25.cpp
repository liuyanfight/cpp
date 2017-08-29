#include <iostream>
#include <vector>
using namespace std;

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
}