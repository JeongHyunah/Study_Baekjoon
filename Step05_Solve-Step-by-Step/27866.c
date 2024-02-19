#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	구분: 문자열
	문제: 27866번(문자와 문자열)
	날짜: 2024-02-20

	난이도: 하
	Q. 왜 문자열을 입력할 때 '&'를 빼도 되는 걸까?
	A. 배열의 이름 자체가 배열의 첫 번째 요소를 가르키는 포인터이기 때문!
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