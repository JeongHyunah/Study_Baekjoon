#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//2753¹ø À±³â
int main() {
	int year, check_1, check_2, check_3;
	scanf("%d", &year);

	check_1 = year % 4;
	check_2 = year % 100;
	check_3 = year % 400;

	if (check_1 == 0 && (check_2 != 0 || check_3 == 0)) {
		printf("1");
	}
	else
		printf("0");
	return 0;
}