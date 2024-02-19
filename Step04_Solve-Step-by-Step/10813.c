#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	구분: 1차원배열
	문제: 10813번(공 바꾸기)
	날짜: 2024-02-19
	
	난이도: 하
	10810번 문제를 풀었다면 5분안에 해결이 가능함, 숫자 Swap만 하면 끝
*/
int Baekjoon_10813()
{
	int arrSize, condition;
	int i, num1, num2, temp;

	scanf("%d %d", &arrSize, &condition);
	arrSize += 1;

	int *arr = (int*)malloc(sizeof(int) * arrSize);

	for (i = 0; i < arrSize; i++)
	{
		arr[i] = i;
	}
	for (i = 0; i < condition; i++)
	{
		scanf("%d %d", &num1, &num2);
		temp = arr[num1];
		arr[num1] = arr[num2];
		arr[num2] = temp;
	}
	for (i = 1; i < arrSize; i++)
	{
		printf("%d", arr[i]);
		if (i < arrSize - 1)
			printf(" ");
	}

	free(arr);
	return 0;
}