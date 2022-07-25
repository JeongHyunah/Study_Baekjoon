#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//1157번 단어 공부
int main() {
	char arr[1000000];
	int num, count = 0, max = -1, arrALP[100] = { 0 };

	scanf("%s", &arr);

	for (int i = 0; arr[i] != NULL; i++) {
		num = arr[i];
		if (num >= 97 && num <= 122)
			num -= 32;
		arrALP[num] ++;
	}
	for (int i = 65; i <= 90; i++) {
		if (arrALP[i] > max) {
			max = arrALP[i];
			num = i;
		}
	}
	for (int i = 65; i <= 90; i++) {
		if (arrALP[i] == max) {
			count++;
			if (count > 1) {
				printf("?");
				return 0;
			}
		}
	}
	printf("%c", num);
	return 0;
}