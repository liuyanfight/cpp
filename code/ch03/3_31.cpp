#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int a[10];
	for (int i = 0; i < 10; ++i)
	{
		a[i] = i;
		cout << "a[" << i << "] = " << a[i] << endl;
	}
	return 0;
}