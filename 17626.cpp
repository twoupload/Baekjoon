#include <stdio.h>
#include <algorithm>
using namespace std;

int dp[50005];

int main() {
    int n;

    scanf("%d", &n);

    for (int i = 1;i <= n;i++) {
        dp[i] = dp[i - 1] + 1;
        for (int j = 1;j * j <= i;j++) {
            dp[i] = min(dp[i], dp[i - j * j] + 1);
        }
    }

    printf("%d", dp[n]);

    return 0;
}