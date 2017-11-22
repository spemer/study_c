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

	printf("여행은 몇박인가요?: ");
	scanf_s("%d", &days);

	printf("항공권 가격: ");
	scanf_s("%d", &airPrice);

	printf("호텔 1박 가격: ");
	scanf_s("%d", &dayPrice);
	TotalDayPrice = dayPrice * days;

	printf("하루에 필요한 용돈: ");
	scanf_s("%d", &dayMoney);
	TotalDayMoney = dayMoney * days;

	sum = airPrice + TotalDayPrice + TotalDayMoney;

	printf("\n==========\n");
	printf("항공권: %d원\n", airPrice);
	printf("호텔 가격: 1박 %d원 * %d일 => %d원\n", dayPrice, days, TotalDayPrice);
	printf("필요 용돈: 1일 %d원 * %d일 => %d원\n", dayMoney, days, TotalDayMoney);
	printf("총 여행 비용: %d원", sum);
	printf("\n==========\n");


	getch();

	return 0;
}
