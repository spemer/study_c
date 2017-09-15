#include<stdio.h>

int main(void)
{
	int airPrice;
	int dayPrice;
	int dayMoneyNeed;
	int days;
	int sum;

	printf("여행은 몇박인가요?: ");
	scanf_s("%d", &days);

	printf("항공권 가격: ");
	scanf_s("%d", &airPrice);

	printf("호텔 1박 가격: ");
	scanf_s("%d", &dayPrice);
	dayPrice = dayPrice * days;

	printf("하루에 필요한 용돈: ");
	scanf_s("%d", &dayMoneyNeed);
	dayMoneyNeed = dayMoneyNeed * days;

	sum = airPrice + dayPrice + dayMoneyNeed;

	printf("\n==========\n");
	printf("총 여행 비용: %d", sum);
	printf("\n==========\n");


	getch();

	return 0;
}
