#include <iostream>

int main() {
  long long n = 600851475143;
  int i = 2;
  while (n > 1) {
    if (n % i == 0) {
      n /= i;
    } else {
      i++;
    }
  }
  std::cout << "El mayor factor primo es: " << i << std::endl;
  return 0;
}
