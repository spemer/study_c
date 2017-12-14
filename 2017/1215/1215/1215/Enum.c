/*ENUM.c*/
#include<stdio.h>
#pragma warning(disable:4996)

typedef enum days { MON, TUE, WED, THU, FRI, SAT, SUN } DAYS;

int main(void)
{
	DAYS d;
	char *days[] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

	scanf("%d", &d);

	switch (d)
	{
	case 0:
		printf("%d번째 요일의 이름은 %s입니다.\n", d, days[d]);
		break;
	case 1:
		printf("%d번째 요일의 이름은 %s입니다.\n", d, days[d]);
		break;
	case 2:
		printf("%d번째 요일의 이름은 %s입니다.\n", d, days[d]);
		break;
	case 3:
		printf("%d번째 요일의 이름은 %s입니다.\n", d, days[d]);
		break;
	case 4:
		printf("%d번째 요일의 이름은 %s입니다.\n", d, days[d]);
		break;
	case 5:
		printf("%d번째 요일의 이름은 %s입니다.\n", d, days[d]);
		break;
	case 6:
		printf("%d번째 요일의 이름은 %s입니다.\n", d, days[d]);
		break;
	}

	getch();
	return 0;
}