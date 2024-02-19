#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

//1110번 더하기 사이클
int main() {
	int num, _num, _exit = 0, rof = 0;
	int a, b, _a, _b;
	scanf("%d", &num);

	_num = num;
	while (true) {
		if (_num < 10) {
			a = 0;
			b = _num % 10;
		}
		else {
			a = (_num / 10) % 10;
			b = _num % 10;
		}
		_num = a + b;
		if (_num >= 10) {
			_a = (_num / 10) % 10;
			_b = _num % 10;

			_num = (b * 10) + _b;
		}
		else {
			_num = (b * 10) + (a + b);
		}
		rof += 1;
		if (_num == num) {
			printf("%d", rof);
			return 0;
		}
	}
	return 0;
}