#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//8393Йј Че
int main() {
	int num, sum = 0;
	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
		sum += i;
	printf("%d", sum);
}