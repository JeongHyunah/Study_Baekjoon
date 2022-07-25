#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1330번 두 수 비교하기
int main() {
	int num1, num2;
	scanf("%d %d", &num1, &num2);

	if (num1 < num2)
		printf("<");
	else if (num1 > num2)
		printf(">");
	else
		printf("==");
	return 0;
}