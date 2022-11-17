#include <iostream>

void fibonacci(int n);
int dpZero[41] = {0};
int dpOne[41] = {0};

int main(){
    int a;
    scanf("%d", &a);

    for(int i = 0; i<a; i++){
        int b;
        scanf("%d", &b);

        fibonacci(b);
        printf("%d %d\n", dpZero[b], dpOne[b]);
    }
}

void fibonacci(int n) {
    dpZero[0] = 1;
    dpZero[1] = 0;
    dpOne[0] = 0;
    dpOne[1] = 1;

    for(int i = 2; i<41; i++){
        dpZero[i] = dpZero[i-1] + dpZero[i-2];
        dpOne[i] = dpOne[i-1] + dpOne[i-2];
    }
}