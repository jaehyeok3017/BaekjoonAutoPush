#include <iostream>
#include <algorithm>

int dp[1000010] = {0, 0, };

int main(){
    int n;
    scanf("%d", &n);

    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + 1;

        if(i % 2 == 0) {
            int tmp = dp[i/2] + 1;
            if(dp[i] > tmp) dp[i] = tmp;
        }

        if(i % 3 == 0){
            int tmp = dp[i/3] + 1;
            if(dp[i] > tmp) dp[i] = tmp;
        }
    }

    printf("%d", dp[n]);
    return 0;
}