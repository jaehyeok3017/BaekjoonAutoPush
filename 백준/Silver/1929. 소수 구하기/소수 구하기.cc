#include <iostream>

using namespace std;

bool check[1000000] = {false};

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    for(int i = 2; i<=b; i++){
        if(check[i] == false){
            for(int j = i+i; j<=b; j+=i){
                check[j] = true;
            }
        }
    }

    check[1] = true;

    for (int i = a; i <= b; i++){
		if (!check[i]) printf("%d\n", i);
	}
}