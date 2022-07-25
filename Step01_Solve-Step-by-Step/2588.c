#include <stdio.h>

//2588¹ø °ö¼À
int main() {
    int num1, num2;
    int a, b, c;
    scanf("%d %d", &num1, &num2);
    a = (num2 / 100) % 100;
    b = (num2 / 10) % 10;
    c = num2 % 10;

    printf("%d\n", num1 * c);
    printf("%d\n", num1 * b);
    printf("%d\n", num1 * a);
    printf("%d", num1 * num2);
}