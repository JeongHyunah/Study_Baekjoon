#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	����: 1�����迭
	����: 5597��(���� �� ���� ��..?)
	��¥: 2024-02-19

	���̵�: ��
	�� �����ϰ� �� �� �ִ� ����� ���� ��, �� �� �����غ���
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