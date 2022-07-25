#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//3052번 나머지
int main() {
	int num, com, val = 0;
	int arr[10] = { 0 };

	for (int i = 0; i < 10; i++) {
		scanf("%d", &num);
		arr[i] = num % 42;
	}
	for (int i = 0; i < 10; i++) {
		int count = 0;
		for (int j = i + 1; j < 10; j++) {
			if (arr[i] == arr[j]) count++;
		}
		if (count == 0) val++;
	}
	printf("%d", val);
	return 0;
}