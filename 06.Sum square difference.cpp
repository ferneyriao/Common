#include <iostream>

int main() {
  int sum_of_squares = 0;
  int square_of_sum = 0;

  // Calculate the sum of the squares
  for (int i = 1; i <= 100; i++) {
    sum_of_squares += i * i;
  }

  // Calculate the square of the sum
  for (int i = 1; i <= 100; i++) {
    square_of_sum += i;
  }
  square_of_sum *= square_of_sum;

  // Calculate and print the difference
  int difference = square_of_sum - sum_of_squares;
  std::cout << "The difference is: " << difference << std::endl;

  return 0;
}
