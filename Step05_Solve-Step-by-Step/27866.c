#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	����: ���ڿ�
	����: 27866��(���ڿ� ���ڿ�)
	��¥: 2024-02-20

	���̵�: ��
	Q. �� ���ڿ��� �Է��� �� '&'�� ���� �Ǵ� �ɱ�?
	A. �迭�� �̸� ��ü�� �迭�� ù ��° ��Ҹ� ����Ű�� �������̱� ����!
*/
int main()
{
	char str[1000];
	int index;

	scanf("%s", str);
	scanf("%d", &index);

	index--;
	printf("%c\n", str[index]);

	return 0;
}