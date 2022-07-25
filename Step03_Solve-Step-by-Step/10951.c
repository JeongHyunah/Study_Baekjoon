#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//10951¹ø A+B -4
int main() {
	int num1, num2, eof = 0;
	while (eof != EOF) {
		eof = scanf("%d %d", &num1, &num2);
		if (eof != EOF) {
			printf("%d\n", num1 + num2);
		}
	}
	return 0;
}