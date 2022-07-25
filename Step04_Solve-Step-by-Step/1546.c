#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//1546¹ø Æò±Õ
int main() {
	int num, max = 0;
	int score[1000] = { 0 };
	double val = 0.0;
	double arr[1000] = { 0.0 };

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &score[i]);
		max = score[i] > max ? score[i] : max;
	}
	for (int i = 0; i < num; i++) {
		arr[i] = (score[i] / (double)max) * 100;
		val += arr[i];
	}
	printf("%f", val / num);
}