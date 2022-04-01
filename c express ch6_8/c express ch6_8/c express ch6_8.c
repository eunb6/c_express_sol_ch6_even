#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int time;
	int age;
	int charge;

	printf("현재 시간과 나이를 입력하시오: ");
	scanf("%d %d", &time, &age);

	if (time >= 17) {
		charge = 10000;
		printf("요금은 %d입니다.", charge);
	}
	else if (time < 17) {
		if (3 < age < 12 && age >65) {
			charge = 25000;
			printf("요금은 %d입니다.", charge);
		}
		else
			printf("요금은 34000입니다.");
	}
		
}