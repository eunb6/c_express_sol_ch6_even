#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int x;
    int y;

    printf("��ǥ(X,Y): ");
    scanf("%d %d", &x, &y);

    if (x > 0 && y > 0) {
        printf("1��и�");
    }
    else if (x > 0 && y < 0) {
        printf("4��и�");
    }
    else if (x < 0 && y < 0) {
        printf("3��и�");
    }
    else if (x < 0 && y > 0) {
        printf("2��и�");
    }
}