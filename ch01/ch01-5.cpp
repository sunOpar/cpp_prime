#include <iostream>

int main()
{
  std::cout << "please type two number";
  std::cout << std::endl;
  int v1 = 0;
  int v2 = 0;
  std::cin >> v1;
  std::cin >> v2;
  std::cout << "the result for ";
  std::cout << v1;
  std::cout << " and ";
  std::cout << v2;
  std::cout << " is ";
  std::cout << v1 * v2;
  std::cout << std::endl;
  return 0;
}