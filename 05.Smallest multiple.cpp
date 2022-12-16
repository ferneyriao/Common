#include <iostream>
#include <numeric>

int main() {
  int result = 1;

  for (int i = 2; i <= 20; ++i) {
    result = std::lcm(result, i);
  }

  std::cout << result << std::endl;

  return 0;
}
