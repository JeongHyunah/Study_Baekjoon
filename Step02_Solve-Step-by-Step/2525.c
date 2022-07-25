#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//2525¹ø ¿Àºì ½Ã°è
int main() {
	int H, M, mi;
	scanf("%d %d", &H, &M);
	scanf("%d", &mi);

	M += mi;
	while (M >= 60) {
		M -= 60;
		H += 1;
		if (H >= 24) H = 0;
	}
	printf("%d %d", H, M);
	return 0;
}