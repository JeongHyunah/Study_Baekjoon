#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//1152번 단어의 개수
char arr[1000005];

int main() {
    int count = 0;
    scanf("%[^\n]s", arr);
    if (arr[0] != ' ')
        count++;
    for (int i = 1; i < strlen(arr); i++) {
        if (arr[i - 1] == ' ' && arr[i] != ' ')
            count++;
    }
    printf("%d", count);
    return 0;
}