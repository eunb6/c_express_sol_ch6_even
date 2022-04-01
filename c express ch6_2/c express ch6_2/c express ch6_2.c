#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a;
	int b;

	printf("정수 2개를 입력하세요: ");
	scanf("%d %d", &a, &b);

	if ((a % b) == 0) {
		printf("약수입니다");
	}
	else
		printf("약수가 아닙니다.");
}