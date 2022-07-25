#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

//10952¹ø A+B -5
int main() {
	while (true) {
		int num1, num2;
		scanf("%d %d", &num1, &num2);
		if (num1 == 0 && num2 == 0) {
			return 0;
		}
		printf("%d\n", num1 + num2);
	}
}