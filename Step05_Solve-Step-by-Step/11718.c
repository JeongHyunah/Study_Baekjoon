#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAX_INPUT_LENGTH 110

/*
	구분: 1차원배열
	문제: 11718번(그대로 출력하기)
	날짜: 2024-02-22 ~ 2024-02-23

	난이도: 하 ~ 중
	수정 과정(7번 도전하고 성공)
		한 번에 입력, 한 번에 출력 -> 한 줄 입력, 한 줄 출력
		입력의 끝의 조건 \n\n -> EOF OR \n
	
	처음으로 질문글을 올려서 초보 같은 실수를 발견했다. 모든 문자열의 끝에 널문자가 들어가기에 언제나 널널하게 배열의 사이즈를 정하자
*/
int Baekjoon_11718() {
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
