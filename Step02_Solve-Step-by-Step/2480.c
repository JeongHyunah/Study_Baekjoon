#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//2480번 주사위 세개
int main() {
	int num1, num2, num3;
	int money, dice, max;
	scanf("%d %d %d", &num1, &num2, &num3);

	if (num1 == num2 && num1 == num3 && num2 == num3) {
		money = 10000 + num1 * 1000;
	}
	else if (num1 == num2 || num1 == num3 || num2 == num3) {
		dice = (num1 == num2) ? num1 : (num1 == num3) ? num3 : num2;
		money = 1000 + dice * 100;
	}
	else {
		max = num1 > num2 ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
		money = max * 100;
	}
	printf("%d", money);
	return 0;
}