#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

//4344번 평균은 넘겠지
int main() {
	int num;
	char arr[10000];

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		int sub = 0, avg = 0, count = 0;
		float val = 0.0;
		scanf("%d", &sub);
		for (int j = 0; j < sub; j++) {
			scanf("%d", &arr[j]);
			avg += arr[j];
		}
		avg = avg / sub;
		for (int k = 0; k < sub; k++) {
			if (arr[k] > avg) {
				count++;
			}
		}
		val = count / (double)sub * 100;
		printf("%0.3f%%\n", round(val * 1000) / 1000);
	}
	return 0;
}