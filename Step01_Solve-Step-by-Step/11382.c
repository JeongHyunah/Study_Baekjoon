#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	long long sum, num1, num2, num3;
	scanf("%lld %lld %lld", &num1, &num2, &num3);
	sum = num1 + num2 + num3;
	printf("%lld", sum);
}