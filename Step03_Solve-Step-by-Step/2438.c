#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//º° Âï±â -1
int main() {
	int num;
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}