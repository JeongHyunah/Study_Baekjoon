#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//10809번 알파벳 찾기
int main() {
	int arrString[26];
	memset(arrString, -1, sizeof(arrString));
	char arr[100];
	scanf("%s", &arr);

	for (int i = 0; arr[i] != NULL; i++) {
		int num = (int)arr[i] - 97;
		if (arrString[num] != -1)
			continue;
		arrString[num] = i;
	}
	for (int i = 0; i < 26; i++)
		printf("%d ", arrString[i]);
	return 0;
}