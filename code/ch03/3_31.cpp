#include <iostream>
using namespace std;

<<<<<<< HEAD
int main()
{
  int a[10] = {0};
  for(unsigned i = 0; i < 10; ++i) {
      a[i] = i;
      cout << a[i] << " "; 
  } 
  return 0;
=======
int main(int argc, char const *argv[])
{
	int a[10];
	for (int i = 0; i < 10; ++i)
	{
		a[i] = i;
		cout << "a[" << i << "] = " << a[i] << endl;
	}
	return 0;
>>>>>>> a2a97ec569e592c12bcb51d78428197d7f6f52a1
}