#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//11022¹ø A+B -8
int main() {
	int T, num1, num2;
	int arr[100];
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d %d", &num1, &num2);
		arr[i] = num1 + num2;
		printf("Case #%d: %d + %d = %d\n",
			i + 1, num1, num2, arr[i]);
	}
	return 0;
}