#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int time;
	int age;
	int charge;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�: ");
	scanf("%d %d", &time, &age);

	if (time >= 17) {
		charge = 10000;
		printf("����� %d�Դϴ�.", charge);
	}
	else if (time < 17) {
		if (3 < age < 12 && age >65) {
			charge = 25000;
			printf("����� %d�Դϴ�.", charge);
		}
		else
			printf("����� 34000�Դϴ�.");
	}
		
}