#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	����: 1�����迭
	����: 10811��(�ٱ��� ������)
	��¥: 2024-02-20

	���̵�: ��
	�̻��� �κп��� ���ܰ� ���淡 �ʸ�а� ���캸�� �̻��� �ڵ� �� ���� �־���. �ٸ� �ڵ带 ���� �ٿ��ֱ��� ������ �ؼ� ���� ������.
	���� ������ ���� �ʴµ� ������ ����� ���� ���� �� ���� �����ϴ� �͵� �߿������� �߰��� �̻��� �κ��� ������ ���캸��.
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