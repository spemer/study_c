#include<stdio.h>

int main(void)
{
	int airPrice;
	int dayPrice;
	int TotalDayPrice;
	int dayMoney;
	int TotalDayMoney;
	int days;
	int sum;

	printf("������ ����ΰ���?: ");
	scanf_s("%d", &days);

	printf("�װ��� ����: ");
	scanf_s("%d", &airPrice);

	printf("ȣ�� 1�� ����: ");
	scanf_s("%d", &dayPrice);
	TotalDayPrice = dayPrice * days;

	printf("�Ϸ翡 �ʿ��� �뵷: ");
	scanf_s("%d", &dayMoney);
	TotalDayMoney = dayMoney * days;

	sum = airPrice + TotalDayPrice + TotalDayMoney;

	printf("\n==========\n");
	printf("�װ���: %d��\n", airPrice);
	printf("ȣ�� ����: 1�� %d�� * %d�� => %d��\n", dayPrice, days, TotalDayPrice);
	printf("�ʿ� �뵷: 1�� %d�� * %d�� => %d��\n", dayMoney, days, TotalDayMoney);
	printf("�� ���� ���: %d��", sum);
	printf("\n==========\n");


	getch();

	return 0;
}
