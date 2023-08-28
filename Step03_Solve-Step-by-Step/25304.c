#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	int total, stuff, price, number, totalTest = 0;
	scanf("%d\n %d", &total, &stuff);
	for (int i = 0; i < stuff; i++) {
		scanf("%d %d", &price, &number);
		totalTest += price * number;
	}
	printf(total == totalTest ? "Yes" : "No");
}