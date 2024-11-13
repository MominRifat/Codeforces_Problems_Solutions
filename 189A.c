//Created By Momin_Rifat
#include <stdio.h>
int main() {
    int n, a, b, c;
    scanf("%d %d %d %d", &n, &a, &b, &c);

    int dp[n + 1];
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        dp[i] = -1;
        if (a <= i && dp[i - a] != -1)
            dp[i] = dp[i - a] + 1;
        if (b <= i && (dp[i - b] != -1 && dp[i] < dp[i - b] + 1))
            dp[i] = dp[i - b] + 1;
        if (c <= i && (dp[i - c] != -1 && dp[i] < dp[i - c] + 1))
            dp[i] = dp[i - c] + 1;
    }

    printf("%d\n", dp[n]);

    return 0;
}