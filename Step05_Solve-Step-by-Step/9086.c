#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
	구분: 1차원배열
	문제: 9086번(단어길이 재기)
	날짜: 2024-02-21

	난이도: 하
	반복문 안에서 입력받고 출력은 한번에 하기 위해 번거롭게 작업했다.
	분명 이것보다 쉬운 방법이 있을터, 잊어버린 C언어를 좀 더 공부해야겠다.
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