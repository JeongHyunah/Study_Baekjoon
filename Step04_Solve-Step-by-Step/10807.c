#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

//다른 방식 생각해보기

int main() {
	int index, findNumber, count = 0;
	int arr[100];
	scanf("%d", &index);

	for (int i = 0; i < index; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &findNumber);

	for (int i = 0; i < index; i++) {
		if (findNumber == arr[i])
			count++;
	}
	printf("%d", count);
}