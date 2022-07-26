#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//5622번 다이얼
int dial(int n) {
	switch (n)
	{
	case 'A': case 'B': case 'C':
		return 3;
	case 'D': case 'E': case 'F':
		return 4;
	case 'G': case 'H': case 'I':
		return 5;
	case 'J': case 'K': case 'L':
		return 6;
	case 'M': case 'N': case 'O':
		return 7;
	case 'P': case 'Q': case 'R': case 'S':
		return 8;
	case 'T': case 'U': case 'V':
		return 9;
	case 'W': case 'X': case 'Y': case 'Z':
		return 10;
	default:
		break;
	}
}

int main() {
	char arr[15];
	int count = 0;
	scanf("%s", arr);

	for (int i = 65; i <= 90; i++) {
		for (int j = 0; j < strlen(arr); j++) {
			if (arr[j] == i)
				count += dial(i);
		}
	}
	printf("%d", count);
	return 0;
}