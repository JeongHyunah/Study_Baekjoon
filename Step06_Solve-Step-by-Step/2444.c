#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_INPUT_LENGTH 110

/*
	����: ��ȭ 1
	����: 2444��(�� ���)
	��¥: 2024-02-26 ~ 2024-02-27

	���̵�: �� ~ ��
	��(X) *(O) ���� ������ �߸��� �ٶ��� ��� �ʰ��� �߰� ���� �������� ������ ã�Ҵ�.
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
