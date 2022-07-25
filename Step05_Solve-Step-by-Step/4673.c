#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//4673¹ø ¼¿ÇÁ ³Ñ¹ö
int num_check(int i) {
	int sum = i;
	while (i > 0) {
		sum += i % 10;
		i = i / 10;
	}
	return sum;
}

int main() {
	int* arr = (int*)calloc(100, sizeof(int) * 10000);
	int num;

	for (int i = 1; i <= 10000; i++) {
		num = num_check(i);
		if (num < 10000)
			arr[num] = 1;
	}
	for (int i = 1; i <= 9999; i++) {
		if (arr[i] != 1) {
			printf("%d\n", i);
		}
	}
	free(arr);
	return;
}