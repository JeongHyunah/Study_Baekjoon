#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//2675번 문자열 반복
int main() {
	int num, rote;
	char arr[20];
	scanf("%d", &num);

	for (int i = 0; i < num; i++) {
		scanf("%d", &rote);
		scanf("%s", &arr);
		for (int j = 0; arr[j] != NULL; j++) {
			for (int k = 0; k < rote; k++)
				printf("%c", arr[j]);
		}
		printf("\n");
	}
	return 0;
}