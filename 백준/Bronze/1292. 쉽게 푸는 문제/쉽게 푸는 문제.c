#include <stdio.h>

int main() {
    int a[10000] = {0,};

    int idx = 0;
    for(int i = 0; i<50; i++){
        for(int j = 0; j<=i; j++){
            a[idx] = i+1;
            idx++;
        }
    }

    int b, c = 0;
    scanf("%d %d", &b, &c);

    int sum = 0;
    for(int i = b - 1; i <= c - 1; i++){
        sum += a[i];
    }

    printf("%d", sum);
}