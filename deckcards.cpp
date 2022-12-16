#include <iostream>
#include <algorithm>

using namespace std;

const int MOD = 1000000007;

int main() {
    int n = 10000000;
    int s = 10000000;

    // Allocate the array dynamically using new
    int** dp = new int* [s + 1];
    for (int i = 0; i <= s; i++) {
        dp[i] = new int[n + 1];
    }

    // Initialize dp[0][0] to 1
    dp[0][0] = 1;

    for (int i = 1; i <= s; i++) {
        for (int j = 1; j <= n; j++) {
            // sum(dp[i - 1][k]) for all k < j
            for (int k = 0; k < j; k++) {
                dp[i][j] = (dp[i][j] + dp[i - 1][k]) % MOD;
            }
        }
    }

    int ans = 0;
    // sum(dp[s][j]) for all j from 1 to n
    for (int j = 1; j <= n; j++) {
        ans = (ans + dp[s][j]) % MOD;
    }

    cout << ans << endl;

    // Deallocate the array
    for (int i = 0; i <= s; i++) {
        delete[] dp[i];
    }
    delete[] dp;

    return 0;
}
