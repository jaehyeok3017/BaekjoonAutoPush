#include <iostream>
#include <algorithm>

int dp[5001] = {0};

int main() {
    int n;
    scanf("%d", &n);
    
    dp[3] = 1;
    dp[5] = 1;

    for(int i = 6; i<=n; i++){
        if(dp[i-3] == 0 && dp[i-5] == 0) continue;
        else if(dp[i-3] == 0) dp[i] = dp[i-5] + 1;
        else if(dp[i-5] == 0) dp[i] = dp[i-3] + 1;
        else {
            if(dp[i-3] < dp[i-5]) dp[i] = dp[i-3] + 1;
            else dp[i] = dp[i-5] + 1;
        }
    }

    if(dp[n] == 0) printf("-1");
    else printf("%d", dp[n]);
}