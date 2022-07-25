#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//2562¹ø ÃÖ´ñ°ª
int main() {
	int num, max = 0, index = 0;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &num);
		if (num > max) {
			max = num;
			index = i + 1;
		}
	}
	printf("%d\n%d", max, index);
	return 0;
}