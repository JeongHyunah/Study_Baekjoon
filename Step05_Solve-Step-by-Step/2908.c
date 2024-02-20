#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int Baekjoon_2908() {
	int numA, numB, num1, num2, max = 0;
	scanf("%d %d", &num1, &num2);

	numA = ((num1 / 100) % 100);
	numA += ((num1 / 10) % 10) * 10;
	numA += (num1 % 10) * 100;

	numB = ((num2 / 100) % 100);
	numB += ((num2 / 10) % 10) * 10;
	numB += (num2 % 10) * 100;

	max = numA > numB ? numA : numB;
	printf("%d", max);
	return 0;
}