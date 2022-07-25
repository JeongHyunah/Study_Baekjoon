#include <stdio.h>

//15596번 정수 N개의 합
long long sum(int* a, int n) {
	long long sum_a = 0;
	for (int i = 0; i < n; i++) {
		sum_a += a[i];
	}
	return sum_a;
}