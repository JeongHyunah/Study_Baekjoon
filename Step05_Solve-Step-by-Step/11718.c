#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_INPUT_LENGTH 110

/*
	����: 1�����迭
	����: 11718��(�״�� ����ϱ�)
	��¥: 2024-02-22 ~ 2024-02-23

	���̵�: �� ~ ��
	���� ����(7�� �����ϰ� ����)
		�� ���� �Է�, �� ���� ��� -> �� �� �Է�, �� �� ���
		�Է��� ���� ���� \n\n -> EOF OR \n
	
	ó������ �������� �÷��� �ʺ� ���� �Ǽ��� �߰��ߴ�. ��� ���ڿ��� ���� �ι��ڰ� ���⿡ ������ �γ��ϰ� �迭�� ����� ������
*/
int main() {
	char input[MAX_INPUT_LENGTH];
	int newline_count = 0;
	int ch, count = 0;

	do {
		ch = getchar();

		if (ch == EOF) {
			break;
		}
		else if(ch == 10) {
			break;
		}
		else {
			ungetc(ch, stdin);

			fgets(input, sizeof(input), stdin);
			input[strcspn(input, "\n")] = '\0';

			printf("%s\n", input);
		}
	} while (1);

	return 0;
}
