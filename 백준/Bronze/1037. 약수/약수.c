#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int numCount, inputNum;
	int minNum = 99999, maxNum = 0;
	scanf("%d", &numCount);

	if (numCount == 1) {
		scanf("%d", &inputNum);
		printf("%d", inputNum * inputNum);
	}

	else {
		for (int i = 0; i < numCount; i++) {
			scanf("%d", &inputNum);

			if (inputNum < minNum) {
				minNum = inputNum;
			}

			if (inputNum > maxNum) {
				maxNum = inputNum;
			}
		}
		printf("%d", minNum * maxNum);
	}
}