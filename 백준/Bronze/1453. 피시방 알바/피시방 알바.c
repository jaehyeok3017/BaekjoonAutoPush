#include <stdio.h>

int a[101] = {0,};

int main() {
    int n, count = 0;
    scanf("%d", &n);
    
    for(int i = 0 ; i<n; i++){
        int b;
        scanf("%d", &b);

        if(a[b] == 0) a[b]++;
        else count++;
    }

    printf("%d", count);
}