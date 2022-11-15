#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int count, repeat;
	scanf("%d %d", &count, &repeat);

	int tmp;
	int sum = 0;
	int repeatList[100000] = {0};

	for (int i = 1; i <= count; i++) {
		scanf("%d", &tmp);
		sum += tmp;
		repeatList[i] = sum;
	}

	for (int i = 0; i < repeat; i++) {
		int a, b;
		scanf("%d %d", &a, &b);

		printf("%d\n", repeatList[b] - repeatList[a-1]);
	}
}