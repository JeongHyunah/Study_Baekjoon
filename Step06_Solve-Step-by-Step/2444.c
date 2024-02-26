#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_INPUT_LENGTH 110

/*
	구분: 심화 1
	문제: 2444번(별 찍기)
	날짜: 2024-02-26 ~ 2024-02-27

	난이도: 하 ~ 중
	★(X) *(O) 별의 형식이 잘못된 바람에 출력 초과가 뜨고 뭐가 문제인지 한참을 찾았다.
*/
int main() {
	int count, star, index, space;
	int arr[100], i, j, m, n, k;

	scanf("%d", &count);

	// ex) 5
	// 1 -> 3 -> 5 -> 7 -> 9 -> 7 -> 5 -> 3 -> 1
	for (i = 0; i < count; i++)
	{
		star = 1;
		for (j = i; j > 0; j--)
		{
			star += 2;
		}
		arr[i] = star;
	}

	index = count - 1;
	for (m = 0; m < count; m++)
	{
		space = arr[index];
		space = (space - 1) / 2;
		for (int k = 0; k < space; k++)
		{
			printf(" ");
		}
		for (n = 0; n < arr[m]; n++)
		{
			printf("*");
		}
		printf("\n");
		index--;
	}

	index = 1;
	for (m = count - 2; m >= 0; m--)
	{
		space = arr[index];
		space = (space - 1) / 2;
		for (k = 0; k < space; k++)
		{
			printf(" ");
		}
		for (n = 0; n < arr[m]; n++)
		{
			printf("*");
		}
		printf("\n");
		index++;
	}

	return 0;
}
