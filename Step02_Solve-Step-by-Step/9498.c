#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//9498번 시험 성적
int main() {
	int score;
	char grade;
	scanf("%d", &score);

	grade = (score >= 90) ? 'A' : (score >= 80) ? 'B' :
		(score >= 70) ? 'C' : (score >= 60) ? 'D' : 'F';
	printf("%c", grade);
	return 0;
}