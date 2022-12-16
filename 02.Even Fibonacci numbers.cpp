#include <iostream>

using namespace std;

int main() {
  int ans = 0;
  int x = 1;
  int y = 2;
  while (x <= 4000000) {
    if (x % 2 == 0) {
      ans += x;
    }
    int temp = y;
    y = x + y;
    x = temp;
  }
  cout << ans << endl;
  return 0;
}
