#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	����: 1�����迭
	����: 2743��(�ܾ���� ���)
	��¥: 2024-02-21

	���̵�: ��
	������ Ư, ���Ǳ��� �����ؾ� �Ǵ� ���� �ؾ���.
*/
int Baekjoon_2743()
{
	char str[100];

	scanf("%s", str);

	int i = 0;

	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a') && !(str[i] <= 'z'))
			return 1;
		else if (!(str[i] >= 'A') && !(str[i] <= 'Z'))
			return 1;
		i++;
	}
	
	printf("%d\n", i);
	return 0;
}