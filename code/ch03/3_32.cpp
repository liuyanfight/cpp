#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[10], b[10];
	vector<int> v,v2;
	for (int i = 0; i < 10; ++i)
	{
		a[i] = i;
		b[i] = a[i];
		v.push_back(i);
	}

	v2 = v;

	for(auto&& i : b) {
		cout << "b[" << i << "] = " << b[i] << endl;
	}

	for(auto&& i : v2) {
		cout << "v2[" << i << "] = " << i << endl;
	}
	return 0;
}