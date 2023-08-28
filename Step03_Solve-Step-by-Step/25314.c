#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	int square;
	scanf("%d", &square);
	for (int i = 4; i <= square; i += 4) {
		printf("long ");
	}
	printf("int");
}