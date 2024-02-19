#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	구분: 1차원배열
	문제: 5597번(과제 안 내신 분..?)
	날짜: 2024-02-19

	난이도: 하
	더 간략하게 할 수 있는 방법이 있을 것, 좀 더 생각해보자
*/
int Baekjoon_5597()
{
	int arr[31] = { 0, };
	int i, temp;

	for (i = 0; i < 28; i++)
	{
		scanf("%d", &temp);
		arr[temp] = temp;
	}
	for (i = 1; i < 31; i++)
	{
		if (arr[i] == 0)
		{
			printf("%d\n", i);
		}
	}
}