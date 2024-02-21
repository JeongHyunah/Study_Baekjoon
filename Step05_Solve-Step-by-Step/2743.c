#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	구분: 1차원배열
	문제: 2743번(단어길이 재기)
	날짜: 2024-02-21

	난이도: 하
	백준의 특, 조건까지 구현해야 되는 것을 잊었다.
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