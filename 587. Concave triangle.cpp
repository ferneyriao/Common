#include <iostream>
#include <cmath>
#include <numeric>

double integral(double x) {
  double t = x - 1.0;
  return t - (sqrt(x * (2.0 - x)) * t + asin(t)) / 2.0;
}

int main() {
  double lsectionarea = 1.0 - M_PI / 4.0;
  for (int i = 1;; ++i) {
    double slope = 1.0 / i;
    double a = slope * slope + 1.0;
    double b = -2.0 * (slope + 1.0);
    double c = 1.0;
    double x = (2.0 * c) / (-b + sqrt(b * b - 4 * a * c));
    double concavetrianglearea = (x * x * slope / 2) + (integral(1.0) - integral(x));
    if (concavetrianglearea / lsectionarea < 0.001) {
      std::cout << i << std::endl;
      return 0;
    }
  }
}
