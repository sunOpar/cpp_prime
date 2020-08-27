#include <iostream>

int main()
{
  int v = 10;
  int sum = 0;
  while(v >= 0) {
    sum += v;
    v--;
  }
  std::cout << "The 10 to 1 conclusive is " << sum << std::endl;
  return 0;
}