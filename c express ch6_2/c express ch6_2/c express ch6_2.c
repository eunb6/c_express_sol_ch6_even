#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a;
	int b;

	printf("���� 2���� �Է��ϼ���: ");
	scanf("%d %d", &a, &b);

	if ((a % b) == 0) {
		printf("����Դϴ�");
	}
	else
		printf("����� �ƴմϴ�.");
}