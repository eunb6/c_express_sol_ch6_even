#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int month;

	printf("월 번호를 입력 하시오: ");
	scanf("%d", &month);

	switch (month) {
	case 1:
		printf("JAN");
		break;
	case 2:
		printf("FEB");
		break;
	case 3:
		printf("MARCH");
		break;
	case 4:
		printf("APRIL");
		break;
	case 5:
		printf("MAY");
		break;
	case 6:
		printf("JUN");
		break;
	case 7:
		printf("JULY");
		break;
	case 8:
		printf("AGUST");
		break;
	case 9:
		printf("SEP");
		break;
	case 10:
		printf("OCT");
		break;
	case 11:
		printf("NOV");
		break;
	case 12:
		printf("DEC");
		break;

	}
}