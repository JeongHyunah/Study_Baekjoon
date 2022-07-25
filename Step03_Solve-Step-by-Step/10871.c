#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//10871번 X보다 작은 수
int main() {
	int n, x;
	int arr[10000] = { 0 };
	scanf("%d %d", &n, &x);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		if (arr[i] < x)
			printf("%d ", arr[i]);
		else
			continue;
	}
	return 0;
}