#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	����: 1�����迭
	����: 9086��(�ܾ���� ���)
	��¥: 2024-02-21

	���̵�: ��
	�ݺ��� �ȿ��� �Է¹ް� ����� �ѹ��� �ϱ� ���� ���ŷӰ� �۾��ߴ�.
	�и� �̰ͺ��� ���� ����� ������, �ؾ���� C�� �� �� �����ؾ߰ڴ�.
*/
int Baekjoon_9086()
{
	char strIn[1000];
	char strOut[20] = { '\0' };
	int num, indexIn, indexOut, count;

	scanf("%d", &num);

	for (int i = 0; i < num; i++)
	{
		scanf("%s", strIn);
		indexIn = 0;
		while (strIn[indexIn] != '\0')
		{
			indexIn++;
		}
		indexOut = 0;
		while (strOut[indexOut] != '\0')
		{
			indexOut++;
		}
		strOut[indexOut] = strIn[0];
		strOut[indexOut + 1] = strIn[indexIn - 1];
	}
	indexOut = 0, count = 0;
	while (strOut[indexOut] != '\0')
	{
		printf("%c%", strOut[indexOut]);
		count++;
		if (count == 2)
		{
			count = 0;
			printf("\n");
		}
		indexOut++;
	}

	return 0;
}