#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int arr[6];
	
	for (int i = 0; i < 6; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 2; i++) {
		if (arr[i] == 0)
			printf("1 ");
		else if (arr[i] == 1) {
			printf("0 ");
		}
		else
			printf("-%d ", arr[i] - 1);
	}
	for (int i = 2; i < 5; i++) {
		if (arr[i] == 0)
			printf("2 ");
		else if (arr[i] == 1)
			printf("1 ");
		else if (arr[i] == 2)
			printf("0 ");
		else
			printf("-%d ", arr[i] - 2);
	}
	if (arr[5] == 0)
		printf("8");
	else if (arr[5] > 8)
		printf("-%d ", arr[5] - 8);
	else
		printf("%d ", 8 - arr[5]);
}