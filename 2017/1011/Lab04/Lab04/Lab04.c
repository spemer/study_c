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
		printf("\n�ٽ� �Ͻðڽ��ϱ�?\nYes: 1, No: 0\n");
		scanf("%d", &a);
	} while (a == 1);
	return 0;
}
void Year(void)
{
	int year;
	printf("������ �Է��ϼ���: ");
	scanf("%d", &year);
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		printf("%d���� �����Դϴ�\n", year);
	}
	else
	{
		printf("%d���� ������ �ƴմϴ�\n", year);
	}
}

