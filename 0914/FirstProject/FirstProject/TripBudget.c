#include<stdio.h>

int main(void)
{
	int airPrice;
	int dayPrice;
	int dayMoneyNeed;
	int days;
	int sum;

	printf("������ ����ΰ���?: ");
	scanf_s("%d", &days);

	printf("�װ��� ����: ");
	scanf_s("%d", &airPrice);

	printf("ȣ�� 1�� ����: ");
	scanf_s("%d", &dayPrice);
	dayPrice = dayPrice * days;

	printf("�Ϸ翡 �ʿ��� �뵷: ");
	scanf_s("%d", &dayMoneyNeed);
	dayMoneyNeed = dayMoneyNeed * days;

	sum = airPrice + dayPrice + dayMoneyNeed;

	printf("\n==========\n");
	printf("�� ���� ���: %d", sum);
	printf("\n==========\n");


	getch();

	return 0;
}
