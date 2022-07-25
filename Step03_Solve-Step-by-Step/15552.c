#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//1552¹ø ºü¸¥ A+B
int main() {
	int T, num1, num2;
	scanf("%d", &T);
	int* arr = (int*)malloc(sizeof(int) * T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d", &num1, &num2);
		arr[i] = num1 + num2;
	}
	for (int i = 0; i < T; i++) {
		printf("%d\n", arr[i]);
	}
	free(arr);
	return 0;
}