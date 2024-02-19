#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	구분: 1차원배열
	문제: 10811번(바구니 뒤집기)
	날짜: 2024-02-20

	난이도: 하
	이상한 부분에서 예외가 나길래 십몇분간 살펴보니 이상한 코드 한 줄이 있었다. 다른 코드를 복사 붙여넣기해 수정만 해서 생긴 문제다.
	문법 오류는 나지 않는데 실행이 제대로 되지 않을 때 논리를 검증하는 것도 중요하지만 중간에 이상한 부분이 없는지 살펴보자.
*/
int Baekjoon_10811()
{
	int arrSize, condition;
	int i, num1, num2, temp;

	scanf("%d %d", &arrSize, &condition);

	int *arr = (int*)malloc(sizeof(int) * arrSize);

	for (i = 0; i < arrSize; i++)
	{
		arr[i] = i;
	}

	for (i = 0; i < condition; i++)
	{
		scanf("%d %d", &num1, &num2);
		num1--;
		num2--;

		for (int k = num1; k < num2; k++)
		{
			temp = arr[k];
			arr[k] = arr[num2];
			arr[num2] = temp;
			
			num2--;
		}
	}

	for (i = 0; i < arrSize; i++)
	{
		printf("%d", arr[i] + 1);
		if (i < arrSize)
			printf(" ");
	}

	free(arr);
	return 0;
}