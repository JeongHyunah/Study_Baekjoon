#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//2439¹ø º° Âï±â -2
int main() {
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 1; j < num - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < i + 1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}