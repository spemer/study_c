/*Lab04.c*/
#include <stdio.h>
#pragma warning (disable:4996)
void Year(void);
int main(void)
{
	int a;
	do
	{
		Year();
		printf("\n다시 하시겠습니까?\nYes: 1, No: 0\n");
		scanf("%d", &a);
	} while (a == 1);
	return 0;
}
void Year(void)
{
	int year;
	printf("연도를 입력하세요: ");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d년은 윤년입니다\n", year);
	}
	else
	{
		printf("%d년은 윤년이 아닙니다\n", year);
	}
}

