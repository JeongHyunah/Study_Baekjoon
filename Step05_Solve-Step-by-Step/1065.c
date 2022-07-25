#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

//1065¹ø ÇÑ¼ö
bool sequence(int num) {
	int arr[100];
	int a, b, c, sub;
	while (true) {
		if (num >= 10 && num < 100) {
			return true;
		}
		else if (num >= 100 && num < 1000) {
			a = (num / 100) % 100;
			b = (num / 10) % 10;
			c = num % 10;
			sub = a - b;
			if (sub == b - c)
				return true;
			return false;
		}
		else if (num == 1000)
			return false;
		return true;
	}
}

int main() {
	int num, count = 0;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		if (sequence(i)) {
			count++;
		}
	}
	printf("%d", count);
	return 0;
}