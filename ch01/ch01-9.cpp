#include <iostream>

int main()
{
  int v1 = 50;
  int sum = 0;
  while(v1 <= 100) {
    sum = sum + v1;
    v1++;
  }
  std::cout << sum << std::endl;
  return 0;
}