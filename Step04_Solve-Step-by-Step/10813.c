#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	����: 1�����迭
	����: 10813��(�� �ٲٱ�)
	��¥: 2024-02-19
	
	���̵�: ��
	10810�� ������ Ǯ���ٸ� 5�оȿ� �ذ��� ������, ���� Swap�� �ϸ� ��
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