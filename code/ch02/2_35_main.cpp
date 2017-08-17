#include <iostream>
#include <typeinfo>
using namespace std;

int main()
{
  const int i = 42;
  auto j = i; const auto &k = i; auto *p = &i; 
  const auto j2 = i, &k2 = i;

   // cout << "i " << typeid( i ).name() << endl;
   // cout << "j " << typeid( j ).name() << "    k " << typeid( k ).name() << "    p " << typeid( p ).name()<< endl;
   // cout << "j2 " << typeid( j2 ).name() << "    k2 " << typeid( k2 ).name() << endl;

  std::cout << std::endl;
  std::cout << std::boolalpha;

  std::cout << "i and j  have same type? "
            << std::is_same<decltype(i), decltype(j)>::value << "\n";
  std::cout << "i and k  have same type? "
            << std::is_same<decltype(i), decltype(k)>::value << "\n";
  std::cout << "i and j2 have same type? "
            << std::is_same<decltype(i), decltype(j2)>::value << "\n";
  std::cout << "j and j2 have same type? "
            << std::is_same<decltype(j), decltype(j2)>::value << "\n";
  std::cout << "k and k2 have same type? "
            << std::is_same<decltype(k), decltype(k2)>::value << "\n";
}