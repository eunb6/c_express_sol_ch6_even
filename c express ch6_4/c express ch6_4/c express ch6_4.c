#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int a;
    int b = 0;

    printf("선택하시오(1: 가위, 2: 바위, 3: 보): ");
    scanf("%d", &a);

    b = (rand() % 3 + 1);

    if (a == b) {
        printf("비겼습니다: ");
    }
    else if (a == 1) {
        if (b == 2) {
            printf("컴퓨터가 이겼습니다.");
        }
        else
            printf("사용자가 이겼습니다.");
    }
    else if (a == 2) {
        if (b == 3) {
            printf("컴퓨터가 이겼습니다.");
        }
        else
            printf("사용자가 이겼습니다.");
    }
    else if (a == 3){
        if (b == 1) {
            printf("컴퓨터가 이겼습니다.");
        }
        else
            printf("사용자가 이겼습니다.");
    }
        
    
}