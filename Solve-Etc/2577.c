#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//2577번 숫자의 개수
int main() {
	int num1, num2, num3, mul, val;
	int arr[10] = { 0 };

	scanf("%d", &num1);
	scanf("%d", &num2);
	scanf("%d", &num3);
	mul = num1 * num2 * num3;

	while (mul > 0) {
		val = mul % 10;
		arr[val] ++;
		mul /= 10;
	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}