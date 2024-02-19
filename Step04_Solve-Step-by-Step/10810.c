#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	구분: 1차원배열	
	문제: 10810번(공 넣기)
	날짜: 2024-02-19
*/
int main()
{
	int arrSize, condition;
	int num1, num2, num3;
	char *result;

	scanf("%d %d", &arrSize, &condition);
	arrSize += 1;

	int *arr = (int*)malloc(sizeof(int) * arrSize);
	memset(arr, 0, sizeof(int) * arrSize);

	for (int i = 0; i < condition; i++)
	{
		scanf("%d %d %d", &num1, &num2, &num3);
		if (num1 <= num2)
		{
			for (int j = num1; j <= num2; j++)
			{
				arr[j] = num3;
			}
		}
	}
	for (int i = 1; i < arrSize; i++)
	{
		printf("%d", arr[i]);
		if (i < arrSize-1)
			printf(" ");
	}

	free(arr);
	return 0;
}