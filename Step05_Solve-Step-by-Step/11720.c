#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Baekjoon_11720() {
	int num, sum = 0;
	char arr[100];
	scanf("%d", &num);

	scanf("%s", &arr);

	for (int i = 0; i < num; i++) {
		sum += arr[i] - '0';
	}
	printf("%d", sum);
	return 0;
}