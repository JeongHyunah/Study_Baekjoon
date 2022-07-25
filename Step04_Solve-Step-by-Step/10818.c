#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//10818번 최소, 최대
int main() {
	int num, max = -1000001, min = 1000001;

	scanf("%d", &num);
	int* arr = (int*)malloc(sizeof(int) * num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < num; i++) {
		min = arr[i] < min ? arr[i] : min;
		max = arr[i] > max ? arr[i] : max;
	}
	printf("%d %d", min, max);
	free(arr);
	return 0;
}