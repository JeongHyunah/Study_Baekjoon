#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//11021¹ø A+B -7
int main() {
	int T, num1, num2;
	int arr[100];
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &num1, &num2);
		arr[i] = num1 + num2;
	}
	for (int i = 0; i < T; i++) {
		printf("Case #%d: %d\n", i + 1, arr[i]);
	}
}