#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//8958¹ø OXÄûÁî
int main() {
	int num, score, sum;
	char arr[80];

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		sum = 0;
		score = 1;
		scanf("%s", &arr);
		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == 'O') {
				sum += score;
				score++;
			}
			if (arr[j] == 'X') score = 1;
		}
		printf("%d\n", sum);
	}
	return 0;
}