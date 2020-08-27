#include <iostream>

int main()
{
  std::cout << "Please type two number" << std::endl;
  int v1 = 0, v2 = 0;
  std::cin >> v1 >> v2;
  int point = v1;
  while(point <= v2) {
    std::cout << point << " ";
    point++;
  }
  std::cout << std::endl;

  return 0;
}