#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    int a;
    int b = 0;

    printf("�����Ͻÿ�(1: ����, 2: ����, 3: ��): ");
    scanf("%d", &a);

    b = (rand() % 3 + 1);

    if (a == b) {
        printf("�����ϴ�: ");
    }
    else if (a == 1) {
        if (b == 2) {
            printf("��ǻ�Ͱ� �̰���ϴ�.");
        }
        else
            printf("����ڰ� �̰���ϴ�.");
    }
    else if (a == 2) {
        if (b == 3) {
            printf("��ǻ�Ͱ� �̰���ϴ�.");
        }
        else
            printf("����ڰ� �̰���ϴ�.");
    }
    else if (a == 3){
        if (b == 1) {
            printf("��ǻ�Ͱ� �̰���ϴ�.");
        }
        else
            printf("����ڰ� �̰���ϴ�.");
    }
        
    
}