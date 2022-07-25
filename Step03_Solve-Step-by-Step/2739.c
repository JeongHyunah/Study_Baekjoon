#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//2739번 구구단
int main() {
	int num;
	scanf("%d", &num);

	for (int i = 1; i < 10; i++) {
		printf("%d * %d = %d\n", num, i, num * i);
	}
	return 0;
}