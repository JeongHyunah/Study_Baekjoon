#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//14681번 사분면 고르기
int main() {
	int coord1, coord2;
	scanf("%d %d", &coord1, &coord2);

	if (coord1 < 0 && coord2 < 0) {
		printf("3");
	}
	else if (coord1 < 0 && coord2 > 0) {
		printf("2");
	}
	else if (coord1 > 0 && coord2 < 0) {
		printf("4");
	}
	else
		printf("1");
	return 0;
}